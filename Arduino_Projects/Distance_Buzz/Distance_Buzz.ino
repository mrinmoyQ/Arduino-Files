int trigPin = 3;
int echoPin = 2;
int buzzPin = 4;
long duration;
int distance;
int buzzDelay = 500;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 29) / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");

  // if (distance >= 20) {
  //   tone(buzzPin, 300, 2000);
  //   delay(buzzDelay);
  //   tone(buzzPin, 400, 5000);
  //   delay(buzzDelay);
  //   tone(buzzPin, 100, 3000);
  //   delay(buzzDelay);
  // } //else if

}
