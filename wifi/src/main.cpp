#include <Arduino.h>
#include "WiFi.h"

#define WIFI_NETWORK "YourNetworkName"  //Ensure you are connecting to a 2.4 GHz network, the ESP32 cannot detect or connect to 5 GHz Wi-Fi networks 
#define WIFI_PASSWORD "YourPassword"   
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
