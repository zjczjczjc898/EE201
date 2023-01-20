void setup() {
  // put your setup code here, to run once:
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
 
  
}

void loop() {
  //9
  digitalWrite(7,LOW);
  digitalWrite(3,HIGH);
  delay(1500);
  //8
  digitalWrite(3,LOW);
  delay(1500);
  //7
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(2,HIGH);
  delay(1500);
  //6
  digitalWrite(4,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  delay(1500);
  //5
  digitalWrite(3,HIGH);
  delay(1500);
  //4
  digitalWrite(5,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(4,LOW);
  delay(1500);
  //3
  digitalWrite(6,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  delay(1500);
  
  //2
  digitalWrite(3,LOW);
  digitalWrite(1,HIGH);
  delay(1500);
  
  //1
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(1,LOW);
  delay(1500);

  //0
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(2,LOW);
  delay(1500);


  
}
