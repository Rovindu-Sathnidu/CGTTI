#include <Wire.h> 
#include <Keypad.h>
#include <LiquidCrystal_I2C.h>

#define Password_Length 8

int buzzerpin = 11;
int SignalPin = 12;

char Data [Password_Length];
char Master [Password_Length] = "1234567";
byte data_count = 0, master_count = 0;
bool pass_is_good;
char customKey;

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns

char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {2, 3, 4, 5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6, 7, 8, 9}; //connect to the column pinouts of the keypad

Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  lcd.init();
  lcd.init();
  lcd.backlight();
  pinMode(SignalPin, OUTPUT);
  pinMode(buzzerpin,OUTPUT);
}
  
void loop() {
  lcd.setCursor(0,0);
  lcd.print("Enter Password: ");
  customKey = customKeypad.getKey();
  
  if (customKey){
    Data [data_count] = customKey;
    lcd.setCursor(data_count,1);
    lcd.print (Data [data_count]);
    data_count++;
  }

  if (data_count == Password_Length-1) {
    lcd.clear();
      if(!strcmp(Data,Master)) {
        lcd.print("Correct");
        digitalWrite(SignalPin, HIGH);
        delay(5000);
        digitalWrite(SignalPin, LOW);
        }
      else {
        lcd.print ("Incorrect");
        buzzer_sound();
        delay (1000);
      }

  lcd.clear ();
  clearData();
  }
}

void clearData () {
  while (data_count != 0) {
  Data [data_count--] = 0;
  }
  return;
}

void buzzer_sound() {
  tone (buzzerpin, 1000);
  delay(500);

  tone (buzzerpin, 1500);
  delay(500);

  noTone (buzzerpin);
  delay(500);
}