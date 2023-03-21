#define LED D0 // Led in NodeMCU at pin GPIO16 (D0) 

void setup() {
    pinMode(LED, OUTPUT); //LED pin as output
}

void loop() {
    digitalWrite(LED, HIGH); //turn the led off
    delay(5000); //wait for 5 sec
    digitalWrite(LED, LOW); //turn the led on
    delay(5000); //wait for 5 sec 
}
