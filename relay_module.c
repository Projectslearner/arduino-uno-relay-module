/*
    Project name : Arduino Uno Relay Module 
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-relay-module
*/

const int relayPin = 7;  // Digital pin connected to the relay module signal pin

void setup() {
  pinMode(relayPin, OUTPUT);  // Set relay pin as output
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  Serial.println("Turning relay ON (CLOSED)");  // Print message to Serial Monitor
  digitalWrite(relayPin, HIGH);  // Turn the relay ON (close the circuit)
  delay(2000);  // Stay ON for 2 seconds

  Serial.println("Turning relay OFF (OPEN)");  // Print message to Serial Monitor
  digitalWrite(relayPin, LOW);  // Turn the relay OFF (open the circuit)
  delay(2000);  // Stay OFF for 2 seconds
}
