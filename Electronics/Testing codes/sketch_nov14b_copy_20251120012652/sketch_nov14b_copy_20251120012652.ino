const int speedControlPin = 9;   // Connect to controller "0-5V" input
const int dirPin          = 7;   // Direction pin
const int brakePin        = 8;   // Brake pin
const int stopPin        = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(brakePin, OUTPUT);
  pinMode(speedControlPin, OUTPUT);
  digitalWrite(dirPin, LOW);
  digitalWrite(speedControlPin, HIGH);
  delay(3000);
  digitalWrite(brakePin, HIGH); // Release brake

}

void loop() {
  // put your main code here, to run repeatedly:
   //digitalWrite(brakePin, HIGH);
}
