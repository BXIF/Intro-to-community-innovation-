const int pResistor = A0;
const int ledPin=9;


int value;

void setup(){
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(pResistor, INPUT);
}

void loop() {
  value = analogRead (pResistor);

  Serial.println(value);

  if (value < 400) {
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }

  delay(50);
  
}
