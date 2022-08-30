

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(7,INPUT);
}

// the loop function runs over and over again forever
void loop() {
  int IRVAL=digitalRead(7);
 Serial.println(IRVAL);
 if(IRVAL==0)
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
 else                       // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
                        // wait for a second
}
