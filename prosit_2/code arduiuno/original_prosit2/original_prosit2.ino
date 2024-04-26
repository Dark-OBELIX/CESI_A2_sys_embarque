void setup() {
  Serial.begin(9600);
  long start = micros();
  int compt = 0;
  int compt2 = 0;
  int limit = 10;
  
//////////////ligne a remplir////////////////// 
///////////////ligne a remplir/////////////////

  while (compt < limit){
    fiboASM();
    compt++;
    }
       
  long endASM = micros();

  while(compt2 < limit){
    fibo();
    compt2++;
    }
    
  long endN = micros();

  Serial.print("ASM time: "); Serial.println(endASM -start);
  Serial.print("C time: "); Serial.println(endN -endASM);
}
/////////////////////////////////////////////////////////fin setup

long fiboASM(){
  long rASM = 0;

  
  ///////ligne a remplir///////

  
  Serial.print(rASM);
}
long a = 1;
long b = 2;
long fibo(){
  long r = a + b;
  a = b;
  b = r;
}

void loop() {}
