#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd2(0x27, 20, 4);
#include <MyRealTimeClock.h>
MyRealTimeClock RTC1(6, 7, 8);
void setup() {
  lcd2.init();
  lcd2.init();
  lcd2.backlight();
  RTC1.setDS1302Time(00, 52, 14, 7, 28, 01, 2023);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  RTC1.updateTime();
  Serial.print("Date: ");
  Serial.print(RTC1.dayofmonth);
  Serial.print("/");
  Serial.print(RTC1.month);
  Serial.print("/");
  Serial.print(RTC1.year);

  Serial.print("  Time: ");
  Serial.print(RTC1.hours);
  Serial.print(":");
  Serial.print(RTC1.minutes);
  Serial.print(":");
  Serial.println(RTC1.seconds);
  delay(1000);
  lcd2.setCursor(0, 0);
  lcd2.print("Date: ");
  lcd2.print(RTC1.dayofmonth);
  lcd2.print("/");
  lcd2.print(RTC1.month);
  lcd2.print("/");
  lcd2.print(RTC1.year);
  lcd2.setCursor(0, 1);
  lcd2.print("Time: ");
  lcd2.print(RTC1.hours);
  lcd2.print(":");
  lcd2.print(RTC1.minutes);
  lcd2.print(":");
  lcd2.print(RTC1.seconds);

}