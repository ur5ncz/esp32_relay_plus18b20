void SetupAPI()
{
    server.on("/api/reboot", HTTP_GET, [](AsyncWebServerRequest *request) {
        request->send(200, "text/plain", "{\"result\":\"done\"}");
        ESP.restart();
    });

    server.on("/api/set-state-led0", HTTP_GET, [](AsyncWebServerRequest *request) {
        String stateRequest;
        if (request->hasParam("state"))
        {
            stateRequest = request->getParam("state")->value();
            EEPROM.writeByte(EEPROM_ADDRESS_LED_0, stateRequest.toInt());
            EEPROM.commit();
        }

        request->send(200, "text/plain", "{\"result\":\"done\"}");
    });

    server.on("/api/set-state-led1", HTTP_GET, [](AsyncWebServerRequest *request) {
        String stateRequest;
        if (request->hasParam("state"))
        {
            stateRequest = request->getParam("state")->value();
            EEPROM.writeByte(EEPROM_ADDRESS_LED_1, stateRequest.toInt());
            EEPROM.commit();
        }

        request->send(200, "text/plain", "{\"result\":\"done\"}");
    });

    server.on("/api/set-state-led2", HTTP_GET, [](AsyncWebServerRequest *request) {
        String stateRequest;
        if (request->hasParam("state"))
        {
            stateRequest = request->getParam("state")->value();
            EEPROM.writeByte(EEPROM_ADDRESS_LED_2, stateRequest.toInt());
            EEPROM.commit();
        }

        request->send(200, "text/plain", "{\"result\":\"done\"}");
    });

    server.on("/api/set-state-led3", HTTP_GET, [](AsyncWebServerRequest *request) {
        String stateRequest;
        if (request->hasParam("state"))
        {
            stateRequest = request->getParam("state")->value();
            EEPROM.writeByte(EEPROM_ADDRESS_LED_3, stateRequest.toInt());
            EEPROM.commit();
        }

        request->send(200, "text/plain", "{\"result\":\"done\"}");
    });

    server.on("/api/set-state-led4", HTTP_GET, [](AsyncWebServerRequest *request) {
        String stateRequest;
        if (request->hasParam("state"))
        {
            stateRequest = request->getParam("state")->value();
            EEPROM.writeByte(EEPROM_ADDRESS_LED_4, stateRequest.toInt());
            EEPROM.commit();
        }

        request->send(200, "text/plain", "{\"result\":\"done\"}");
    });

    server.on("/api/set-state-led5", HTTP_GET, [](AsyncWebServerRequest *request) {
        String stateRequest;
        if (request->hasParam("state"))
        {
            stateRequest = request->getParam("state")->value();
            EEPROM.writeByte(EEPROM_ADDRESS_LED_5, stateRequest.toInt());
            EEPROM.commit();
        }

        request->send(200, "text/plain", "{\"result\":\"done\"}");
    });

    server.on("/api/set-state-led6", HTTP_GET, [](AsyncWebServerRequest *request) {
        String stateRequest;
        if (request->hasParam("state"))
        {
            stateRequest = request->getParam("state")->value();
            EEPROM.writeByte(EEPROM_ADDRESS_LED_6, stateRequest.toInt());
            EEPROM.commit();
        }

        request->send(200, "text/plain", "{\"result\":\"done\"}");
    });

    server.on("/api/set-state-led7", HTTP_GET, [](AsyncWebServerRequest *request) {
        String stateRequest;
        if (request->hasParam("state"))
        {
            stateRequest = request->getParam("state")->value();
            EEPROM.writeByte(EEPROM_ADDRESS_LED_7, stateRequest.toInt());
            EEPROM.commit();
        }

        request->send(200, "text/plain", "{\"result\":\"done\"}");
    });

    server.on("/api/set-state-led8", HTTP_GET, [](AsyncWebServerRequest *request) {
        String stateRequest;
        if (request->hasParam("state"))
        {
            stateRequest = request->getParam("state")->value();
            EEPROM.writeByte(EEPROM_ADDRESS_LED_8, stateRequest.toInt());
            EEPROM.commit();
        }

        request->send(200, "text/plain", "{\"result\":\"done\"}");
    });

   server.on("/api/set-state-led9", HTTP_GET, [](AsyncWebServerRequest *request) {
        String stateRequest;
        if (request->hasParam("state"))
        {
            stateRequest = request->getParam("state")->value();
            EEPROM.writeByte(EEPROM_ADDRESS_LED_9, stateRequest.toInt());
            EEPROM.commit();
        }

        request->send(200, "text/plain", "{\"result\":\"done\"}");
    });

    server.on("/api/set-state-led17", HTTP_GET, [](AsyncWebServerRequest *request) {
        String stateRequest;

        if (request->hasParam("state"))
        {
            stateRequest = request->getParam("state")->value();
            LED_17_state = stateRequest.toInt();                
        }

        request->send(200, "text/plain", "{\"result\":\"done\"}");
    });


    server.on("/api/get-led0-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led0State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_0);
        root.printTo(*response);
        request->send(response);
    });

    server.on("/api/get-led1-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led1State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_1);
        root.printTo(*response);
        request->send(response);
    });

    server.on("/api/get-led2-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led2State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_2);
        root.printTo(*response);
        request->send(response);
    });


    server.on("/api/get-led3-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led3State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_3);
        root.printTo(*response);
        request->send(response);
    });


    server.on("/api/get-led4-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led4State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_4);
        root.printTo(*response);
        request->send(response);
    });


    server.on("/api/get-led5-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led5State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_5);
        root.printTo(*response);
        request->send(response);
    });


    server.on("/api/get-led6-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led6State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_6);
        root.printTo(*response);
        request->send(response);
    });


    server.on("/api/get-led7-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led7State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_7);
        root.printTo(*response);
        request->send(response);
    });


    server.on("/api/get-led8-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led8State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_8);
        root.printTo(*response);
        request->send(response);
    });

    server.on("/api/get-led9-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led9State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_9);
        root.printTo(*response);
        request->send(response);
    });

    server.on("/api/get-led17-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led17State"] = digitalRead(LED_17_PIN);
        root.printTo(*response);
        request->send(response);
    });

        server.on("/api/get-led21-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led21State"] = digitalRead(LED_21_PIN);
        root.printTo(*response);
        request->send(response);
    });

    server.on("/api/get-led03-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led03State"] = digitalRead(LED_03_PIN);
        root.printTo(*response);
        request->send(response);
    });

    server.on("/api/get-led22-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led22State"] = digitalRead(LED_22_PIN);
        root.printTo(*response);
        request->send(response);
    });

    server.on("/api/get-led23-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led23State"] = digitalRead(LED_23_PIN);
        root.printTo(*response);
        request->send(response);
    });

    server.on("/api/get-in19-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["in19State"] = digitalRead(IN_19_PIN);
        root.printTo(*response);
        request->send(response);
    });

    server.on("/api/get-in34-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["in34State"] = digitalRead(IN_34_PIN);
        root.printTo(*response);
        request->send(response);
    });

    server.on("/api/get-in18-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["in18State"] = digitalRead(IN_18_PIN);
        root.printTo(*response);
        request->send(response);
    });

    server.on("/api/get-in15-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["in15State"] = digitalRead(IN_15_PIN);
        root.printTo(*response);
        request->send(response);
    });

    server.on("/api/get-in05-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["in05State"] = digitalRead(IN_05_PIN);
        root.printTo(*response);
        request->send(response);
    });

    server.on("/api/get-in04-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["in04State"] = digitalRead(IN_04_PIN);
        root.printTo(*response);
        request->send(response);
    });

    server.on("/api/get-temp-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["TempState"] = temp1;
        root.printTo(*response);
        request->send(response);
    });


    server.on("/api/get-leds-state", HTTP_GET, [](AsyncWebServerRequest *request) {
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        DynamicJsonBuffer jsonBuffer;
        JsonObject &root = jsonBuffer.createObject();
        root["led0State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_0);
        root["led1State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_1);
        root["led2State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_2);
        root["led3State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_3);
        root["led4State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_4);
        root["led5State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_5);
        root["led6State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_6);
        root["led7State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_7);
        root["led8State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_8);
        root["led9State"] = EEPROM.readByte(EEPROM_ADDRESS_LED_9);
        root["in19State"] = digitalRead(IN_19_PIN);
        root["in34State"] = digitalRead(IN_34_PIN);
        root["in18State"] = digitalRead(IN_18_PIN);
        root["in15State"] = digitalRead(IN_15_PIN);
        root["in05State"] = digitalRead(IN_05_PIN);
        root["in04State"] = digitalRead(IN_04_PIN);
        root["led17State"] = digitalRead(LED_17_PIN);
        root["led21State"] = digitalRead(LED_21_PIN);
        root["led03State"] = digitalRead(LED_03_PIN);
        root["led22State"] = digitalRead(LED_22_PIN);
        root["led23State"] = digitalRead(LED_23_PIN);
        root.printTo(*response);
        request->send(response);
    });
}