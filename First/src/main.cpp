#include <Arduino.h>
#include <wifi_connection.h>

#define LED 4
#define TOUCH 0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  // initWifi();
  // checkWifi();
  pinMode(LED, OUTPUT);
  digitalWrite(LED, 1);
}

void loop() {
  // put your main code here, to run repeatedly:
  // delay(100);
  // if (touchRead(TOUCH) <= 40 ) {
  //   digitalWrite(LED, 1);
  // } else 
  //   digitalWrite(LED, 0);
}