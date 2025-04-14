# Zalmotek RZA3UL Feather I2C

I2C communication example for the Zalmotek RZA3UL Feather board powered by Renesas RZA3UL MPU.

## Overview

This project demonstrates I2C communication on the Zalmotek RZA3UL Feather board featuring Renesas RZA3UL MPU. It provides a simple implementation for communicating with I2C-based sensors and peripherals using the board's I2C interface.

## Hardware Requirements

- Zalmotek RZA3UL Feather board
- I2C-compatible sensor or peripheral device
- Jumper wires
- USB cable for power and programming

## Software Requirements

- Arm GNU Toolchain
- Renesas e² studio or compatible IDE
- Serial terminal application (PuTTY, TeraTerm, etc.)

## Features

- I2C master mode operation
- Configurable I2C clock frequency
- Read and write operations to I2C slave devices
- Error handling for I2C communication
- Serial console output for debugging

## Code Functionality

The main application:
- Initializes the I2C peripheral on the RZA3UL MPU
- Configures I2C pins and clock settings
- Implements read and write functions for I2C devices
- Handles communication errors and timeouts
- Provides debug output over serial connection

## Getting Started

### Setup

1. Connect your I2C device to the RZA3UL Feather board's I2C pins
2. Power the board via USB
3. Open the project in e² studio
4. Build and flash the project to the board
5. Open a serial terminal to view debug output

### Configuration

The I2C interface can be configured by modifying these parameters:

```c
// Example code snippet for configuring I2C
#define I2C_CLOCK_FREQ     400000  // 400kHz Fast mode
#define I2C_TIMEOUT_MS     100     // Timeout in milliseconds
```

## Project Structure

- `src/`: Contains the main source code files
- `ipl/`: Initial Program Loader files
- `script/`: Build and configuration scripts
- `rza_cfg.txt`: Configuration file for RZ/A3UL
- `.settings/`: IDE configuration files

## License

This project is provided as-is for demonstration purposes. For commercial use, please contact Zalmotek.

## Additional Resources

- [Zalmotek Website](https://zalmotek.com)
- [Zalmotek RZA3UL Website](https://zalmotek.com/products/RZA3UL-Feather-SoM/) 