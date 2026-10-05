# Auditoría del renderizado nativo — título y menús

**Alcance:** `src/gs_wrapper.cpp`, `src/sdl_window.cpp` y el recorrido GIF/GS de
`tools/PS2Recomp`. Solo lectura estática de fuentes y estado publicado; no se
compiló ni ejecutó nada. Las conclusiones distinguen entre bloqueos medidos y
fallos visibles en código que todavía no está conectado al ejecutable.

## Hallazgos

### R1 — El arranque falla sin demostrar el título

**Impacto: bloqueo actual, medido. Confianza: alta.**

- **Evidencia:** `docs/CURRENT_STATUS.md:5-11` identifica la última ejecución
  como `PROCESS_FAILED`, con entrada íntegra, detenida en la continuación del
  guest faltante `0x001B0308` y con IOMAN export 31 sin resolver en
  `0x00029040`.
  También deja constancia de que no se ha demostrado pantalla de título ni
  batalla y que siguen abiertos los ocho criterios finales.
- **Consecuencia:** el proceso falla y el estado actual no demuestra la
  ejecución ni la presentación del título original. Este es el primer bloqueo
  comprobado; no es evidencia de que el backend GS haya fallado al dibujar el
  título.
- **Pruebas propuestas:** recuperar ambas interfaces a partir de las
  instrucciones/importaciones originales; ejecutar el arranque con identidad
  de entrada `MATCH` y registrar PC, estado GS y framebuffer en el primer
  checkpoint de título. No considerar el mero avance del PC como prueba de
  pantalla correcta.

### R2 — El ejecutable nativo no conecta la ejecución del juego con una ventana ni con la presentación GS

**Impacto: bloqueo arquitectónico de presentación, independiente de R1.
Confianza: alta.**

- **Evidencia:** `CMakeLists.txt:78-95` compila `src/main.cpp`,
  `src/sdl_window.cpp` y `src/gs_wrapper.cpp`, pero no `src/runtime_app.cpp`.
  En `src/main.cpp:248-258` el camino de ejecución llama directamente
  `runtime->eeScheduler().run()` y devuelve error cuando `ctx.pc != 0`; no crea
  `SDLWindow`, no llama a un bucle de presentación y no copia un framebuffer
  GS a una superficie de ventana.
- **Recorrido disponible en el runtime vendorizado:** `PS2Runtime::syncCoreSubsystems`
  (`tools/PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp:658-675`) conecta el
  `GifArbiter` con `GS::processGIFPacket`. Los paquetes llegan desde DMA/
  memoria (`ps2_memory.cpp:1930-2008`) y VU1 XGKICK
  (`vu/ps2_vu1_core.cpp:913-925`). El frontend GS parsea GIF en
  `gs/gs_frontend.cpp:641-760`, y dispone de captura de display y frame de
  presentación (`gs_frontend.cpp:213-634`). Hay además una ruta de ventana
  separada en `ps2_runtime.cpp:376-420, 2397-2475` que copia el frame
  presentado y lo dibuja con raylib. **El `main.cpp` nativo no llama esa ruta**:
  tener ese backend en la biblioteca no entrega frames desde el ejecutable
  actual.
- **Pruebas propuestas:** un contrato de integración debe demostrar que el
  ejecutable del juego crea una ventana, procesa el mismo scheduler que ejecuta
  el ELF, presenta el frame latched del GS y envía input al guest. Verificar con
  contador/eventos de GIF, dimensiones y bytes/hash del framebuffer leído, no
  solo con la existencia de una ventana.

### R3 — `GSWrapper` interpreta mal GIF PACKED y no implementa transferencias de imagen

**Impacto: crítico si se conecta como renderer; no se observó como causa de la
ejecución actual porque el `main` no lo invoca. Confianza: alta.**

- **Evidencia:** `src/gs_wrapper.cpp:39-80` consume tags sin comprobar que el
  payload declarado quepa en `qwords`; su condición inicial tampoco garantiza
  que haya payload tras el tag. El modo REGLIST se salta con un tamaño de avance
  calculado como qwords de datos de 128 bits, aunque sus entradas son de 64 bits
  y llevan relleno cuando corresponde (`:73-76`). El modo IMAGE avanza el offset,
  pero el bloque que debería copiar a VRAM está vacío (`:65-71`).
- **Evidencia:** PACKED ya proporciona los descriptores en `GIFTag::reg(i)`
  (`:24-31`), pero `parsePackedTag` los descarta y trata los bits superiores de
  los datos como si fueran un ID de registro; después entrega solo `lo` a
  `processRegister`, perdiendo la mitad alta del valor GS de 128 bits
  (`:83-105`). Por tanto no reproduce correctamente las escrituras GS que
  generan geometría, estado, texturas y display.
- **Evidencia:** `beginTexUpload` apunta a `m_vram + srcAddr` (`:222-228`) y no
  copia el payload de imagen a VRAM. `flushCurrentPrim` solo llama un callback
  opcional (`:208-215`); no existe aquí una rasterización o presentación
  propia.
- **Pruebas propuestas:** contratos de paquetes PACKED con ciclos NREG/REGS y
  valores GS completos de 128 bits, REGLIST con padding par/impar, IMAGE y
  carga host→local verificando VRAM, concatenación de tags, EOP, y paquetes
  truncados rechazados sin leer fuera del búfer. Comparar registros, bytes de
  VRAM y resultado rasterizado con el frontend vendorizado para el mismo paquete.

### R4 — `SDLWindow` es una capa de eventos, no un renderer, y su contexto GL no es fiable

**Impacto: bloquea esta ruta como superficie de presentación. Confianza: alta.**

- **Evidencia:** `src/sdl_window.cpp:58-72` crea una ventana OpenGL y solo
  después configura atributos de versión/perfil; no comprueba el resultado de
  `SDL_GL_CreateContext`. El resto de la unidad procesa eventos y controles
  (`:99-155, 159-214`): no hay llamadas GL para dibujar ni `SDL_GL_SwapWindow`.
- **Evidencia:** `src/main.cpp` tampoco instancia esta clase ni pasa su estado
  de mando a la ejecución del ELF. Compilarla y enlazar SDL2 no crea una ventana
  ni conecta los controles al juego.
- **Pruebas propuestas:** comprobar fallos de creación de contexto de forma
  explícita; una prueba de integración con contexto creado antes de usar GL,
  presentación observable de un frame GS y recorrido de input desde evento SDL
  hasta el estado pad leído por el guest. En esta auditoría no se abrió una
  ventana.

### R5 — El viewport nativo existente es un prototipo de modelo/combate, no la UI original

**Impacto: no puede sustituir la pantalla de título ni los menús. Confianza: alta.**

- **Evidencia:** `src/runtime_app.cpp:414, 573-605` crea un viewport de bind pose
  y dibuja un mesh/textura convertidos a framebuffer GDI; el modo de juego
  cambia el título a “Native Combat Prototype” y crea cuatro actores fijos
  (`:591-605, 553-556`). Los controles y el HUD describen esa simulación
  (`:383-395`), no los estados de título/menú del ELF. Además, `runtime_app.cpp`
  no aparece en la lista de fuentes de `fate_game` en `CMakeLists.txt:78-95`.
- **Pruebas propuestas:** mantener el viewport como demo separada; para acreditar
  la UI original, capturar la salida del GS del ELF en título y cada transición
  de menú, con entrada de mando reproducible y comparación de imagen/estado
  contra la referencia identificada.

## Recorrido y cobertura existente

El runtime vendorizado sí tiene una ruta GS más completa que `GSWrapper`: el
árbitro recibe paquetes, el frontend recorre formatos PACKED/REGLIST/IMAGE y el
backend CPU rasteriza/lee el display. `tools/PS2Recomp/ps2xTest/src/ps2_gs_tests.cpp`
ya contiene contratos sobre registros A+D, REGLIST con padding, IMAGE a VRAM y
frames de presentación (por ejemplo, líneas 1171-1305, 1743-1785,
1988-2170). Son cobertura sintética útil para ese componente, pero no prueban
que el ejecutable nativo use el camino de presentación ni que el ELF alcance o
dibuje correctamente su título y menús.

## Diagnóstico

El impedimento inmediato y medido es el arranque incompleto. A continuación,
aunque se reparen las continuaciones pendientes, falta cablear en el target
nativo la ejecución guest con la ruta real GIF→GS→framebuffer→ventana e input.
`GSWrapper` no es una alternativa segura para cubrir ese hueco tal como está:
corrompe la interpretación de GIF y omite uploads. El viewport `NativeRuntimeApp`
solo demuestra una vista/combate de prueba, no la presentación original. La
verificación final requiere que el ELF llegue al título, produzca el frame GS
esperado y permita navegar los menús originales con input real/reproducible.
