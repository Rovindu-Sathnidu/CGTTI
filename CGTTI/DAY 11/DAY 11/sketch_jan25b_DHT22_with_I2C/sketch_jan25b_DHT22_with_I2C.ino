#include "DHT.h"
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

#define DHTPIN 2
#define potPin A0
#define buzzerPin 11

int x;
int y;

DHT dht(DHTPIN, 22);

LiquidCrystal_I2C lcd(0x27, 16, 2);

byte S0 [8] {
  B00011,
  B00011,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

byte S1 [8] {
  B01110,
  B10001,
  B10000,
  B10000,
  B10000,
  B10000,
  B10001,
  B01110   
};


void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.init();
  lcd.backlight();
  pinMode(buzzerPin, OUTPUT);
  dht.begin();
  lcd.createChar (1, S0);
  lcd.createChar (2, S1);
}

void loop() {

  x=analogRead(potPin);
  y=map(x,1024,0,25,35);

  delay(2000);

  int h = dht.readHumidity();
  int t = dht.readTemperature();

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.println(F("°C "));
  
  lcd.setCursor(0,0);
  lcd.print(F("Humidity: "));
  lcd.print(h);
  lcd.print(F("%"));
  lcd.setCursor(0,1);
  lcd.print(F("Temprature:"));
  lcd.print(t);
  custom_chr();

  if(y>t) {
    buzzer_sound();
  }
}


void buzzer_sound() {
  tone (buzzerPin, 1000);
  delay(500);

  tone (buzzerPin, 1500);
  delay(500);

  noTone (buzzerPin);
  delay(500);
}

void custom_chr (){
  lcd.write(1);
  lcd.write(2);
}
