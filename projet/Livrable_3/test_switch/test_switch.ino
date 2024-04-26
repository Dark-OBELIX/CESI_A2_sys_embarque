const int bouton_rouge = 2;  
const int bouton_verre = 3;  

void setup() {
  Serial.begin(9600);
  pinMode(bouton_rouge, INPUT);
  pinMode(bouton_verre, INPUT);
}

//Serial.println("");
void loop() {
  
  Serial.println("Demarrage");
  delay(5000);

  if (digitalRead(bouton_rouge) == LOW) {
    Serial.println("Mode configuration");
  }
  
  Serial.println("Mode standard");
  
  if (digitalRead(bouton_rouge) == LOW) {
    unsigned long previousTimeLed = millis();
    Serial.println("buttonPin_1");
    }
    
 // Serial.println("Mode standard");

}
