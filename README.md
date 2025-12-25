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

## Project Importance
This project demonstrates the practical implementation of **IoT-enabled embedded systems** by integrating sensors, motor control, cloud communication, and real-time data visualization. It highlights how environmental data can be collected, transmitted securely, and monitored remotely using modern IoT technologies.

The project is important because it reflects real-world applications such as **environment monitoring**, **smart agriculture**, and **autonomous robotic systems**. It also showcases the use of **MQTT**, an industry-standard lightweight communication protocol widely adopted in IoT solutions, making the project relevant to current industrial applications.

---

## Learning Outcomes
Through this project, I gained hands-on experience in developing a complete **end-to-end IoT system**. I learned how to interface environmental sensors with the ESP32, control motors using a motor driver, and establish secure WiFi-based communication with a cloud MQTT broker.

I also learned to implement **MQTT over TLS**, handle real-time data publishing, debug connectivity issues, and visualize live data using a web-based dashboard. Additionally, this project strengthened my understanding of **embedded programming**, **hardware–software integration**, and **system-level debugging**, which are essential skills for an Embedded Software or IoT Engineer.

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
