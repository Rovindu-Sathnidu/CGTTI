int X;
int Y;

void setup() {
  pinMode(2,INPUT); //Push Button 1
  pinMode(3,INPUT);  //Push Button 2
  pinMode(4,OUTPUT);  //LED 1
  pinMode(5,OUTPUT);  //LED 2
}

void loop() {
  X=digitalRead(2);
  Y=digitalRead(3);

  if(X==1) {
    digitalWrite(4,1);
    digitalWrite(5,0);
  }

  if(Y==1) {
    digitalWrite(4,0);
    digitalWrite(5,1);
  }

}
