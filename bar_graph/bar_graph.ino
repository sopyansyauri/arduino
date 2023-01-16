const int analogPin = A0;
const int ledCount = 9;
int ledPins[] = {2,3,4,5,6,7,8,9,10};

void setup() {
  // put your setup code here, to run once:
  for (int thisled = 0; thisled < ledCount; thisled++) {
    pinMode(ledPins[thisled], OUTPUT);
  }
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorReading = analogRead(analogPin);
  int ledLevel = map(sensorReading, 0, 1023, 0, ledCount);
  for (int thisled = 0; thisled < ledCount; thisled++) {
    if (thisled < ledLevel) {
      digitalWrite(ledPins[thisled], HIGH);
    } else {
    digitalWrite(ledPins[thisled], LOW);
    }
  }
  Serial.println(ledLevel);

}
