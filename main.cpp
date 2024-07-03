// C++ code
//
#include <Servo.h>

int angle = 0;

int i = 0;

Servo servo_3;

Servo servo_5;

Servo servo_6;

Servo servo_9;

Servo servo_10;

Servo servo_11;

void setup()
{
  servo_3.attach(3, 500, 2500);
  servo_5.attach(5, 500, 2500);
  servo_6.attach(6, 500, 2500);
  servo_9.attach(9, 500, 2500);
  servo_10.attach(10, 500, 2500);
  servo_11.attach(11, 500, 2500);
}

void loop()
{
  angle = 0;
  for (angle = 1; angle <= 179; angle += 1) {
    servo_3.write(angle);
    servo_5.write(angle);
    servo_6.write(angle);
    servo_9.write(angle);
    servo_10.write(angle);
    servo_11.write(angle);
    delay(20); // Wait for 20 millisecond(s)
  }
  for (angle = 179; angle >= 1; angle -= 1) {
    servo_3.write(angle);
    servo_5.write(angle);
    servo_6.write(angle);
    servo_9.write(angle);
    servo_10.write(angle);
    servo_11.write(angle);
    delay(20); // Wait for 20 millisecond(s)
  }
}
