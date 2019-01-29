void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  // read the value from sensor
  int sensorValue = analogRead(A0);

  //convert the sensor value to voltage
  // 0 - 5V is divided into 1023 segmets
  float voltage = sensorValue*(5.0/1023.0);

  // as per the sensor datasheet, output voltage should be divided by 0.1
  // to get UV index
  float uv_index = voltage/0.1;

  Serial.print(sensorValue);
  Serial.print(", ");
  Serial.println(uv_index);

  //delay inbetween reads for stability
  delay(100);
}
