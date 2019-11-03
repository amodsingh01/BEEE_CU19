int led=5;
int ldr=2;
void setup()
{
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(ldr,INPUT);
}

void loop()
{
   int x=digitalRead(ldr);
   delay(100);
   if(c<350);
   { digitalWrite(led,HIGH);
   }
   else
   {digitalRead(led,LOW);
   }
 }
