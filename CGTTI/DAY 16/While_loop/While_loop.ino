int ledPin = 13; 

void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  while (true) { 
    digitalWrite(ledPin, HIGH); 
    delay(500);                 
    digitalWrite(ledPin, LOW);  
    delay(500);                 
  }
}
