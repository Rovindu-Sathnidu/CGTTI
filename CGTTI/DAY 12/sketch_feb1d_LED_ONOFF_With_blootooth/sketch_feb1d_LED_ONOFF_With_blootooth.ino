#include <SoftwareSerial.h>

char temp;

SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  // Open serial communications and wait for port to open:
  pinMode(5,OUTPUT);
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }


  Serial.println("Goodnight moon!");

  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
  mySerial.println("Hello, world?");
}

void loop() {
  if (mySerial.available()) {
    temp = mySerial.read();
    Serial.print(temp);
    if(temp=="R"); {
      digitalWrite(5, HIGH);
    }
    if (temp=="Y") {
      digitalWrite(5,LOW);
    }

    if(temp=="G"); {
      digitalWrite(6, HIGH);
    }
    if (temp=="B") {
      digitalWrite(6,LOW);
    }
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}
