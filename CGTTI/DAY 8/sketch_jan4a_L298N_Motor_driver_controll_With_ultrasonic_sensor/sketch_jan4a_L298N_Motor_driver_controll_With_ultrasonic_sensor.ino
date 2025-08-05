int A;
int B;
int C;
int trig=A1;
int echo=A0;
long time=0;
long cm=0;
long inch=0;

void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop() {

  digitalWrite(trig,0);
  delayMicroseconds(2);
  digitalWrite(trig,1);
  delayMicroseconds(10);
  digitalWrite(trig,0);
  time=pulseIn(echo,1);
  cm=time/29/2;
  inch=time/74/2;
  Serial.print(inch); 
  Serial.print("inch\t");
  Serial.print(cm);
  Serial.println("cm");

  A= analogRead(A0);
  B= map(A,0,1024,0,255);
  C= map(A,0,1024,0,255);

  analogWrite(3,B);
  analogWrite(11,C);
  

if(cm==30) {
  stop();
  delay(3000);

  if(cm<35) {
  backward();
  }
  if(cm>35) {
  turnleft();
  delay(5000);
  }
}

else {
  forward();
}
}

void forward() {
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void backward() {
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
}

void turnright() {
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}
void turnleft() {
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
}

void stop() {
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}