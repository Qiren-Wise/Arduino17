#include <AFMotor.h>

AF_DCMotor motor1(1);//建立四个直流电机对象
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup() {
  // put your setup code here, to run once:
  motor1.setSpeed(200);
  motor2.setSpeed(200);
  motor3.setSpeed(200);
  motor4.setSpeed(200);

  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}

void loop() {
  // put your main code here, to run repeatedly:
  motor1.run(FORWAD);
  motor2.run(FORWAD);
  motor3.run(FORWAD);
  motor4.run(FORWAD);

  for (int i=0;i<=255;i++)
  {
    motor1.setSpeed(i);
    motor2.setSpeed(i);
    motor3.setSpeed(i);
    motor4.setSpeed(i);
    delay(10);
    }

     for (int i=255;i>=0;i--)
  {
    motor1.setSpeed(i);
    motor2.setSpeed(i);
    motor3.setSpeed(i);
    motor4.setSpeed(i);
    delay(10);
    }

    motor1.run(BACKWARD);
    motor2.run(BACKWARD);
}
