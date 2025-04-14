# Zalmotek RZA3UL Feather SPI Demo

An SPI communication demonstration for the Zalmotek RZA3UL Feather board powered by Renesas RZA3UL.

## Overview

This project demonstrates basic SPI communication functionality on the Zalmotek RZA3UL Feather board using Renesas RZA3UL microcontroller. It configures the SPI interface as a slave device that can receive and transmit data, with configurable timing and error handling capabilities.

## Hardware Requirements

- Zalmotek RZA3UL Feather board
- SPI master device (for testing communication)
- Optional: Serial connection for debugging output (115200 baud)

## Software Requirements

- e² studio IDE
- Renesas FSP (Flexible Software Package)
- ARM GCC toolchain

## Features

- SPI slave implementation with write/read capability
- Serial debug output for monitoring operation
- Error handling for SPI communication failures
- Configurable timing parameters
- Continuous operation with regular data polling

## Code Functionality

The main application:
- Initializes the SPI peripheral in slave mode
- Sets up a serial connection at 115200 baud for debugging
- Implements data transfer protocol with error detection
- Handles various SPI events (transfer complete, aborted)
- Uses callback functions for asynchronous communication
- Operates in a continuous loop with 1-second intervals

## Getting Started

### Setup

1. Connect the RZA3UL Feather board to your computer
2. Open the project in e² studio IDE
3. Build the project using the ARM GCC toolchain
4. Flash the binary to the RZA3UL Feather board
5. Connect the SPI master device to the appropriate pins

### Configuration

SPI configuration is handled through the FSP configurator. The default setup uses:

```c
// SPI initialization
err = R_RSPI_Open(&g_spi0_ctrl, &g_spi0_cfg);
```

## Project Structure

- `src/hal_entry.cpp`: Main application code with SPI implementation
- `src/SerialCompatibility.h`: Serial communication utilities
- `src/mmu_page_table.c`: Memory management configuration
- `src/sections.c`: Linker section definitions
- `src/syscalls.c`: System call implementations

## License

Proprietary - Zalmotek

## Additional Resources

- [Zalmotek Website](https://zalmotek.com)
- [Zalmotek RZA3UL Website](https://zalmotek.com/products/RZA3UL-Feather-SoM/)