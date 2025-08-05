int X;

void setup() {
  pinMode(2,INPUT); //DO Pin
  pinMode(3,OUTPUT); //LED Pin
  pinMode(4,OUTPUT); //LED Pin
  pinMode(A0,INPUT); //AO Pin
  Serial.begin(9600);
}

void loop() {
//Digital Value (serial Print)
  X= digitalRead(2);
  Serial.print("IR - ");
  Serial.println(X);

//LED Lit
  if(X==1) {
    digitalWrite(3, 1);
    digitalWrite(4, 0);
  }
  else{
    digitalWrite(3, 0);
    digitalWrite(4, 1);
  }
  
}