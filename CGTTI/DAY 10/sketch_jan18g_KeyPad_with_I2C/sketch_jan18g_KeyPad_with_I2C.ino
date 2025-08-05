#include <Wire.h> 
#include <Keypad.h>
#include <LiquidCrystal_I2C.h>

#define Password_Length 8

int SignalPin=12;

char Data[Password_Length];
char Master [Password_Length] = "Password";
byte data_count=0, master_count=0;
bool Pass_is_good;
char customKey;

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {5, 4, 3, 2}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 


LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  lcd.init();
  lcd.init();
  lcd.backlight();
  pinMode(SignalPin,OUTPUT);
}
  
void loop(){
  lcd.setCursor(0,0);
  lcd.print("Enter Password");
  customKey = customKeypad.getKey();
  
  if (customKey){
    Data[data_count]=customKey;
    lcd.setCursor(data_count,1);
    lcd.print(Data[data_count]);
    data_count++;
  }

  if(data_count==Password_Length-1){
    lcd.clear();
    if(!strcmp(Data,Master)){
      lcd.print("Correct");
      digitalWrite(SignalPin,HIGH);
      delay(5000);
      digitalWrite(SignalPin,LOW);
    }
    else{
      lcd.print("Incorrect");
      delay(1000);
    }
    lcd.clear();
    ClearData();
  }
}

void ClearData(){
  while(data_count!=0){
    Data[data_count--]=0;
  }
  return;
}
