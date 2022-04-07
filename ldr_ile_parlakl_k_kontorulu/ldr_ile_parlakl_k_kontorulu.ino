#define Ldr A0
#define led 3
int Isik_siddeti=0;
void setup() {
pinMode(led,OUTPUT);

}

void loop() {
  int Ldr_deger =analogRead(Ldr);
  Isik_siddeti =map(Ldr_deger,0,1023,0,255);
  analogWrite(led,Isik_siddeti);
}
