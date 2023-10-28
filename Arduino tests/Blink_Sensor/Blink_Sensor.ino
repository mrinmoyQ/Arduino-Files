int blinkSensor = A0; 
int led = 13;
int blinkRead;

void setup() {
  pinMode(led , OUTPUT);
  pinMode(blinkSensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  blinkRead = digitalRead(blinkSensor);
  Serial.println(blinkRead);
  if (blinkRead == 1 ) {
    delay(3000);
    digitalWrite(led, HIGH);
    
  }
  else {
    digitalWrite(led, LOW);
  }
}
