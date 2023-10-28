int sensor =  2;
int led = 3;
void setup() {
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(sensor) == LOW) {
    digitalWrite(led, HIGH);
    Serial.println("True");
    delay(200);
  }
  else {
    digitalWrite(led, LOW);
    Serial.println("False");
    delay(200);    
  }

}
