// Arduino Onboard LED Glowing Pattern Code

#define LED_BUILTIN 13  // Onboard LED pin

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    // Breathing Effect
    for (int i = 0; i < 256; i += 5) {
        analogWrite(LED_BUILTIN, i);
        delay(20);
    }
    for (int i = 255; i >= 0; i -= 5) {
        analogWrite(LED_BUILTIN, i);
        delay(20);
    }

    // Blinking Pattern
    for (int i = 0; i < 3; i++) {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(200);
        digitalWrite(LED_BUILTIN, LOW);
        delay(200);
    }

    // Fast Strobe Effect
    for (int i = 0; i < 10; i++) {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(50);
        digitalWrite(LED_BUILTIN, LOW);
        delay(50);
    }
}
