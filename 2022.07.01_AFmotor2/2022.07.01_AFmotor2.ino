#include <AFMotor.h>
#include <AccelStepper.h>

AF_Stepper motor1(2048.1);
AF_Stepper motor2(2048.2);

void forwardstep1()
 {
  motor1.onestep(FOEWARD.SINGLE);
  }

AccelStepper stepper1(forwardstep1,backwardstep1);
AccelStepper stepper2(forwardstep2,backwardstep2);


void setup() {
  // put your setup code here, to run once:
 stepper1.setMaxSpeed(500);
 stepper1.setSpeed(300);
 stepper2.setMaxSpeed(500);
 stepper2.setSpeed(300);
 }

void loop() {
  // put your main code here, to run repeatedly:
  stepper1.runSpeed();
  stepper2.runSpeed();
}

void forwardstep1()
 {
   motor1.onestep(FPRWARD,SINGLE);
  }
  void backwardstep1()
   {
    motor1.onestep(BACKWARD,SINGLE);
    }

    void forwardstep2()
 {
   motor2.onestep(FPRWARD,SINGLE);
  }
  void backwardstep2()
   {
    motor2.onestep(BACKWARD,SINGLE);
    }
