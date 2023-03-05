#include <IRremote.h>

#define NEXT 16754775
#define PREV 16769055
#define PLAY 16761405
#define STOP 4294967295


int receiver_IR = 10;

IRrecv remote(receiver_IR);
decode_results data_remote;

void setup() {
  remote.enableIRIn();
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (remote.decode(&data_remote) == 1) {
    if (data_remote.value == PLAY) {
      digitalWrite(7, HIGH);
    } else if (data_remote.value == STOP) {
      digitalWrite(7, LOW);
    }
    Serial.println(data_remote.value);
    remote.resume();
  } 

}
