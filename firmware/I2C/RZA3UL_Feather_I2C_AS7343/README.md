# Zalmotek RZA3UL Feather I2C AS7343

A spectral sensor application demonstrating I2C communication with the AS7343 14-channel spectral sensor powered by Renesas RZA3UL microcontroller.

## Overview

This project implements I2C communication between a Zalmotek RZA3UL Feather board and an AMS OSRAM AS7343 spectral sensor. The application reads spectral data from the sensor across multiple wavelengths (415nm-680nm) and outputs the readings via serial communication.

## Hardware Requirements

- Zalmotek RZA3UL Feather board 
- AMS OSRAM AS7343 14-channel spectral sensor
- USB cable for power and programming
- Jumper wires for I2C connections

## Software Requirements

- e² studio IDE
- Renesas FSP (Flexible Software Package)
- Serial terminal application (115200 baud)

## Features

- I2C communication with AS7343 spectral sensor
- Configurable sensor parameters (integration time, gain, LED control)
- Real-time reading of 10 spectral channels
- Serial output of sensor data at 1Hz
- Support for both F1-F4 and F5-F8 channel configurations

## Code Functionality

The main application:
- Initializes I2C communication with the AS7343 sensor
- Configures sensor parameters (ATIME=100, ASTEP=999, GAIN=256X)
- Continuously reads spectral data from all channels
- Outputs formatted data over serial at 115200 baud
- Displays readings for specific wavelengths (415nm, 445nm, 480nm, 515nm, 555nm, 590nm, 630nm, 680nm)
- Provides Clear and NIR channel readings

## Getting Started

### Setup

1. Connect the AS7343 sensor to the RZA3UL Feather board's I2C pins
2. Import the project into e² studio
3. Build the project
4. Flash the firmware to the RZA3UL Feather board
5. Open a serial terminal at 115200 baud to view sensor data

### Configuration

Modify sensor parameters in hal_entry.cpp to adjust sensor behavior:

```c
// Set integration time (0-255)
as7343.setATIME(100);

// Set integration steps (0-65535)
as7343.setASTEP(999);

// Set gain (AS7343_GAIN_0_5X to AS7343_GAIN_2048X)
as7343.setGain(AS7343_GAIN_256X);

// Enable/disable the LED
//as7343.enableLED(true);
//as7343.setLEDCurrent(15);
```

## Project Structure

- `src/hal_entry.cpp`: Main application code
- `src/AMS_OSRAM_AS7343.h`: Sensor driver implementation
- `src/Adafruit_I2CDevice.h`: I2C communication library
- `src/Wire.h`: I2C communication abstractions

## License

This software is provided under the license terms of the repository.

## Additional Resources

- [Zalmotek Website](https://zalmotek.com)
- [Zalmotek RZA3UL Website](https://zalmotek.com/products/RZA3UL-Feather-SoM/)