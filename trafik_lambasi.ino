#define red 4
#define yellow 3
#define green 2

void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  digitalWrite(red,HIGH);
  delay(3000);
  digitalWrite(red,LOW);
  delay(10);
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  delay(10);
  digitalWrite(green,HIGH);
  delay(2000);
  digitalWrite(green,LOW);
  delay(10);
}
