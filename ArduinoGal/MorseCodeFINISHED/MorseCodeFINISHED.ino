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
      digitalWrite(8, HIGH);
      break;
    }
    if(i > 1500)
    
      return 2;
  }
  i = 0;
  while(digitalRead(2) == 1) // counting the miliseconds
  { 
    i++;
    delay(1);
  }
  digitalWrite(8, LOW);
  
  if(i < 500)
    return 0;
  else
    return 1;
  
}

void loop() { 
  int num;
  num = morse();
  if(num == 0)
  {
    num = morse();
    // E TREE
    if(num == 0)
    {
      num = morse();
      if(num == 0)
      {
        num = morse();
        if(num == 0)
        {
          Serial.print("H");
        }
        else if(num == 1)
        {
          Serial.print("V"); 
        }
        else
        {
          Serial.print("S"); 
        }
      }
      else if(num == 1)
      {
        num = morse();
        if(num == 0)
        {
          Serial.print("F");
        }
        else if(num == 1)
        {
          Serial.print("-"); 
        }
        else
        {
          Serial.print("U"); 
        } 
      }
      else
      {
        Serial.print("I"); 
      }
    }
    //  A TREE
    else if(num == 1)
    {
      num = morse();
      if(num == 0)
      {
        num = morse();
        if(num == 0)
        {
          Serial.print("L");
        }
        else
        {
          Serial.print("R"); 
        }
      }
      else if(num == 1)
      {
        num = morse();
        if(num == 0)
        {
          Serial.print("P");
        }
        else if(num == 1)
        {
          Serial.print("J"); 
        }
        else
        {
          Serial.print("W"); 
        } 
      }
      else
      {
        Serial.print("A"); 
      }
    }
    else
    {
      Serial.print("E"); 
    } 
   }
 
  // T TREE
  else if(num == 1)
  {
    num = morse();
    if(num == 0)
    {
      num = morse();
      if(num == 0)
      {
        num = morse();
        if(num == 0)
        {
          Serial.print("B");
        }
        else if(num == 1)
        {
          Serial.print("X"); 
        }
        else
        {
          Serial.print("D"); 
        }
      }
      else if(num == 1)
      {
        num = morse();
        if(num == 0)
        {
          Serial.print("C");
        }
        else if(num == 1)
        {
          Serial.print("Y"); 
        }
        else
        {
          Serial.print("K"); 
        } 
      }
      else
      {
        Serial.print("N"); 
      }
    }
    //  M TREE
    else if(num == 1)
    {
      num = morse();
      if(num == 0)
      {
        num = morse();
        if(num == 0)
        {
          Serial.print("Z");
        }
        else
        {
          Serial.print("G"); 
        }
      }
      
      else if(num == 1)
      {
        num = morse();
        if(num == 0)
        {
          Serial.print(".");
        }
        else if(num == 1)
        {
          Serial.print(","); 
        }
        else
        {
          Serial.print("O"); 
        } 
      }
      
      else
      {
        Serial.print("M"); 
      }
    }
    else
    {
      Serial.print("T"); 
    } 
   }
  else
  {
    
    Serial.print(" "); 
  }
  
 
  /*  
  digitalWrite(12, HIGH);   // set LED #1 on
  delay(i);              // wait for <i> miliseconds
  digitalWrite(12, LOW);    // set LED #1 off
  digitalWrite(8, HIGH);   // set LED #2 on
  delay(i);              // wait for <i> miliseconds
  digitalWrite(8, LOW); */    // set LED #2 off
}



