int inPin = 7;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(inPin);
  if(val==1){
    Serial.println("Hello World!");
  }
  if(val==0){
   Serial.println("It's 2023");
  }
  delay(500);
}
