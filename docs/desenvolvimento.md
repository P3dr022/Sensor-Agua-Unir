# Diário de Desenvolvimento — Sensor de Nível de Água IoT

**Projeto:** PVN2109-2026 — Desenvolvimento de um Sensor de Nível de Água de Baixo Custo Utilizando Transistores e ESP32

**Instituição:** Universidade Federal de Rondônia (UNIR)  
**Programa:** PIBITI 2026/2027  
**Orientador:** Marcello Batista Ribeiro  
**Discente:** Pedro Henrique Sampaio do Nascimento  
**Período do projeto:** 19/07/2026 a 31/08/2027  
**Última atualização:** 17/11/2026  
**Versão da documentação:** 0.1

---

## 1. Objetivo deste documento

Registrar cronologicamente o desenvolvimento técnico e experimental do projeto, incluindo:

- Arquitetura e decisões técnicas.
- Configuração do ambiente.
- Implementação de firmware.
- Integração de sensores e circuitos.
- Comunicação e monitoramento remoto.
- Testes, resultados e problemas encontrados.
- Próximas atividades.

Este documento será atualizado conforme o avanço do projeto.

**Critério de registro:** atividades planejadas ou instruídas não serão consideradas concluídas sem evidências de execução.

## 2. Visão geral da arquitetura

O sistema proposto utiliza quatro sensores de nível de água baseados em transistores, conectados a um microcontrolador ESP32.

O ESP32 realizará a leitura dos sinais, o processamento do nível estimado e a transmissão das informações via Wi-Fi para a plataforma Blynk.

Fluxo previsto:

`Sensores → ESP32 → Wi-Fi → Blynk Cloud → Dashboard móvel`

### 2.1 Estados de medição

| Sensores ativos | Nível estimado |
|---|---|
| 0 | 0% |
| 1 | 25% |
| 2 | 50% |
| 3 | 75% |
| 4 | 100% |

Os percentuais representam estados discretos de monitoramento, não uma medição contínua do volume real de água.

A correspondência entre estados elétricos HIGH/LOW e presença de água deverá ser determinada após a definição do circuito eletrônico.

## 3. Ambiente de desenvolvimento

| Componente | Definição | Situação |
|---|---|---|
| Sistema operacional | Windows | Informado |
| Placa | ESP32 | Disponibilidade informada |
| Modelo exato | Não identificado | Pendente |
| Linguagem | C++ | Definida |
| Framework | Arduino | Planejado |
| IDE | Arduino IDE 2 | Instalação a confirmar |
| Monitoramento | Blynk | Planejado |
| Versionamento | Git/GitHub | Repositório existente |

### 3.1 Dependências previstas

- Arduino IDE 2.
- Pacote Arduino-ESP32 da Espressif.
- Drivers USB serial, caso necessários.
- Biblioteca Blynk para ESP32.
- Rede Wi-Fi para testes de comunicação.

## 4. Histórico de desenvolvimento

### Registro 001 — Planejamento e definição do MVP

**Data de registro:** 17/11/2026  
**Status:** Planejamento documentado.

**Objetivo**

Definir uma estratégia inicial de implementação que permita desenvolver e testar o software antes da conclusão do circuito físico.

**Decisões técnicas**

1. Utilizar ESP32 como microcontrolador principal.
2. Desenvolver inicialmente firmware sem sensores conectados.
3. Simular cinco estados de nível.
4. Validar a comunicação pelo Monitor Serial.
5. Integrar o Blynk em etapa posterior.
6. Desenvolver o circuito com transistores antes dos testes físicos.

**Justificativa**

Separar o desenvolvimento de software e hardware permite testar a lógica de processamento de forma independente, facilitando a identificação de falhas.

**Resultado**

Arquitetura inicial e estratégia de desenvolvimento definidas.

**Pendências**

- Identificar o modelo exato do ESP32.
- Confirmar a configuração do ambiente.
- Definir o circuito eletrônico.

### Registro 002 — Preparação do ambiente Windows

**Data de orientação:** 17/11/2026  
**Status:** Aguardando comprovação dos testes.

**Objetivo**

Preparar o ambiente de compilação, gravação e depuração do ESP32.

**Procedimentos propostos**

1. Instalar Arduino IDE 2.
2. Configurar o gerenciador de placas ESP32.
3. Identificar a interface USB serial.
4. Selecionar a placa e a porta COM.
5. Compilar e gravar o firmware inicial.
6. Verificar a saída em 115200 baud.

**Firmware de teste**

O programa inicializa a comunicação serial e envia mensagens periódicas com o tempo de funcionamento, utilizando `millis()`.

**Critérios de aprovação**

- Compilação concluída sem erros.
- Firmware gravado com sucesso.
- Comunicação serial funcionando.
- Mensagens recebidas periodicamente.

**Resultado experimental**

Ainda não informado.

**Evidências pendentes**

- Modelo da placa.
- Porta COM utilizada.
- Versão do pacote Arduino-ESP32.
- Mensagens do Monitor Serial.
- Eventuais erros ou dificuldades.

## 5. Planejamento das próximas implementações

| ID | Atividade | Situação |
|---|---|---|
| DEV-001 | Testar comunicação serial | A confirmar |
| DEV-002 | Implementar quatro sensores simulados | Planejada |
| DEV-003 | Criar módulo de interpretação do nível | Planejada |
| DEV-004 | Validar combinações dos sensores | Planejada |
| DEV-005 | Configurar Wi-Fi | Planejada |
| DEV-006 | Integrar Blynk | Planejada |
| DEV-007 | Definir circuito com transistores | Pendente |
| DEV-008 | Integrar sensores físicos | Planejada |
| DEV-009 | Executar testes experimentais | Planejada |

## 6. Estratégia de validação científica

Os experimentos deverão investigar:

**Latência:** intervalo entre uma mudança no estado dos sensores e sua apresentação no dashboard.

**Confiabilidade:** proporção de atualizações recebidas corretamente.

**Classificação:** correspondência entre os níveis de referência e os estados estimados.

**Estabilidade:** comportamento do sistema durante períodos prolongados de operação.

**Custo:** levantamento dos componentes necessários para construir o protótipo.

Cada experimento deverá registrar metodologia, condições, número de amostras, resultados e limitações.

## 7. Modelo para novos registros

### Registro XXX — Nome da atividade

**Data:** DD/MM/AAAA  
**Responsável:**  
**Status:** Planejado / Em andamento / Concluído / Bloqueado

**Objetivo**

Descrever a finalidade da atividade.

**Implementação**

Descrever código, componentes, ferramentas e configurações utilizadas.

**Procedimentos de teste**

Registrar como a implementação foi validada.

**Resultados**

Apresentar os dados obtidos, sem inferir resultados não medidos.

**Dificuldades**

Registrar erros, limitações e possíveis causas.

**Decisões técnicas**

Explicar as soluções escolhidas e suas justificativas.

**Evidências**

Relacionar commits, capturas de tela, logs e arquivos de experimentos.

**Próximos passos**

Definir a continuidade do desenvolvimento.

---

## 8. Controle de alterações

| Data | Versão | Alteração |
|---|---|---|
| 17/11/2026 | 0.1 | Criação do diário técnico e registro do planejamento inicial |

---

*Este documento é parte do registro técnico do projeto PIBITI da UNIR. Seu conteúdo deverá ser revisado conforme a execução e a validação dos experimentos.*
