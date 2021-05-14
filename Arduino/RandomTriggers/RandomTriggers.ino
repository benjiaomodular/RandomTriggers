#include <SPI.h>

// Input pins
const int NOISE_PIN = A0;
const int THRESH_PIN1 = A1;
const int THRESH_PIN2 = A2;
const int CLOCK_PIN = 2;

// Output pins 
const int GATE_PIN1 = 9;
const int GATE_PIN2 = 10;
const int CV_PIN = 11;

int value = 0; 
  
void setup() {
  Serial.begin(9600);
  pinMode(CLOCK_PIN, INPUT);
  pinMode(THRESH_PIN1, INPUT);
  pinMode(THRESH_PIN2, INPUT);

  pinMode(GATE_PIN1, OUTPUT);
  pinMode(GATE_PIN2, OUTPUT);
  pinMode(CV_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(CLOCK_PIN) == 1) {

    // Random gate
    if (analogRead(NOISE_PIN) > analogRead(THRESH_PIN1)) digitalWrite(GATE_PIN1, 1);
    if (analogRead(NOISE_PIN) > analogRead(THRESH_PIN2)) digitalWrite(GATE_PIN2, 1);

    // Write random voltage to CV 
    value = analogRead(NOISE_PIN);
    analogWrite(CV_PIN, value);

    // Wait for clock off
    while(digitalRead(CLOCK_PIN) == 1) delay(1);

    // Make sure gate is off
    digitalWrite(GATE_PIN1, 0);
    digitalWrite(GATE_PIN2, 0);
  }
}
