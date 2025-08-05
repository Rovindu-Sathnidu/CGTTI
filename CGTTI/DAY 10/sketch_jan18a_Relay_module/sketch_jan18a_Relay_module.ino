void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  
}

void loop() {

  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  delay(1000);
  digitalWrite(5,HIGH);
  delay(2000);
  digitalWrite(5,LOW);
  delay(2000);
}
