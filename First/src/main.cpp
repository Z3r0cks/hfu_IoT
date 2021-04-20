#include <Arduino.h>
// #include <wifi_connection.h>

#define LED 15
#define TOUCH 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  // // initWifi();
  // // checkWifi();
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10);
  if (touchRead(TOUCH) <= 40 ) {
    digitalWrite(LED, 1);
  } else 
    digitalWrite(LED, 0);
}