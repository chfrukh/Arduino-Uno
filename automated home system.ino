#include <DHT.h>

#define DHTPIN 2        // Digital pin connected to the DHT11 sensor
#define DHTTYPE DHT11   // Type of DHT sensor (DHT11 or DHT22)
#define MOTION_PIN 3    // Digital pin connected to the motion sensor
#define LIGHT_PIN 4     // Digital pin connected to the light relay
#define FAN_PIN 5       // Digital pin connected to the fan relay

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  pinMode(MOTION_PIN, INPUT);
  pinMode(LIGHT_PIN, OUTPUT);
  pinMode(FAN_PIN, OUTPUT);
  digitalWrite(LIGHT_PIN, LOW); // Turn off light initially
  digitalWrite(FAN_PIN, LOW);   // Turn off fan initially
  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();
  int motionDetected = digitalRead(MOTION_PIN);

  Serial.print("Temperature: ");
  Serial.println(temperature);
  Serial.print("Motion Detected: ");
  Serial.println(motionDetected);

  // Check temperature and control the fan
  if (temperature > 30.0) {
    digitalWrite(FAN_PIN, HIGH);  // Turn on fan if temperature is high
  } else {
    digitalWrite(FAN_PIN, LOW);   // Turn off fan if temperature is normal
  }

  // Check motion and control the lights
  if (motionDetected == HIGH) {
    digitalWrite(LIGHT_PIN, HIGH); // Turn on lights if motion is detected
    delay(60000);  // Keep lights on for 1 minute (adjust as needed)
    digitalWrite(LIGHT_PIN, LOW);  // Turn off lights after 1 minute
  }

  delay(5000); // Delay between sensor readings (adjust as needed)
}
