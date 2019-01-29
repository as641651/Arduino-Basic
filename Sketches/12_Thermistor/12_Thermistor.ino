// Thermistor resistance at ambient temperature = 10Kohm
#define THERMISTORRESISTANCE 1000
#define THERMISTORPIN A0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float reading;
  reading = analogRead(THERMISTORPIN);

  Serial.print("Analog reading");
  Serial.println(reading);

  //calculate resistance from analog reading
  // check notes for derivation
  reading = (1023/reading)-1;
  reading = THERMISTORRESISTANCE/reading;

  Serial.print("Termistor resistance ");
  Serial.println(reading);

  delay(1000);

}
