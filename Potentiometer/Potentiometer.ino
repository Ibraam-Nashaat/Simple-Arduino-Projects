// Potentiometer Reading Program
const int POT=0; // Pot on Analog Pin 0
int val = 0; // Variable to hold the analog reading from the POT
void setup()
{
Serial.begin(9600);
}
void loop()
{
val = analogRead(POT);
Serial.println(val);
delay(500);
}
