#include "WaterSensor.h"
#include <Arduino.h>

WaterSensor::WaterSensor(int pin) : pin(pin)
{
    pinMode(pin, INPUT);
}

int WaterSensor::getValue()
{
    int sum = 0;
    for (int i = 0; i < NUM_READINGS; i++)
    {
        sum += analogRead(pin);
        delay(50); // Short delay between readings
    }
    return sum / NUM_READINGS;
}
