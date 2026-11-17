# Configuração do ESP32 no Windows

## Instalar e selecionar a placa

1. Instale o [Arduino IDE 2](https://www.arduino.cc/en/software).
2. Em **Arquivo → Preferências**, adicione o endereço abaixo ao campo de URLs adicionais do Gerenciador de Placas. Consulte as [instruções da Espressif](https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html).

   `https://espressif.github.io/arduino-esp32/package_esp32_index.json`

3. No Gerenciador de Placas, instale **esp32 by Espressif Systems** e anote a versão.
4. Identifique o modelo pela inscrição na placa e pela documentação do fabricante. Conecte a placa com um cabo USB de dados.
5. No Gerenciador de Dispositivos do Windows, verifique qual porta COM aparece ao conectar a placa. Se não aparecer, teste outro cabo ou porta USB e, se necessário, instale o driver indicado pelo fabricante da placa para a interface USB utilizada.
6. No Arduino IDE, selecione o modelo identificado e a porta COM correspondente.

## Verificar a comunicação serial

1. Abra [primeiro_teste.ino](../firmware/primeiro_teste/primeiro_teste.ino) no Arduino IDE. Use **Verificar** para compilar e **Carregar** para gravar.
2. Abra o Monitor Serial a **115200 baud**. A saída esperada é uma linha com o tempo de funcionamento em milissegundos aproximadamente a cada segundo.
3. Após confirmar a saída, abra e grave [simulacao.ino](../firmware/simulacao/simulacao.ino). A saída esperada é a sequência repetida **0%, 25%, 50%, 75%, 100%**, com cerca de dois segundos entre leituras.
4. Registre a data, o modelo, a porta COM, a versão da IDE e do pacote ESP32, o resultado da compilação e da gravação e um trecho do Monitor Serial no [diário técnico](../docs/desenvolvimento.md).

Os dois sketches funcionam sem sensores externos, Wi-Fi ou Blynk por projeto. Os resultados acima são critérios de teste planejados e aguardam verificação em bancada.
