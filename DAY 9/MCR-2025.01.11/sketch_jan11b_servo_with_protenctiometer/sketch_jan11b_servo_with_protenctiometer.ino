int A;
int B;

#include <Servo.h>

Servo Baseservo;

void setup() {
  Serial.begin(9600);
  Baseservo.attach(3);
  pinMode(A0,INPUT);
}

void loop() {
  A = analogRead(A0);
  B = map(A,0,1024,0,180);
    
  Baseservo.write(B);
  Serial.println(A);
}
