#define buton 7
int buton_durum= 0;
void setup() {
 for(int i=2;i<7;i++)
    {
      pinMode(i,OUTPUT);
    }
    pinMode(buton,INPUT);

}

void loop() {
  buton_durum=digitalRead(buton);
  if(buton_durum==1)
  {
    for(int a=2;a<7;a++)
    {
      digitalWrite(a,HIGH);
      delay(1000);
      digitalWrite(a,LOW);
     }
  
    for(int b=7;b>2;b--)
    {
      digitalWrite(b,HIGH);
      delay(1000);
      digitalWrite(b,LOW);
    }
  }
  else
  {
    for(int k=2;k<7;k++){
      digitalWrite(k,LOW);
  }
}
  }
