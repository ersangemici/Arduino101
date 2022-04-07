#define Ldr A0
void setup() {
  Serial.begin(9600);

}

void loop() {
  int Ldr_deger =analogRead(Ldr);
  Serial.print("Analog Deger = ");
  Serial.print(Ldr_deger);
  Serial.print("\n");
  delay(250);

}
