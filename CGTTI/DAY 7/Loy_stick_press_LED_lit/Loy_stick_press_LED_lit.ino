int X_Pin = A0;
int Y_Pin = A1;


void setup() {

  Serial.begin (9600);
  pinMode (A0, INPUT);
  pinMode (A1, INPUT);
  pinMode (3, INPUT_PULLUP);
  pinMode (13,OUTPUT);
  pinMode (12,OUTPUT);
  pinMode (11,OUTPUT);
  pinMode (10,OUTPUT);
  pinMode (9,OUTPUT);
  pinMode (8,OUTPUT);
  pinMode (7,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (4,OUTPUT);
  pinMode (3,OUTPUT);
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

  if ((X_data>500)&&(X_data<550)&&(Y_data<519)) {
    digitalWrite(6,1);
  }
  else {
    digitalWrite(6,0);
    }

  if ((X_data>550)&&(Y_data<550)){
    digitalWrite(7,1);
  }
  else {
    digitalWrite(7,0);
    }
  
  if ( (X_data>550)&&(Y_data>500)&&(Y_data<550)) {
    digitalWrite(8,1);
  }
  else {
    digitalWrite(8,0);
    }
  
  if ( (X_data>550)&&(Y_data>550)) {
    digitalWrite(9,1);
  }
  else {
    digitalWrite(9,0);
    }

  if ( (X_data>500)&&(X_data<550)&&(Y_data>550)) {
    digitalWrite(10,1);
  }
  else {
    digitalWrite(10,0);
    }  

  if ( (X_data<500)&&(Y_data>550)) {
    digitalWrite(11,1);
  }
  else {
    digitalWrite(11,0);
    }  

  if ( (X_data<500)&&(Y_data>500)&&(Y_data<550)) {
    digitalWrite(12,1);
  }
  else {
    digitalWrite(12,0); 
    } 

  if ( (X_data<500)&&(Y_data<500)) {
    digitalWrite(13,1);
  }
  else {
    digitalWrite(13,0);
    }    
}
