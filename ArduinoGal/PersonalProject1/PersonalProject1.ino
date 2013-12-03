/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor 
 
 
 This example code is in the public domain.
 */

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}


int i = 0;
void loop() {
  int sensorValue = 
  i;
  if(digitalRead(2) == 1)
    i++;
  Serial.println(sensorValue);
  
  delay(100);
}



