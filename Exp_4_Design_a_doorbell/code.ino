int switch=2;
int bell=10;
void setup()
{
 pinMode(switch,INPUT);
 pinMode(bell,OUTPUT);}
 }
 void loop()
 {
  int x=digitalRead(switch);
  if(x==HIGH)
  { digitalWrite(bell,HIGH);
    delay(1000);
    digitalWrite(bell,LOW);
    }
  }
