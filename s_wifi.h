#include <WiFi.h>
#include <DNSServer.h>


DNSServer dnsServer;

const char* ssid = "ap-20-8";           
const char* password = "Aviacontact73!"; 

void SetupWiFi()
{
  Serial.begin(115200);
  Serial.println();

  WiFi.begin(ssid, password);

  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
}