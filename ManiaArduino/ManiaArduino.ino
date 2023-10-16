const int LDRPin = 2;
const int ledPin =  8;

int LDRState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(LDRPin, INPUT);
}

void loop() {
  LDRState = digitalRead(LDRPin);

  if (LDRState == HIGH) {
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, HIGH);
  }
}
