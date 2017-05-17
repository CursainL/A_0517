const int analogPin = A0;   // the pin that the potentiometer is attached to
const int ledCount = 10;    // the number of LEDs in the bar graph
int ledPins[] = {
  2, 3, 4, 5, 6, 7, 8, 9, 10, 11
};   // an array of pin numbers to which LEDs are attached
void setup() {
  // loop over the pin array and set them all to output:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}

void loop() {
  int dTime;
  for(int i=0;i<=ledCount;i++) {
    digitalWrite(ledPins[i],HIGH );
    int sensorReading = analogRead(analogPin);
    dTime = map(sensorReading , 0 , 900 , 10, 1000 );
    delay(dTime);
  };
  for(int i=10;i>=0; i--) {
    digitalWrite(ledPins[i] , LOW );
    int sensorReading = analogRead(analogPin);
    dTime = map(sensorReading , 0 , 900 , 10, 1000 );
    delay(dTime); 
  };
}


