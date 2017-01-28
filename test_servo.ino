// testing the sweep of the robot light saber

#include <Servo.h>

Servo myServo; // create servo object to control a servo. a maximum of eight servo objects can be created

int pos = 30; // variable to store the servo position
int inputPin = 2; // signal on pin number 2 will control the servo

void setup() {
  myServo.attach(9); // attaches the servo on pin 9 to the servo object
  pinMode(inputPin, INPUT);
  myServo.write(30);
}

void loop() {
  while(true) { //true must be replaced by the input signal available at 2
    myServo.write(180); // tell servo to go to position in variable 'pos'
    delay(30); // waits 15ms for the servo to reach the position
    myServo.write(30); // tell servo to go to position in variable 'pos'
    delay(30); // waits 15ms for the servo to reach the position
  }
}
