#include <Arduino.h>

#include "utils.h"
#include "imxrt1062_registers.h"

int main_init();
int main_loop();

int main() {
    if (!main_init()) {
        Serial.printf("Failed to initialize\n");
        while (1);
    }

    while (1) {
        main_loop();
    }

    return 0;
}

int main_init() {
    Serial.begin(115200);
    Serial.printf("Hello, world!\n");

    pinMode(13, OUTPUT);
    // __disable_irq();
    return 1;
}

int main_loop() {
    Serial.printf("Looping...\n");
    uint32_t start = micros();

    diagnostic_blink();

    Serial.printf("ARM_DWT_CYCCNT: %u\n", ARM_DWT_CYCCNT);

    Serial.printf("%lu\n", micros() - start);
    return 1;
}