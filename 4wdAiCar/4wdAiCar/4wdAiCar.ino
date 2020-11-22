#include <Servo.h>
#include <SoftwareSerial.h> // 蓝牙模块
#define STOP 0 //停止
#define FORWORD 1 // 前进
#define BACK 2 // 后退
#define LEFT 3 // 左转
#define RIGHT 4 // 右转
#define leftMotorHead 4 //左前轮引脚
#define leftMotorBack 5 //左后轮引脚
#define rightMotorHead 6 //右前轮引脚
#define rightMotorBack 7 //右后轮引脚

SoftwareSerial BT(8, 9); // 
void setup(){
  // 蓝牙
  Serial.begin(9600);
  BT.begin(9600);
  // 设置引脚模式
  pinMode(leftMotorHead,OUTPUT);
  pinMode(leftMotorBack,OUTPUT);
  pinMode(rightMotorHead,OUTPUT);
  pinMode(rightMotorBack,OUTPUT);
}

void loop(){
  // 把蓝牙模块接收到的数据发送到串口监视器
   if (BT.available()) {
       char cmd = BT.read();
       BT.println(cmd);
       motorRun(cmd);
   }
}

void motorRun(int cmd){
  switch (cmd){
    case STOP :  
      digitalWrite(leftMotorBack,LOW); 
      digitalWrite(leftMotorHead,LOW);
      digitalWrite(rightMotorBack,LOW); 
      digitalWrite(rightMotorHead,LOW);
      break;
    case FORWORD :  
      digitalWrite(leftMotorBack,HIGH); 
      digitalWrite(leftMotorHead,LOW);
      digitalWrite(rightMotorBack,HIGH); 
      digitalWrite(rightMotorHead,LOW);
      break;
    case BACK :  
      digitalWrite(leftMotorBack,LOW); 
      digitalWrite(leftMotorHead,HIGH);
      digitalWrite(rightMotorBack,LOW); 
      digitalWrite(rightMotorHead,HIGH);
      break;
    case LEFT :  
      
      digitalWrite(leftMotorBack,LOW); 
      digitalWrite(leftMotorHead,HIGH);
      digitalWrite(rightMotorBack,HIGH); 
      digitalWrite(rightMotorHead,LOW);
      break;
    case RIGHT :  
      digitalWrite(leftMotorBack,HIGH); 
      digitalWrite(leftMotorHead,LOW);
      digitalWrite(rightMotorBack,LOW); 
      digitalWrite(rightMotorHead,HIGH);
      break;  
  }

  
}
