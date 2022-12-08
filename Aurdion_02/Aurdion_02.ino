



void setup() {
 Serial.begin(96500);
 
  pinMode(13,OUTPUT);
}

void loop(){
  
  digitalWrite(13,HIGH);
  delay(4000);
  digitalWrite(13,LOW);
  delay(2000);

}
