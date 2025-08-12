# ESP32 IoT Projects

## Table of Contents
- [Overview](#overview)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Contact](#contact)

## Overview
This repository contains a collection of ESP32 IoT projects designed for beginners and hobbyists.  
The projects demonstrate how to use the ESP32 microcontroller with tools like Blynk and IFTTT to build practical applications.  
Projects include basic LED blinking, motor control, WiFi connection, and more advanced projects like car control and plant monitoring.

## Requirements

### Hardware
- ESP32 Development Board  
- Breadboard  
- LED (5mm)  
- 220 Ω resistor  
- Jumper wires  

### Software
- Visual Studio Code  
- PlatformIO extension for VSCode  
- Arduino framework (installed via PlatformIO)  

## Getting Started

1. Install [Visual Studio Code](https://code.visualstudio.com/).  
2. Install the PlatformIO extension in VSCode from the Extensions marketplace.  
3. Clone this repository to your local machine:  
```bash
git clone https://github.com/Danakh99/IoT.git
Open the project folder in VSCode.

Open the project you want to work on (e.g., blink) and build/upload using PlatformIO.

Usage
Blink Project
This project blinks an LED connected to GPIO 2 of the ESP32.

Wiring Diagram


Connect the LED's positive (long) leg to GPIO 2 on the ESP32 through a 220 Ω resistor.

Connect the LED's negative (short) leg to the GND pin of the ESP32.

Running the Code
Upload the code located in /blink/src/main.cpp via PlatformIO.

After uploading, the LED should blink on and off at 1-second intervals.

Contact
For questions or suggestions, please contact Dana Alkhatib at danaalkhatib17@gmail.com.
