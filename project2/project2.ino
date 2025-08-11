const int sensorPin = A0;
const float baselineTemp = 23.0;

void setup() {
  Serial.begin(9600); // open a serial port
  for(int pinNumber = 2; pinNumber < 5; pinNumber++) {
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}

void loop() {

}
