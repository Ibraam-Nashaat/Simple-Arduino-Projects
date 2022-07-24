const int LED=9; // The LED is connected to pin 9
const int BUTTON=2; // The Button is connected to pin 2
boolean lastButton = LOW; // Variable containing the previous
// button state
boolean currentButton = LOW; // Variable containing the current
// button state
boolean ledOn = false; // The present state of the LED (on/off)
void setup()
{
pinMode (LED, OUTPUT); // Set the LED pin as an output
pinMode (BUTTON, INPUT); // Set button as input (not required)
}
/*
* Debouncing Function
* Pass it the previous button state,
* and get back the current debounced button state.
*/
boolean debounce(boolean last)
{
boolean current = digitalRead(BUTTON); // Read the button state
if (last != current) 
{
delay(5); //Wait 5ms
current = digitalRead(BUTTON); //Read it again
}
return current; //Return the current value
}
void loop()
{
currentButton = debounce(lastButton); //Read debounced state
if (lastButton == LOW && currentButton == HIGH)
{
ledOn = !ledOn; //Toggle the LED value
}
lastButton = currentButton; //Reset button value
digitalWrite(LED, ledOn); //Change the LED state
}
