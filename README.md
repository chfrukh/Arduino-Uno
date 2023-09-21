# Arduino-Uno
# Arduino PIR Motion Sensor with OLED Display

This Arduino project demonstrates how to interface a Passive Infrared (PIR) motion sensor with an Arduino and display motion detection messages on an OLED display.

## Hardware Requirements

- Arduino board (e.g., Arduino Uno)
- PIR motion sensor
- OLED display (128x64 pixels, SSD1306)
- Jumper wires
- Breadboard

## Wiring

- Connect the PIR motion sensor's output pin to a digital input pin on the Arduino (e.g., pin 2).
- Connect the OLED display to the Arduino using the I2C (SDA and SCL) pins.
- Power the PIR motion sensor and OLED display as required (usually 5V or 3.3V).

## Tinkercad Simulation

You can simulate this project in Tinkercad by following this [Tinkercad project link](https://www.tinkercad.com/things/440AyqM16AR).

## Installation

1. Install the required libraries:
   - Adafruit GFX Library
   - Adafruit SSD1306 Library

2. Upload the Arduino sketch (`motion_sensor_oled.ino`) to your Arduino board using the Arduino IDE.

## Usage

1. When motion is detected by the PIR sensor, the OLED display will show the message "Motion Detected."

2. When there is no motion, the OLED display will remain clear.

3. The project also outputs "Motion Detected" messages to the Arduino's serial monitor for debugging.

## Author

This project was created by [Your Name]. Feel free to reach out for questions or improvements.

## License

This project is open-source and available under the [MIT License](LICENSE).

## Additional Notes

- You can customize the OLED display messages and behavior in the Arduino sketch.

Happy making!
