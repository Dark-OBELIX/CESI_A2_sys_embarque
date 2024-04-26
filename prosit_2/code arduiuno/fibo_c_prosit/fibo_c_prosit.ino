long startcount = micros();
void setup() {
  
  Serial.begin(9600);
  fibo(11);
}
long a = 1;
long b = 2;
long fibo(int limit){
  int compt = 0;
  while (compt<limit){
    long r = a + b;
    a = b;
    b = r;
    Serial.println(r);
    compt++;
  }
  long endcount = micros();
  Serial.println( endcount-startcount);
}

void loop() {}
// Avec ce programme si au debut :

// a = 0                            |a = 1
// b = 1                            |b = 2
// limit = 13                       |limit = 11

// a la fin :                       

// r = 377                          |r = 377
// temp execution = 1460            |temp execution = 1312
