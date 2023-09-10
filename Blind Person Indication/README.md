# Arduino Uno Project - Distance Measurement with Ultrasonic Sensor

## Description

This Arduino Uno project demonstrates how to use an HC-SR04 ultrasonic sensor to measure distances and provide feedback using an LED. The project calculates distances in centimeters, inches, and feet and performs different actions based on the measured distance.

**View the Project in Tinkercad:**[Blind Person Indication
](https://www.tinkercad.com/things/ii86fCvunSf).

## Table of Contents

- [Features](#features)
- [Prerequisites](#prerequisites)
- [Components](#components)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Features

- Measures distances using an HC-SR04 ultrasonic sensor.
- Converts distances to centimeters, inches, and feet.
- Provides feedback through an LED based on distance thresholds.

## Prerequisites

- Arduino IDE installed.
- Arduino Uno board.
- HC-SR04 Ultrasonic Sensor.
- LED and appropriate resistor.
- Jumper wires.

## Components

- Arduino Uno.
- HC-SR04 Ultrasonic Sensor.
- LED.
- Resistor (appropriate value for the LED).
- Jumper wires.

## Installation

1. Connect the HC-SR04 sensor as follows:
   - VCC to 5V on Arduino.
   - GND to GND on Arduino.
   - Trig to D3 on Arduino.
   - Echo to D2 on Arduino.
2. Connect an LED to a digital pin (e.g., D11) and GND with an appropriate resistor.
3. Upload the Arduino sketch (code) to the Arduino Uno board using the Arduino IDE.

## Usage

1. Open the Arduino IDE and upload the provided sketch.
2. Open the Serial Monitor to view distance measurements and feedback.
3. The LED will indicate the following conditions:
   - "Object Ahead" (5 to 10 feet).
   - "Dangerous" (less than or equal to 5 feet).
   - "Safe" (more than 10 feet).

## Contributing

Contributions to this project are welcome! Please follow these guidelines:

- Fork the repository.
- Create a new branch for your feature or bug fix.
- Make your changes and test thoroughly.
- Create a pull request with a clear description of your changes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- This project uses the [NewPing Library](https://github.com/teckel12/Arduino-NewPing) by Tim Eckel for the HC-SR04 sensor.
- Developed by [Ch Farrukh Rafique](https://github.com/chfrukh).

Feel free to adapt this markdown file for your specific Arduino Uno project and include your Tinkercad project link. This allows others to easily access and interact with your project in Tinkercad.
