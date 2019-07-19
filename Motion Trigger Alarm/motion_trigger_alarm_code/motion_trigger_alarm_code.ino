#define trigPin 12
#define echoPin 13
int Buzzer = 8;
int duration, distance;

void setup() {
       Serial.begin (9600);
       pinMode(trigPin, OUTPUT);
       pinMode(echoPin, INPUT);
       pinMode(Buzzer, OUTPUT);
       
}

void loop() {


 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 distance = (duration/2) / 29.1;
if (distance >=200 || distance <= 0)
       {
       Serial.println("no object detected");
       digitalWrite(Buzzer,LOW);

       
       }
else {
       Serial.println("no object deteced \n");
       Serial.println("distance= ");
       Serial.println(distance);
       tone(Buzzer,400);
 }
}
