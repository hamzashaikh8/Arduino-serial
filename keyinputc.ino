void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //LED at pin 13 is set as output
  digitalWrite(13,LOW); //initialize pin to LOW
  Serial.begin(9600); 

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0) 
  {
    if(Serial.read() == 'c')
    {
      //if user inputs 'c', then pin 13 will be pulled to HIGH for 2 seconds
      digitalWrite(13,HIGH);
      delay(2000);
    }
  }
  else //otherwise pin is set to LOW
  {
    digitalWrite(13,LOW);
    delay(2000);
  }
}
