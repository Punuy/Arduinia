const int LDRPin1 = 5;
const int LDRPin2 = 4;
const int LDRPin3 = 3;
const int LDRPin4 = 2;

const int Key1 =  6;
const int Key2 =  7;
const int Key3 =  8;
const int Key4 =  9;

int LDRState1 = 0;
int LDRState2 = 0;
int LDRState3 = 0;
int LDRState4 = 0;

void setup() {
  pinMode(Key1, OUTPUT);
  pinMode(Key2, OUTPUT);
  pinMode(Key3, OUTPUT);
  pinMode(Key4, OUTPUT);
  pinMode(LDRPin1, INPUT);
  pinMode(LDRPin2, INPUT);
  pinMode(LDRPin3, INPUT);
  pinMode(LDRPin4, INPUT);
}


void key(){

  LDRState1 = digitalRead(LDRPin1);
  LDRState2 = digitalRead(LDRPin2);
  LDRState3 = digitalRead(LDRPin3);
  LDRState4 = digitalRead(LDRPin4);

  
  if (LDRState1 == HIGH) {
    digitalWrite(Key1, HIGH);
  } else {
    digitalWrite(Key1, LOW);
  }

  if (LDRState2 == HIGH) {
    digitalWrite(Key2, HIGH);
  } else {
    digitalWrite(Key2, LOW);
  }

  if (LDRState3 == HIGH) {
    digitalWrite(Key3, HIGH);
  } else {
    digitalWrite(Key3, LOW);
  }

  if (LDRState4 == HIGH) {
    digitalWrite(Key4, HIGH);
  } else {
    digitalWrite(Key4, LOW);
  }
}

void loop() {
  key();
}
