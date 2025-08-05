
int b = 3;
int V;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
  Serial.begin (9600);

}

void loop() {

  V=digitalRead(9);
  Serial.println(V);

  if (V==1) {
    
    while (b < 9) {
    digitalWrite (b, 1);
    digitalWrite (b-1, 0);
    b++;
    delay(50);
  }

  while(b > 2) {
    digitalWrite(b, 0);
    digitalWrite (b-1, 1);
    b--;
    delay(50);
  }
  
  }

  else{
    digitalWrite(3, 0);
  }
  

}
