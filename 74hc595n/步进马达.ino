int a=8;
int b=9;
int c=10;
int d=11;
int delayTime=10;
void setup(){
  pinMode(a,OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
}
void loop(){
  digitalWrite(d, LOW);
  digitalWrite(a, HIGH);
  delay(delayTime);
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH );
   delay(delayTime);
    digitalWrite(b, LOW);
  digitalWrite(c, HIGH );
   delay(delayTime);
    digitalWrite(c, LOW);
  digitalWrite(d, HIGH );
}