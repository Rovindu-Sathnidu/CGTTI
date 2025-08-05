#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16,2);

#define CLK 5
#define DT 6

int counter=0;
int lastStateCLK;
int currentStateCLK;
String currentDir = "";

void setup() {
  Serial.begin(9600);
  pinMode(CLK,INPUT_PULLUP);
  pinMode(DT,INPUT_PULLUP);
  lastStateCLK = digitalRead(CLK);
  lcd.init();
  lcd.init();
  lcd.backlight();

}

void loop() {
  currentStateCLK = digitalRead(CLK);
  if(currentStateCLK != lastStateCLK && currentStateCLK == 1) {
    if (digitalRead(DT) != currentStateCLK) {
      counter --;
      currentDir = "CCW ";
    } else {
      counter ++;
      currentDir ="CW ";
    }

    Serial.print("direction: ");
    Serial.print(currentDir);
    Serial.print(".  Counter: ");
    Serial.println(counter);
  }
  lastStateCLK = currentStateCLK;
  delay(1);

  lcd.setCursor(0,0);
  lcd.print("Count: ");
  lcd.print(counter);
  lcd.setCursor(0,1);
  lcd.print("Direction: ");
  lcd.print(currentDir);

}
