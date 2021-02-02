#include <Arduino.h>

const int buttonPin = 4;
const int ledPin = 13;
boolean onoff = HIGH;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT); 
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  
    if (digitalRead(buttonPin) == LOW) {
      Serial.println(onoff);
      onoff = HIGH;

    }
    else {      
      Serial.println(onoff);
      onoff=LOW; 
    }
    digitalWrite(ledPin,onoff);
    delay(100);
  }