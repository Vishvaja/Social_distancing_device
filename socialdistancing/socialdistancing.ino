int const trigPin = 4;
int const echoPin = 3;
int const buzzPin = 2;
int const motorPin = 5;
void setup()
{
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(buzzPin, OUTPUT);
pinMode(motorPin, OUTPUT);
}
void loop()
{
int duration, distance;
digitalWrite(trigPin, HIGH);
delay(1);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
if (distance <= 100 && distance >= 0) {
digitalWrite(buzzPin, HIGH);
digitalWrite(motorPin, HIGH);
} 
else {
digitalWrite(buzzPin, LOW);
digitalWrite(motorPin, LOW);
}
delay(60);
}
