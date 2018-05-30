#ifndef __InternetConnection_H
#define __InternetConnection_H

#include <ArduinoOTA.h>
#include <ESP8266WiFi.h>
#include <Watering.h>
#include <SoilMoisture.h>
#include <MeteoData.h>

class InternetConnection
{
public:
  bool initializeThingSpeak(void);
  bool initializeBlynk(void);
  void runBlynk(void);
  bool sendWaterLevelToBlynk(long);
  bool sendSoilMoistureToBlynk(SoilMoistureStatus);
  bool sendMeteoDataToBlynk(MeteoData, bool);
  void setMeteoDataStatusToBlynk(bool);
  void initializeOTA(void);
  void handleOTA(void);
};

#endif