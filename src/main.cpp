#include <Arduino.h>
#include "bridge.h"

void setup() {
  Serial.begin(115200);
  Serial.println("\n");
  turnOnLed();
}

void loop() {
  turnOnLed();
}