#include <Arduino.h>

#ifndef LED_ON_MS
  #define LED_ON_MS 250
#endif

#ifndef LED_OFF_MS
  #define LED_OFF_MS 500
#endif


const int LED_PIN = LED_BUILTIN;

unsigned long timer = 0;
bool ledState = false;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  timer = millis();
}

void loop() {
  unsigned long now = millis();

  if (!ledState && now - timer >= LED_ON_MS) {
    digitalWrite(LED_PIN, HIGH);
    ledState = true;
    timer = now;
  }

  if (ledState && now - timer >= LED_OFF_MS) {
    digitalWrite(LED_PIN, LOW);
    ledState = false;
    timer = now;
  }
}
