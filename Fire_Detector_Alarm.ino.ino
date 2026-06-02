int sensorPin = A0;
int buzzer = 13;
int G_led = 8;
int R_led = 9;
int read_value;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(R_led, OUTPUT);
  pinMode(G_led, OUTPUT);
}

void loop() {
  read_value = digitalRead(sensorPin);

  if (read_value == 1) {
    digitalWrite(buzzer, LOW);
    digitalWrite(R_led, LOW);
    digitalWrite(G_led, HIGH);
  }
  else {
    digitalWrite(buzzer, HIGH);
    digitalWrite(R_led, HIGH);
    digitalWrite(G_led, LOW);
    delay(1000);
  }

  delay(100);
}
