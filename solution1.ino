// Solution 1: Bluetooth Interface

#include <SoftwareSerial.h>

// Bluetooth module pins

#define RX_PIN 2

#define TX_PIN 3

// pH sensor pins

#define PH_SENSOR_PIN A0

// Chlorine sensor pins

#define CHLORINE_SENSOR_PIN A1

// Bluetooth module

SoftwareSerial bluetooth(RX_PIN, TX_PIN);

void setup() {

  // Start serial communication for debugging

  Serial.begin(9600);

  // Start software serial for Bluetooth module

  bluetooth.begin(9600);

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

  // Send data via Bluetooth

  String data = String(pH) + "," + String(chlorine);

  bluetooth.println(data);

  // Print data for debugging

  Serial.println(data);

  delay(1000);

}
