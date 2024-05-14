#include <Arduino.h>

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
    return 1;
}

int main_loop() {
    Serial.printf("Looping...\n");
    delay(1000);
    return 1;
}