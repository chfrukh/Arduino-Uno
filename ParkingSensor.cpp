// Define pins for ultrasonic sensor
const int trigPin = 9;
const int echoPin = 10;

// Define pins for LEDs
const int redLED = 5;
const int yellowLED = 6;
const int greenLED = 7;

// Define buzzer pin
const int buzzerPin = 8;

// Define maximum and minimum parking distances (in centimeters)
const int maxDistance = 50; // Adjust this based on your specific needs
const int minDistance = 10; // Adjust this based on your specific needs

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Define pins as INPUT or OUTPUT
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Variables to store the duration and distance
  long duration;
  int distance;

  // Generate a trigger pulse to the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the time it takes for the pulse to bounce back
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters
  distance = duration * 0.034 / 2;

  // Print the distance for debugging
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check if the distance is within the acceptable range
  if (distance >= minDistance && distance <= maxDistance) {
    // Parking is allowed, show green LED
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    noTone(buzzerPin);
  } else if (distance < minDistance) {
    // Too close, show red LED and sound the buzzer
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);
    tone(buzzerPin, 1000); // Adjust the frequency as needed
  } else {
    // Getting closer, show yellow LED
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);
    noTone(buzzerPin);
  }

  // You can add additional logic here for more features or actions

  delay(500); // Add a delay to prevent rapid readings
}
