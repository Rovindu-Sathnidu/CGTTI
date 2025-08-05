#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
int value;
int a;
int b;
int c;
int d;
int e;
int i=0;


byte S0 [8]={
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};


byte S1 [8]={
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000
};

byte S2 [8]={
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000
};

byte S3 [8]={
   B11100,
   B11100,
   B11100,
   B11100,
   B11100,
   B11100,
   B11100,
   B11100
};

byte S4 [8]={
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110
};

byte S5 [8]={
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};


LiquidCrystal_I2C lcd(0x27,20,4);  

void setup()
{
  lcd.init();                     
  lcd.init();
  lcd.backlight();
  lcd.createChar(0,S0);
  lcd.createChar(1,S1);
  lcd.createChar(2,S2);
  lcd.createChar(3,S3);
  lcd.createChar(4,S4);
  lcd.createChar(5,S5);
  Serial.begin(9600);
  
}


void loop()
{

  b=analogRead(A0);
  a=map(b,1024,0,100,0);
  c=map(a,100,0,100,0);
  d=c/5;
  e=c-(d*5);

  while (i<d) {
    lcd.setCursor(i,0);
    lcd.write(5);
    i++;}

    lcd.setCursor(i,0);
    lcd.write(e);
    lcd.print("       ");

    lcd.setCursor(3,3);
    lcd.write(a);
    lcd.print("%");
    lcd.print("       ");
    lcd.print("Charging");
    lcd.print("       ");
 }
