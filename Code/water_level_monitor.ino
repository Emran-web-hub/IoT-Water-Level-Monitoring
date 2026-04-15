
#define BLYNK_TEMPLATE_ID "TMPL4X9K2M7"   
#define BLYNK_TEMPLATE_NAME "Water Level Monitor"
#define BLYNK_AUTH_TOKEN "AbC123XyZ789Token456" 

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// WiFi Credentials
char ssid[] = "Smart_Plant";    
char pass[] = "12345678";  // Change this

// Probe pins (5 levels)
const int probePins[5] = {D1, D2, D5, D6, D7};

BlynkTimer timer;
int waterPercentage = 0;

void readWaterLevel() {
  waterPercentage = 0;
  
  for (int i = 0; i < 5; i++) {
    if (digitalRead(probePins[i]) == HIGH) {
      waterPercentage = (i + 1) * 20;
    }
  }

  Blynk.virtualWrite(V0, waterPercentage);
  
  Serial.print("Water Level: ");
  Serial.print(waterPercentage);
  Serial.println("%");
}

void setup() {
  Serial.begin(115200);
  Serial.println("\n🚀 IoT Water Level Monitor Starting...");

  for (int i = 0; i < 5; i++) {
    pinMode(probePins[i], INPUT);
  }

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  timer.setInterval(2000L, readWaterLevel);
}

void loop() {
  Blynk.run();
  timer.run();
}

BLYNK_CONNECTED() {
  Serial.println("✅ Connected to Blynk!");
}
