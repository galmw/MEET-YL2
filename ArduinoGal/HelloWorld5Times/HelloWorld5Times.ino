/*
 * Hello World!
 *
 * This is the Hello World! for Arduino. 
 * It shows how to send data to the computer
 */


void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);           // set up Serial library at 9600 bps
}

int i = 0;
void loop()                       // run over and over again
{
  if(i < 5)
    Serial.println("Hello, World!");
  delay(1000);
  i += 1;                                // print "Hello, World!" once a second, five times.
}

