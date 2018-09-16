
// LED_PIN is connect to GPIO5 (D1)
int LED_PIN = 5;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_PIN as an output. Do not use LED_BUILTIN variable!
  pinMode(LED_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);                       // wait for a second
}
