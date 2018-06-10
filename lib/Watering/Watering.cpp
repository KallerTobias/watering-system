#include "Watering.h"

// PINS
#define PUMP_1 D8 // balcony
#define PUMP_2 D7 // bedroom
#define ECHO_TRIG D4
#define ECHO_ECHO D3

// for mosfets powering pumps declare max values
const int pump1Max = 700;
const int pump2Max = 1024;

void Watering::initialize()
{
    // set pinmodes
    pinMode(PUMP_1, OUTPUT);
    pinMode(PUMP_2, OUTPUT);
    pinMode(ECHO_TRIG, OUTPUT);
    pinMode(ECHO_ECHO, INPUT);
}

WaterLevel Watering::getWaterLevel()
{
    WaterLevel waterLevel = {0, 0};
    long distance = 0;
    for (int i = 0; i < 10; i++)
    {
        digitalWrite(ECHO_TRIG, LOW);
        delayMicroseconds(2);
        digitalWrite(ECHO_TRIG, HIGH);
        delayMicroseconds(10);
        digitalWrite(ECHO_TRIG, LOW);
        long duration = pulseIn(ECHO_ECHO, HIGH);
        //Calculate the distance (in cm) based on the speed of sound.
        distance = duration / 58.2;
        Serial.print(distance);
        Serial.println(" cm");
        //Delay 100ms before next reading.
        delay(100);
    }

    // maximum and minimum water level in cm
    long min = 40;

    waterLevel.distance = distance;
    waterLevel.waterLevel = min - distance;

    // get usable water column
    Serial.print("Usable water column: ");
    Serial.print(waterLevel.waterLevel);
    Serial.println(" cm");
    return waterLevel;
}

void Watering::turnOnPump1()
{
    Serial.println("Turn ON pump1");
    Watering::turnOnPump(PUMP_1, pump1Max);
}

void Watering::turnOffPump1()
{
    Serial.println("Turn OFF pump1");
    Watering::turnOffPump(PUMP_1, pump1Max);
}

void Watering::turnOnPump2()
{
    Serial.println("Turn ON pump2");
    Watering::turnOnPump(PUMP_2, pump2Max);
}

void Watering::turnOffPump2()
{
    Serial.println("Turn OFF pump2");
   Watering::turnOffPump(PUMP_2, pump2Max);
}

void Watering::turnOnPump(int pin, int maxValue)
{
    for (int i = 0; i <= maxValue; ++i)
    {
        analogWrite(pin, i);
        delay(5);
    }
}

void Watering::turnOffPump(int pin, int maxValue)
{
    for (int i = maxValue; i >= 0; --i)
    {
        analogWrite(pin, i);
        delay(5);
    }
}