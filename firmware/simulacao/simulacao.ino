// PVN2109-2026 — simulação dos níveis. Validação em placa pendente.
constexpr int totalSensores = 4;
constexpr unsigned long intervaloMs = 2000;
int sensoresAtivos = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  const int nivelPercentual = sensoresAtivos * 100 / totalSensores;
  Serial.print("Sensores ativos: ");
  Serial.print(sensoresAtivos);
  Serial.print("/");
  Serial.print(totalSensores);
  Serial.print(" | Nivel estimado: ");
  Serial.print(nivelPercentual);
  Serial.println("%");

  sensoresAtivos = (sensoresAtivos + 1) % (totalSensores + 1);
  delay(intervaloMs);
}
