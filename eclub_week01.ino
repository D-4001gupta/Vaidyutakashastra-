int sensorValue1 = 0;
int sensorValue2 = 0;
int pot1 = A0;
int pot2 = A1;
int buzz1 = 9;
int buzz2 = 10;
int buzz3 = 11;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);

  pinMode(buzz1, OUTPUT);
  pinMode(buzz2, OUTPUT);
  pinMode(buzz3, OUTPUT);
  
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop()
{
  //BUZZER PART
  sensorValue1 = analogRead(A0);
  
  if(sensorValue1 < 342){
    analogWrite(buzz1, sensorValue1/4);
  	analogWrite(buzz2, 0);
    analogWrite(buzz3,0);}
  
  else if(sensorValue1 < 683){
    analogWrite(buzz1, 0);
  	analogWrite(buzz3,0);
    analogWrite(buzz2, sensorValue1/4);}
  
  else{
    analogWrite(buzz1, 0);
  	analogWrite(buzz2,0);
  	analogWrite(buzz3, sensorValue1/4);}
   
  //LED PART
  sensorValue2 = analogRead(A1)*100000;
  
  digitalWrite(0,HIGH);
  delayMicroseconds(sensorValue2);
  digitalWrite(0,LOW);
  digitalWrite(1,HIGH);
  delayMicroseconds(sensorValue2);
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  delayMicroseconds(sensorValue2);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delayMicroseconds(sensorValue2);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delayMicroseconds(sensorValue2);
  digitalWrite(4,LOW);
 
//https://www.tinkercad.com/things/dvVFjdS1O3H-eclub-week0?sharecode=vaoypANdn7bz8Ng0TgRucm1R1VS4HrxQuKBtEfXNuTQ
}