

// These constants won't change. They're used to give names to the pins used:
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutPin = 9; // Analog output pin that the LED is attached to
//buzzer
const int analogOutPinBuzzer = 10; // Analog output pin that the LED is attached to


int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)
int buzzerFrequency = 0;
//int i;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  //pinMode(Buzzer, OUTPUT);
  pinMode(analogOutPinBuzzer, OUTPUT);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value:
  analogWrite(analogOutPin, outputValue);

  buzzerFrequency= map(outputValue, 0, 255, 0, 1000);
  tone(analogOutPinBuzzer, buzzerFrequency); 

  Serial.print("\t buzzerF = ");
  Serial.println(buzzerFrequency);

  //delay(1000);
}
