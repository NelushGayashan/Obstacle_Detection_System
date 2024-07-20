#ifndef WATER_SENSOR_H
#define WATER_SENSOR_H

#define NUM_READINGS 5 // number of readings for averaging

class WaterSensor
{
private:
    int pin;

public:
    WaterSensor(int pin);
    int getValue();
};

#endif
