#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11);

int Incoming_Value = 0;
int led = 13;

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ;
  }
  pinMode(led, OUTPUT);
  mySerial.begin(9600);
}

void loop() {

  if (mySerial.available() > 0) {
    Incoming_Value = mySerial.read();
    Serial.print(Incoming_Value);
    Serial.print("\n");
    if (Incoming_Value == '1') {
      digitalWrite(led, HIGH);
    } else if (Incoming_Value == '0') {
      digitalWrite(led, LOW);
    }
  }
}
