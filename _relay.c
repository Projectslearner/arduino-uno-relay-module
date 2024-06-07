/*
    Code by : Projects_learner
    Project name : Motion-Activated Relay Control using Ardino UNO
    Modified Date : 07-06-2024
    Website : https://projectslearner.com/learn/arduino-uno-relay-module
*/

// Define the pin for the relay and initialize its state to LOW (off)
const int relayPin = 8;
volatile byte relayState = LOW;

// Define the pin for the PIR motion sensor
const int PIRPin = 2;

// Timer variables to manage debounce timing
long lastDebounceTime = 0;
const long debounceDelay = 10000; // 10 seconds debounce delay

void setup() {
  // Set the relay pin as an output and initialize it to HIGH (relay off)
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH);

  // Set the PIR sensor pin as an input
  pinMode(PIRPin, INPUT);

  // Attach an interrupt to the PIR sensor pin, triggering on RISING signal to detect motion
  attachInterrupt(digitalPinToInterrupt(PIRPin), detectMotion, RISING);

  // Initialize serial communication for debugging purposes
  Serial.begin(9600);
}

void loop() {
  // Check if the debounce delay has passed and the relay is currently on
  if ((millis() - lastDebounceTime) > debounceDelay && relayState == HIGH) {
    // Turn off the relay and update its state
    digitalWrite(relayPin, HIGH);
    relayState = LOW;
    Serial.println("OFF");
  }
  delay(50); // Short delay to avoid excessive looping
}

// Interrupt service routine to handle motion detection
void detectMotion() {
  Serial.println("Motion detected");

  // If the relay is off, turn it on
  if (relayState == LOW) {
    digitalWrite(relayPin, LOW);
    relayState = HIGH;
    Serial.println("ON");
  }

  // Update the last debounce time
  lastDebounceTime = millis();
}
