#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11);

int blinkSensor = A0;
int led = 13;
int blinkRead;
int lastValue = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(blinkSensor, INPUT);
  while (!Serial) {
    ;
  }
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  blinkRead = digitalRead(blinkSensor);


  if (blinkRead == 1) {
    delay(1000);
    digitalWrite(led, HIGH);
    if (lastValue != blinkRead) {
      mySerial.print(blinkRead);
      mySerial.end();
    }


  } else {
    delay(100);
    digitalWrite(led, LOW);
    if (lastValue != blinkRead) {
      mySerial.print(blinkRead);
      mySerial.end();
    }
  }
  lastValue = blinkRead;
}
