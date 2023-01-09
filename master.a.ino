#include<SoftwareSerial.h>
SoftwareSerial softSerial(10, 11);
void setup() 
{
  softSerial.begin(9600); 
}

void loop() {
  softSerial.write("Kalpana G3 ES");
  delay (100);

}
