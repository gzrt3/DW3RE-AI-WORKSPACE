# Auditoría del arranque y referencias públicas

Revisión: 2026-10-05 UTC. Contrato vigente: port nativo Windows x64 completo,
DW3 + XL, sin cambio de discos. **0/8 criterios finales demostrados.**

## Diagnóstico actual comprobado

La dificultad principal está en la integración del runtime con el código
original. Añadir más modelos o sustituir todo el pipeline no resuelve por sí
solo el protocolo de carga de módulos ni su suspensión y reanudación.

- La compilación Release funciona. El arranque carga el ELF original y llega
  a `modload:7`, versión1.6, PC IOP`0x14374`.
- El registro nuevo identifica la petición real:
  `cdrom0:\MODULES\SIO2MAN.IRX;1`, arglen0, argumentos`0x149A4`,
  resultado`0x14AA4`, retorno`0x129B4`. SHA256 del archivo original:
  `d02dd7bcf83a802c388b6ce1fdd447b4d5c29dcc7ba11000ccd66f8f14714fd6`.
- La ventana nativa ya observa el GS sin reiniciar EE/IOP. Computer Use
  comprobó una ventana real negra, con el aviso «sin imagen del GS», y su
  cierre limpio. **Cero presentaciones GS; no vídeo, título ni Press Start.**
- Siete candidatos de logos/introducciones montados coinciden por SHA256 con
  los originales. Sus nombres aparecen en los ELF; esto no prueba la secuencia
  de reproducción ni sustituye el rastreo de sus llamadas.
- `PadBridge::scePadRead` aún devuelve datos simulados. El runtime incluye un
  demultiplexor PSS y FFmpeg; su presencia no demuestra que DW3 lo invoque ni
  que su audio y sus callbacks sean correctos.
- El respaldo terminó:268654 archivos,65702318359 bytes, hashes verificados,
  cero errores/eliminaciones. Los destinos externos de junctions siguen siendo
  necesarios y están registrados aparte.

## Fuentes consultadas que sí pueden acelerar el trabajo

Se descargaron y compararon diez archivos públicos con revisiones fijas:
10/10 textos coinciden. El manifiesto público conserva URL, revisión y SHA256.
Los archivos completos de referencia se guardan como evidencia local, sin
ejecutarlos ni sustituir fuentes del proyecto.

| Prioridad | Fuente | Aplicación concreta y límite |
| --- | --- | --- |
| 1 | [PS2SDK MODLOAD](https://github.com/ps2dev/ps2sdk/blob/ac92a9f657d2e531dd8f060250b07f2a5ac6dea5/iop/system/modload/src/modload.c#L834) y [LOADCORE](https://github.com/ps2dev/ps2sdk/blob/ac92a9f657d2e531dd8f060250b07f2a5ac6dea5/iop/system/loadcore/include/loadcore.h) | `ModuleLoaderThread`, `start_module` y `ModuleInfo` explican el hilo cargador, semáforo/evento, argc/argv, GP y resultado. Convierten el bloqueo actual en contratos verificables. MODLOAD público se identifica como2.9 y deriva principalmente del SDK3.1; el original seleccionado es1.6. Comparar cada rama con su binario. |
| 2 | [PS2SDK SIO2MAN](https://github.com/ps2dev/ps2sdk/blob/ac92a9f657d2e531dd8f060250b07f2a5ac6dea5/iop/sio/sio2man/src/sio2man.c) y [PCSX2 SIO2](https://github.com/PCSX2/pcsx2/blob/144a19ba05fd1aa514f7228972f0c6260c61b4e8/pcsx2/SIO/Sio2.cpp#L101) | Identifican transferencias, DMA, eventos e interrupciones del módulo realmente solicitado. La búsqueda local encontró nombres SIO2 en el registro HLE, sin una implementación equivalente de SIO2 localizada. Registrar un ID de módulo no implementa el dispositivo. PS2SDK identifica su SIO2MAN como3.17; verificar diferencias con el IRX suministrado. |
| 3 | [PCSX2 InputRecording](https://github.com/PCSX2/pcsx2/blob/144a19ba05fd1aa514f7228972f0c6260c61b4e8/pcsx2/Recording/InputRecording.cpp) y [opciones de arranque](https://github.com/PCSX2/pcsx2/blob/144a19ba05fd1aa514f7228972f0c6260c61b4e8/pcsx2-qt/QtHost.cpp#L2126) | Grabaciones de entrada, savestates y cuadros permiten escenarios repetibles. La CLI documenta `-statefile`, `-logfile`, `-batch`, `-nogui` y `-debugger`. `-nogui` oculta la ventana principal; no equivale a una interfaz de trazas sin GUI. `-debugger` abre el depurador; no acredita un servidor GDB headless. Comprobar las opciones en la versión local antes de automatizar. |
| 4 | [MPEG de PS2SDK](https://github.com/ps2dev/ps2sdk/blob/ac92a9f657d2e531dd8f060250b07f2a5ac6dea5/ee/mpeg/samples/mpeg.c) y [demux MPEG de FFmpeg](https://github.com/FFmpeg/FFmpeg/blob/a35c8799920a93b99781eab6e70a5795ee7d182b/libavformat/mpeg.c) | Útiles para separar lectura, demux, decodificación, timestamps y presentación. El ejemplo PS2SDK declara expresamente que espera vídeo MPEG crudo y no demultiplexa. No basta reproducir un PSS externamente: el juego debe ordenar su reproducción y transición. |
| 5 | [DW3 Unit Editor](https://github.com/PythWare/Dynasty-Warriors-3-Unit-Editor/blob/e9cc4d01896cbc1bf886fdbfee3f3f5596e88339/README.md) | Su README declara edición de unidades de DW3, XL e ISO combinada, en varias regiones. Puede orientar el inventario y modding posteriores; es una afirmación del autor, no una integración verificada aquí. No es un port ni resuelve el arranque. No ejecutado. |

## Hallazgos que evitan trabajo equivocado

1. [PS2Recomp público](https://github.com/ran-j/PS2Recomp/blob/c5a9d02573410a2085a4b4b831b0b68ba3515440/ps2xIOP/src/emulator/iop_emulator.cpp)
   aún escribe v0=0 para un import no atendido, devuelve v0 después de `runCpu`
   sin nuestro contrato de finalización y arranca módulos con arglen/raw-args.
   No incorpora una solución de MODLOAD7 en el archivo revisado. Reemplazar el
   runtime local perdería reparaciones comprobadas; revisar cambios puntuales.
2. El MODLOAD actual de PS2SDK maneja casos0/1/2 en `module_result & 3`;
   el original seleccionado dispone de una rama1/3 de descarga. Es un ejemplo
   concreto de por qué el SDK abierto sirve de referencia, no de prueba de
   equivalencia automática por nombre de función.
3. El PSS local envía el mismo payload de audio tanto a callbacks PCM como
   ADPCM (`MPEG.cpp`, alrededor de1343..1364). Hay que comprobar la selección
   original y qué callbacks registra DW3 antes de afirmar que duplica sonido o
   modificarlo. Es una incertidumbre de alto valor, aún no un fallo reproducido.
4. La búsqueda en repositorios GitHub de «Dynasty Warriors 3 decompilation» no
   devolvió un port fuente utilizable. Esto delimita esa búsqueda; no demuestra
   que no exista material en otros sitios. Los resultados de editores/parches
   no acreditan un runtime completo disponible.
5. La búsqueda web encontró el ticket FFmpeg4478 sobre PSS. Su página presentó
   una comprobación anti-bot; no se eludió ni se leyó el cuerpo del ticket. El
   fragmento del buscador queda como pista, no como verificación de su estado.

## Aplicación al siguiente ciclo

Mantener el pipeline y usar las referencias fijas para implementar primero la
propiedad de la petición MODLOAD7 y la reanudación del cargador. Preparar una
prueba aislada del **SIO2MAN original identificado**, con MMIO/imports no
implementados explícitos. Verificar ModuleInfo, argc/argv, retorno real y
registro del módulo únicamente después de completar su arranque.

Después: nueva ejecución nativa con la ventana y las mismas identidades de
entrada; reparar la siguiente divergencia medida. Para vídeo, registrar las
lecturas PSS, callbacks, PTS y cuadros del GS; validar dos ciclos de atracción,
salto de vídeo y Start contra referencia original. Mantener las demás etapas
del triage y los ocho criterios completos.

Evidencia local: `artifacts/native_pipeline_20261005/cycle_007` y
`artifacts/native_pipeline_20261005/web_audit_008`. La prueba inicial ocultó
la ventana por SW_HIDE; se conservó y corrigió. Las pruebas posteriores
demostraron visibilidad y cierre. Las pruebas sintéticas sólo verifican el
transporte de imagen y la conservación del estado, nunca equivalencia del juego.
