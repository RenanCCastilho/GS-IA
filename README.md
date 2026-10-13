# Health Hub — Monitor IoT de Saúde

![Arduino](https://img.shields.io/badge/Arduino-C%2B%2B-00979D?logo=arduino&logoColor=white)
![IoT](https://img.shields.io/badge/IoT-LEDs_RGB-555)

Este é o dispositivo IoT do **Health Hub**. Um Arduino com três LEDs RGB indica, por cores, a situação de três indicadores de saúde do usuário. Os mesmos dados aparecem no dashboard do aplicativo, alimentado pela [Health Hub API](https://github.com/RenanCCastilho/HealthHub-API).

## Como funciona

Cada LED representa um indicador e muda de cor conforme a faixa do valor medido:

| LED | Indicador | 🟢 Normal | 🟠 Atenção | 🔴 Crítico (pisca rápido) |
|---|---|---|---|---|
| 1 | Batimentos cardíacos | faixa ideal | levemente fora | muito fora da faixa |
| 2 | Pressão arterial | 85 – 135 | próximo dos limites | fora dos limites |
| 3 | Glicose (mg/dL) | 70 – 100 | 40 – 70 ou 100 – 125 | < 40 ou > 125 |

Em situação crítica, o LED pisca mais rápido para chamar atenção.

## Montagem

| LED | Pino R | Pino G | Pino B |
|---|---|---|---|
| 1 | 9 | 10 | 11 |
| 2 | 6 | 5 | 3 |
| 3 | 2 | 4 | 7 |

Para usar, abra [`sprint_att1.ino`](sprint_att1.ino) na Arduino IDE ou no [Tinkercad](https://www.tinkercad.com/) e carregue na placa. Os valores de exemplo ficam nas variáveis `batimentos`, `pressao` e `glicose`.

## Equipe

| RM | Nome |
|---|---|
| 93451 | Felipe Cardenaz de Melo |
| 94489 | Raphael Rezende Silveira Junior |
| 94394 | Renan Castilho Costa |
| 92979 | Ricardo dos Santos Altavista |

---

Projeto acadêmico desenvolvido na **FIAP** (Global Solution, 2023).
