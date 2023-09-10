// Define the echo and trig pins for HC-SR04 ultrasonic sensor
#define echoPin 2   // Connect to Echo pin of HC-SR04
#define trigPin 3   // Connect to Trig pin of HC-SR04

// Variables to store time and distance measurements
long duration;
int distance;

void setup()
{
  // Set the trigPin as an OUTPUT and echoPin as an INPUT
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(11, OUTPUT); // Set pin 11 as an OUTPUT to control an LED

  // Initialize serial communication with a baud rate of 9600
  Serial.begin(9600);

  // Print a message to the serial monitor
  Serial.println("Distance measurement using Arduino Uno.");
  delay(500);
}

void loop()
{
  // Turn off the trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Turn on the trigger to generate an ultrasonic pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  // Turn off the trigger to stop the pulse
  digitalWrite(trigPin, LOW);

  // Measure the time it takes for the pulse to return
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters using the speed of sound (approx. 0.0344 cm/us)
  distance = duration * 0.0344 / 2;

  // Convert distance to inches and feet
  float inch = distance / 2.54;
  float ft = inch / 12;

  // Print distance measurements to the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm ");
  Serial.print(inch);
  Serial.print(" Inches ");
  Serial.print(ft);
  Serial.println(" Foot");
  delay(100);

  // Check the distance and take appropriate action
  if ((ft > 5) && (ft <= 10)) {
    Serial.println("Object Ahead");
    digitalWrite(11, HIGH); // Turn on an LED on pin 11
    delay(500);
    digitalWrite(11, LOW); // Turn off the LED
    delay(1000);
  } else if (ft <= 5) {
    Serial.println("Dangerous");
    digitalWrite(11, HIGH); // Turn on an LED on pin 11
  } else {
    Serial.println("Safe");
    digitalWrite(11, LOW); // Turn off the LED
  }
}
