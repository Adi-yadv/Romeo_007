// for 160Ncm servo 270


#include <Servo.h>

Servo bigServo;  
int servoPin = 9;   // PWM pin

void setup() {
  bigServo.attach(servoPin);  // attach with default 1000–2000 µs pulse
}

void loop() {
  // Move to 0 degree position
  bigServo.write(0);
  delay(2000);

  // Move to 135 degrees (middle)
  bigServo.write(135);
  delay(2000);

  // Move to 270 degree position
  bigServo.write(270);
  delay(2000);
}
