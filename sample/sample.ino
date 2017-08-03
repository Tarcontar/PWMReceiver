#include "PWMReceiver.h"

PWMReceiver rec(2, 3, 4, 5, 6, 7);

void setup() 
{
  Serial.begin(9600);

}

void loop() 
{
  Serial.print(rec.getChannel(1));
  Serial.print(" | ");
  Serial.print(rec.getChannel(2));
  Serial.print(" | ");
  Serial.print(rec.getChannel(3));
  Serial.print(" | ");
  Serial.print(rec.getChannel(4));
  Serial.print(" | ");
  Serial.print(rec.getChannel(5));
  Serial.print(" | ");
  Serial.print(rec.getChannel(6));
  Serial.print(" | ");
  Serial.println("");
  delay(100);
}



