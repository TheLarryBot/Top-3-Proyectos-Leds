int led1 = 4;
int led2 = 2;
int pinA = A7;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(pinA, INPUT);
  Serial.begin(9600);
}

void loop() {
  int data = analogRead(pinA);
  if (data < 100) {
    digitalWrite(led1, 1);
    delay(120);
    digitalWrite(led1, 0);
    delay(120);
  }

  if (data > 900) {
    digitalWrite(led2, 1);
    delay(120);
    digitalWrite(led2, 0);
    delay(120);
  }

  Serial.println(data);
}