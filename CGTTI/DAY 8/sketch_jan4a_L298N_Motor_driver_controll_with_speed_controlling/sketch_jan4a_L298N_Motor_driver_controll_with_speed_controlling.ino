void setup() {
  pinMode (6,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (3,OUTPUT);

}

void loop() {
  analogWrite(3,100);
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  delay(1500);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  delay(1500);
}
