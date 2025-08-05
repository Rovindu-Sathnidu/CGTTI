#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() { // run over and over
  mySerial.println("Hello world from Slave");
  delay(1000);
  if (mySerial.available()) {
    String recivedData = mySerial.readStringUntil('\n');
    Serial.println ("Recived: " + recivedData);
  }
}
