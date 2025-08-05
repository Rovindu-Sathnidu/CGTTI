int A
int B
int C

void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {

  A= analogRead(A0);
  B= map(A,0,512,255,0);
  C= map(A,512,1024,0,255);

if (A<512){
  analogWrite(3,B);
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  }

else {
  analogWrite(3,C);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  }

}
