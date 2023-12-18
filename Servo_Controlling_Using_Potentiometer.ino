/* The source Code from : https://github.com/riyadhasan24
 * By Md. Riyad Hasan
 */

#include <Servo.h>

int Pot_Pin = A0;  // Analog pin for potentiometer
int Servo_Pin = 9; // PWM pin for servo
int Pot_Value;
int Servo_Angle;

Servo MY_Servo;

void setup() 
{
  MY_Servo.attach(Servo_Pin);
}

void loop() 
{
  // Read the potentiometer value (0-1023)
  Pot_Value = analogRead(Pot_Pin);

  // Map the potentiometer value to the servo angle range (0-180)
  Servo_Angle = map(Pot_Value, 0, 1023, 0, 180);

  // Move the servo to the mapped angle
  MY_Servo.write(Servo_Angle);
}
