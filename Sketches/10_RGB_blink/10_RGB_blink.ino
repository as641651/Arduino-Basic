
#define RED_PIN 3
#define GREEN_PIN 6
#define BLUE_PIN 5

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //RGB_digital();
  RGB_analog();


}

void RGB_ditial(){
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(RED_PIN, HIGH);
  delay(1000);
  digitalWrite(RED_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
  delay(1000);
  digitalWrite(BLUE_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  delay(1000);
}

void RGB_analog(){
  analogWrite(GREEN_PIN, 50);
  analogWrite(RED_PIN, 100);
  analogWrite(BLUE_PIN, 100);
}
