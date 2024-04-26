void setup() {
  Serial.begin(9600);
  long start = micros();
  int compt = 0;
  int compt2 = 0;
  int limit = 11;// lilmit de 10 a 11
  
asm("movl $1, _vara");
asm("movl $2, _varb");

  while (compt < limit){
    fiboASM();
    compt++;
    }
        
  long endASM = micros();
/*
  while(compt2 < limit){
    fibo();
    compt2++;
    }
*/    
  long endN = micros();

  Serial.print("ASM time: "); Serial.println(endASM -start);
  //Serial.print("C time: "); Serial.println(endN -endASM);
}
/////////////////////////////////////////////////////////fin setup
long fiboASM(){
  long rASM = 0;
    asm("movl _vara, %eax");
    asm("movl _varb, %ecx");
    asm("addl %eax, %ecx");
    asm("movl %ecx, res"); // resultat de l'adition
    asm("movl _varb, _vara");
    asm("movl res, _varb");

  Serial.print(rASM);
}
//////////////////// fonction suite de fibonnacci en c ////////////////////
/*
long a = 1;
long b = 2;
long fibo(){
  long r = a + b;
  Serial.println("fibo : ");
  Serial.println(r);
  a = b;
  b = r;
}
*/
void loop() {}
