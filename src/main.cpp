#include <Arduino.h>


void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

void loop() {
    digitalWrite(LED_BUILTIN, true);
    Serial.println("LED = OFF");
    delay(1000);

    digitalWrite(LED_BUILTIN, false);
    Serial.println("LED = ON");
    delay(1000);
}

void test()
{
  Serial.println(__func__);
}