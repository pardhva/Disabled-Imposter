#include <Servo.h>  // Include the Servo library

const int distancePin = 7;  // Pin for the distance sensor
const int ledPin = 6;       // Pin for the LED
const int servoPin = 9;     // Pin where the servo is connected

Servo knifeServo;  // Create a Servo object to control the knife

void setup() {
  pinMode(distancePin, INPUT);   // Set the distance sensor pin as input
  pinMode(ledPin, OUTPUT);       // Set the LED pin as output
  
  knifeServo.attach(servoPin);   // Attach the servo to the defined pin
  Serial.begin(9600);            // Start serial communication at 9600 baud rate
}

void loop() {
  // Read the state of the distance sensor
  if (digitalRead(distancePin) == HIGH) {
    digitalWrite(ledPin, HIGH);   // Turn off the LED if sensor is LOW
    knifeServo.write(0);
    for (int i = 0; i < 50; i++) {
      if (digitalRead(distancePin) == LOW) { break; }
      delay(10);
    }
    // Rotate the servo to 120 degrees
    knifeServo.write(120);
    
    for (int i = 0; i < 70; i++) {
      if (digitalRead(distancePin) == LOW) { break; }
      delay(10);
    }
  } else {
    digitalWrite(ledPin, LOW);  // Turn on the LED if sensor is HIGH

  }

  // // Rotate the servo to 0 degrees
  // knifeServo.write(0);
  // delay(1000);  // Wait for 1 second
  
  // // Rotate the servo to 120 degrees
  // knifeServo.write(120);
  // delay(1000);  // Wait for 1 second

}

