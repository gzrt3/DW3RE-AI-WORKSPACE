# Seguimiento: host build/link -> loader -> dispatch -> ABI/runtime

Fecha: 2026-10-03 (America/Hermosillo). Baseline Git: no existe; el baseline
previo y sus hashes se conservan en `artifacts/host_barrier_20261003/baseline.json`.
Este seguimiento no sobrescribe `docs/host_barrier_20261003.md` ni sus logs.

## Resultado

La barrera de compilación/enlace del host quedó desbloqueada en Debug y Release.
`fate_recomp_core` y `fate_game.exe` compilaron y enlazaron con `/W4 /WX`; los
logs finales `final2-dispatch-debug.log` y `final2-dispatch-release.log` terminan
con `CODEX_EXIT_CODE=0` y sin diagnósticos de compilador o linker.

El primer intento interactivo dejó claro que MSVC trataba el padding deliberado
de `alignas(16) R5900Context` (C4324) como error. CMake suprime C4324 en los dos
targets consumidores sin retirar padding ni cambiar ABI. En el corpus generado,
pragmas limitadas a cada include suprimen C4100, C4102, C4127, C4310 y C4702, que
corresponden a parámetros ABI fijos, etiquetas/bloques traducidos, inmediatos
MIPS y flujo de control generado. Las conversiones SIMD que originaban C4244
se hicieron explícitas con casts de `uint16_t`; C4244 no se suprimió. Host,
loader, bridges y dispatcher siguen con `/W4 /WX`.

El linker encontró cuatro símbolos faltantes que conectan `PS2Runtime` con la
tabla densa de funciones. `src/dispatcher.cpp` ahora define la tabla que espera
el runtime y publica en ella las entradas del mismo mapa host durante
`init_dispatcher`. La tabla cubre `[0, 0x02000000)` con 8.388.608 slots; los
slots vacíos significan PCs guest no traducidos. `get_function` consulta primero
la tabla runtime, por lo que ve registros y reemplazos realizados por
`PS2Runtime::registerFunction`, y luego consulta el mapa estático.

El probe de dispatch pasó en ambas configuraciones. Comprueba el entry
`0x00100008`, el primer destino directo `0x001ad6e8`, PC sin función, una
registración dinámica y el reemplazo de una entrada existente. No invoca los
punteros de función. Los asserts verifican GPR de 128 bits, alineación 16 del
contexto, PC de 32 bits, HI de 64 bits y punteros host nativos. `sizeof` de
`PS2Runtime`: 523.504 bytes Debug y 523.264 bytes Release; alineación 16 en
ambos.

El loader de `src/main.cpp` ahora reutiliza `fate::elf::Image`, valida ELF32
little-endian MIPS y comprueba toda la tabla `PT_LOAD`, `filesz <= memsz`, los
rangos de archivo y RDRAM antes de escribir. Copia bytes y pone BSS a cero; un
error en cualquier segmento no deja una carga parcial. El entry usado por el
host y por la guarda de dispatch procede de `e_entry`.

El test `fate_elf_loader_contract` pasó en Debug y Release. En un ELF sintético
verificó copia de bytes, BSS, rechazo de un segundo segmento fuera de rango sin
escritura parcial y rechazo de un rango de archivo truncado. Además, el
ejecutable final real `fate_game.exe` en ambas configuraciones cargó el fixture
válido, rechazó `e_entry=0x00200000` antes de invocar código guest, y rechazó un
`PT_LOAD` fuera de los 32 MiB antes de inicializar el dispatcher. Los logs son
`final2-entry-guard-{Debug,Release}.log` y
`final2-out-of-range-{Debug,Release}.log`.

Una ejecución de smoke anterior a la corrección de `e_entry` usó una build que
forzaba `PC=0x00100008` incluso con un fixture cuyo entry era `0x00200000`.
Ejecutó un prefijo traducido y paró en PC host no mapeado `0x001a4828`; no llegó
a menú ni main loop. Sus logs históricos `loader-contract-{Debug,Release}.log`
se preservan, pero están supersedidos por las pruebas finales con guarda de
entry. La build final nunca ejecutó funciones guest durante las pruebas de ELF.

## Archivos y evidencia

Código modificado: `CMakeLists.txt`, `AGENTS.md`, `include/fate/elf.hpp`,
`include/fate/audio/spu_bridge.hpp`, `include/fate/io/mc_bridge.hpp`,
`src/elf.cpp`, `src/main.cpp`, `src/dispatcher.cpp`, `src/input/pad_bridge.cpp`,
`src/audio/spu_bridge.cpp`, `src/vfs/vfs_hook.cpp` y 15 archivos generados de
`src/recomp` con casts SIMD explícitos. Tests nuevos:
`tests/integration/host_elf_loader_contract.cpp` y
`tests/integration/host_dispatch_contract.cpp`.

`artifacts/host_barrier_20261003/followup_manifest.json` registra SHA-256 de
los archivos de código cambiados respecto al baseline conocido y hashes de
logs/fixtures finales. No se alteró retail ni se ejecutó diagnóstico cloud.
Los ejecutables grandes provienen del corpus completo: aproximadamente 1,34 GB
Debug y 1,08 GB Release para `fate_game.exe`, además de PDB de gran tamaño.

## Próxima barrera

La barrera host build/link -> loader -> dispatch -> ABI/runtime está verificada
con fixtures sintéticos y con el objeto/runtime existente. No se ejecutó el ELF
retail ni se certificó equivalencia guest. Permanecen:

`BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED`
`INTERACTIVE_MAIN_LOOP=NOT_DEMONSTRATED`

Para avanzar la barrera runtime hace falta la captura independiente PCSX2 del
mismo ELF retail cuyo SHA-256 figura en el documento previo. Debe contener los
snapshots A/B, los 128 bits de GPR, PC, HI/LO/HI1/LO1, SA, COP0 disponible,
estado de branch/delay slot, traza de las 11 instrucciones y memoria descritos
en `docs/host_barrier_20261003.md`. No usar el stop histórico a 11 instrucciones
como veredicto sobre el host final. No declarar equivalencia por compilar, por
resolver dispatch o por ausencia de panic. El ELF retail está en la ruta
configurada del proyecto, pero `PCSX2` no está disponible como comando en PATH;
esta captura requiere abrir la herramienta PCSX2 instalada y recoger los puntos
de pausa indicados en el documento previo.

Comandos reproducibles desde `C:\Fate Soldiers 3`:

```powershell
cmake --build out/host-barrier-20261003 --target fate_game --config Debug --parallel 4
cmake --build out/host-barrier-20261003 --target fate_game --config Release --parallel 4
out/host-barrier-20261003/bin/Debug/fate_host_dispatch_contract.exe
out/host-barrier-20261003/bin/Release/fate_host_dispatch_contract.exe
out/host-barrier-20261003/bin/Debug/fate_elf_loader_contract.exe
out/host-barrier-20261003/bin/Release/fate_elf_loader_contract.exe
```
