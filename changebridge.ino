void setup() {
  // Configure pins 1, 2, 3, and 4 as OUTPUTs
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // Turn ON pins 1 and 3
  digitalWrite(1, HIGH);
  digitalWrite(3, HIGH);

  // Wait for 1 second
  delay(1000);

  // Turn OFF pins 1 and 3
  digitalWrite(1, LOW);
  digitalWrite(3, LOW);

  // Turn ON pins 2 and 4
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);

  // Wait for 1 second
  delay(1000);
}
