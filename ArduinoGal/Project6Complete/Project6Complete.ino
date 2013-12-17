/*
  Personal Project 6
  Ask the user to press and hold the button. However long the user presses the button, set that to how fast the LED blinks.
 */



void setup() {
  int i = 0;
  Serial.begin(9600);
  
  pinMode(2, INPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
}

boolean flag = true;
int i = 0;

void loop() {
  Serial.println("Hold the button for <i> miliseconds!");
  if(flag)
  {
    while(digitalRead(2) == 0)
    {
      if(digitalRead(2) == 1) // waiting for a first input
        break;
    }
    while(digitalRead(2) == 1) // counting the miliseconds
    {
      i++;
      delay(1);
    }
    flag = false;
    Serial.println("Input miliseconds set for:");
    Serial.println(i);
  } 
  
  digitalWrite(12, HIGH);   // set LED #1 on
  delay(i);              // wait for <i> miliseconds
  digitalWrite(12, LOW);    // set LED #1 off
  digitalWrite(8, HIGH);   // set LED #2 on
  delay(i);              // wait for <i> miliseconds
  digitalWrite(8, LOW);    // set LED #2 off
}
