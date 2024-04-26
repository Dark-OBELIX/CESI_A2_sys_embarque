void setup() {
  Serial.begin(9600);
  int y;
  asm("ldi r26, 1");
  asm("ldi r24, 2");
  asm("add r24, r26": "=r" (y));
  Serial.println(y);
}

void loop() {}
