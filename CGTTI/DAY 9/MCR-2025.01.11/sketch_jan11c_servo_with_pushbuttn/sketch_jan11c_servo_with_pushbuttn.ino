#include <Servo.h>
Servo Baseservo;

void setup() {
  Serial.begin(9600);
  Baseservo.attach(6);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
}

void loop() {

int A = digitalRead(2);
int B = digitalRead(3);
int C = digitalRead(4);

   if (A == HIGH) {
     Baseservo.write(30);
  }

   if (B == HIGH) {
     Baseservo.write(120);
  }

   if (C == HIGH) {
     Baseservo.write(180);
  }
  Serial.print(A);
  Serial.print(B);
  Serial.println(C);
}
