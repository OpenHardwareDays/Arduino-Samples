const int switchPin = 4; //Switch Connected to PIN 4
const int ledPin = 8; //LED Connected to PIN 8
int switchState = 0; //Variable for reading switch status
void setup()
{
    pinMode(ledPin, OUTPUT); //LED PIN is Output
    pinMode(switchPin, INPUT_PULLUP); //Switch PIN is Input
}
void loop()
{
    switchState = digitalRead(switchPin); //Read the status of the Switch
    if (switchState == LOW) //If the switch is pressed
    {
        digitalWrite(ledPin, HIGH); //LED ON
        delay(3000); //3 Second Delay
        digitalWrite(ledPin, LOW); //LED OFF
    }

}
