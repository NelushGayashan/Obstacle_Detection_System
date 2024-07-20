#ifndef ALARM_H
#define ALARM_H

class Alarm
{
private:
    int buzzerPin;
    int vibratorPin;

public:
    Alarm(int buzzerPin, int vibratorPin);
    void activate();
};

#endif
