#include <IRremote.h>
int RECV_PIN = 11; // the pin where you connect the output pin of sensor
int led1 = 2;
int led2 = 4;
int led3 = 7;
int led1_val=0,led2_val=0,led3_val=0;
#define code1 16724175 // code received from button no. 1
#define code2 16718055 // code received from button no. 2
#define code3 16743045 // code received from button no. 3

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
irrecv.enableIRIn(); // Start the receiver
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

void loop() {
if (irrecv.decode(&results)) {
unsigned int value = results.value;
switch(value) {
case code1:
{
  led1_val=~led1_val;
  digitalWrite(led1,led1_val);
  break;
}
case code2:
{
  led2_val=~led2_val;
  digitalWrite(led2,led2_val);
  break;
 }
case code3:
{
  led3_val=~led3_val;
  digitalWrite(led3,led3_val);
  break;
}}
irrecv.resume(); // Receive the next value

}}
