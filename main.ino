#include <Arduino.h>


#define FWDLEFT0 D7
#define FWDLEFT1 D6
#define FWDRGHT0 D3
#define FWDRGHT1 D2
#define BCKLEFT0 D4
#define BCKLEFT1 D5
#define BCKRGHT0 D0
#define BCKRGHT1 D1


void setup() {
  Serial.begin(115200);
  Serial.println("Starting setup...");
  pinMode(FWDLEFT0, OUTPUT);
  pinMode(FWDLEFT1, OUTPUT);
  pinMode(FWDRGHT0, OUTPUT);
  pinMode(FWDRGHT1, OUTPUT);
  pinMode(BCKLEFT0, OUTPUT);
  pinMode(BCKLEFT1, OUTPUT);
  pinMode(BCKRGHT0, OUTPUT);
  pinMode(BCKRGHT1, OUTPUT);
  Serial.println("Setup complete. Motors initialized to stop.");
}


void loop() {
  digitalWrite(FWDLEFT0, HIGH);
  digitalWrite(FWDLEFT1, LOW);
  digitalWrite(FWDRGHT0, HIGH);
  digitalWrite(FWDRGHT1, LOW);
  digitalWrite(BCKLEFT0, HIGH);
  digitalWrite(BCKLEFT1, LOW);
  digitalWrite(BCKRGHT0, HIGH);
  digitalWrite(BCKRGHT1, LOW);
  delay(1000);
  digitalWrite(FWDLEFT0, LOW);
  digitalWrite(FWDLEFT1, LOW);
  digitalWrite(FWDRGHT0, LOW);
  digitalWrite(FWDRGHT1, LOW);
  digitalWrite(BCKLEFT0, LOW);
  digitalWrite(BCKLEFT1, LOW);
  digitalWrite(BCKRGHT0, LOW);
  digitalWrite(BCKRGHT1, LOW);
  delay(1000);
}
