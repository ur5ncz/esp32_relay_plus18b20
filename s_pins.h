#define LED_0_PIN 2
#define LED_1_PIN 13
#define LED_2_PIN 12
#define LED_3_PIN 14
#define LED_4_PIN 27
#define LED_5_PIN 26
#define LED_6_PIN 25
#define LED_7_PIN 33
#define LED_8_PIN 32
#define LED_9_PIN 35
#define IN_19_PIN 19
#define IN_34_PIN 34
#define IN_18_PIN 18
#define IN_15_PIN 15
#define IN_05_PIN 5
#define IN_04_PIN 4
#define oneWireBus 16   
#define LED_17_PIN 17
#define LED_21_PIN 21
#define LED_03_PIN 3
#define LED_01_PIN 1
#define LED_22_PIN 22
#define LED_23_PIN 23

void setupPins()
{
    pinMode(LED_0_PIN, OUTPUT);
    pinMode(LED_1_PIN, OUTPUT);
    pinMode(LED_2_PIN, OUTPUT);
    pinMode(LED_3_PIN, OUTPUT);
    pinMode(LED_4_PIN, OUTPUT);
    pinMode(LED_5_PIN, OUTPUT);
    pinMode(LED_6_PIN, OUTPUT);
    pinMode(LED_7_PIN, OUTPUT);
    pinMode(LED_8_PIN, OUTPUT);
    pinMode(LED_9_PIN, OUTPUT);
    pinMode(IN_19_PIN, INPUT);
    pinMode(IN_34_PIN, INPUT);
    pinMode(IN_18_PIN, INPUT);
    pinMode(IN_15_PIN, INPUT);
    pinMode(IN_05_PIN, INPUT);
    pinMode(IN_04_PIN, INPUT);
    pinMode(LED_17_PIN, OUTPUT);
    pinMode (LED_21_PIN, OUTPUT);
    pinMode (LED_03_PIN, OUTPUT);
    pinMode (LED_01_PIN, OUTPUT);
    pinMode (LED_22_PIN, OUTPUT);
    pinMode (LED_23_PIN, OUTPUT);
}

void setDataToPins()
{
    digitalWrite(LED_0_PIN, LED_0_state);
    digitalWrite(LED_1_PIN, LED_1_state);
    digitalWrite(LED_2_PIN, LED_2_state);
    digitalWrite(LED_3_PIN, LED_3_state);
    digitalWrite(LED_4_PIN, LED_4_state);
    digitalWrite(LED_5_PIN, LED_5_state);
    digitalWrite(LED_6_PIN, LED_6_state);
    digitalWrite(LED_7_PIN, LED_7_state);
    digitalWrite(LED_8_PIN, LED_8_state);
    digitalWrite(LED_9_PIN, LED_9_state);
    digitalWrite(LED_17_PIN, LED_17_state);
    digitalWrite(LED_21_PIN, LED_21_state);   
    digitalWrite(LED_03_PIN, LED_03_state);   
    digitalWrite(LED_22_PIN, LED_22_state);   
    digitalWrite(LED_23_PIN, LED_23_state);       
   }

