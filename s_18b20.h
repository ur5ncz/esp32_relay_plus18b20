OneWire oneWire(oneWireBus);

DallasTemperature sensors(&oneWire);

void setup18b20() {
  // Start the Serial Monitor
  Serial.begin(115200);
  // Start the DS18B20 sensor
  sensors.begin();

}

DeviceAddress sensor1 = { 0x28, 0xE6, 0x7B, 0x88, 0x38, 0x20, 0x1, 0x39 };

void loop18b20(void){ 
  sensors.requestTemperatures(); // Send the command to get temperatures
  sensors.getTempC(sensor1);
  temp1 = sensors.getTempC(sensor1);
  }