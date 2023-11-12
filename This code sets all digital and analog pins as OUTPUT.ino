void setup() {
  // Set all digital pins as OUTPUT
  for (int pin = 2; pin <= 13; ++pin) {
    pinMode(pin, OUTPUT);
  }

  // Set all analog pins as OUTPUT
  for (int pin = A0; pin <= A5; ++pin) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  // Toggle all digital pins
  for (int pin = 2; pin <= 13; ++pin) {
    digitalWrite(pin, HIGH);
    delay(500);
    digitalWrite(pin, LOW);
  }

  // Toggle all analog pins
  for (int pin = A0; pin <= A5; ++pin) {
    analogWrite(pin, 255);
    delay(500);
    analogWrite(pin, 0);
  }
}
