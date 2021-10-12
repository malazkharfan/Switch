// SWITCH
//
// Light the Led, if the cable plugged in 2, the Led is ON. If the cable plugged out from 2, Led is OFF.
void setup() {
  // LED Builtin used as an OUTPUT to the project
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  // Command the LED-BUILTIN to equal the Pin2.
  digitalWrite(LED_BUILTIN, digitalRead(2));
}
