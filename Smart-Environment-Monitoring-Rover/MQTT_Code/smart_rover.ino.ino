#include <Arduino.h>
#include "DHT.h"
#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <PubSubClient.h>

// ---------- DHT Sensor ----------
#define DHTPIN 19
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// ---------- IR Sensor ----------
#define IR_PIN 34   // INPUT only pin

// ---------- Motor Pins ----------
#define EN 22
#define M1 27
#define M2 14
#define M3 12
#define M4 13

// ---------- WiFi ----------
const char* ssid = "vivo V40";        // 2.4 GHz ONLY
const char* password = "ganpat123";

// ---------- HiveMQ ----------
const char* mqtt_server =
"1f5eef462dfd489c981b136920468901.s1.eu.hivemq.cloud";
const int mqtt_port = 8883;
const char* mqtt_user = "Ashwini_Khambe";
const char* mqtt_pass = "Khambe@123";
const char* mqtt_topic = "rover/environment";

// ---------- MQTT ----------
WiFiClientSecure espClient;
PubSubClient client(espClient);

// ---------- Motor Control ----------
void moveForward() {
  Serial.println(" Motor: Moving Forward");
  digitalWrite(M1, HIGH); digitalWrite(M2, LOW);
  digitalWrite(M3, HIGH); digitalWrite(M4, LOW);
}

void turnLeft() {
  Serial.println(" Motor: Turning Left");
  digitalWrite(M1, LOW);  digitalWrite(M2, LOW);
  digitalWrite(M3, HIGH); digitalWrite(M4, LOW);
}

void turnRight() {
  Serial.println(" Motor: Turning Right");
  digitalWrite(M1, HIGH); digitalWrite(M2, LOW);
  digitalWrite(M3, LOW);  digitalWrite(M4, LOW);
}

void stopMotors() {
  Serial.println(" Motor: Stopped");
  digitalWrite(M1, LOW); digitalWrite(M2, LOW);
  digitalWrite(M3, LOW); digitalWrite(M4, LOW);
}

// ---------- MQTT Safe Delay ----------
void mqttDelay(unsigned long ms) {
  unsigned long start = millis();
  while (millis() - start < ms) {
    client.loop();   // keep MQTT alive
  }
}

// ---------- MQTT Reconnect ----------
void reconnect() {
  if (client.connected()) return;

  Serial.print("Connecting to HiveMQ...");
  String clientId = "ESP32_" + WiFi.macAddress();

  if (client.connect(clientId.c_str(), mqtt_user, mqtt_pass)) {
    Serial.println(" Connected ");
  } else {
    Serial.print(" Failed, rc=");
    Serial.println(client.state());
  }
}

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("\n🚀 Smart Environment Monitoring Rover");

  pinMode(IR_PIN, INPUT);
  dht.begin();

  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(M3, OUTPUT);
  pinMode(M4, OUTPUT);
  pinMode(EN, OUTPUT);
  digitalWrite(EN, HIGH);

  // ---------- WiFi ----------
  Serial.print("Connecting to WiFi");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println("\nWiFi Connected ✓");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  // ---------- MQTT ----------
  espClient.setInsecure(); // HiveMQ Cloud TLS
  client.setServer(mqtt_server, mqtt_port);
  reconnect();
}

void loop() {
  if (!client.connected()) reconnect();
  client.loop();

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  int ir = digitalRead(IR_PIN);

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println(" DHT Sensor Error");
    mqttDelay(2000);
    return;
  }

  Serial.println("\n Sensor Data");
  Serial.print("Temperature: "); Serial.print(temperature); Serial.println(" °C");
  Serial.print("Humidity   : "); Serial.print(humidity);    Serial.println(" %");
  Serial.print("IR Sensor  : ");
  Serial.println(ir == LOW ? "Object Detected" : "No Object");

  char payload[128];
  snprintf(payload, sizeof(payload),
           "{\"temperature\":%.2f,\"humidity\":%.2f,\"ir\":%d}",
           temperature, humidity, ir);

  client.publish(mqtt_topic, payload);
  Serial.print(" Sent → HiveMQ MQTT: ");
  Serial.println(payload);

  // ---------- Motor Demo ----------
  moveForward();
  mqttDelay(5000);

  stopMotors();
  mqttDelay(500);

  turnLeft();
  mqttDelay(5000);

  stopMotors();
  mqttDelay(500);

  turnRight();
  mqttDelay(5000);

  stopMotors();
  mqttDelay(3000);
}
