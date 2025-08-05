#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
int value;
int a;
int b;
int c;


byte S0 [8]={
  B01110,
  B11011,
  B10001,
  B10001,
  B10001,
  B10001,
  B11111,
  B11111
};


byte S1 [8]={
  B01110,
  B11011,
  B10001,
  B10001,
  B10001,
  B10001,
  B11111,
  B11111
};

byte S2 [8]={
  B01110,
  B11011,
  B10001,
  B10001,
  B10001,
  B11111,
  B11111,
  B11111
};

byte S3 [8]={
  B01110,
  B11011,
  B10001,
  B10001,
  B11111,
  B11111,
  B11111,
  B11111
};

byte S4 [8]={
  B01110,
  B11011,
  B10001,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
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
  lcd.setCursor(0,0);
  lcd.write(c);

  b=analogRead(A0);
  a=map(b,966,2,100,0);
  c=map(a,100,0,1,6);
  
  lcd.setCursor(3,0);
  lcd.print(a);
  lcd.print("%");
  lcd.print(" ");
 
  lcd.print("Charging");
  lcd.print(" ");
  
}
