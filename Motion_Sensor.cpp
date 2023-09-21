#include <Adafruit_SSD1306.h>

// Define the screen dimensions and OLED reset pin
#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

// Create an instance of the Adafruit SSD1306 display
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Define the PIR sensor pin
int pirPin = 2; // You can change this to the pin you've connected your PIR sensor to

void setup() {
  // Initialize the serial communication for debugging
  Serial.begin(9600);

  // Initialize the OLED display
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  display.display(); // Display initialization
  delay(20);

  pinMode(pirPin, INPUT); // Set the PIR sensor pin as INPUT

  display.clearDisplay(); // Clear the display
  display.display(); // Show the cleared display
  delay(20);
}

void loop() {
  // Read the state of the PIR sensor
  int pirState = digitalRead(pirPin);

  if (pirState == HIGH) {
    // Motion detected, display a message on the OLED
    display.clearDisplay();
    display.setTextSize(2);
    display.setTextColor(WHITE);
    display.setCursor(10, 10);
    display.println("Motion Detected");
    display.display();
    Serial.println("Motion Detected");
    delay(2000); // Display the message for 2 seconds
  } else {
    // No motion, clear the display
    display.clearDisplay();
    display.display();
  }

  // Your other code here (e.g., additional functionality)
}
