# Zalmotek RZA3UL Feather Blink

A simple LED blinking example for the Zalmotek RZA3UL Feather board powered by Renesas R9A07G063U01GBG microcontroller.

## Overview

This project demonstrates a basic LED blinking functionality on the Zalmotek RZA3UL Feather board. It uses the onboard LEDs to create a visual indicator by toggling them at a regular interval. The project showcases basic GPIO control using the Renesas RZA3UL microcontroller.

## Hardware Requirements

- Zalmotek RZA3UL Feather board
- USB cable for power and programming

## Software Requirements

- Renesas e² studio IDE
- GCC ARM A-Profile AArch64 Toolchain (10.3.1.20210621)
- Renesas FSP (Flexible Software Package) version 2.0.1

## Features

- Simple LED blinking at 200ms intervals
- Demonstrates GPIO pin configuration and control
- Shows how to use the BSP delay functionality
- Minimal code example for RZA3UL hardware

## Code Functionality

The main application:
- Initializes the IOPORT for pin access
- Enables pin access with R_BSP_PinAccessEnable()
- Sets up a continuous loop that toggles LED states between HIGH and LOW
- Uses a 200ms delay between state changes for visible blinking
- Properly configures the MMU during system startup

## Getting Started

### Setup

1. Connect your Zalmotek RZA3UL Feather board to your computer via USB
2. Open the project in e² studio
3. Build the project
4. Flash the compiled binary to the board
5. The onboard LEDs should begin blinking with a 200ms interval

### Configuration

The LED pin configuration is handled by the BSP:

```c
// Access the LED via the BSP LED structure
bsp_leds_t leds = g_bsp_leds;

// Toggle LED states
for (uint32_t i = 0; i < leds.led_count; i++) {
    uint32_t pin = leds.p_leds[i];
    R_BSP_PinWrite((bsp_io_port_pin_t) pin, pin_level);
}
```

## Project Structure

- `src/hal_entry.cpp`: Main application code with the LED blinking logic
- `src/mmu_page_table.c`: MMU configuration for the RZA3UL
- `src/sections.c`: Memory section definitions
- `configuration.xml`: Project configuration file

## License

[License information to be added]

## Additional Resources

- [Zalmotek Website](https://zalmotek.com)
- [Zalmotek RZA3UL Website](https://zalmotek.com/products/RZA3UL-Feather-SoM/)