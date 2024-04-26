#define PUSHPIN 8
#define LEDPIN 7
#define BLINKLED 5

unsigned long previousTimeLed = millis();
int ledState1 = LOW;

void setup()
{
  Serial.begin(9600);
  pinMode(LEDPIN, OUTPUT); // Initialisation LED
  pinMode(BLINKLED, OUTPUT); // Initialisation LED
  pinMode(PUSHPIN, INPUT); // Initialisation bouton
}

void loop()
{
  unsigned long currentTime = millis();
  // task 1
  if(currentTime - previousTimeLed > 1000) {
    previousTimeLed = currentTime;
    if (ledState1 == HIGH) {
      Serial.print("HIGH");
      ledState1 = LOW;
    }
    else {
      ledState1 = HIGH;
    }
    digitalWrite(BLINKLED, ledState1);

 if (digitalRead(PUSHPIN) == LOW) {
     digitalWrite(LEDPIN, 1);
  }
  else {
    digitalWrite(LEDPIN, 0);
  }
  }
  
}
