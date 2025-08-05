#include "DHT.h"
#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>

#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_PCF8574 lcd(0x27);

byte S0[8] = {
  B00111,
  B00101,
  B00111,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

byte S1[8] = {
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
  Wire.begin();
  lcd.begin(16, 2);
  lcd.setBacklight(255);
  dht.begin();
  lcd.createChar(1, S0);
  lcd.createChar(2, S1);
  lcd.clear();
}

void loop() {
  delay(2000);

  int h = dht.readHumidity();
  int t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    lcd.setCursor(0, 0);
    lcd.print(F("Sensor Error"));
    return;
  }

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.println(F("°C"));

  lcd.setCursor(0, 0);
  lcd.print(F("Humidity: "));
  lcd.print(h);
  lcd.print(F("%"));
  lcd.setCursor(0, 1);
  lcd.print(F("Temperature:"));
  lcd.print(t);
  custom_chr();
}

void custom_chr (){
  lcd.write(1);
  lcd.write(2);
}
