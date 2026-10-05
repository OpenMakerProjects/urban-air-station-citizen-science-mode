#include "Particle.h"

SYSTEM_THREAD(ENABLED);
constexpr pin_t SENSOR_PIN = A0;
constexpr pin_t OUTPUT_PIN = D7;
constexpr float THRESHOLD = 0.49f;
unsigned long lastSample = 0;

void setup() {
  pinMode(OUTPUT_PIN, OUTPUT);
  digitalWrite(OUTPUT_PIN, LOW);
  Serial.begin(115200);
}

void loop() {
  if (millis() - lastSample < 1000) return;
  lastSample = millis();
  const float score = constrain(analogRead(SENSOR_PIN) / 4095.0f, 0.0f, 1.0f);
  const bool active = score >= THRESHOLD;
  digitalWrite(OUTPUT_PIN, active ? HIGH : LOW);
  char payload[160];
  snprintf(payload, sizeof(payload), "{\"project_id\":204,\"score\":%.3f,\"active\":%s}", score, active ? "true" : "false");
  Serial.println(payload);
  if (Particle.connected()) Particle.publish("project-telemetry", payload, PRIVATE);
}
