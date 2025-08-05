int V;
int V1;
void setup() {
 pinMode (2, INPUT);

Serial.begin (9600);
}

void loop() {
 
V=digitalRead (2);
Serial.println (V);

if (V==1) {

  
V1=V1+1;
delay(1000);
}
}
