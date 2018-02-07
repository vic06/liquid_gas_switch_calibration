#include <Wire.h>  

int LO1 = 2;
int LO2 = 3;
int LO1LED = 7;
int LO2LED = 8;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(A0, INPUT);
pinMode (LO1, INPUT);
pinMode (LO2, INPUT);
pinMode (LO1LED, OUTPUT);
pinMode (LO2LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LO1LED, digitalRead(LO1));
digitalWrite(LO2LED, digitalRead(LO2));
Serial.print("Analog Out: ");
Serial.println(analogRead(A0));
//Serial.print("\n");
delay (10);
}
