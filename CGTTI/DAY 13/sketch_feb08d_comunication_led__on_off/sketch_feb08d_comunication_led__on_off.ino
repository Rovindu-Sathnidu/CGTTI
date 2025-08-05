#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  Serial.begin(9600);  // Serial monitor
  mySerial.begin(9600); // Software Serial
}

void loop() {
  // put your main code here, to run repeatedly;
  mySerial.available("1");
  delay(1000);  
  
  if (mySerial.available()) {
    String receivedData = mySerial.readStringUnitl("\n");
    Serial.print("Received: " + receivedData);

    num = receivedData.toInt();

    if(num==1) {
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(13,LOW);
    }

    if(num==2) {
      digitalWrite(13, HIGH);
    }
    else {
      digitalWrite(13,LOW);
    }
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}
