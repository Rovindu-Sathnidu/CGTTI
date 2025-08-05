//brightness level controller with POT

int b;
int a;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  b = analogRead(A0);
  a = map(b,1023,0,9,2);
  Serial.print(a);
  Serial.println(b);

  digitalWrite(a, 1);
  digitalWrite(a-1, 0); 
}
