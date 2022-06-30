#include <WebUSB.h>
#include <Servo.h>


#define Serial WebUSBSerial
Servo myservo;

const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
int pos = 0;    // variable to store the servo position

int color[3];
int colorIndex;

void setup() {
  while (!Serial) {
    ;
  }
  Serial.begin(9600);
  Serial.write("Sketch begins.\r\n");
  Serial.flush();
  colorIndex = 0;
  myservo.attach(9);
  myservo.write(60);
}

void loop() {

  if (Serial && Serial.available()) {
    color[colorIndex++] = Serial.read();
    if (colorIndex == 1) {

      //       Serial.flush();
      //      analogWrite(redPin, color[0]);
      if (color[0] == 1) {
        myservo.write(0);
        delay(2000);
        for (pos = 0; pos <= 75; pos += 1) { // goes from 0 degrees to 180 degrees
          // in steps of 1 degree
          myservo.write(pos);              // tell servo to go to position in variable 'pos'
          delay(5);                       // waits 15ms for the servo to reach the position
        }
        delay(1000);
        Serial.write("ceral detected.\r\n");
      }

      else if (color[0] == 2) {
        myservo.write(180);
        delay(2000);
        for (pos = 180; pos <= 75; pos -= 1) { // goes from 0 degrees to 180 degrees
          // in steps of 1 degree
          myservo.write(pos);              // tell servo to go to position in variable 'pos'
          delay(20);                       // waits 15ms for the servo to reach the position
        }
        delay(1000);
        Serial.write("mallow detected.\r\n");
      }
      while (Serial.available()) {
        int throwaway = Serial.read();
        Serial.write("Throwing away.\r\n");
      }

      Serial.flush();
      colorIndex = 0;
    }
  }
  else {
    //    Serial.println("asdf");
    for (pos = 60; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(3);                       // waits 15ms for the servo to reach the position
    }
    for (pos = 90; pos >= 60; pos -= 1) { // goes from 180 degrees to 0 degrees
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(3);                       // waits 15ms for the servo to reach the position
    }
//    delay(200);
  }

  
}
