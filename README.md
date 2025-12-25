# ESP32 Smart Environment Monitoring Rover (MQTT)

This project is an ESP32-based smart rover for real-time environmental monitoring and cloud communication.  
It demonstrates hands-on skills in **Embedded Systems**, **IoT**, **WiFi networking**, and **MQTT-based cloud integration**, aimed at showcasing my capabilities as an aspiring Embedded Software / IoT Engineer.

---

## Features
- Temperature and humidity monitoring using DHT11  
- Obstacle detection using IR sensor  
- Secure MQTT communication with HiveMQ Cloud  
- WiFi-based data transmission  
- Autonomous motor movement demonstration  
- Serial Monitor debugging support  
- Modular and clean Arduino code for scalability  

---

## Hardware Required
- ESP32 DevKit  
- DHT11 Temperature & Humidity Sensor  
- IR Obstacle Sensor  
- L293D / Motor Driver Module  
- DC Motors  
- External power supply for motors  
- Jumper wires and breadboard  

---

## Connections

### Motor Driver Connections
| ESP32 Pin | Motor Driver Pin | Function |
|---------|-----------------|----------|
| 22 | EN | Enable |
| 27 | M1 | Motor 1 |
| 14 | M2 | Motor 1 |
| 12 | M3 | Motor 2 |
| 13 | M4 | Motor 2 |

### Sensor Connections
| ESP32 Pin | Sensor | Function |
|---------|--------|----------|
| 19 | DHT11 | Temperature & Humidity Data |
| 34 | IR Sensor | Obstacle Detection |

---

## MQTT Configuration
- Broker: HiveMQ Cloud  
- Protocol: MQTT over TLS  
- ESP32 Port: 8883  
- Topic: `rover/environment`

---

## How to Use
1. Upload the Arduino code to ESP32  
2. Open Serial Monitor at **115200 baud**  
3. Connect ESP32 to WiFi  
4. Monitor data using MQTT client or web dashboard  

---

## Applications
- Environmental monitoring  
- IoT-based robotic platforms  
- Smart agriculture  
- Academic mini/major projects  

---
## About Me
Hi! I’m **Ashwini Khambe**, a passionate **Electronics & Telecommunication Engineer** with a strong interest in **Embedded Systems**, **IoT**, and **Robotics**. I enjoy building practical projects that combine **hardware and software** to solve real-world problems.  

I am actively learning and applying skills in:
- **Microcontrollers & Embedded Programming** (ESP32, Arduino, C/C++)
- **Wireless Communication & IoT Protocols** (BLE, MQTT)
- **Sensors & Actuators Integration** (Motors, DHT, GPS)
- **Software Debugging & Optimization**

My goal is to secure a position as an **Embedded Software Engineer** or **IoT Developer**, where I can contribute to innovative projects while continuously learning new technologies.  

This project is part of my professional portfolio, demonstrating:
- Real-time BLE communication for motor control
- Practical embedded software development
- Ability to integrate hardware and software in an IoT environment


## Author
**Ashwini Khambe**  
Aspiring Embedded Software Engineer | IoT Enthusiast
