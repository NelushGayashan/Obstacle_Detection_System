#include "UltrasonicSensor.h"
#include <Arduino.h>

UltrasonicSensor::UltrasonicSensor(int triggerPin, int echoPin)
    : triggerPin(triggerPin), echoPin(echoPin)
{
    pinMode(triggerPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

long UltrasonicSensor::getDuration()
{
    digitalWrite(triggerPin, LOW);
    delayMicroseconds(2);
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);
    return pulseIn(echoPin, HIGH);
}

long UltrasonicSensor::getDistance()
{
    long totalDistance = 0;
    for (int i = 0; i < NUM_READINGS; i++)
    {
        long duration = getDuration();
        long distance = duration * SOUND_SPEED / 2;
        totalDistance += distance;
        delay(50); // Short delay between readings
    }
    return totalDistance / NUM_READINGS;
}
