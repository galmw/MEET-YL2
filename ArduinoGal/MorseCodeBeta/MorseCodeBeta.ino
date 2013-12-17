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

int morse()
{
  i = 0;
  while(digitalRead(2) == 0)
  {
    i++;
    delay(1);
    if(digitalRead(2) == 1) // waiting for a first input
    {
      digitalWrite(12, HIGH);
      break;
    }
    if(i > 2000)
    
      return 2;
  }
  i = 0;
  while(digitalRead(2) == 1) // counting the miliseconds
  { 
    i++;
    delay(1);
  }
  digitalWrite(12, LOW);
  
  if(i < 600)
    return 0;
  else if(i < 1100)
    return 1;
}

void loop() { 
  int num = morse();
  Serial.print(num);
  
    
  /*
  digitalWrite(12, HIGH);   // set LED #1 on
  delay(i);              // wait for <i> miliseconds
  digitalWrite(12, LOW);    // set LED #1 off
  digitalWrite(8, HIGH);   // set LED #2 on
  delay(i);              // wait for <i> miliseconds
  digitalWrite(8, LOW); */    // set LED #2 off
}


