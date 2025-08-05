#define time1 1000
#define time2 0

#define a1 7
#define b1 6
#define c1 5
#define d1 4
#define e1 3
#define f1 2
#define g1 1
#define DP1 A0

#define a2 0
#define b2 13
#define c2 12
#define d2 11
#define e2 10
#define f2 9
#define g2 8
#define DP2 A1

void setup() {

  pinMode(a2,OUTPUT);
  pinMode(b2,OUTPUT);
  pinMode(c2,OUTPUT);
  pinMode(d2,OUTPUT);
  pinMode(e2,OUTPUT);
  pinMode(f2,OUTPUT);
  pinMode(g2,OUTPUT);
  pinMode(DP2,OUTPUT);


  pinMode(a1,OUTPUT);
  pinMode(b1,OUTPUT);
  pinMode(c1,OUTPUT);
  pinMode(d1,OUTPUT);
  pinMode(e1,OUTPUT);
  pinMode(f1,OUTPUT);
  pinMode(g1,OUTPUT);
  pinMode(DP1,OUTPUT);
}


void loop() {

  zero1();
  delay(time2);

  zero2();
  delay(time1);
  one2();
  delay(time1);
  two2();
  delay(time1);
  three2();
  delay(time1);
  four2();
  delay(time1);
  five2();
  delay(time1);
  six2();
  delay(time1);
  seven2();
  delay(time1);
  eight2();
  delay(time1);
  nine2();
  delay(time1);

  one1();
  delay(time2);

  zero2();
  delay(time1);
  one2();
  delay(time1);
  two2();
  delay(time1);
  three2();
  delay(time1);
  four2();
  delay(time1);
  five2();
  delay(time1);
  six2();
  delay(time1);
  seven2();
  delay(time1);
  eight2();
  delay(time1);
  nine2();
  delay(time1);

  two1();
  delay(time2);

  zero2();
  delay(time1);
  one2();
  delay(time1);
  two2();
  delay(time1);
  three2();
  delay(time1);
  four2();
  delay(time1);
  five2();
  delay(time1);
  six2();
  delay(time1);
  seven2();
  delay(time1);
  eight2();
  delay(time1);
  nine2();
  delay(time1);

  three1();
  delay(time2);

  zero2();
  delay(time1);
  one2();
  delay(time1);
  two2();
  delay(time1);
  three2();
  delay(time1);
  four2();
  delay(time1);
  five2();
  delay(time1);
  six2();
  delay(time1);
  seven2();
  delay(time1);
  eight2();
  delay(time1);
  nine2();
  delay(time1);

  four1();
  delay(time2);

  zero2();
  delay(time1);
  one2();
  delay(time1);
  two2();
  delay(time1);
  three2();
  delay(time1);
  four2();
  delay(time1);
  five2();
  delay(time1);
  six2();
  delay(time1);
  seven2();
  delay(time1);
  eight2();
  delay(time1);
  nine2();
  delay(time1);

  five1();
  delay(time2);

  zero2();
  delay(time1);
  one2();
  delay(time1);
  two2();
  delay(time1);
  three2();
  delay(time1);
  four2();
  delay(time1);
  five2();
  delay(time1);
  six2();
  delay(time1);
  seven2();
  delay(time1);
  eight2();
  delay(time1);
  nine2();
  delay(time1);

  six1();
  delay(time2);

  zero2();
  delay(time1);
  one2();
  delay(time1);
  two2();
  delay(time1);
  three2();
  delay(time1);
  four2();
  delay(time1);
  five2();
  delay(time1);
  six2();
  delay(time1);
  seven2();
  delay(time1);
  eight2();
  delay(time1);
  nine2();
  delay(time1);

  seven1();
  delay(time2);

  zero2();
  delay(time1);
  one2();
  delay(time1);
  two2();
  delay(time1);
  three2();
  delay(time1);
  four2();
  delay(time1);
  five2();
  delay(time1);
  six2();
  delay(time1);
  seven2();
  delay(time1);
  eight2();
  delay(time1);
  nine2();
  delay(time1);

  eight1();
  delay(time2);

  zero2();
  delay(time1);
  one2();
  delay(time1);
  two2();
  delay(time1);
  three2();
  delay(time1);
  four2();
  delay(time1);
  five2();
  delay(time1);
  six2();
  delay(time1);
  seven2();
  delay(time1);
  eight2();
  delay(time1);
  nine2();
  delay(time1);

  nine1();
  delay(time2);

  zero2();
  delay(time1);
  one2();
  delay(time1);
  two2();
  delay(time1);
  three2();
  delay(time1);
  four2();
  delay(time1);
  five2();
  delay(time1);
  six2();
  delay(time1);
  seven2();
  delay(time1);
  eight2();
  delay(time1);
  nine2();
  delay(time1);

}


//display 02

void zero2(){

  digitalWrite(a2,1);
  digitalWrite(b2,1);
  digitalWrite(c2,1);
  digitalWrite(d2,1);
  digitalWrite(e2,1);
  digitalWrite(f2,1);
  digitalWrite(g2,0);
  digitalWrite(DP2,0);
}

void one2(){

  digitalWrite(a2,0);
  digitalWrite(b2,1);
  digitalWrite(c2,1);
  digitalWrite(d2,0);
  digitalWrite(e2,0);
  digitalWrite(f2,0);
  digitalWrite(g2,0);
  digitalWrite(DP2,0);
}



void two2(){

  digitalWrite(a2,1);
  digitalWrite(b2,1);
  digitalWrite(c2,0);
  digitalWrite(d2,1);
  digitalWrite(e2,1);
  digitalWrite(f2,0);
  digitalWrite(g2,1);
  digitalWrite(DP2,0);
}


void three2(){

  digitalWrite(a2,1);
  digitalWrite(b2,1);
  digitalWrite(c2,1);
  digitalWrite(d2,1);
  digitalWrite(e2,0);
  digitalWrite(f2,0);
  digitalWrite(g2,1);
  digitalWrite(DP2,0);
}


void four2(){

  digitalWrite(a2,0);
  digitalWrite(b2,1);
  digitalWrite(c2,1);
  digitalWrite(d2,0);
  digitalWrite(e2,0);
  digitalWrite(f2,1);
  digitalWrite(g2,1);
  digitalWrite(DP2,0);
}


void five2(){

  digitalWrite(a2,1);
  digitalWrite(b2,0);
  digitalWrite(c2,1);
  digitalWrite(d2,1);
  digitalWrite(e2,0);
  digitalWrite(f2,1);
  digitalWrite(g2,1);
  digitalWrite(DP2,0);
}


void six2(){

  digitalWrite(a2,1);
  digitalWrite(b2,0);
  digitalWrite(c2,1);
  digitalWrite(d2,1);
  digitalWrite(e2,1);
  digitalWrite(f2,1);
  digitalWrite(g2,1);
  digitalWrite(DP2,0);
}


void seven2(){

  digitalWrite(a2,1);
  digitalWrite(b2,1);
  digitalWrite(c2,1);
  digitalWrite(d2,0);
  digitalWrite(e2,0);
  digitalWrite(f2,0);
  digitalWrite(g2,0);
  digitalWrite(DP2,0);
}



void eight2(){

  digitalWrite(a2,1);
  digitalWrite(b2,1);
  digitalWrite(c2,1);
  digitalWrite(d2,1);
  digitalWrite(e2,1);
  digitalWrite(f2,1);
  digitalWrite(g2,1);
  digitalWrite(DP2,0);
}


void nine2(){

  digitalWrite(a2,1);
  digitalWrite(b2,1);
  digitalWrite(c2,1);
  digitalWrite(d2,1);
  digitalWrite(e2,0);
  digitalWrite(f2,1);
  digitalWrite(g2,1);
  digitalWrite(DP2,0);
}



// display 01
void zero1(){

  digitalWrite(a1,1);
  digitalWrite(b1,1);
  digitalWrite(c1,1);
  digitalWrite(d1,1);
  digitalWrite(e1,1);
  digitalWrite(f1,1);
  digitalWrite(g1,0);
  digitalWrite(DP1,0);
}


void one1(){

  digitalWrite(a1,0);
  digitalWrite(b1,1);
  digitalWrite(c1,1);
  digitalWrite(d1,0);
  digitalWrite(e1,0);
  digitalWrite(f1,0);
  digitalWrite(g1,0);
  digitalWrite(DP1,0);
}

void two1(){

  digitalWrite(a1,1);
  digitalWrite(b1,1);
  digitalWrite(c1,0);
  digitalWrite(d1,1);
  digitalWrite(e1,1);
  digitalWrite(f1,0);
  digitalWrite(g1,1);
  digitalWrite(DP1,0);
}


void three1(){

  digitalWrite(a1,1);
  digitalWrite(b1,1);
  digitalWrite(c1,1);
  digitalWrite(d1,1);
  digitalWrite(e1,0);
  digitalWrite(f1,0);
  digitalWrite(g1,1);
  digitalWrite(DP1,0);
}


void four1(){

  digitalWrite(a1,0);
  digitalWrite(b1,1);
  digitalWrite(c1,1);
  digitalWrite(d1,0);
  digitalWrite(e1,0);
  digitalWrite(f1,1);
  digitalWrite(g1,1);
  digitalWrite(DP1,0);
}


void five1(){

  digitalWrite(a1,1);
  digitalWrite(b1,0);
  digitalWrite(c1,1);
  digitalWrite(d1,1);
  digitalWrite(e1,0);
  digitalWrite(f1,1);
  digitalWrite(g1,1);
  digitalWrite(DP1,0);
}


void six1(){

  digitalWrite(a1,1);
  digitalWrite(b1,0);
  digitalWrite(c1,1);
  digitalWrite(d1,1);
  digitalWrite(e1,1);
  digitalWrite(f1,1);
  digitalWrite(g1,1);
  digitalWrite(DP1,0);
}


void seven1(){

  digitalWrite(a1,1);
  digitalWrite(b1,1);
  digitalWrite(c1,1);
  digitalWrite(d1,0);
  digitalWrite(e1,0);
  digitalWrite(f1,0);
  digitalWrite(g1,0);
  digitalWrite(DP1,0);
}



void eight1(){

  digitalWrite(a1,1);
  digitalWrite(b1,1);
  digitalWrite(c1,1);
  digitalWrite(d1,1);
  digitalWrite(e1,1);
  digitalWrite(f1,1);
  digitalWrite(g1,1);
  digitalWrite(DP1,0);
}


void nine1(){

  digitalWrite(a1,1);
  digitalWrite(b1,1);
  digitalWrite(c1,1);
  digitalWrite(d1,1);
  digitalWrite(e1,0);
  digitalWrite(f1,1);
  digitalWrite(g1,1);
  digitalWrite(DP1,0);
}
