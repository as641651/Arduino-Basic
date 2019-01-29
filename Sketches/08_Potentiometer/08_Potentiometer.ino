void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // read the value of analog pin A0
  // value ranges from 0 - 1024
  // these values are changed by changing the knob of potentiometer
  Serial.println(analogRead(A0));
  delay(1000);

}
