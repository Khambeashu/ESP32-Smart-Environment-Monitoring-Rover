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
- Topic:



---

## How It Works
1. ESP32 connects to WiFi  
2. Sensor data (temperature, humidity, IR status) is read periodically  
3. Data is published to HiveMQ Cloud using MQTT  
4. Motors perform predefined movement patterns  
5. Data can be monitored remotely using MQTT clients or a web dashboard  

---

## How to Use
1. Open the Arduino `.ino` file in Arduino IDE  
2. Install required libraries:
 - DHT Sensor Library  
 - PubSubClient  
3. Enter your **WiFi** and **MQTT credentials**  
4. Upload the code to the ESP32  
5. Open Serial Monitor at **115200 baud** to view logs  
6. Subscribe to the MQTT topic to view live data  

---

## Applications
- Environmental monitoring systems  
- IoT-enabled robotic platforms  
- Smart agriculture and smart cities  
- Academic mini and major projects  

---

## About Me
Hi! I’m **Ashwini Khambe**, a passionate Electronics & Telecommunication Engineer with a strong interest in **Embedded Systems, IoT, and Robotics**.  
I enjoy building hands-on projects that integrate hardware and software to solve real-world problems.

I am actively learning and applying skills in:

- Microcontrollers & Embedded Programming (ESP32, Arduino, C/C++)  
- IoT & Communication Protocols (MQTT, WiFi, BLE)  
- Sensors and Actuators Integration  
- Cloud-connected embedded systems  
- Software debugging and optimization  

This project is part of my professional portfolio, demonstrating:

- Secure MQTT-based data communication  
- Practical embedded software development  
- Hardware–software integration in IoT systems  

---

## Author
**Ashwini Khambe**  
Aspiring Embedded Software Engineer | IoT Enthusiast
