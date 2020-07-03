#include <SoftwareSerial.h>
SoftwareSerial myserial(2,3);  //Rx/Tx*/
void setup() {
  // put your setup code here, to run once:
  //pinMode(PA0,INPUT);
  //pinMode(PA1,OUTPUT);
  pinMode(13,OUTPUT);
  myserial.begin(9600);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  //Serial.println("inside loop");
  //myserial.listen();
  if( myserial.available()>0)
  {
    Serial.println("inside available");
    i=myserial.read();
    Serial.write(i);
    if(i=='1')
    {
      digitalWrite(13,HIGH);
      Serial.println("LED HIGH");
    }
    if(i=='0')
    {
      digitalWrite(13,LOW);
      Serial.println("LED LOW");
    }
  }
}
