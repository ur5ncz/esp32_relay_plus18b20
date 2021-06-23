#include "main.h"
void setup()
{  
  SetupEEPROM();
  setupPins();
  setup18b20();
  SetupWiFi();
  SetupWebServer();
  SetupAPI();  
}

void loop()
{
  ReadEEPROMData();
  setDataToPins();
  loop18b20();
  delay(500);
}