
int pinLed = 13;
String number;
String masukan = "Masukan nyalkan/matikan: ";

void setup() {
    pinMode(pinLed, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    Serial.print(masukan);
    while(Serial.available() == 0) {

    }
    number = Serial.readString();
    if (number == "nyalakan" || number == "Nyalakan") {
        digitalWrite(pinLed, HIGH);
        Serial.println("LED menyala");
    } else if (number == "matikan" || number == "Matikan") {
        digitalWrite(pinLed, LOW);
        Serial.println("LED mati");
    }
}
