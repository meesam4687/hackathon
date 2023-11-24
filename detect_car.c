void setup() {
  Serial.begin(9600);
}

void loop() {
  int x = digitalRead(3);
  if(x==1)
  {
    Serial.print("a");
    delay(500);
  }
}
