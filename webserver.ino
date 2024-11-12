// Load Wi-Fi library
#include <WiFi.h>
#include "LittleFS.h"
#include <ESPAsyncWebServer.h>

// Replace with your network credentials
const char *ssid = "feather32";
const char *password = "feather32";

// Set web server port number to 80
AsyncWebServer server(80);

void setup()
{
  Serial.begin(115200);

  if (!LittleFS.begin())
  {
    Serial.println("An Error has occurred while mounting LittleFS");
    return;
  }

  File file = LittleFS.open("/test_example.txt", "r");
  if (!file)
  {
    Serial.println("Failed to open file for reading");
    return;
  }

  Serial.println("File Content:");
  while (file.available())
  {
    Serial.write(file.read());
  }
  file.close();

  Serial.println("\n[*] Creating AP");
  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);
  Serial.print("[+] AP Created with IP Gateway ");
  Serial.println(WiFi.softAPIP());

  // Define a route to serve the HTML page
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request)
            {
    Serial.println("ESP32 Web Server: New request received:"); // for debugging
    Serial.println("GET /");                                   // for debugging
    request->send(LittleFS, "/index.html", "text/html"); });

  // Define a route to serve the CSS file
  server.on("/style.css", HTTP_GET, [](AsyncWebServerRequest *request)
            {
    Serial.println("ESP32 Web Server: New request received:"); // for debugging
    Serial.println("GET /style.css");                          // for debugging
    request->send(LittleFS, "/css/style.css", "text/css"); });

  // Start the server
  server.begin();
}

void loop() {}