int value;

void setup() {

 pinMode (2, INPUT_PULLUP);

 Serial.begin (9600);
}

void loop() {
  int value=digitalRead (2);
  Serial.println (value);
}
