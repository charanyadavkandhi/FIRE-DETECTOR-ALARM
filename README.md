# 🔥 Fire Detector Alarm

## Project Overview
The Fire Detector Alarm is an Arduino-based safety system designed to detect the presence of fire using a flame sensor. When a flame is detected, the system activates a buzzer and a red LED to alert nearby people. Under normal conditions, a green LED remains ON, indicating a safe environment.

This project demonstrates the use of sensors and embedded systems for real-time fire detection and safety applications.

---

## Components Used

- Arduino UNO
- Flame Sensor Module
- Buzzer
- Red LED
- Green LED
- Connecting Wires
- USB Cable / Power Supply

---

## Working Principle

1. The flame sensor continuously monitors the surroundings.
2. Arduino reads the sensor output.
3. If no flame is detected:
   - Green LED turns ON
   - Red LED remains OFF
   - Buzzer remains OFF
4. If a flame is detected:
   - Red LED turns ON
   - Green LED turns OFF
   - Buzzer turns ON to alert users

---

## Circuit Connections

| Component | Arduino Pin |
|-----------|------------|
| Flame Sensor | A0 |
| Buzzer | 13 |
| Green LED | 8 |
| Red LED | 9 |

---

## Arduino Code

The project code is available in:

`Fire_Detector_Alarm.ino`

---

## Applications

- Home Fire Safety Systems
- Laboratories
- Industrial Safety Monitoring
- Educational Arduino Projects
- Small Office Safety Systems

---

## Features

- Real-time flame detection
- Low-cost implementation
- Easy to build and use
- Instant audio and visual alerts
- Arduino-based automation

---

## Team Members

- Kandhi Charan Yadav
- Nallala Madhuvani
- Bethoju Tejaswi
- Thakkalapelly Abhiram
- Ameda Rohith

---

## Project Report

Detailed documentation is available in:

📄 `FIRE_DETECTOR_ALARM.pdf`

---

## License

This project is developed for educational and learning purposes.
