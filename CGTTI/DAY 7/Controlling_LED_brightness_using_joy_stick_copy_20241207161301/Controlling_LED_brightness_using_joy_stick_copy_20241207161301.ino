int X_Pin = A0;
int Y_Pin = A1;
int X1;
int X2;
int Y1;
int Y2;


void setup() {

  Serial.begin (9600);
  pinMode (A0, INPUT);
  pinMode (A1, INPUT);
  pinMode (3, INPUT_PULLUP);
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (9,OUTPUT);
  pinMode (10,OUTPUT);
}

void loop() {

  int X_data = analogRead (A0);
  int Y_data = analogRead (A1);
  int SW = digitalRead(3);


  Serial.print("X Axis: ");
  Serial.print(X_data);
  Serial.print("\t");
  Serial.print("Y Axis: ");
  Serial.print(Y_data);
  Serial.print("\t");
  Serial.print("SW: ");
  Serial.println(SW);
  delay (100);

  X1=map(X_data,508,0,0,255);
  X2=map(X_data,508,1021,0,255);

  Y1=map(Y_data,518,0,0,255);
  Y2=map(Y_data,518,1022,0,255);


  Serial.print("X1");
  Serial.print(X1);
  Serial.print("\t");
  Serial.print("X2");
  Serial.print(X2);
  Serial.print("\t");
  Serial.print("Y1");
  Serial.print(Y1);
  Serial.print("\t");
  Serial.print("Y2");
  Serial.print(Y2);
  Serial.print("\t");


  if (X1>0) {
    X1=0;
    }

  if (X2>0) {
    X2=0;
    }

  if (Y1>0) {
    Y1=0;
    }

  if (Y2>0) {
    Y2=0;
    }

 analogWrite(5,X1);
 analogWrite(6,X2);
 analogWrite(9,Y1);
 analogWrite(10,Y2);
}
