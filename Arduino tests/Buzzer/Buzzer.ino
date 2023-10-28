int buzzer = 3;
int dt = 500;
void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  delay(dt);
  tone(buzzer, 10 , 1000);
  delay(dt);
  tone(buzzer, 20 , 500);
  delay(dt);
  tone(buzzer, 50 , 890);
}
