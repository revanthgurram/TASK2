char command;

void setup() {
  pinMode(13, OUTPUT);  // LED on pin 13
  Serial.begin(9600);
  Serial.println("Enter '1' to ON LED, '0' to OFF LED");
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();
    if (command == '1') {
      digitalWrite(13, HIGH);
      Serial.println("LED ON");
    }
    else if (command == '0') {
      digitalWrite(13, LOW);
      Serial.println("LED OFF");
    }
  }
}
