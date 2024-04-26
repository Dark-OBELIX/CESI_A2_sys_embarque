#include <ChainableLED.h>
 
  ChainableLED led(6, 7, 5);
short int step = 0;   // a variable to keep track of what step you're on.

unsigned long previousMillis = 0;
//unsigned long interval = 1000;  // set to length of first interval.

void setup()
{
Serial.begin(9600);
//Blink_2_test(1000, 255, 0, 0, 255, 255, 255); // erreur SD

}
 
void loop()
{
//Blink_2_test(1000, 255, 0, 0, 0, 255, 0); // erreur capteur

  led.setColorRGB(0, 0, 255, 0); // vert
  delay(1000);
  led.setColorRGB(0, 255, 255, 0); // jaune
  delay(1000);  
  led.setColorRGB(0, 0, 0, 255); // bleu
  delay(1000);
  led.setColorRGB(0, 255, 123, 0); // orange
  delay(1000);
}
/*
void Blink_2_test(unsigned long interval, short int a1, short int b1, short int c1, short int a2, short int b2, short int c2){
  unsigned long currentMillis = millis();
  Serial.print("test");
  if(currentMillis - previousMillis >= interval and step == 0){
    previousMillis = currentMillis;
    led.setColorRGB(0, a1, b1, c1);  
    step = 1;
  }
  if(currentMillis - previousMillis >= interval and step == 1){
    previousMillis = currentMillis;
    led.setColorRGB(0, a2, b2, c2);  
    step = 2;
  }  

    if(currentMillis - previousMillis >= interval and step == 2){
    previousMillis = currentMillis;
    led.setColorRGB(0, a2, b2, c2);  
    step = 0;
  }  
  
}
https://support.microsoft.com/fr-fr/office/rgb-fonction-aa04db19-fb8a-4f58-9ad6-71a1f5a43e94
  led.setColorRGB(0, 0, 255, 0); // vert
  delay(1000);
    led.setColorRGB(0, 255, 255, 0); // jaune
  delay(1000);*/
