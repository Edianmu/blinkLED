#include <Arduino.h>
#define led LED_BUILTIN

void turnOnLed(){
  pinMode(led, OUTPUT);

  digitalWrite(led, HIGH);
  delay(3000); 
  digitalWrite(led, LOW); 
  delay(1000); 
}