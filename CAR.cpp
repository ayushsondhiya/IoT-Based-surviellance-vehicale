#include <Servo.h>

Servo servoX;
Servo servoY;

const int trigPin = 9;
const int echoPin = 10;

int infraredPin = A0;
int microphonePin = A1;
int xPin = A2;
int yPin = A3;

void setup() {
  servoX.attach(6);
  servoY.attach(5);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  // Read sensor values
  int infraredValue = analogRead(infraredPin);
  int microphoneValue = analogRead(microphonePin);
  int xValue = analogRead(xPin);
  int yValue = analogRead(yPin);

  // Perform actions based on sensor values
  if (infraredValue > threshold) {
    // Do something with infrared camera
  }

  if (microphoneValue > threshold) {
    // Do something with microphone
  }

  int distance = getDistance();
  if (distance < thresholdDistance) {
    // Obstacle detected by ultrasonic sensor, take action
  }

  // Control servomotors based on accelerometer readings
  int xAngle = map(xValue, 0, 1023, -90, 90);
  int yAngle = map(yValue, 0, 1023, -90, 90);
  servoX.write(xAngle);
  servoY.write(yAngle);

  delay(100);
}

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;
  return distance;
}
