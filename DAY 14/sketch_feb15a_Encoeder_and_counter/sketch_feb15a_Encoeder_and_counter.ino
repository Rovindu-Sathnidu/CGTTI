#define CLK 5
#define DT 6
int counter=0;
int lastStateCLK;
int currentStateCLK;
int currentDir;

void setup() {
  Serial.begin(9600);
  pinMode(CLK,INPUT_PULLUP);
  pinMode(DT,INPUT_PULLUP);
  lastStateCLK = digitalRead(CLK);
}

void loop() {
  currentStateCLK = digitalRead(CLK);
  if(currentStateCLK != lastStateCLK && currentStateCLK == 1) {
    if (digitalread(DT) != currentStateCLK) {
      counter --;
      currentDir = "CCW";
    } else {
      counter ++;
      currentDir ="CW";
    }

    Serial.print("direction: ");
    Serial.print(currentDir);
    Serial.print(".  Counter: ")
    Serial.println(counter);
  }
  lastStateCLK = currentStateCLK;
  delay(1)

}
