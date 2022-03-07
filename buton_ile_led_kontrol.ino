#define kirmizi_led 3
#define yesil_led 2
#define buton 7
int buton_durum = 0;

void setup() {
  pinMode(kirmizi_led,OUTPUT);
  pinMode(yesil_led,OUTPUT);
  pinMode(buton,INPUT);
}

void loop() 
  {
  buton_durum=digitalRead(buton);
    if (buton_durum == 1 )
    {
        digitalWrite(yesil_led,HIGH);
        digitalWrite(kirmizi_led,LOW);
    }
    else
    {
        digitalWrite(yesil_led,LOW);
        digitalWrite(kirmizi_led,HIGH);
    }
 
}
