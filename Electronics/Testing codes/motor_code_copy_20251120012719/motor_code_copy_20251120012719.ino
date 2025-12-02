// -------------------------------------------
// BLDC Controller Test - Direct PWM (no RC filter)
// -------------------------------------------

const int pwmPin   = 9;   // PWM output to controller "0-5V"
const int dirPin   = 7;   // Direction
const int brakePin = 8;   // Brake

void setup() {
  pinMode(pwmPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(brakePin, OUTPUT);

  digitalWrite(dirPin, LOW);    // Forward
  digitalWrite(brakePin, HIGH); // Release brake
}

void loop() {
  // Ramp up speed
  for (int spd = 0; spd <= 255; spd++) {
    analogWrite(pwmPin, spd);
    delay(10);
  }

  delay(2000); // Hold full speed

  // Ramp down
  for (int spd = 255; spd >= 0; spd--) {
    analogWrite(pwmPin, spd);
    delay(10);
  }

  // Brief brake
  digitalWrite(brakePin, LOW);
  delay(1000);
  digitalWrite(brakePin, HIGH);

  // Reverse direction
  digitalWrite(dirPin, !digitalRead(dirPin));
  delay(1000);
}
