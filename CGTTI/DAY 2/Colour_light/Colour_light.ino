#define time1 4000
#define time2 2000
#define time3 8000

void setup() {
 pinMode (13, OUTPUT); //Red
 pinMode (12, OUTPUT); //yellow
 pinMode (11, OUTPUT); //Green
 pinMode (10, OUTPUT);
}

void loop() {

  digitalWrite (10,1);


  
  digitalWrite (13, 1);
   delay (time1);
  digitalWrite (12, 1);
   delay (time2);
   
  digitalWrite (13, 0);
  digitalWrite (12, 0);

  digitalWrite (11, 1);
   delay (time3);
  digitalWrite (11, 0);


  digitalWrite (12, 1);
   delay (time2);
  digitalWrite (12, 0);
 

}
