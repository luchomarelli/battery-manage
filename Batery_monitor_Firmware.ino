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
    digitalWrite(RELAY_1, !digitalRead(RELAY_1));
    delay(2000);
}