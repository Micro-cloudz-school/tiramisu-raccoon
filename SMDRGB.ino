/*
 */

const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;

void setup(){ 
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  String input = "";
      if (Serial.available()) {
    input = Serial.readStringUntil('\n'); // Read until newline
    input.trim(); // Remove any spaces or newline characters
      }

   if (input == "67") {
       analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
     delay(500);
     analogWrite(redPin, 255);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 255);
    }

}
