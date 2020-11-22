int sensor=A0;
int sensorRead=0;
int newData=0;
int led=3;
void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorRead=analogRead(sensor);
  newData=map(sensorRead,0,1023,0,255);
  Serial.println(newData);
  analogWrite(led,newData);
  delay(1000);
}
