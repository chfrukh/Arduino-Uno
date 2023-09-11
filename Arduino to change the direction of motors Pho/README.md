# Arduino Light Sensor Project

## Description

This Arduino project uses a light-dependent resistor (LDR) to measure ambient light levels. Depending on the light level detected by the LDR, it controls two digital output pins (pin 11 and pin 12). The project is designed to respond to changes in light intensity.

**View the Project in Tinkercad:** [Tinkercad Project Link](https://www.tinkercad.com/things/f27oPOMUunu-arduino-to-change-the-direction-of-motors-photoresistor)

## Table of Contents

- [Features](#features)
- [Prerequisites](#prerequisites)
- [Components](#components)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Features

- Measures ambient light levels using a light-dependent resistor (LDR).
- Controls two digital output pins based on light intensity.
- Serial communication to monitor LDR readings.

## Prerequisites

- Arduino IDE installed.
- Arduino board (e.g., Arduino Uno).
- Light-dependent resistor (LDR).
- Two LEDs or other output devices.
- Jumper wires.

## Components

- Arduino board (e.g., Arduino Uno).
- Light-dependent resistor (LDR).
- Two LEDs (or other output devices).
- Jumper wires.

## Installation

1. Connect the LDR to analog pin A5.
2. Connect two LEDs to digital pins 11 and 12.
3. Upload the provided Arduino sketch (code) to the Arduino board using the Arduino IDE.

## Usage

1. Open the Arduino IDE and upload the provided sketch.
2. Open the Serial Monitor to view LDR readings.
3. The LEDs will respond to changes in light intensity:
   - When the light level is below the threshold, pin 12 LED turns on.
   - When the light level is above the threshold, pin 11 LED turns on.

## Contributing

Contributions to this project are welcome! Please follow these guidelines:

- Fork the repository.
- Create a new branch for your feature or bug fix.
- Make your changes and test thoroughly.
- Create a pull request with a clear description of your changes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Developed by [CH Farrukh Rafique](https://github.com/chfrukh).

Feel free to adapt this markdown file for your specific Arduino project and include your Tinkercad project link. This allows others to easily access and explore your project in Tinkercad.
