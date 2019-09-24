#include <IRremote.h>        //include remote library
const int RECV_PIN = 7;      //set pin 7 as receiver 
IRrecv irrecv(RECV_PIN);
decode_results results;
const int redPin = 10;       //set led1 to pin 10
const int greenPin = 11;     //set led2 to pin 11
void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode(redPin, OUTPUT);    //set pin 10 to output
  pinMode(greenPin, OUTPUT);  //set pin 11 tooutput
}
void loop(){
  if (irrecv.decode(&results)){
    switch(results.value){
    case 0xFF30CF: //keypad button "2"
    digitalWrite(redPin, HIGH); //turns pin 10 on when button is presed
    Serial.print("high red");
    delay(500);
    }
    switch(results.value){
    case 0xFF18E7: //keypad button "0"
    digitalWrite(redPin, LOW); //turns pin 10 on when button 2 is presed
    Serial.print("low red");
    delay(500);
    }
    switch(results.value){ 
    case 0xFF7A85: //keypad button "3"
    digitalWrite(greenPin, HIGH); //turns pin 11 on when button 3 is presed
    Serial.print("high green");
    delay(500);
    }
    switch(results.value){
    case 0xFF10EF: //keypad button "1"
    digitalWrite(greenPin,LOW); //turns pin 11 off when button 1 is presed
    Serial.print("low green");
    delay(500);
    }
    irrecv.resume();
  }
}
