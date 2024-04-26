#define PUSHPIN 2
#define PUSHPIN2 3
int randNumber = 0;
int data;
int data2;

void acquisition();
void buttoncheck();
void buttoncheck2();

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0)); // Initialisation générateur de nombres aléatoires

  pinMode(PUSHPIN, INPUT); // Initialisation bouton
  pinMode(PUSHPIN2, INPUT); // Initialisation bouton

  attachInterrupt(digitalPinToInterrupt(PUSHPIN),buttoncheck,CHANGE);
  attachInterrupt(digitalPinToInterrupt(PUSHPIN2),buttoncheck2,CHANGE);
}

void loop()
{
  delay(10000);
}

void buttoncheck()
{
  data = digitalRead(PUSHPIN);
  if(data == 0) {
    Serial.println("LOW");
  }
  else {
    Serial.println("LOW");
  }
}

void buttoncheck2()
{
  data2 = digitalRead(PUSHPIN2);
  if(data2 == 0) {
    Serial.println("LOW");
  }
  else {
    Serial.println("LOW");
  }
}
