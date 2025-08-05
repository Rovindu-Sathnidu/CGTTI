#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int trig=4;
int echo=5;
long time=0;
long cm=0;
long inch=0;

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
lcd.init();
lcd.init();
lcd.backlight();
Serial.begin(9600);
}

void loop() {

digitalWrite(trig,0);
delayMicroseconds(2);
digitalWrite(trig,1);
delayMicroseconds(10);
digitalWrite(trig,0);
time=pulseIn(echo,1);
cm=time/29/2;
inch=time/74/2;
Serial.print(inch); 
Serial.print("inch\t");
Serial.print(cm);
Serial.println("cm");
lcd.setCursor(2,0);
lcd.print(inch);
lcd.print("inch");
lcd.print("  ");
lcd.setCursor(10,0);
lcd.print(cm);
lcd.print("cm");
lcd.print("  ");
delay(100);
}
