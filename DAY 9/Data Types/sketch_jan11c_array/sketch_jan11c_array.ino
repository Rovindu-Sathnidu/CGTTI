void setup() {
  Serial.begin(9600);
  
  int numbers[5] = {10,20,30,40,50}; //Declare a array
  for (int i=0;i<5;i++){
  Serial.println(numbers[i]); //Print each array element
  }
}

void loop() {
  
}
