#include "main.h"

void setup()
{
  Serial.begin(BAUDRATE);

  Serial.print("Connecting...");
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println();

  Serial.print("WiFi connected to ");
  Serial.println(WiFi.localIP());

  // Firebase.begin(DATABASE_URL, DATABASE_SECRET);
}

void loop()
{
  Serial.println("Running...");
  delay(1000);
}