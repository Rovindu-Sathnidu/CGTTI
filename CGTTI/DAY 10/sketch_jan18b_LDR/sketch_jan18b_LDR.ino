int X;
int Y;

void setup() {
  pinMode(2,INPUT); //DO Pin
  pinMode(3,OUTPUT); //LED Pin
  pinMode(A0,INPUT); //AO Pin
  Serial.begin(9600);
}

void loop() {
//Analog Value (serial Print)
  X= analogRead(A0);
  Serial.print("Value. ");
  Serial.print(X);

//Digital Value (Serial Print)
  Y= digitalRead(2);
  Serial.print(".      Value2. ");
  Serial.println(Y);

//LED Lit
  if(Y==1) {
    digitalWrite(3, 1);
  }
  else{
    digitalWrite(3, 0);
  }

  
}
