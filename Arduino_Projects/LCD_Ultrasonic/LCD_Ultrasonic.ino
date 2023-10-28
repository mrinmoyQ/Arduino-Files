#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

int trigPin = 3;
int echoPin = 2;
long duration;
int distance;

LiquidCrystal_I2C lcd(0x3F,20,4);

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  }

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("inch");
  lcd.setCursor(0,0);
  lcd.print("Distance: ");
  lcd.print(distance);
  lcd.print(" inch");
  delay(10);
  delay(200);

  }
