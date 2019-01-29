// Make LED blink by controlling the ouput volts from Digital pin 8
void setup() {
  // put your setup code here, to run once:

  // Get pin number 8
  // Digital pins can be input or output.
  // If nothing is specifies, it is Input
  // When we want to write a HIGH or LOW to a PIN, use OUTPUT
  pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //control state of pin 8
  // Make pin 8 output 5V
  digitalWrite(8, HIGH);
  delay(100);
  // Make pin 8 output 0V
  digitalWrite(8, LOW);
  delay(1000);

}
