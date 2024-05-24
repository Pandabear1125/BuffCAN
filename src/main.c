#include <Arduino.h>

#include "debug.h"
#include "imxrt1062_registers.h"

#include "buffcan.h"

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
	// pause until the Serial monitor is connected
	while (!Serial);

	BuffCAN_t can;
	can.bus = CAN1;

	buffcan_init(&can);
	
    Serial.printf("Hello, world!\n");

    pinMode(13, OUTPUT);

    return 1;
}

int main_loop() {
    diagnostic_blink();

    return 1;
}