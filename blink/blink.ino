int pinLed = 6;

void setup()
{
    pinMode(pinLed, OUTPUT);
}

void loop()
{
    digitalWrite(pinLed, HIGH);
    delay(100);
    digitalWrite(pinLed, LOW);
    delay(100);
}