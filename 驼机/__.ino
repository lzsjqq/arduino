#include <Servo.h>
Servo myServo;

int kbdz=A0;
int angle=0;
void setup(){
  Serial.begin(9600);  
  myServo.attach(6);
}

void loop(){
  angle=analogRead(kbdz);
  angle=map(angle,0,1023,0,179);
  Serial.println(angle);
  myServo.write(angle);
  delay(5);
}
