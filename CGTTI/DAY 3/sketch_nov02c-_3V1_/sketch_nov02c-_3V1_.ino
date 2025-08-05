//LED ON/OFF using one push button

int a;
int b=1;


void setup() {
 Serial.begin(9600);
 pinMode(4, INPUT);
 pinMode(13, OUTPUT);

}

void loop() {

  a=digitalRead(4);
  Serial.print("a=");
  Serial.print(a);
  Serial.print("    b=");
  Serial.println(b);

  if ((a==1)&&(b==1)) {
    digitalWrite(13, 1);
    b=0;
    delay(1000);
  }
  
  else {
    if((a==1)&&(b==0)) {
     digitalWrite(13, 0);
     b=1;
     delay(1000);
  }

}
}
