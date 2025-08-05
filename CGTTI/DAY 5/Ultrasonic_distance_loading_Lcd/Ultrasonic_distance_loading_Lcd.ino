#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int trig=4;
int echo=5;
long time=0;
long cm=0;
long inch=0;

int value;
int a;
int b;
int c;
int du;

byte s1[8]={
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
  };

  byte s2[8]={
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000
  };

  byte s3[8]={
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000
  };

  byte s4[8]={
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
  B11100
  };

  byte s5[8]={
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110 
  };

  byte s6[8]={
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
  };
 
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);
 lcd.init();
 lcd.init();
 lcd.backlight();
 lcd.createChar(0,s1);
 lcd.createChar(1,s2);
 lcd.createChar(2,s3);
 lcd.createChar(3,s4);
 lcd.createChar(4,s5);
 lcd.createChar(5,s6);
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

lcd.setCursor(2,1);
lcd.print(inch);
lcd.print("inch");
lcd.print("  ");
lcd.setCursor(10,1);
lcd.print(cm);
lcd.print("cm");
lcd.print("  ");

  b = map(cm,100,0,80,0);
  int c= (b/5);
  int d=b-(c*5);

  int i =0;
  while (i<c){
     lcd.setCursor(i,0);
     lcd.write(5);
     i =i+1;
  }
  lcd.setCursor(i,0);
  lcd.write(d);
  lcd.print("                ");
  delay(100);
}
