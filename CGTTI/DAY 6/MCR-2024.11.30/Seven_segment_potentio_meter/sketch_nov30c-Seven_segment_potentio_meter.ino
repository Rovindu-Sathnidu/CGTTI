#define time1 0
#define time2 1000

int X;
int i;

#define a 7
#define b 6
#define c 5
#define d 4
#define e 3
#define f 2
#define g 1
#define DP 0

void setup() {

  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(DP,OUTPUT);
  pinMode(A2,INPUT);
}

void loop() {

 X=analogRead(A2);
 i=map(X, 1023, 0, 9, 0);

 if (i=0){
   zero();
 }
 if (i=1){
   one();
 }
 if (i=2){
   two();
 }
 if (i=3){
   three();
 }
 if (i=4){
   four();
 }
 if (i=5){
   five();
 }
if (i=6){
  six();
 }
 if (i=7){
   seven();
 }
 if (i=8){
   eight();
 }
 if (i=9){
   nine();
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
