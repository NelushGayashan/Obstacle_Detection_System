#include "Alarm.h"
#include <Arduino.h>

Alarm::Alarm(int buzzerPin, int vibratorPin)
    : buzzerPin(buzzerPin), vibratorPin(vibratorPin)
{
    pinMode(buzzerPin, OUTPUT);
    pinMode(vibratorPin, OUTPUT);
}

void Alarm::activate()
{
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(vibratorPin, HIGH);
    delay(1000); // Alarm duration
    digitalWrite(buzzerPin, LOW);
    digitalWrite(vibratorPin, LOW);
}
