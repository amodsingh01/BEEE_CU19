char data=0;
void setup()
{
  pinMode(10,OUTPUT);
  Serial.begin(9600);
 }
 
 voiod loop()
 {
  data=Serial.read();
  if(data=='1')
  { digitalWrite(10,HIGH);
   }
   else if(data=='0')
   {
   digitalWrite(10,LOW);
   }
  }
