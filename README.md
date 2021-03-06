# Watering system
IoT watering system based on ESP8266 Wemos D1 Mini. Use soil moisture sensors and temperature sensor, data are send to Blynk. Water level is checked by ultrasonic distance measuring module. Water pumps are controller by Blynk application manually, powered with 12V (at least 1A) via mosfet modules.
Project is free to use, coded in C++, created in Visual Code with [PlatfomIO IDE](http://docs.platformio.org/en/latest/ide/vscode.html).

> To build a project, you need to download all the necessary libraries and create the *settings.cpp* file in the src folder:
```c++
// Watering system project settings
struct Settings
{
    const char *ssid = "WIFI ssid";
    const char *password = "WIFI password";
    const char *blynkAuth = "blynkAuth";
};
```

### Currents list:
* [Wemos D1 Mini](https://www.aliexpress.com/item/D1-mini-V2-Mini-NodeMcu-4M-bytes-Lua-WIFI-Internet-of-Things-development-board-based-ESP8266/32681374223.html)
* [6x Soil Moisture Sensor](https://www.aliexpress.com/item/Smart-Electronics-Soil-Moisture-Hygrometer-Detection-Humidity-Sensor-Module-For-arduino-Development-Board-DIY-Robot-Smart/32562744759.html)
* [2x 12V water pump](https://www.aliexpress.com/item/DC-12V-Hydroponics-Heating-Mattress-Food-Mdical-Super-Sound-off-Water-Cooling-Cycle-Brushless-Pressure-Boost/32813036499.html)
* [2x IRF520 MOS Driver Module](https://www.aliexpress.com/item/1PCS-0-24V-Top-Mosfet-Button-IRF520-MOS-Driver-Module-For-Arduino-MCU-ARM-Raspberry-pi/32722409551.html)
* [HC-SR04 ultrasonic distance measuring module](https://www.aliexpress.com/item/1pcs-Ultrasonic-Module-HC-SR04-Distance-Measuring-Transducer-Sensor-HC-SR04-HCSR04/32703532280.html)
* [74HC4051 Multiplexer](https://www.aliexpress.com/item/10PCS-LOT-CD4051BE-CD4051-4051BE-4051-DIP16-new-and-original-IC/32807746646.html)
* [GY-BME280-3-3 Temperature/Humidity/Presure sensor](https://www.aliexpress.com/item/1PCS-GY-BME280-3-3-precision-altimeter-atmospheric-pressure-BME280-sensor-module/32767969468.html)
* [7x9cm prototype circuit board](https://www.aliexpress.com/item/MCIGICM-5Pcs-DIY-Prototype-Paper-PCB-Universal-Experiment-Matrix-Circuit-Board-7x9cm-7-9/32350333672.html)
* [Plastic case](https://www.aliexpress.com/item/1-piece-158-90-60mm-IP65-waterproof-plastic-case-with-clear-cover-for-electronic-project-Housing/32812690691.html)
* [Temperature sensor box](https://www.aliexpress.com/item/szomk-plastic-humidity-sensor-project-box-2-pcs-84-27-16mm-diy-wall-mounting-plastic-junction/32586666805.html)

### Schema:
![Schema](https://github.com/vitzaoral/watering-system/blob/master/schema/watering-system_schema.jpg)

### PCB circuit:
![PCB 1](https://github.com/vitzaoral/watering-system/blob/master/schema/pcb_1.jpg)

![PCB 2](https://github.com/vitzaoral/watering-system/blob/master/schema/pcb_2.jpg)

### Blynk:
![Blynk project](https://github.com/vitzaoral/watering-system/blob/master/schema/blynk.jpg)