float SensorReading[4]={1.23,3.44,5.66,111.0};

void setup() {
  Serial.begin(9600);

}

void loop() {

  delay(1000);
  Serial.println(SensorReading[0]);
  Serial.println('\t');

  Serial.println(SensorReading[2]);
  Serial.println('\t');
}
