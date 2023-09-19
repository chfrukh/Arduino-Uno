#include <Adafruit_SSD1306.h>

// Define the screen dimensions and OLED reset pin
#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

// Create an instance of the Adafruit SSD1306 display
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

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

  display.clearDisplay(); // Clear the display
  display.drawPixel(10, 10, WHITE); // Draw a white pixel at (10, 10)
  display.display(); // Show the pixel on the display
  delay(20);

  display.invertDisplay(true); // Invert the display (temporary)
  delay(10);
  display.invertDisplay(false); // Restore normal display
  delay(10);
}

void loop() {
  // Print "Hello" on the OLED display
  display.clearDisplay(); // Clear the display
  display.setTextSize(2); // Set text size
  display.setTextColor(WHITE); // Set text color to white
  display.setCursor(10, 10); // Set the text cursor position
  display.println("Hello"); // Print "Hello" on the display
  display.display(); // Show the text on the display

  // Your other code here (e.g., sensor readings, additional functionality)
}
