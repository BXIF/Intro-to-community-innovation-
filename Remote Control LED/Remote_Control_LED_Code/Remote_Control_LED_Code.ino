#include "IRremote.h"
const int RECV_PIN = 7;
IRrecv irrecv*RECV_PIN);
decode_results results;
const int redPin = 10;
const int greenPin = 11;
void setup(){
  irrecv.enableIRIn
  irrecv.blink13(true);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}
void loop(){
  if (irrecv.decode(&results)){
    switch(results.value){
    case 0x3D9AE3F7:
    digitalWrite(redPin, HIGH);
    delay(2000);
    }
    switch(results.value){
    case 0xC101E57B
    digitalWrite(redPin, Low);
    delay(2000)
    }
    switch(results.value){
    case 0x6182021B:
    digitalWrite(greenPin, HIGH);
    delay(2000);
    }
    switch(results,value){
    case 0x9816BE3f:
    digitalWrite(greenPin,Low);
    delay(2000);
    }
    irrecv.resume();
}
