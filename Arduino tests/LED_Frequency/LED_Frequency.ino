int led = A2; 
int i = 1;
void setup() {
  pinMode(led, OUTPUT);

}

void loop() {

  if(i < 255){
    for (i ;i <= 255; i++) {
    analogWrite(led, i);
    delay(150);
    }
  }
  else {
    digitalWrite(led, LOW);
  }

}
