#include <Wire.h>

// QMC5883L Register Addresses
#define QMC5883L_ADDR 0x0D
#define REG_XOUT_LSB 0x00
#define REG_CONTROL1 0x09
#define REG_CONTROL2 0x0A
#define REG_PERIOD 0x0B

void setup() {
  Wire.begin();
  Serial.begin(9600);
  
  // Initialize QMC5883L
  // Reset the sensor
  Wire.beginTransmission(QMC5883L_ADDR);
  Wire.write(REG_CONTROL2);
  Wire.write(0x80);  // Soft Reset
  Wire.endTransmission();
  delay(100);
  
  // Configure Control Register 1
  Wire.beginTransmission(QMC5883L_ADDR);
  Wire.write(REG_CONTROL1);
  Wire.write(0x1D);  // Mode: Continuous, ODR: 200Hz, RNG: 8G, OSR: 512
  Wire.endTransmission();
  
  // Set Period Register
  Wire.beginTransmission(QMC5883L_ADDR);
  Wire.write(REG_PERIOD);
  Wire.write(0x01);  // Recommended value
  Wire.endTransmission();
  
  Serial.println("QMC5883L Test");
  Serial.println("X\tY\tZ");
}

void loop() {
  int16_t x, y, z;
  uint8_t status;
  
  // Read 6 bytes of data
  Wire.beginTransmission(QMC5883L_ADDR);
  Wire.write(REG_XOUT_LSB);
  Wire.endTransmission(false);
  Wire.requestFrom(QMC5883L_ADDR, 6);
  
  if(Wire.available() == 6) {
    x = Wire.read() | Wire.read() << 8;
    y = Wire.read() | Wire.read() << 8;
    z = Wire.read() | Wire.read() << 8;
    
    // Print raw values
    Serial.print(x);
    Serial.print("\t");
    Serial.print(y);
    Serial.print("\t");
    Serial.println(z);
  }
  
  delay(100);  // Delay between readings
}