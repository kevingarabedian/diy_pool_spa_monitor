# Arduino Pool Monitoring System

This is an Arduino-based pool monitoring system that can monitor the pH and chlorine levels in a pool and send the data to a mobile device or home automation system via Bluetooth or WiFi.

## Solution 1: Bluetooth Interface

This solution uses an Arduino board with built-in Bluetooth capabilities, such as the Arduino Nano 33 IoT or the Arduino MKR WiFi 1010, to read data from pH and chlorine sensors and send it via Bluetooth to a mobile device or home automation system.

### Bill of Materials

- Arduino Nano 33 IoT or Arduino MKR WiFi 1010 - $25
- Atlas Scientific EZO pH sensor - $50
- Atlas Scientific EZO chlorine sensor - $85
- Bluetooth module - $10
- Solar panel - $30
- Battery - $20
- Battery charging module - $5
- Enclosure - $10

Estimated total cost: $235

### Setup Instructions

1. Connect the pH and chlorine sensors to the Arduino board and Bluetooth module.
2. Upload the provided Arduino code to the board.
3. Connect the solar panel, battery, and battery charging module to the board.
4. Place the sensors and board in the enclosure.
5. Install the sensor in your pool and monitor the pH and chlorine levels from your mobile device or home automation system.

## Solution 2: WiFi Interface

This solution uses an Arduino board with an ESP8266 or ESP32 WiFi module to connect to a WiFi network and send data to a server or cloud service for monitoring.

### Bill of Materials

- Arduino Uno or Arduino Mega - $15
- Atlas Scientific EZO pH sensor - $50
- Atlas Scientific EZO chlorine sensor - $85
- ESP8266 or ESP32 WiFi module - $5
- Solar panel - $30
- Battery - $20
- Battery charging module - $5
- Enclosure - $10

Estimated total cost: $210

### Setup Instructions

1. Connect the pH and chlorine sensors to the Arduino board and WiFi module.
2. Upload the provided Arduino code to the board.
3. Connect the solar panel, battery, and battery charging module to the board.
4. Place the sensors and board in the enclosure.
5. Connect the WiFi module to your WiFi network and set up a server or cloud service to receive and store the data.
6. Install the sensor in your pool and monitor the pH and chlorine levels from your server or cloud service.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.

## Code Samples

The code samples for both solutions can be found in the `solution1.ino` and `solution2.ino` files in this repository. Copy the contents of the appropriate file and paste it into the Arduino IDE to upload it to your board.

## Getting Started

To use this project, follow these steps:

Purchase the required components listed in the bill of materials.
Set up your Arduino board and sensors according to the wiring diagram for your chosen solution.
Install the Arduino IDE and set up your board and port in the IDE.
Copy the code for your chosen solution from the solution1.ino or solution2.ino file in this repository.
Paste the code into the Arduino IDE and upload it to your board.
Install the mobile app or set up the server or cloud service to receive and store the data.
Monitor the pH and chlorine levels in your pool from your mobile device or server.
Note that additional configuration may be required for your specific mobile app or server/cloud service. Refer to the documentation for those products for more information.

## License
This project is licensed under the MIT License. See the LICENSE file for details.

## Acknowledgements
This project was inspired by the many DIY pool monitoring projects available online. Thanks to the open-source community for providing guidance and inspiration for this project.
