#include "dht11_bm.h"

#define RELAY_1 5

void setup()
{
    Serial.begin(115200);
    Serial.println("Inicia programa");
    pinMode(RELAY_1, OUTPUT);
}

void loop()
{
    Serial.println("[LOOP]: mensaje de testeo.");
    Serial.print("Temperatura: ");
    Serial.println(dht11_get());
    digitalWrite(RELAY_1, !digitalRead(RELAY_1));
    delay(2000);
}