#include <EEPROM.h>

int addr = 0;
int val = 100;

void setup() {
  Serial.begin(9600);

  EEPROM.write(addr, val);
  Serial.print("Wrote value");
  Serial.print(value);

  int readvalue = EEPROM.read(addr);
  Serial.print("Read value");
  Serial.print(readvalue);

}

void loop() {

}
