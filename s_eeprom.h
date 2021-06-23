
#include "EEPROM.h"


void ReadEEPROMData()
{
    LED_0_state = EEPROM.readByte(EEPROM_ADDRESS_LED_0);
    LED_1_state = EEPROM.readByte(EEPROM_ADDRESS_LED_1);
    LED_2_state = EEPROM.readByte(EEPROM_ADDRESS_LED_2);
    LED_3_state = EEPROM.readByte(EEPROM_ADDRESS_LED_3);
    LED_4_state = EEPROM.readByte(EEPROM_ADDRESS_LED_4);
    LED_5_state = EEPROM.readByte(EEPROM_ADDRESS_LED_5);
    LED_6_state = EEPROM.readByte(EEPROM_ADDRESS_LED_6);
    LED_7_state = EEPROM.readByte(EEPROM_ADDRESS_LED_7);
    LED_8_state = EEPROM.readByte(EEPROM_ADDRESS_LED_8);
    LED_9_state = EEPROM.readByte(EEPROM_ADDRESS_LED_9);
}

void WriteEEPROMData()
{
    EEPROM.writeByte(EEPROM_ADDRESS_LED_0, LED_0_state);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_1, LED_1_state);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_2, LED_2_state);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_3, LED_3_state);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_4, LED_4_state);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_5, LED_5_state);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_6, LED_6_state);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_7, LED_7_state);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_8, LED_8_state);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_9, LED_9_state);
}

void SetDefaultEEPROMData()
{
    EEPROM.writeByte(EEPROM_ADDRESS_LED_0, 0);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_1, 0);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_2, 0);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_3, 0);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_4, 0);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_5, 0);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_6, 0);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_7, 0);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_8, 0);
    EEPROM.writeByte(EEPROM_ADDRESS_LED_9, 0);
    EEPROM.commit();
}

void SetupEEPROM()
{
    EEPROM.begin(10);

    if (EEPROM.readByte(EEPROM_ADDRESS_LED_0) == -1 || EEPROM.readByte(EEPROM_ADDRESS_LED_1) == -1 || EEPROM.readByte(EEPROM_ADDRESS_LED_2) == -1 || EEPROM.readByte(EEPROM_ADDRESS_LED_3) == -1 || EEPROM.readByte(EEPROM_ADDRESS_LED_4) == -1 || EEPROM.readByte(EEPROM_ADDRESS_LED_5) == -1 || EEPROM.readByte(EEPROM_ADDRESS_LED_6) == -1 || EEPROM.readByte(EEPROM_ADDRESS_LED_7) == -1 || EEPROM.readByte(EEPROM_ADDRESS_LED_8) == -1 || EEPROM.readByte(EEPROM_ADDRESS_LED_9) == -1)
    {
        SetDefaultEEPROMData();
    }
    else
    {
        ReadEEPROMData();
    }
}