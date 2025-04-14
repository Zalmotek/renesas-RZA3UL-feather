# Zalmotek RZA3UL Feather SD Card

An SD Card interface implementation for the Zalmotek RZA3UL Feather board powered by Renesas RZA3UL MPU.

## Overview

This project provides SD Card functionality for the Zalmotek RZA3UL Feather board. It enables data storage and retrieval using the onboard SD Card slot, leveraging the powerful Renesas RZA3UL microprocessor unit.

## Hardware Requirements

- Zalmotek RZA3UL Feather board
- Micro SD Card
- USB-C cable for power and programming

## Software Requirements

- e² studio IDE
- Renesas FSP (Flexible Software Package)
- GCC ARM Embedded toolchain

## Features

- FAT filesystem support
- High-speed data transfer
- File read/write operations
- Directory management capabilities
- Error handling and recovery

## Code Functionality

The main application:
- Initializes the SD Card interface using the SPI peripheral
- Mounts the FAT filesystem on the SD Card
- Provides file operations (create, read, write, delete)
- Handles SD Card insertion/removal events
- Uses FreeRTOS for efficient resource management

## Getting Started

### Setup

1. Insert a formatted Micro SD Card into the RZA3UL Feather's SD Card slot
2. Connect the board to your computer via USB-C
3. Open the project in e² studio
4. Build and flash the firmware
5. Access the SD Card functionality through the application

### Configuration

Use the following configuration to customize SD Card operations:

```c
// Example configuration settings
#define SD_CARD_SPI_CHANNEL     0
#define SD_CARD_BLOCK_SIZE      512
#define MAX_FILES_OPEN          4
```

## Project Structure

- `src/`: Source code files
- `inc/`: Header files
- `config/`: Configuration files
- `lib/`: Library dependencies
- `doc/`: Documentation

## License

Copyright (c) 2023 Zalmotek. All rights reserved.

## Additional Resources

- [Zalmotek Website](https://zalmotek.com)
- [Zalmotek RZA3UL Website](https://zalmotek.com/products/RZA3UL-Feather-SoM/)