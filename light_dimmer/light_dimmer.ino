int potensioPin = A0;
int ledPin = 9;
int potensioValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  potensioValue = analogRead(potensioPin);
  analogWrite(ledPin, potensioValue/4);
  delay(10); 

}
