#include<LiquidCrystal.h>
int rs=12,en=11,d4= 5,d5=4,d6=3,d6=7;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup()
{
  lcd.begin(16,2);
  }
  
  void loop()
  {
   lcd.clear();
   lcd.setCursor(1,0);
   lcd.print("Hello");
   lcd.setCursor(1,7);
   lcd.print("Sir");
   }
