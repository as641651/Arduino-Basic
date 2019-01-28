void setup() {
  // put your setup code here, to run once

  // Write value to one of the digital pins marked with ~
  pinMode(6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // read analog input
  //possible values 0 - 1023
  int potValue = analogRead(A0);

  int mappedValue = map(potValue,0,1023,0,255);

  // popssible values 0 - 255
  analogWrite(6,mappedValue);
  // can also approximate like this
  // analogWrite(6, potValue/4);

}
