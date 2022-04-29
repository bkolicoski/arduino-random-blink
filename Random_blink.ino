int randNumber;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}
void loop() {
  digitalWrite(3, !digitalRead(3));
  digitalWrite(4, !digitalRead(4));
  randNumber = random(25, 400);
  delay(randNumber);
}
