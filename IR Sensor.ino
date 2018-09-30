
 
 // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0, INPUT);
pinMode(13, OUTPUT);
pinMode(A1,INPUT);
pinMode(4,OUTPUT);
}

void loop() {
int detected = digitalRead(A0);
int detected1 = digitalRead(A1); 
  if( detected == LOW)
  {
    digitalWrite(4,HIGH);
  if( detected1 == HIGH)
    {
    digitalWrite(13,HIGH);
    }
  }else{
    digitalWrite(13,LOW);

  }

}
