/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor 
 
 
 This example code is in the public domain.
 */

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}


int i = 0;
void loop() {
  int sensorValue = i;
  digitalWrite(13, HIGH);   // set the LED on
  delay(3000);              // wait for a second
  digitalWrite(13, LOW);    // set the LED off
  delay(1000);              // wait for a second
  if(digitalRead(2) == 1)
    i++;
  Serial.println(sensorValue);
  
  delay(100);
}



