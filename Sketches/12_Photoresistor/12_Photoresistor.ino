void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // under bright condition, resistance is 0,
  // we get small A0 value

  // under dark condition, resistance is high, max 5V
  // we get large A0 value

  // under ambient condition, we have chosen resistor such
  // that A0 value is at midpoint (around 500)
  int value = analogRead(A0);
  Serial.println(value);
  delay(100);
}
