void setup() {
  
  Serial.begin(9600);
  //long start = micros();
  //int compt = 0;
  //int limit = 11;// lilmit de 10 a 11  
  long rASM = 0;
  asm("mov r27, 1"); // la valeur numérique 1 est mise dans la case mémoire r1
  asm("mov r28, 2"); // la valeur numérique 2 est mise dans la case mémoire r2
  
  asm("add r27, r28": "=r" (rASM)); // la valeur de l'adition de R1 à R2 est mise dans R2
  Serial.print(rASM);
  }
  /*
  while (compt < limit){
    fiboASM();
    compt++;
    }
}

long fiboASM(){
  
  long rASM = 0;
  //asm("mov rASM, 0");
  asm("add r1, r2": "=r" (rASM)); // la valeur de l'adition de R1 à R2 est mise dans R2
  Serial.print(rASM);
  //asm("mov rASM,r1 "); // puis mise dans rASM
  
  //asm("mov r1,r2");
  //asm("mov r2,rASM");
  //  asm("add r24, r26"
     //// : "=r" (y));
      
  //Serial.print(rASM);
}
*/
void loop() {}
