#include <SoftwareSerial.h>

SoftwareSerial ss(4,3);
void setup() {
  Serial.begin(9600);
  ss.begin(9600);
}

void loop() {
  if (ss.available() > 0) {
    byte gpsData = ss.read();
    Serial.write(gpsData);
  }

}
