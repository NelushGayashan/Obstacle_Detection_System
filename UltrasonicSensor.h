#ifndef ULTRASONIC_SENSOR_H
#define ULTRASONIC_SENSOR_H

#define SOUND_SPEED 0.0343 // speed of sound in cm/microsecond
#define NUM_READINGS 5     // number of readings for averaging

class UltrasonicSensor
{
private:
    int triggerPin;
    int echoPin;

public:
    UltrasonicSensor(int triggerPin, int echoPin);
    long getDuration();
    long getDistance();
};

#endif
