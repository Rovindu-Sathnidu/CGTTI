int x=10;
int y=5;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int i = x/y;
  delay(1000);
  Serial.println(i);
}
