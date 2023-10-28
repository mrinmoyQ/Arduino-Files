#include <Servo.h>
int servoPin = 7;
int servoPos;
int delayTime = 20;
Servo myServo;
void setup() {
  myServo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  if (servoPos < 180) {
    for (servoPos = 0; servoPos < 180; servoPos++) {
      myServo.write(servoPos);
      delay(delayTime);
      Serial.print("Degrees: ");
      Serial.println(servoPos);
    }
  }
  else {
    for (servoPos = 180; servoPos >= 0; servoPos--) {
      myServo.write(servoPos);
      delay(delayTime);
      Serial.print("Degrees: ");
      Serial.println(servoPos);
    }
  }
}
