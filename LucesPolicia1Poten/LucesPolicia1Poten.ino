int led1 = 4;
int led2 = 2;
int pinA = A7;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(pinA, INPUT);
}

void loop() {
  int data = analogRead(pinA);
  data = map(data, 0, 1024, 30, 2000);
  digitalWrite(led1, 1);
  digitalWrite(led2, 0);
  delay(data);
  digitalWrite(led1, 0);
  digitalWrite(led2, 1);
  delay(data);
}
