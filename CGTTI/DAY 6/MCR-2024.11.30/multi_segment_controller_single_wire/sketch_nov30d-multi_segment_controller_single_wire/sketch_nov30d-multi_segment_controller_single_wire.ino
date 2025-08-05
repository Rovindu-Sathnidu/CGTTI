#define time1 1000
#define time2 5

int X;
int i;
int A;
int B;

#define a 7
#define b 6
#define c 5
#define d 4
#define e 3
#define f 2
#define g 1
#define DP 0

#define s1 8
#define s2 9

void setup() {

  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(DP,OUTPUT);
  
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
}

void loop() {

  i=analogRead(A0);
  X=map(i, 1024, 0, 99, 0);

  A=X/10;
  B=A*10-X;

  if  (A=0){
    zero();
    digitalWrite(s1,0);
    digitalWrite(s2,1);
    delay(5);
  }

  if  (A=1){
    one();
    digitalWrite(s1,0);
    digitalWrite(s2,1);
    delay(5);
  }

  if  (A=2){
    two();
    digitalWrite(s1,0);
    digitalWrite(s2,1);
    delay(5);
  }

  if  (A=3){
    three();
    digitalWrite(s1,0);
    digitalWrite(s2,1);
    delay(5);
  }

  if  (A=4){
    four();
    digitalWrite(s1,0);
    digitalWrite(s2,1);
    delay(5);
  }

  if  (A=5){
    five();
    digitalWrite(s1,0);
    digitalWrite(s2,1);
    delay(5);
  }

  if  (A=6){
    six();
    digitalWrite(s1,0);
    digitalWrite(s2,1);
    delay(5);
  }

  if  (A=7){
    seven();
    digitalWrite(s1,0);
    digitalWrite(s2,1);
    delay(5);
  }

  if  (A=8){
    eight();
    digitalWrite(s1,0);
    digitalWrite(s2,1);
    delay(5);
  }

  if  (A=9){
    nine();
    digitalWrite(s1,0);
    digitalWrite(s2,1);
    delay(5);
  }



  if (B=0){
    zero();
    digitalWrite(s1,1);
    digitalWrite(s2,0);
    delay(5);
  }

  if (B=1){
    one();
    digitalWrite(s1,1);
    digitalWrite(s2,0);
    delay(5);
  }

  if (B=2){
    two();
    digitalWrite(s1,1);
    digitalWrite(s2,0);
    delay(5);
  }

  if (B=3){
    three();
    digitalWrite(s1,1);
    digitalWrite(s2,0);
    delay(5);
  }

  if (B=4){
    four();
    digitalWrite(s1,1);
    digitalWrite(s2,0);
    delay(5);
  }

  if (B=5){
    five();
    digitalWrite(s1,1);
    digitalWrite(s2,0);
    delay(5);
  }

  if (B=6){
    six();
    digitalWrite(s1,1);
    digitalWrite(s2,0);
    delay(5);
  }

  if (B=7){
    seven();
    digitalWrite(s1,1);
    digitalWrite(s2,0);
    delay(5);
  }

  if (B=8){
    eight();
    digitalWrite(s1,1);
    digitalWrite(s2,0);
    delay(5);
  }

  if (B=9){
    nine();
    digitalWrite(s1,1);
    digitalWrite(s2,0);
    delay(5);
  }
}

void zero(){

  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
  digitalWrite(DP,0);
}



void one(){

  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  digitalWrite(DP,1);
}



void two(){

  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,1);
  digitalWrite(DP,1);
}


void three(){

  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
  digitalWrite(DP,1);
}


void four(){

  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(DP,1);
}


void five(){

  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(DP,1);
}


void six(){

  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(DP,1);
}


void seven(){

  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
  digitalWrite(DP,1);
}



void eight(){

  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(DP,1);
}


void nine(){

  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
  digitalWrite(DP,1);
}
