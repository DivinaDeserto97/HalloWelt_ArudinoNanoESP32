#include <Arduino.h>

unsigned long timer = 0;
const int LED_PIN = LED_BUILTIN;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  if (millis() - timer > 500) {
    digitalWrite(LED_PIN, HIGH);
  }

  if (millis() - timer > 1000) {
    digitalWrite(LED_PIN, LOW);
    timer = millis();
  }

  // Schutz gegen millis()-Überlauf
  if (timer > millis()) {
    timer = 0;
  }
}
