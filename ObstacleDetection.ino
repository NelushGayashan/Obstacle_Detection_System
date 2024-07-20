#include "UltrasonicSensor.h"
#include "WaterSensor.h"
#include "Alarm.h"

// Define sensor pins
#define TRIGGER_PIN 2
#define ECHO_PIN 3
#define WATER_SENSOR_PIN A0
#define BUZZER_PIN 4
#define VIBRATOR_PIN 5

// Define sensor thresholds and variables
#define DISTANCE_THRESHOLD 30 // in centimeters
#define WATER_THRESHOLD 500   // analog reading threshold

UltrasonicSensor ultrasonicSensor(TRIGGER_PIN, ECHO_PIN);
WaterSensor waterSensor(WATER_SENSOR_PIN);
Alarm alarm(BUZZER_PIN, VIBRATOR_PIN);

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    long distance = ultrasonicSensor.getDistance();
    int waterValue = waterSensor.getValue();
    if (distance < DISTANCE_THRESHOLD || waterValue > WATER_THRESHOLD)
    {
        alarm.activate();
    }
    delay(100); // Delay for stability
}
