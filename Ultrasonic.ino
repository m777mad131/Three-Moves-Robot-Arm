// C++ code
//
#include <Servo.h>

Servo servo_5;

Servo servo_6;

Servo servo_7;

int counter;

int counter2;

int counter3;

void setup()
{
  pinMode(A0, INPUT);
  servo_5.attach(5, 500, 2500);

  servo_6.attach(6, 500, 2500);

  servo_7.attach(7, 500, 2500);

}

void loop()
{
  servo_5.write(analogRead(A0));
  servo_6.write(analogRead(A0));
  servo_7.write(analogRead(A0));
  delay(2000); // Wait for 2000 millisecond(s)
  for (counter = 0; counter < 8; ++counter) {
    servo_5.write(analogRead(A0));
  }
  for (counter2 = 0; counter2 < 9; ++counter2) {
    servo_6.write(analogRead(A0));
  }
  for (counter3 = 0; counter3 < 10; ++counter3) {
    servo_7.write(analogRead(A0));
  }
}