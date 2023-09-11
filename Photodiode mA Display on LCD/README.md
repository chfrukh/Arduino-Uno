# Arduino Uno Project - Light Sensor

## Description

This Arduino Uno project reads light levels using an analog light sensor connected to pin A0 and displays the values on both the serial monitor and an LCD. It calculates illuminance (lux) based on the voltage reading from the sensor using a known sensitivity value.

**View the Project in Tinkercad:** [Tinkercad Project Link](https://www.tinkercad.com/things/d7gklC9wepQ-photodioad-ma-display-lcd)

## Table of Contents

- [Features](#features)
- [Prerequisites](#prerequisites)
- [Components](#components)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Features

- Measures light levels using an analog light sensor.
- Converts voltage readings to illuminance (lux).
- Displays sensor values on an LCD screen.
- Outputs data to the serial monitor.

## Prerequisites

- Arduino IDE installed.
- Arduino Uno board.
- Light sensor (with known sensitivity in V/lux).
- LCD module.
- Jumper wires.

## Components

- Arduino Uno.
- Light sensor.
- LCD module.
- Jumper wires.

## Installation

1. Connect the light sensor as follows:
   - VCC to 5V on Arduino.
   - GND to GND on Arduino.
   - Signal to A0 on Arduino.
2. Connect an LCD module using pins `rs`, `en`, `d4`, `d5`, `d6`, `d7`, and `v0` (if adjustable contrast).
3. Upload the provided Arduino sketch (code) to the Arduino Uno board using the Arduino IDE.

## Usage

1. Open the Arduino IDE and upload the provided sketch.
2. Open the Serial Monitor to view light sensor readings and calculated illuminance.
3. The LCD will display sensor values, voltage, and illuminance.
4. Illuminance is calculated based on the sensitivity value provided in the code.
5. Adjust the sensitivity value as needed for accurate illuminance measurements.

## Contributing

Contributions to this project are welcome! Please follow these guidelines:

- Fork the repository.
- Create a new branch for your feature or bug fix.
- Make your changes and test thoroughly.
- Create a pull request with a clear description of your changes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Developed by [Your Name](https://github.com/chfarrukh).

Feel free to adapt this markdown file for your specific Arduino Uno project and include your Tinkercad project link. This allows others to easily access and interact with your project in Tinkercad.
