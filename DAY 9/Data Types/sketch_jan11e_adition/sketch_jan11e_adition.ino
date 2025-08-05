int x=5;
int y=10;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int i = x+y;
  delay(1000);
  Serial.println(i);
}
