const int LED = 8;
const int Button = 2;
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Button, INPUT);

}

void loop() {
  int ButtonState = digitalRead(Button);

  if (ButtonState == HIGH)

    digitalWrite(LED, HIGH);

  else

    digitalWrite(LED, LOW);




}
