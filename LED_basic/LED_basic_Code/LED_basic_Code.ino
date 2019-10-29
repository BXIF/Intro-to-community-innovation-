int LED1 = 11;

void setup() {
pinMode(LED1, OUTPUT);
  
}

void loop() {
 digitalWrite (LED1, HIGH);
 delay(3000);
 digitalWrite(LED1, LOW);
 delay(3000);
}
