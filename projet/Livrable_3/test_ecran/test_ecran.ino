#include <LiquidCrystal.h>
LiquidCrystal lcd = LiquidCrystal ( 8, 9, 10, 11, 12, 13 ) ;

void setup()
{

}

void loop()
{
  lcd.begin( 16, 2 ) ;
  lcd.setCursor(0,0);
  lcd.print("Emile");
  delay(5000);
  lcd.clear();
  
}
