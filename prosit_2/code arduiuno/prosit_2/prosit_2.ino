void setup() {
  Serial.begin(9600);
  int compt = 0;
  int compt2 = 0;
  int limit = 10;

  long start = micros();
  
  asm("ldi r26, 0");
  asm("ldi r27, 1");

  while (compt < limit) {
    fiboASM();
    compt++;
  }

  long endASM = micros();

  while (compt2 < limit) {
    fibo();
    compt2++;
  }

  long endN = micros();
  Serial.print("ASM time : ");
  Serial.println(endASM - start);
  Serial.print("C time : ");
  Serial.print(endN - endASM);
}


long fiboASM() {
  long rASM = 0;
  asm("add r26 , r27": "=r" (rASM));
  Serial.println(rASM);
  asm("mov r28, r27");
  asm("mov r27, r25");
  asm("mov r26, r28");
  
}

long a = 1;
long b = 2;

long fibo() {
  long r = a + b;
  a = b;
  b = r;
  Serial.println(r);
}

void loop(){}
