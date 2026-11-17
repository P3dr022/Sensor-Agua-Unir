// PVN2109-2026 — teste serial preliminar. Validação em placa pendente.
constexpr unsigned long intervaloMs = 1000;
unsigned long ultimoEnvioMs = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  const unsigned long agoraMs = millis();
  if (agoraMs - ultimoEnvioMs >= intervaloMs) {
    ultimoEnvioMs = agoraMs;
    Serial.print("Tempo de funcionamento (ms): ");
    Serial.println(agoraMs);
  }
}
