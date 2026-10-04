# Host link -> loader -> ABI/runtime: evidencia y barrera actual

Estado: STOPPED_NOT_CLOSED. Main loop: NOT_DEMONSTRATED.
No existe repositorio Git. Baseline nuevo: 14509 archivos, SHA-256 por archivo en
`artifacts/host_barrier_20261003/baseline.json`. No se cambio codigo del producto,
runtime, ABI, padding, alineacion, corpus generado ni infraestructura hibrida.
No se llamo a Ollama ni a cloud: las herramientas deterministas fueron suficientes.

## Primera barrera demostrada en esta sesion

La configuracion completa nueva y ambos builds completos existentes fallan ANTES
de compilar/linkear: MSBuild MSB4184 al evaluar
`GetLatestSDKTargetPlatformVersion(Windows, 10.0)`, acceso denegado a
`<user>\AppData\Local\Microsoft SDKs`.
No es un warning del corpus ni un error demostrado del linker/ABI. No se intento
investigar, resolver o evadir el sandbox. No se desactivo /W4 /WX.

Comandos realmente ejecutados:

```powershell
cmake -S . -B out/host-barrier-20261003 -G 'Visual Studio 17 2022' -A x64
cmake --build out/host-link-check --config Debug --parallel 4
cmake --build out/host-link-check --config Release --parallel 4
```

Logs nuevos: `configure.log`, `build-debug.log`, `build-release.log` en el
directorio de evidencia. Configuracion y ambos builds: exit 1. Debug/Release
completos NO CERTIFICADOS. El build nuevo no pudo generarse; se intentaron
ambas configuraciones del proyecto completo preexistente, con el mismo bloqueo.

## Arbol y hallazgos estaticos

- CMakeLists.txt: fate_game + fate_recomp_core; corpus src/recomp con unity;
  MSVC /W4 /WX /permissive-; /Od global incluso para Release, observado sin cambiar.
- src/main.cpp: loader propio y construccion real de PS2Runtime con make_unique;
  carga ELF, inicia dispatcher/VFS/input, prepara contexto y luego despacha.
- cmake/ExistingRuntime.cmake: enlaza bibliotecas preexistentes PS2Runtime/IOP,
  raylib y FFmpeg por configuracion. No se recompilaron esas dependencias aqui.
- src/boot_chain_probe.cpp y apps/boot_chain: diagnostico acotado independiente,
  no el ejecutable completo. Su loader validado NO es el loader de src/main.cpp.
- tests/integration/check_boot_chain.py: valida exactamente una barrera historica.
- tools/PS2Recomp/ps2xRuntime: contexto, scheduler y resolucion densa de funciones.
- include/fate y tests/unit: otros contratos/tests; no forman parte de los seis
  tests ejecutados y no se afirman certificados en esta sesion.

Audit en `static_entry_dispatch_audit.json`:

- Retail XL: SLUS_206.17, 1905272 bytes, SHA-256
  d26695fa7769cabbddbd89168924279cd1035eeb0bdd3744aec95257f7cfa731.
- ELF e_entry=0x00100008; host lo resuelve a entry_0x100008.
- 34 palabras indicadas en comentarios del entry coinciden con bytes ELF.
  Esto prueba correspondencia del input comentado, NO equivalencia del C++.
- Mapa host: 7400 direcciones unicas, sin duplicados; todas las funciones tienen
  una definicion encontrada por escaneo de firmas del source. No equivale a link.
- Destino de la primera llamada directa: 0x001ad6e8 -> FUN_001ad6e8_0x1ad6e8.
- PS2Runtime::lookupFunction/hasFunction/registerFunction consultan
  g_ps2RecompiledFunctionTable y sus limites, no el mapa g_dispatcher del host.
  No hay menciones/definiciones de esos simbolos en src. El fixture de lifetime
  SI define un catalogo vacio y no ejecuta guest. Ese fixture NO verifica dispatch
  del producto. No se trasplanto la tabla vacia al producto.
- Falta demostrar como se satisfacen esos simbolos en el link completo. Es una
  desconexion estatica a investigar al recuperar build; no se inventa un LNK2001
  que esta sesion no llego a observar.
- El loader del producto no comprueba todas las lecturas ni toda la estructura
  ELF y continua ante un segmento fuera de rango; ademas fija PC=0x00100008.
  Son riesgos visibles, no una divergencia retail medida. Se dejan sin cambiar
  porque el primer bloqueo impide probar una correccion del producto.

Anchuras observadas: R5900Context alignas(16), 32 GPR __m128i de 128 bits,
pc uint32_t, hi/lo/hi1/lo1 uint64_t. Punteros host de 64 bits en los diagnosticos.
No se propone convertir todo a 32 bits ni retirar padding.

## Ejecucion acotada de binarios PREEXISTENTES

Se ejecutaron, para Debug y Release de out/runtime-lifetime/bin:

```powershell
out/runtime-lifetime/bin/Debug/fate_boot_chain.exe --self-test
out/runtime-lifetime/bin/Debug/fate_runtime_lifetime.exe
python tests/integration/check_boot_chain.py "C:/Fate Soldiers 3/out/runtime-lifetime/bin/Debug/fate_boot_chain.exe" "C:/Fate Soldiers 3/artifacts/host_barrier_20261003/retail-Debug"
```

Se repitieron los mismos tres comandos sustituyendo Debug por Release. Timeout
25 segundos por proceso; el checker impone ademas 15 segundos al diagnostico.
Resultados y hashes de los ejecutables: `preexisting_binary_tests.json`.

| Test | Debug | Release | Alcance real |
|---|---|---|---|
| Loader contract | PASS | PASS | 10 ELF invalidos rechazados, BSS, delay slot y corrupcion |
| Runtime lifetime | PASS | PASS | Objeto real, memoria/subsistemas, checkpoint y stop; HLE no soportado se detiene |
| Retail prefix | PASS | PASS | Se reproduce exactamente el stop historico previsto; no PCSX2 |

Total 6/6, cada checker exit 0. El ejecutable retail interior devuelve el exit
23 esperado, no arranque exitoso. Se escribieron trazas NUEVAS en retail-Debug y
retail-Release; no se tocaron test-evidence anteriores ni dumps retail.

Lifetime observo PS2Runtime Debug sizeof=523504 y Release sizeof=523264,
alineacion 16 en ambos. Diferencia de configuracion, no razon para cambiar ABI.
Sin recompilar no se demuestra correspondencia binario/source actual ni ausencia
de incompatibilidad entre bibliotecas y consumidores. Es evidencia acotada.

## Primera divergencia conocida: procedencia y limites

No hay una primera divergencia host actual vs PCSX2 demostrada.
El diagnostico historico construye deliberadamente almacenamiento crudo de 16384
bytes sin iniciar PS2Runtime. Tras comparar 11 instrucciones contra un interprete
acotado derivado del ELF, se detiene antes de eeCheckpointDue:

- PC=0x00100018, branch_pc=0x0010002c, delay slot completado.
- at=1, v0=0x002d0590, v1=0x01ff7000; SP semilla host=0x00080000.
- Metodo runtime NO invocado sobre almacenamiento sin objeto construido.
- El source actual main.cpp ya usa make_unique; no atribuirle ese defecto historico.
- La semilla inicial del host NO proviene de PCSX2; comparar contra ella no
  certifica el estado inicial del retail.

## Captura independiente faltante (despues de desbloquear link)

No se encontro captura PCSX2 en artifacts/out/.ai; las trazas localizadas son
del probe host. No se afirma ausencia en otras ubicaciones externas no conocidas.
Para comparar este prefijo se necesita el MISMO retail ELF con el SHA-256 anterior:

1. Snapshot A al primer handoff EE a PC=0x00100008, ANTES de ejecutar el LUI.
2. Snapshot B en la SEGUNDA llegada a PC=0x00100018 (primera vuelta del loop),
   despues del delay slot 0x00100030 del branch 0x0010002c. La primera llegada
   a 0x00100018 aun no ha ejecutado el SQ; no confundir ambas.
3. Traza de las 11 instrucciones entre esos puntos: PCs 0x00100008 a 0x00100030
   inclusive, palabra opcode, estado antes/despues, rama tomada y delay slot.

En A y B: todos los GPR r0..r31 con sus 128 bits (low64/high64), PC, HI/LO,
HI1/LO1, SA, COP0 Status/Cause/EPC y estado de branch/delay si el capturador lo
expone; si un campo no es accesible, marcarlo ausente, no rellenarlo con cero.
Registrar SP/GP/RA reales, sin imponer la semilla del host. Memoria EE fisica:

- [0x00100000, 0x00100100): codigo del entry.
- [0x002d0580, 0x002d05c0): primera escritura SQ y vecindad.
- [0x0007ff80, 0x00080080): region de la semilla SP host, sin asumir que es stack retail.
- [SP_retail-0x80, SP_retail+0x80) traducido a direccion fisica EE, documentando
  traduccion y limites; si no es RAM EE valida, no fabricar ese dump.
- Preferible: RAM EE completa [0x00000000, 0x02000000) en cada snapshot para
  comparar loader y BSS sin perder contexto; 32 MiB por snapshot.

Formato: metadata JSON con version/build PCSX2, serial/region, SHA-256 ELF/disco,
modo de arranque, configuracion EE, punto exacto y numero de hit; registers.json
con hex de anchura explicita; trace.jsonl ordenado; memoria binaria cruda con
base/longitud en manifest y SHA-256 por archivo. No normalizar valores faltantes,
no modificar dumps retail y no declarar equivalencia por ausencia de panic.

## Accion humana inmediata minima

Desde el PowerShell interactivo autorizado, en C:\Fate Soldiers 3, ejecutar:

```powershell
cmake -S . -B out/host-barrier-20261003 -G 'Visual Studio 17 2022' -A x64 *> artifacts/host_barrier_20261003/human-configure.log
cmake --build out/host-barrier-20261003 --config Debug --parallel 4 *> artifacts/host_barrier_20261003/human-debug.log
cmake --build out/host-barrier-20261003 --config Release --parallel 4 *> artifacts/host_barrier_20261003/human-release.log
```

Conservar exit codes y esos logs nuevos. No ejecutar fate_game todavia. Primero
resolver los errores reales que aparezcan en compile/link; luego validar loader
y dispatch con cambios minimos comprobables. La captura PCSX2 descrita es la
barrera de equivalencia posterior, no sustituto de ese link pendiente.

BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED
INTERACTIVE_MAIN_LOOP=NOT_DEMONSTRATED
