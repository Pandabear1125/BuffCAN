#pragma once

#include <Arduino.h>

void diagnostic_blink() {
    if (millis() % 1000 < 500) {
        digitalWrite(LED_BUILTIN, HIGH);
    } else {
        digitalWrite(LED_BUILTIN, LOW);
    }
}