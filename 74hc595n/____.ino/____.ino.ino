int mn=A0;
int ej=9;
int gm=0;
void setup(){
Serial.begin(9600);
  pinMode(ej,OUTPUT);
}

void loop(){

gm=analogRead(mn);
Serial.println(gm);
if(gm<100){
  digitalWrite(ej,HIGH);
}else{
  digitalWrite(ej,LOW);
  }

  delay(1000);
  
}
