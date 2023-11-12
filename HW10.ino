void setup() {
  // 设置引脚为输出模式
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  unsigned long time = millis();
  int second = time / 1000;
  int ledLight = second / 10;

  int pins[] = {2, 3, 4, 5, 8, 11};
  const int numPins = 6;

  for (int i = 0; i < numPins; i++) {
    if (i <= ledLight) {
      int brightness = map(i, 0, numPins - 1, 1, 255);
      analogWrite(pins[i], brightness); 
    } else {
      digitalWrite(pins[i], LOW);
    }
  }
}
