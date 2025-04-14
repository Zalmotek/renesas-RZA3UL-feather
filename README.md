# Renesas RZA3UL Feather SoM 

Welcome to the <a href="https://zalmotek.com/products/RZA3UL-Feather-SoM/">Renesas RZA3UL Feather SoM</a> GitHub repository!

Here you'll find all the resources you need to get up and running quickly.

## 🪶 What is the RZA3UL Feather SoM?

The <a href="https://www.renesas.com/us/en/products/microcontrollers-microprocessors/rz-mpus/rza3ul-arm-cortex-a55-based-high-performance-mpu">Renesas RZ/A3UL</a> allows you to achieve the full potential of a real-time operating system (RTOS) while leveraging the performance boost provided by the 64-bit Arm® Cortex®-A55 CPU core with a maximum operating frequency of 1 GHz. Integrating the 512Mbit OctaFlash and 512Mbit OctaRAM we conveniently packaged them in a Feather format.

Besides the processor, the Feather SoM contains the classic Feather features: digital GPIOs, I2C and SPI communication pins, UART pins, a LiPo battery power plug, and the USB programming port. The SoM also features a USB Type-C for powering the board and for USB debug upload.

<p align="center">
  <img src="images/Feather-RZA3UL-pinout.png" height="500">
  <img src="images/Feather-RZA3UL-BD.png" height="500">
</p>

## 🐣🏁 Quick Start Guide

### 🔌 Hardware Requirements
- USB-C cable
- JTAG Debugger, such as the <a href="https://www.segger.com/products/debug-probes/j-link/">SEGGER J-Link</a>

### 💻 Development Environment Setup

#### Installing Development Tools

The e² studio IDE from Renesas is a comprehensive, user-friendly platform designed to streamline embedded application development. It supports Renesas microcontrollers and combines powerful features with an intuitive interface for coding, debugging, and project management.

First of all, download the latest release of the Flexible Software Package with the e²studio platform installer from the following <a href="https://www.renesas.com/us/en/software-tool/e2studio-information-rz-family">link</a>, according to your OS.

The installer will guide you through the necessary steps. After the installation is finished, launch Renesas e² studio and set up your workspace. This will be the directory where all your projects will be stored.

You will also need to install the J-Link Software pack from <a href="https://www.segger.com/products/debug-probes/j-link/technology/flash-download/">here</a>.

#### Running your first project

Once you have all the tools installed, follow <a href="https://github.com/Zalmotek/renesas-RZA3UL-feather/tree/main/firmware/Blink">this</a> guide to learn how to import, build, and run a project in the e² studio IDE. 

---
Thank you for choosing the Renesas RZA3UL Feather SoM! 

We can't wait to see what amazing projects you'll create with it! 💻✨
