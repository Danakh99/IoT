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
```
4. Open the project folder in VSCode.

5. Open the project you want to work on (e.g., `blink`) and build/upload using PlatformIO.

## Usage

### Blink Project

This project blinks an LED connected to GPIO 5 of the ESP32.

#### Wiring Diagram

![Blink Project Wiring](https://github.com/user-attachments/assets/1304b146-fe7c-4843-9cdf-33bb722adcd7)

- Connect the LED's positive (long) leg to GPIO 2 on the ESP32 through a 220 Ω resistor.

- Connect the LED's negative (short) leg to the GND pin of the ESP32.

#### Running the Code

- Upload the code located in `/blink/src/main.cpp` via PlatformIO.

- After uploading, the LED should blink on and off at 1-second intervals.

### Connect to WiFi

This project demonstrates how to connect your ESP32 to a Wi-Fi network using the **WiFi.h** library.

#### Code Overview

- **WiFi.mode(WIFI_STA)** sets the ESP32 to station mode (connect to an existing network rather than creating one).
- **WiFi.begin()** starts the connection process using your network SSID and password.
- The `while` loop waits until the ESP32 is connected or until the timeout is reached.
- On success, the ESP32 prints its local IP address to the serial monitor; on failure, it prints `"Failed!"`.

#### Running the Code

1. Replace `WIFI_NETWORK` and `WIFI_PASSWORD` with your own network credentials in:
   ```cpp
   #define WIFI_NETWORK "YourNetworkName"
   #define WIFI_PASSWORD "YourNetworkPassword"
   ```

⚠️ WiFi Connection Notes:

- Upload the code located in `/wifi/src/main.cpp` via PlatformIO.
- Open the Serial Monitor in VSCode (baud rate 115200).
- You should see connection progress dots (.....) followed by either:
    - Connected: <your_IP> on success.
    - Failed! if the timeout was reached without connecting.
    - Default timeout is 20 seconds (change WIFI_TIMEOUT_MS if needed).
    - Ensure you are connecting to a 2.4 GHz network; ESP32 does not support 5 GHz.



## Contact

For questions or suggestions, please contact me on LinkedIn or by email:

[🔗 LinkedIn](https://www.linkedin.com/in/dana-alkhatib99/)  
✉️ [Email](mailto:alkhatib.dana99@gmail.com)

