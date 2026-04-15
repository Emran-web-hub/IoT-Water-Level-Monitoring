# IoT-Water-Level-Monitoring

## Objectives
- Monitor water level in real-time
- Prevent overflow and dry conditions
- Enable remote monitoring via internet
- Send alerts/notifications
- Technologies Used
- Arduino / ESP8266 / ESP32
- Ultrasonic Sensor (HC-SR04)
- Wi-Fi Module
- MQTT / HTTP Protocol
- Cloud Platform (ThingSpeak / Blynk / Firebase)
- Embedded C / Arduino IDE

## Features
- 5 water levels (0% → 20% → 40% → 60% → 80% → 100%)
- Real-time gauge in Blynk mobile app
- Notifications for low or full water (optional)
- Uses your existing breadboard, LEDs and probes
- WiFi connected

##  Components
- ESP8266 NodeMCU
- 5 conductive probes (your existing wires in the cup)
- 5 green LEDs + resistors
- Jumper wires

## Wiring 
- NodeMCU 5V (VU pin) → Breadboard + rail
- NodeMCU GND → Breadboard - rail
- Probe 1 (lowest) → D1
- Probe 2 → D2
- Probe 3 → D5
- Probe 4 → D6
- Probe 5 (highest) → D7

##  How to Use
1. Install Blynk IoT app on mobile
2. Create new project → Add Gauge widget on V0
3. Copy Auth Token
4. Upload code
5. Open app and see live water level

##  Hardware Photos
![Photo 1] https://github.com/Emran-web-hub/IoT-Water-Level-Monitoring/blob/main/Images.ino/water_level_Monitor_%20jpg_%201.jpeg
![Photo 2] https://github.com/Emran-web-hub/IoT-Water-Level-Monitoring/blob/main/Images.ino/water_level_Monitor_%20jpg_%202.jpeg

### Code
The complete Arduino code is available in [water_level_monitor.ino]([water_level_monitor.in](https://github.com/Emran-web-hub/IoT-Water-Level-Monitoring/blob/main/Code/water_level_monitor.ino)

##  Circuit Diagram


## Author  
 Muhhamad Emran
