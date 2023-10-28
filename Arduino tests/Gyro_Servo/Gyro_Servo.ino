#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#include <Servo.h>

Servo servo;
Adafruit_MPU6050 mpu6050;

void setup(void) {
  Serial.begin(115200);
  servo.attach(3);
  Wire.begin();
  mpu6050.begin();
  servo.write(0);

  mpu6050.setAccelerometerRange(MPU6050_RANGE_8_G);//2_G,4_G,8_G,16_G
  mpu6050.setGyroRange(MPU6050_RANGE_500_DEG);//250,500,1000,2000
  mpu6050.setFilterBandwidth(MPU6050_BAND_21_HZ);

  delay(50);
}

void loop() {

  /* Get new sensor events with the readings */
  sensors_event_t a, g, temp;
  mpu6050.getEvent(&a, &g, &temp);

  int value = a.acceleration.y;

  value = map(value,  -10, 10, 180, 0);
  servo.write(value);
  Serial.println(value);
  //delay(10);

}