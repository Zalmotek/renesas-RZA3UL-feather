# Zalmotek RZA3UL Feather Serial

A UART communication example for the Zalmotek RZA3UL Feather board powered by Renesas RZA3UL microprocessor.

## Overview

This project demonstrates UART serial communication functionality on the Zalmotek RZA3UL Feather board. It shows how to initialize the UART peripheral, send and receive data, and handle serial communication efficiently using Renesas technology.

## Hardware Requirements

- Zalmotek RZA3UL Feather board
- USB to UART adapter or device with serial communication capability
- USB-C cable for power
- Jumper wires for connections

## Software Requirements

- e² studio IDE
- FSP (Flexible Software Package)
- GNU ARM toolchain
- Terminal emulator software (e.g., PuTTY, Tera Term)

## Features

- UART initialization and configuration
- Serial data transmission
- Serial data reception
- Interrupt-driven UART handling
- Example communication protocol

## Code Functionality

The main application:
- Initializes the UART peripheral on the RZA3UL chip
- Configures the baud rate, data bits, stop bits, and parity settings
- Implements transmission and reception buffers
- Provides interrupt handlers for efficient communication
- Demonstrates a simple command-response protocol

## Getting Started

### Setup

1. Connect your Zalmotek RZA3UL Feather board to your computer via USB-C
2. Connect the UART pins from the board to your USB-to-UART adapter
3. Open e² studio IDE and import the project
4. Build the project using the GNU ARM toolchain
5. Flash the program to your RZA3UL Feather board
6. Open your terminal emulator and connect to the appropriate COM port

### Configuration

Set your terminal emulator with these parameters:

```
Baud rate: 115200
Data bits: 8
Stop bits: 1
Parity: None
Flow control: None
```

## Project Structure

- `src/`: Contains the main application source files
- `ipl/`: Initial Program Loader for the RZA3UL
- `script/`: Build and configuration scripts
- `.settings/`: IDE configuration files
- `configuration.xml`: Project configuration

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Additional Resources

- [Zalmotek Website](https://zalmotek.com)
- [Zalmotek RZA3UL Website](https://zalmotek.com/products/RZA3UL-Feather-SoM/)
