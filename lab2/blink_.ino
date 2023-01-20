void setup() {
  pinMode(13,OUTPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
//  digitalWrite(13,HIGH);
//  digitalWrite(2,LOW);
  Serial.println("RedLED is ON while GreenLED is OFF");
  delay(1000);
//  digitalWrite(13,LOW);
//  digitalWrite(2,HIGH);
  Serial.println("LED is OFF while GreenLED is ON");
  delay(1000);
  // put your main code here, to run repeatedly:

}
