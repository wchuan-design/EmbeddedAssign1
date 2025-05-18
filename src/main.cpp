#include <Arduino.h>


void setup() {
    for(int i=1;i<=5;i++){
        pinMode(i, OUTPUT);        
    }
}

void loop() {
    for(int i=1;i<=5;i++){
        digitalWrite(i, HIGH);
        delay(500);
        digitalWrite(i, LOW);
    }
    for(int i=5;i>=1;i--){
        digitalWrite(i, HIGH);
        delay(500);
        digitalWrite(i, LOW);
    }
}