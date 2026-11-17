# Sensor de Nível de Água IoT — UNIR

**Versão da documentação:** 0.1  
**Projeto PIBITI 2026/2027:** PVN2109-2026 — Desenvolvimento de um Sensor de Nível de Água de Baixo Custo Utilizando Transistores e ESP32  
**Instituição:** Universidade Federal de Rondônia (UNIR)  
**Orientador:** Marcello Batista Ribeiro  
**Discente:** Pedro Henrique Sampaio do Nascimento  
**Período:** 19/07/2026 a 31/08/2027

## Objetivo e arquitetura planejada

Desenvolver um protótipo de baixo custo para monitorar o nível de água. Quatro sensores baseados em transistores deverão enviar sinais a um ESP32. A arquitetura prevê envio via Wi-Fi ao Blynk Cloud e visualização em um painel móvel.

| Sensores ativos | Nível estimado |
|---:|---:|
| 0 | 0% |
| 1 | 25% |
| 2 | 50% |
| 3 | 75% |
| 4 | 100% |

Esses estados discretos indicam níveis de referência. A correspondência elétrica entre HIGH/LOW e a presença de água depende do circuito a definir.

## Arquivos e situação

- [Diário de desenvolvimento v0.1](docs/desenvolvimento.md) — texto recuperado do histórico com decisões, pendências e critérios de validação.
- [Configuração do ESP32 no Windows](instrucoes/configuracao-windows.md) — preparação da IDE, primeiro teste e registro de evidências.
- [Primeiro teste](firmware/primeiro_teste/primeiro_teste.ino) — sketch de comunicação serial com tempo de funcionamento.
- [Simulação](firmware/simulacao/simulacao.ino) — sketch que percorre cinco estados de nível sem sensores físicos.

Este README e os dois sketches foram reconstruídos a partir do planejamento disponível. A compilação, a gravação e a execução dos sketches no ESP32 estão pendentes de verificação.

## Próximos passos

1. Identificar o modelo da placa, configurar a IDE e verificar a porta COM.
2. Compilar e gravar o primeiro sketch. Registrar o log serial e a versão do pacote de placas.
3. Gravar a simulação e verificar a sequência de níveis. Em seguida, validar a lógica de interpretação, incluindo combinações incoerentes dos sensores.
4. Configurar Wi-Fi e Blynk. Definir o circuito com transistores e a polaridade dos sinais antes de integrar os sensores físicos.
5. Medir latência, confiabilidade, classificação e estabilidade, e registrar o custo do protótipo no diário.
