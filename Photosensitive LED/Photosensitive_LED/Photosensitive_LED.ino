const int pResistor = A0;
const int ledPin=9;


int value;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(pResistor, INPUT);
}

void loop() {
  value = analogRead (pResistor);


  if (value < 400) {
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }

  delay(500);
  
}
