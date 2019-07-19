#include "Stepper.h"
#include "IRremote.h"

#define STEPS  32
int  Steps2Take;
int receiver = 6;







Stepper small_stepper(STEPS, 9, 10, 9, 11);
IRrecv irrecv(receiver);
decode_results results;
void setup()
{
  irrecv.enableIRIn();
}
void loop()
{
if (irrecv.decode(&results))
}
    switch(results.value)
    {
      case 0x3D9AE3F7:
                      small_stepper.setSpeed(500);
                      Steps2Take = 2048;
                      small_stepper.step(Steps2Take);
                      delay(2000)
                      break;
      case 0x6182021b:
                      small_stepper.setSpeed(500);
                      Steps2Take = -2048;
                      small_stepper.step(Steps2Take);
                      delay(2000)
                      break;  
     irrecv.resume();                  
    } }
