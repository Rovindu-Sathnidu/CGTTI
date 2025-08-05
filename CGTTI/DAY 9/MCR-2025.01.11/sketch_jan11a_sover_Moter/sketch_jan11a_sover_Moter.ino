#include <Servo.h>

Servo Myservo;

void setup() {
  Myservo.attach(3);
}

void loop() {
    Myservo.write(90);
    delay(1000);

    Myservo.write(0);
    delay(1000);
}
