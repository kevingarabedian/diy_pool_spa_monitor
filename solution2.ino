// Solution 2: WiFi Interface

#include <SoftwareSerial.h>

#include <ESP8266WiFi.h>

#include <WiFiClient.h>

// WiFi settings

const char* SSID = "your_network_name";

const char* PASSWORD = "your_network_password";

const char* SERVER_HOST = "your_server_host";

const int SERVER_PORT = 80;

// pH sensor pins

#define PH_SENSOR_PIN A0

// Chlorine sensor pins

#define CHLORINE_SENSOR_PIN A1

// WiFi client

WiFiClient client;

void setup() {

  // Start serial communication for debugging

  Serial.begin(9600);

  // Connect to WiFi network

  WiFi.begin(SSID, PASSWORD);

  while (WiFi.status() != WL_CONNECTED) {

    delay(1000);

    Serial.println("Connecting to WiFi...");

  }

  Serial.println("Connected to WiFi");

  // Initialize pH sensor

  pinMode(PH_SENSOR_PIN, INPUT);

  // Initialize chlorine sensor

  pinMode(CHLORINE_SENSOR_PIN, INPUT);

}

void loop() {

  // Read pH sensor

  float pH = analogRead(PH_SENSOR_PIN) * 5.0 / 1024.0;

  pH = 7.0 - pH; // Convert voltage to pH value

  // Read chlorine sensor

  float chlorine = analogRead(CHLORINE_SENSOR_PIN) * 5.0 / 1024.0;

  chlorine = chlorine * 1.2; // Convert voltage to chlorine level

  // Connect to server

  if (client.connect(SERVER_HOST, SERVER_PORT)) {

    // Build HTTP request

    String data = String(pH) + "," + String(chlorine);

    String request = "GET /update?data=" + data + " HTTP/1.1\r\n";

    request += "Host: " + String(SERVER_HOST) + "\r\n";

    request += "Connection: close\r\n\r\n";

    // Send request

    client.print(request);

    // Wait for response

    while (client.connected()) {

      if (client.available()) {

        String response = client.readStringUntil('\r');

        Serial.println(response);

      }

    }

    // Disconnect

    client.stop();

  } else {

    Serial.println("Unable to connect to server}

delay(1000);

}
