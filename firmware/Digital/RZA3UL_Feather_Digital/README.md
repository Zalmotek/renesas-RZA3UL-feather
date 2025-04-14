# Zalmotek RZA3UL Feather Digital

A digital IO demonstration project for the Zalmotek RZA3UL Feather board powered by Renesas.

## Overview

This project demonstrates digital pin control on the Zalmotek RZA3UL Feather board featuring Renesas RZA3UL microcontroller. It initializes and controls multiple digital pins (D5, D6, D9, D10, D12, D13, D14), setting specific output levels to demonstrate GPIO functionality.

## Hardware Requirements

- Zalmotek RZA3UL Feather board
- USB cable for power and programming

## Software Requirements

- e² studio IDE
- FSP (Flexible Software Package)
- GCC ARM compiler

## Features

- Digital pin initialization and control
- Serial communication at 115200 baud
- Simple timer implementation using delay
- Pin state management (HIGH/LOW)

## Code Functionality

The main application:
- Initializes 7 digital IO pins (D5, D6, D9, D10, D12, D13, D14)
- Sets initial pin states (D5, D6, D9 to LOW; D10, D12, D13, D14 to HIGH)
- Configures serial communication at 115200 baud
- Implements a simple delay function
- Provides warm start functionality for MMU and IOPORT initialization

## Getting Started

### Setup

1. Clone or download this repository
2. Open the project in e² studio
3. Connect the Zalmotek RZA3UL Feather board via USB
4. Build the project
5. Flash the program to the board

### Configuration

Pin configuration can be modified in the hal_entry.cpp file:

```cpp
// Example digital pin configuration
R_IOPORT_PinWrite(&g_ioport_ctrl, d5, BSP_IO_LEVEL_LOW);
R_IOPORT_PinWrite(&g_ioport_ctrl, d6, BSP_IO_LEVEL_LOW);
```

## Project Structure

- `src/`: Source code files including main application
- `src/hal_entry.cpp`: Main application entry point
- `src/SerialCompatibility.h`: Serial communication interface
- `ipl/`: Initial Program Loader files
- `script/`: Build and configuration scripts

## License

[License information]

## Additional Resources

- [Zalmotek Website](https://zalmotek.com)
- [Zalmotek RZA3UL Website](https://zalmotek.com/products/RZA3UL-Feather-SoM/)