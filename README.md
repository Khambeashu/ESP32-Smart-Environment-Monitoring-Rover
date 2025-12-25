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

## Author
**Ashwini Khambe**  
Aspiring Embedded Software Engineer | IoT Enthusiast
