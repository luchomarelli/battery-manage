
void setup()
{
    Serial.begin(115200);
    Serial.println("Inicia programa");
}

void loop()
{
    Serial.println("[LOOP]: mensaje.");
    delay(2000);
}