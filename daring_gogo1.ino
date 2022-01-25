// C++ code
//
const int EnA = 3;
const int EnB = 11;
const int motorPin1 = 9;
const int motorPin2 = 1;
const int motorPin3 = 6;
const int motorPin4 = 5;
void setup()
{
  
  pinMode(EnA,OUTPUT);
  pinMode(EnB,OUTPUT);
  
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  
  analogWrite(EnA,255);
  analogWrite(EnB,255); 
}

void loop()
{
  digitalWrite(motorPin1,HIGH);
  digitalWrite(motorPin2,LOW);
  digitalWrite(motorPin3,LOW);
  digitalWrite(motorPin4,LOW);
  delay(2000);
  
  digitalWrite(motorPin1,LOW);
  digitalWrite(motorPin2,HIGH);
  digitalWrite(motorPin3,LOW);
  digitalWrite(motorPin4,LOW);
  delay(2000);
  
  digitalWrite(motorPin1 ,LOW);
  digitalWrite(motorPin2,LOW);
  digitalWrite(motorPin3,HIGH);
  digitalWrite(motorPin4,LOW);
  delay(2000);
  
  digitalWrite(motorPin1,LOW);
  digitalWrite(motorPin2,LOW);
  digitalWrite(motorPin3,LOW);
  digitalWrite(motorPin4,HIGH);
  delay(2000);
  
  digitalWrite(motorPin1,LOW);
  digitalWrite(motorPin2,LOW);
  digitalWrite(motorPin3,LOW);
  digitalWrite(motorPin4,LOW);
  delay(2000);
  
}