//This will send 3 TTL pulses to the selected outputsof the Arduino
// https://www.arduino.cc/en/Tutorial/Switch
const int switchPin = 4; //Switch Connected to PIN 4
const int TTLpinP1 = 8; //Output parallel 1
const int TTLpinP2 = 7; //Output parallel 2
const int TTLpinJ1 = 6; //Output jack 1
 
int switchState = 0; //Variable for reading switch status
void setup()
{
    pinMode(TTLpinP1, OUTPUT);
    pinMode(TTLpinP2, OUTPUT);
    pinMode(TTLpinJ1, OUTPUT);
    pinMode(switchPin, INPUT_PULLUP); //Switch PIN is Input
}

void loop()
{
    switchState = digitalRead(switchPin); //Read the status of the Switch
    if (switchState == LOW) //If the switch is pressed
    {
        digitalWrite(TTLpinP1, HIGH); //ON
        digitalWrite(TTLpinP2, HIGH);
        digitalWrite(TTLpinJ1, HIGH);
        delay(50); //50ms Pulse
        digitalWrite(TTLpinP1, LOW); //OFF
        digitalWrite(TTLpinP2, LOW);
        digitalWrite(TTLpinJ1, LOW);
        delay(500); // ISI 500ms
        digitalWrite(TTLpinP1, HIGH); //ON
        digitalWrite(TTLpinP2, HIGH);
        digitalWrite(TTLpinJ1, HIGH);
        delay(50); //50ms Pulse
        digitalWrite(TTLpinP1, LOW); //OFF
        digitalWrite(TTLpinP2, LOW);
        digitalWrite(TTLpinJ1, LOW);
        delay(500); // ISI 500ms
        digitalWrite(TTLpinP1, HIGH); //ON
        digitalWrite(TTLpinP2, HIGH);
        digitalWrite(TTLpinJ1, HIGH);
        delay(50); //50ms Pulse
        digitalWrite(TTLpinP1, LOW); //OFF
        digitalWrite(TTLpinP2, LOW);
        digitalWrite(TTLpinJ1, LOW);
        delay(500); // ISI 500ms
    }
}



