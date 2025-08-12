#include <Arduino.h>
#include "WiFi.h"

#define WIFI_NETWORK "Emad1-2.4GHz"
#define WIFI_PASSWORD "0795509095"
#define WIFI_TIMEOUT_MS 20000

void connectToWiFi(){
  Serial.println("Connecting to WiFi");
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_NETWORK, WIFI_PASSWORD);

  unsigned long startAttempTime = millis();

  while(WiFi.status() != WL_CONNECTED && millis() - startAttempTime < WIFI_TIMEOUT_MS){
    Serial.print(".");
    delay(100);
  }

  if(WiFi.status() != WL_CONNECTED){
    Serial.println("Failed!");
  }
  else{
    Serial.print("Connected: ");
    Serial.println(WiFi.localIP());
  }
}

void setup(){
  Serial.begin(115200);
  connectToWiFi();
}

void loop() {
  // Keep empty or add code to run repeatedly
}