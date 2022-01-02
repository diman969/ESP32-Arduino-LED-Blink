#include <Arduino.h>
#define ledPin 2

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
  digitalWrite(ledPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool isOn{digitalRead(ledPin)};
  digitalWrite(ledPin, !isOn);

  if(!isOn){
    Serial.println("ON");
  }
  else{
    Serial.println("OFF");
  }

  
  delay(1000);
}