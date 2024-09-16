int led1 = 2;
int led2 = 4;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  for (int x = 0; x < 10; x++) {
    digitalWrite(led1, 1);
    delay(30);
    digitalWrite(led1, 0);
    delay(30);
  }

  for (int x = 0; x < 10; x++) {
    digitalWrite(led2, 1);
    delay(30);
    digitalWrite(led2, 0);
    delay(30);
  }
}
