# INTERFAZ-IA | Sistemas Digitales II — Microcontroladores MSP430

**Universidad Autónoma de Ciudad Juárez · Programa IEC3305-96**  
**Responsable académico:** Dr. Ernesto Sifuentes de la Hoya  
**Organización:** 16 semanas, tres sesiones semanales (120 + 120 + 60 minutos)  
**Plataforma experimental:** MSP430G2553 LaunchPad

## Presentación

**Sistemas Digitales II** es un curso académico de arquitectura, programación y aplicaciones de microcontroladores. Su plataforma central es el MSP430G2553, con experiencias de entrada/salida digital, interrupciones, temporizadores, bajo consumo, comunicaciones y adquisición de señales. El curso incluye teoría, ecuaciones, figuras técnicas, ejemplos de programación, prácticas, proyectos y simuladores interactivos.

La propuesta metodológica de **INTERFAZ-IA** se basa en comprender fundamentos, desarrollar modelos, construir sistemas, experimentar, analizar resultados y generar conocimiento. Los simuladores ayudan a estudiar comportamientos y parámetros, pero no sustituyen la ejecución del firmware ni la experimentación física.

**[Abrir el curso interactivo](https://ernestosifuentes.github.io/microcontroladores/)** · [Consultar el programa oficial](https://ernestosifuentes.github.io/microcontroladores/Syllabus_Sistemas_Digitales_II.pdf)

## Lecciones y actividades

| Semana | Contenido | Acceso |
|:--:|---|---|
| 1 | Introducción a los microcontroladores | [Consultar lección 01](https://ernestosifuentes.github.io/microcontroladores/Semana_01/Leccion_01.html) |
| 2 | LaunchPad y Code Composer Studio | [Consultar lección 02](https://ernestosifuentes.github.io/microcontroladores/Semana_02/Leccion_02.html) |
| 3 | Consumo de energía | [Consultar lección 03](https://ernestosifuentes.github.io/microcontroladores/Semana_03/Leccion_03.html) |
| 4 | Arquitectura y registros | [Consultar lección 04](https://ernestosifuentes.github.io/microcontroladores/Semana_04/Leccion_04.html) |
| 5 | GPIO y entradas digitales | [Consultar lección 05](https://ernestosifuentes.github.io/microcontroladores/Semana_05/Leccion_05.html) |
| 6 | Antirrebote de pulsadores | [Consultar lección 06](https://ernestosifuentes.github.io/microcontroladores/Semana_06/Leccion_06.html) |
| 7 | Interrupciones y bajo consumo | [Consultar lección 07](https://ernestosifuentes.github.io/microcontroladores/Semana_07/Leccion_07.html) |
| 8 | Proyecto 1 · Lavadora | [Consultar lección 08](https://ernestosifuentes.github.io/microcontroladores/Semana_08/Leccion_08.html) |
| 9 | Relojes y Timer_A | [Consultar lección 09](https://ernestosifuentes.github.io/microcontroladores/Semana_09/Leccion_09.html) |
| 10 | Temporizadores y PWM | [Consultar lección 10](https://ernestosifuentes.github.io/microcontroladores/Semana_10/Leccion_10.html) |
| 11 | Proyecto 2 · Cronómetro OLED | [Consultar lección 11](https://ernestosifuentes.github.io/microcontroladores/Semana_11/Leccion_11.html) |
| 12 | Comunicación UART | [Consultar lección 12](https://ernestosifuentes.github.io/microcontroladores/Semana_12/Leccion_12.html) |
| 13 | ADC10 y adquisición | [Consultar lección 13](https://ernestosifuentes.github.io/microcontroladores/Semana_13/Leccion_13.html) |
| 14 | Proyecto 3 · Monitor de pulso | [Consultar lección 14](https://ernestosifuentes.github.io/microcontroladores/Semana_14/Leccion_14.html) |
| 15 | Proyecto 4 · Diseño y adquisición | [Consultar lección 15](https://ernestosifuentes.github.io/microcontroladores/Semana_15/Leccion_15.html) |
| 16 | Proyecto 4 · Integración y validación | [Consultar lección 16](https://ernestosifuentes.github.io/microcontroladores/Semana_16/Leccion_16.html) |

## Proyectos de integración

**Proyecto 1 — Lavadora didáctica (semana 8):** motor a pasos 28BYJ-48, driver ULN2003, máquina de estados, interrupciones y Timer_A.

**Proyecto 2 — Cronómetro OLED (semana 11):** base de tiempo Timer_A, pantalla SSD1306 por I²C, botones y práctica complementaria de motor PWM.

**Proyecto 3 — Monitor de pulso (semana 14):** ADC10, muestreo periódico, detección de picos, estimación BPM, UART y OLED. Es una aplicación educativa, no un dispositivo médico validado.

**Proyecto 4 — Monitor de vibraciones (semanas 15 y 16):** MPU6050 por I²C, adquisición triaxial, UART, procesamiento, clasificación y evaluación de resultados. Se dedica una primera semana al diseño y la adquisición y una segunda a la integración y validación.

## Recursos para el aprendizaje

Cada carpeta semanal reúne su lección HTML, figuras vectoriales, simulación interactiva, indicaciones de las tres clases, entregas, trabajo preparatorio y recursos descargables (PDF, ejemplos de C, archivos ZIP o ilustraciones cuando corresponda). Las prácticas de laboratorio deben ejecutarse con Code Composer Studio, placa compatible y equipo requerido.


Los **simuladores** generan valores de ejemplo y muestran relaciones ideales. Debe distinguirse siempre entre una previsión teórica, un dato simulado y una observación con el hardware. Las conexiones eléctricas, el manejo de cargas inductivas y la medición de corriente deben comprobarse antes de energizar cualquier montaje.

## Herramientas habituales

- Navegador web actual para consultar lecciones y ejecutar simulaciones.
- Code Composer Studio (CCS) y compilador para el MSP430.
- MSP430G2553 LaunchPad y cable USB compatible.
- Protoboard, instrumentos, periféricos y fuentes de alimentación según cada práctica.
- Terminal serial o software de visualización cuando se utilice UART.

## Referencias técnicas

Los detalles de registros, multiplexación de pines, condiciones eléctricas y periféricos deben cotejarse con la documentación de Texas Instruments:

- [MSP430G2553 — página oficial y documentación técnica](https://www.ti.com/product/MSP430G2553).
- *MSP430x2xx Family User’s Guide* (Texas Instruments, SLAU144).

## Derechos de autor y licencias

**© 2026 Ernesto Sifuentes de la Hoya.** Los contenidos académicos originales correspondientes a este proyecto se ofrecen bajo [Creative Commons Atribución–NoComercial–CompartirIgual 4.0 Internacional](LICENSE.md), y el software original identificable bajo [Apache License 2.0](LICENSE-APACHE-2.0.txt). Los documentos, bibliotecas y materiales de terceros conservan sus propios derechos y autorizaciones; no quedan relicenciados por los avisos anteriores.
