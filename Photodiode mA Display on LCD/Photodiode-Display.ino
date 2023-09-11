#include <LiquidCrystal.h>

// Define the pins for the LCD module
int rs = 3, en = 4, d4 = 5, d5 = 6, d6 = 7, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Replace with the actual sensitivity of your light sensor in V/lux
float sensitivity = 0.01; // Example sensitivity (V/lux)

void setup() {
  // Initialize serial communication at a baud rate of 9600
  Serial.begin(9600);

  // Initialize the LCD module with 16 columns and 2 rows
  lcd.begin(16, 2);
}

void loop() {
  // Set the cursor to the top left corner of the LCD
  lcd.setCursor(0, 0);

  // Read the analog value from pin A0
  int anaValue = analogRead(A0);

  // Convert the analog value to voltage (assuming a 5V reference)
  float voltage = (anaValue * 5.0) / 1024.0;

  // Print the analog value and voltage to the serial monitor
  Serial.print(anaValue);
  Serial.print(" ");
  Serial.print(voltage, 2); // Display voltage with two decimal places
  Serial.print(" V ");

  // Calculate lux based on voltage and sensitivity
  float lux = voltage / sensitivity;

  // Print lux value to the serial monitor
  Serial.print(lux, 2); // Display lux with two decimal places
  Serial.println(" Lux");

  // Clear the LCD screen
  lcd.clear();

  // Display analog value and voltage on the first line of the LCD
  lcd.print(anaValue);
  lcd.print(" ");
  lcd.print(voltage, 2); // Display voltage with two decimal places
  lcd.print("V ");

  // Set the cursor to the second line of the LCD
  lcd.setCursor(0, 1);

  // Display lux value on the second line of the LCD
  lcd.print(lux, 2); // Display lux with two decimal places
  lcd.print(" Lux");

  // Wait for 2 seconds before repeating the loop
  delay(2000);
}
