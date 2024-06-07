# Motion-Activated Relay Control with Arduino

## Description

This project demonstrates how to use an Arduino to control a relay based on input from a PIR (Passive Infrared) motion sensor. The system turns on the relay when motion is detected and keeps it on for a specified debounce delay period before turning it off.

## Components Needed

1. **Arduino UNO**
2. **Relay Module**
3. **PIR Motion Sensor**
4. **Breadboard**
5. **Jumper Wires**

## Instructions

### Connecting the Components

1. **Relay Module to Arduino:**
   - Connect the relay pin to digital pin 8 on the Arduino.
   - Connect the VCC and GND of the relay to 5V and GND on the Arduino.

2. **PIR Motion Sensor to Arduino:**
   - Connect the output pin of the PIR sensor to digital pin 2 on the Arduino.
   - Connect the VCC and GND of the PIR sensor to 5V and GND on the Arduino.

### Upload the Code and Observe the Data

1. **Load the Program:**
   - Open the Arduino IDE and paste the provided code.
   - Select the correct board and port in the Arduino IDE.
   - Upload the program to the Arduino.

2. **Monitor the Output:**
   - Open the Serial Monitor in the Arduino IDE to observe the status messages.
   - The relay will turn on when motion is detected and turn off after the debounce delay.

## Project Operation

- **Initialization:**
  - The relay is initialized to the off state (HIGH).
  - The PIR sensor is set as an input.

- **Motion Detection:**
  - An interrupt is attached to the PIR sensor to detect motion.
  - When motion is detected, the relay is turned on, and a timer starts.
  - The relay turns off after the specified debounce delay if no further motion is detected.

- **Serial Output:**
  - The Serial Monitor displays "Motion detected", "ON", and "OFF" messages to indicate the relay status.

## Applications

1. **Security Systems:** Automated lighting or alarms triggered by motion.
2. **Home Automation:** Energy-saving systems that turn on devices only when motion is detected.
3. **DIY Projects:** Interactive projects requiring motion detection and control mechanisms.

## Support

For any issues or further assistance, please contact us:

- 🌐 [Projects Learner](https://projectslearner.com)
- 📧 Email: projectslearner@gmail.com
- 📸 Instagram
- 📘 Facebook
- ▶️ YouTube
- 📘 LinkedIn

Made for you with ❣️ from ProjectsLearner.