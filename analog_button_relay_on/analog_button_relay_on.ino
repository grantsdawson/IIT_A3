void setup() {
  pinMode(11, OUTPUT); //make sure you have set your pins as inputs or outputs
  pinMode(A0, INPUT);
}

void loop() {
  if(analogRead(A0) > 650) { //if the analog value of A0 is greater than 650 then
    digitalWrite(11, LOW); //write digital pin 11 low
  }
  else {
    digitalWrite(11, HIGH); //if it isn't higher than 650, make pin 11 high
  }
}
