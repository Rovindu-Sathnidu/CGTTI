int A;
int B;

void setup() {
  pinMode (6,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (3,OUTPUT);
  pinMode (A0,INPUT);

}

void loop() {
  A= analogRead(A0);
  B= map(A,0,512,0,255);
  analogWrite(3,B);
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  
}
