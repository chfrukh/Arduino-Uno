void setup() {
  // Set pin 11 and pin 12 as OUTPUT pins
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  // Initialize serial communication at a baud rate of 9600
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from pin A5, which is connected to the LDR
  int vLDR = analogRead(A5);

  // Print the analog value to the serial monitor
  Serial.println(vLDR);

  // Check the light level
  if (vLDR < 500) {
    // If the LDR reading is less than 500 (low light), turn on pin 12 and turn off pin 11
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
  } else if (vLDR > 500) {
    // If the LDR reading is greater than 500 (bright light), turn on pin 11 and turn off pin 12
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
  }
}
