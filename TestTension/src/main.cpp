#include <Arduino.h>

#define STEP 8
#define DIR 9

#define up_time_us 100
#define rest_time_ms 2

int distance_step = 0;

void setup() {
  Serial.begin(115200);
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
  digitalWrite(DIR, HIGH);
}

void loop() {
  digitalWrite(STEP, HIGH);
  delayMicroseconds(up_time_us);
  digitalWrite(STEP, LOW);
  delay(rest_time_ms);
  distance_step++;
  Serial.println(distance_step);
  //read sensor
}