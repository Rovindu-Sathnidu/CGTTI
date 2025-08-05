int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, HIGH);
    delay(500);               
    digitalWrite(ledPin, LOW);  
    delay(500);                
  }
}
