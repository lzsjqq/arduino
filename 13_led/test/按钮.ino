
int LED=13;
int button=7;
int nowStatus=0;
int lastStatus=0;
void setup() {
  pinMode(LED,OUTPUT);
  pinMode(button,INPUT);
  Serial.begin(9600);
}

void loop() {
  nowStatus=digitalRead(button);
  if(lastStatus!=nowStatus ){
    Serial.println(nowStatus);
    delay(20);
    digitalWrite(LED,nowStatus);
   }
   lastStatus=nowStatus;
}
