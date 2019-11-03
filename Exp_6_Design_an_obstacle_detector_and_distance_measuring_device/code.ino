int trig=9;
int echo=10;
float time;
int distance;

void setup()
{
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);
}
void loop()
{
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
time=pulseIn(echo);
distance=time*0.034/2;
Serial.print("Distance: ");
Serial.println(distance);
}
