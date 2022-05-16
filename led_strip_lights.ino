#define myAnodeLed1 10
#define myAnodeLed2 9
#define myAnodeLed3 8

#define Led_on_off 100

void setup() {
  // put your setup code here, to run once:
  pinMode(myAnodeLed1, OUTPUT);
  pinMode(myAnodeLed2, OUTPUT);
  pinMode(myAnodeLed3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(myAnodeLed1, HIGH);
  delay(Led_on_off);
  digitalWrite(myAnodeLed2, HIGH);
  delay(Led_on_off);
  digitalWrite(myAnodeLed3, HIGH);
  delay(Led_on_off);

  digitalWrite(myAnodeLed1, LOW);
  delay(Led_on_off);
  digitalWrite(myAnodeLed2, LOW);
  delay(Led_on_off);
  digitalWrite(myAnodeLed3, LOW);
  delay(Led_on_off);
}
