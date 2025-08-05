#define OutA 5
#define OutB 6

void setup() {
  Serial.begin(9600);
  pinMode(OutA,INPUT_PULLUP);
  pinMode(OutB,INPUT_PULLUP);

}

void loop() {
  int A=digitalRead(OutA);
  int B=digitalRead(OutB);

  if((A==HIGH) && (B==LOW)) {
    Serial.print("Clockwise");
    Serial.println("\t");
    delay(1);
  }

  if((A==LOW) && (B==LOW)) {
    Serial.print(" Counterclockwise");
    Serial.println("\t");
    delay(1);
  }

}
