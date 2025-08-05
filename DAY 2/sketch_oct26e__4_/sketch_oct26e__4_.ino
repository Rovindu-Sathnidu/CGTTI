int V;
int R;

void setup() {
 pinMode (13, OUTPUT);
 pinMode (3, INPUT);
 pinMode (2, INPUT);

 Serial.begin (9600);

}

void loop() {
  V=digitalRead (2);
  R=digitalRead (3);
  Serial.print (V);
  Serial.print (R);

  if (V==1){
    if (R==1){
    
   digitalWrite (13, 1);
  }
   
  }
 

 else {
   digitalWrite (13, 0);  
 }

}
