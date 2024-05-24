#ifndef BUFFCAN_DEBUG_H
#define BUFFCAN_DEBUG_H

#include <Arduino.h>

void diagnostic_blink() {
    if (millis() % 1000 < 500) {
        digitalWriteFast(LED_BUILTIN, HIGH);
    } else {
        digitalWriteFast(LED_BUILTIN, LOW);
    }
}

#endif  // BUFFCAN_DEBUG_H