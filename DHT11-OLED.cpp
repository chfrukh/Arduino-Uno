#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

// Define the pin connected to the DHT11 sensor and the sensor type
#define DHTPIN 2      // Digital pin connected to the DHT11 sensor
#define DHTTYPE DHT11 // Type of DHT sensor (DHT11 or DHT22)

// Create a DHT object
DHT dht(DHTPIN, DHTTYPE);

// Define the screen width and height for the OLED display
#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64

// Define the OLED reset pin
#define OLED_RESET     -1

// Create an Adafruit SSD1306 display object
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Define constants for animations
#define NUMFLAKES     10 

#define LOGO_HEIGHT   16
#define LOGO_WIDTH    16

// Logo bitmap for animation
static const unsigned char PROGMEM logo_bmp[] =
{ B00000000, B11000000,
  B00000001, B11000000,
  B00000001, B11000000,
  B00000011, B11100000,
  B11110011, B11100000,
  B11111110, B11111000,
  B01111110, B11111111,
  B00110011, B10011111,
  B00011111, B11111100,
  B00001101, B01110000,
  B00011011, B10100000,
  B00111111, B11100000,
  B00111111, B11110000,
  B01111100, B11110000,
  B01110000, B01110000,
  B00000000, B00110000 };

void setup() {
  // Start serial communication
  Serial.begin(9600);
  
  // Initialize the DHT sensor
  dht.begin();
  
  // Initialize the OLED display
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  
  // Initial display setup
  display.display();
  delay(20);
  
  display.clearDisplay();
  
  display.drawPixel(10, 10, WHITE);
  
  display.display();
  delay(20);
  
  // Invert display for a brief animation effect
  display.invertDisplay(true);
  delay(10);
  display.invertDisplay(false);
  delay(10);
}

void loop() {
  delay(2000); // Wait for 2 seconds between readings

  // Read temperature and humidity from the DHT sensor
  float temperature = dht.readTemperature(); // Read temperature in Celsius
  float humidity = dht.readHumidity();       // Read humidity in percentage

  // Print temperature and humidity values to the serial monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
  
  // Call the scrolltext function to display temperature and humidity on the OLED display
  scrolltext(temperature, humidity);
}

// Function to display temperature and humidity on the OLED display
void scrolltext(float temperature, float humidity) {
  display.clearDisplay();
  
  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.setCursor(10, 0);
  
  // Print temperature and humidity on the OLED display
  display.println(temperature);
  display.print(humidity);
  
  display.display();
}
