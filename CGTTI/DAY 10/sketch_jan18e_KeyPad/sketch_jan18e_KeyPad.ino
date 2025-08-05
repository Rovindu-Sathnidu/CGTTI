#include <Wire.h> 
#include <Keypad.h>
#include <LiquidCrystal_I2C.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {2, 3, 4, 5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6, 7, 8, 9}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 


LiquidCrystal_I2C lcd(0x27, 16, 2);
int X;
int Y;

void setup(){
  Serial.begin(9600);
  lcd.init();
  lcd.init();
  lcd.backlight();
}
  
void loop(){
  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
  }

  while (customKey) {
    lcd.setCursor(0,2);
    lcd.write(customKey);
    customKey++;
  }

  lcd.setCursor(0,2);
  lcd.write(customKey);
  lcd.print(".       ");
}
