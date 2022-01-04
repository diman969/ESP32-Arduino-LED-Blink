#include <Arduino.h>
#define LED_PIN 2

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN,OUTPUT);
  Serial.begin(9600);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool isOn{digitalRead(LED_PIN)};
  digitalWrite(LED_PIN, !isOn);

  if(!isOn){
    Serial.println("ON");
  }
  else{
    Serial.println("OFF");
  }

  
  delay(1000);
}