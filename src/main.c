#include <Arduino.h>

#include "debug.h"
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
	// allow a small wait for Serial to be displayed
	while (!Serial);
	
    Serial.printf("Hello, world!\n");

    pinMode(13, OUTPUT);
    // __disable_irq();
    return 1;
}

int main_loop() {
    diagnostic_blink();

    return 1;
}