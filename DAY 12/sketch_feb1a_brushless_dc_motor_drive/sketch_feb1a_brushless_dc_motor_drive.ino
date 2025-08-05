//drone motor

#include <Stepper.h>
#include <Servo.h>

Servo Baseservo;

void setup() {
  Baseservo.attach(3);
  pinMode(3,OUTPUT); //motor drive signal pin
  pinMode(A0, INPUT); //pot pin
}

void loop() {

  int a = map(analogRead(A0), 0, 1023, 0, 180);

  Baseservo.write(a); // Send PWM signal to control motor speed

  delay(100); // delay for holding the motor
}
