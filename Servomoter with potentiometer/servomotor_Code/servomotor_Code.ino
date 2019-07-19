#include <Servo.h>

Servo myservo;

int potpin = A0;
int val;

void setup() {
  myservo.attach(9);
}

void loop() {
  val = analogRead(potpin);
  val= map(val, 0, 1023, 180, 0);
  myservo.write(val);
  delay(15);
}
