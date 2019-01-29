void setup() {
  // put your setup code here, to run once

  // Write value to one of the digital pins marked with ~
  pinMode(3, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  // read analog input
  //possible values 0 - 1023
  int potValue = analogRead(A0);
  Serial.print(potValue);
  int mappedValue = map(potValue,0,1023,0,255);

//  int mappedValue = map(potValue,800,1023,0,255);
//  if(mappedValue < 5){
//    mappedValue = 5;
//  }

  
  Serial.print(" , ");
  Serial.println(mappedValue);

  // popssible values 0 - 255
  analogWrite(3,mappedValue);
  // can also approximate like this
  // analogWrite(6, potValue/4);
  delay(1000);

}
