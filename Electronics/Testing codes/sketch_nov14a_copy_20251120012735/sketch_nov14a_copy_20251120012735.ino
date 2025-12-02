// -------------------------------------------
// BLDC Controller Test - Direct Digital (No PWM/RC filter needed)
// -------------------------------------------

const int speedControlPin = 9;   // Connect to controller "0-5V" input
const int dirPin          = 7;   // Direction pin
const int brakePin        = 8;   // Brake pin
const int stopPin        = 6;

void setup() {
  pinMode(speedControlPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(brakePin, OUTPUT);
  pinMode(stopPin, OUTPUT);
  

  //digitalWrite(dirPin, LOW);    // Set default direction to Forward
  digitalWrite(stopPin, HIGH);
  //digitalWrite(brakePin, HIGH); // Release brake (assuming HIGH is release based on your original code)
  delay(3000);  
  //digitalWrite(brakePin, LOW);
  digitalWrite(stopPin, LOW);
  digitalWrite(speedControlPin, HIGH); // Output a stable 5V DC signal
  delay(4000);                         // Run for 5 seconds

  // 2. Turn Motor OFF (Stop)
  digitalWrite(brakePin, HIGH);  // Output a stable 0V DC signal
  delay(3000);      
  digitalWrite(brakePin, LOW);                   // Stop for 2 seconds

  // Optional: Toggle direction for next run
  digitalWrite(dirPin, !digitalRead(dirPin));
  delay(4000);
  digitalWrite(brakePin, HIGH);
  
  delay(3000);

}

void loop() {
  // 1. Turn Motor ON (Full Speed)
  //digitalWrite(brakePin, HIGH); 
  

   // Output a stable 0V DC signal
  
  
}
