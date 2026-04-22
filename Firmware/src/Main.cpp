#include <Arduino.h>
#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <ArduinoJson.h>

const char* ssid = "Liver-Monitor-A06";
const char* password = "perfusion-tech";

AsyncWebServer server(80);

// Just copy-paste your HTML from the app folder into this string
const char index_html[] PROGMEM = R"rawliteral(
  )rawliteral";

void setup() {
  Serial.begin(115200);
  WiFi.softAP(ssid, password);
  
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(200, "text/html", index_html);
  });

  server.on("/data", HTTP_GET, [](AsyncWebServerRequest *request){
    StaticJsonDocument<200> doc;
    doc["portal_pressure"] = myPortalValue;   // Real sensor variable
    doc["hepatic_pressure"] = myHepaticValue; // Real sensor variable
    String response;
    serializeJson(doc, response);
    request->send(200, "application/json", response);
});

  server.begin();
}

void loop() {}