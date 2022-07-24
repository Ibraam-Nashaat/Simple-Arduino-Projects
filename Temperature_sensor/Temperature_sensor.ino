
const int Temp=0; // Pot on Analog Pin 0
int val = 0; 
void setup()
{
Serial.begin(9600);
}
void loop()
{
val = analogRead(Temp);
Serial.println(val*0.4887585532746823);
delay(500);
}
