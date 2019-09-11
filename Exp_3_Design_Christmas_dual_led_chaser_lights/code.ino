void setup()
{
  for(int i=4;i<=7:i++)
    { pinMode(i,OUTPUT);
    }
}

void loop()
{  
  for( int j=4;i<=7:i++)
     { digitalWrite(j,HIGH);
       digitalWrite(j+1,HIGH);
       diditalWrite(j-3,HIGH);
       delay(600);
       digitalWrite(j,LOW);
       delay(600);
        }
           
}
