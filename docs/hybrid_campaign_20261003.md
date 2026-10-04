# Pool híbrido ejecutado — 2026-10-03

El pool está implementado y ejecutó trabajo real con el router existente. La
preparación terminó en `READY_FOR_PCSX2_CAPTURE`: identidad y especificación
comprobadas, revisión independiente aceptada y comparador preparado. Este estado
no significa que el depurador esté configurado para exportar ni que existan los
snapshots A/B. `capture_execution_ready=false`. La captura y comparación retail
siguen pendientes; no se identificó una divergencia real.

`BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED`
`INTERACTIVE_MAIN_LOOP=NOT_DEMONSTRATED`

## Resultado live, sin ocultar fallos

| Proveedor/modelo | Llamadas | Resultado | Tokens entrada/salida observados |
|---|---:|---|---:|
| Ollama `qwen2.5-coder:7b` | 4 | 2 tareas aceptadas, 2 propuestas rechazadas | 2416 / 187 |
| Gemini `gemini-2.5-flash` | 1 | Petición rechazada: `MODEL_OR_REQUEST_UNSUPPORTED` | desconocidos |
| Azure `gpt-4.1-mini-1` | 1 | PASS del contrato JSON y extracción A/B | 327 / 46 |
| AWS `us.amazon.nova-2-lite-v1:0` | 1 | Converse respondió; JSON con Markdown rechazado | 442 / 64 |

Las llamadas cloud fueron las comprobaciones mínimas y simultáneamente tareas
útiles. No se hizo una segunda ronda de pruebas de conectividad. El diario global
conservaba una reserva histórica por proveedor; ahora Gemini, Azure y AWS tienen
dos. Sigue vigente el límite de DOS reservas cuando el precio es desconocido.
No se amplió el presupuesto ni se cambió de diario. No hay precios configurados:
costo calculable y gasto facturado son desconocidos (`null`), no cero.

La inferencia AWS real demuestra el uso de Nova y que esa llamada no quedó
bloqueada por la antigua verificación de cuenta. No certifica cumplimiento JSON.
Gemini sigue listado por su API; esa consulta sin inferencia no explica por sí
sola el rechazo. Se conserva como antecedente la verificación externa aportada
por el usuario. No se ha demostrado un bloqueo de sandbox en esta corrida.
OpenAI directa, Bedrock OpenAI y Claude 3 Haiku están bloqueados antes de invocar
o reservar presupuesto. No se usaron.

## Trabajo y evidencia

Primera corrida: `artifacts/hybrid_campaign_20261003/initial_run_report.json`.
Azure extrajo correctamente A/B y el requisito de 11 instrucciones. La revisión
independiente intentó Nova, luego Gemini y finalmente Ollama; Ollama la completó
con JSON válido y proveedor distinto de Azure. Se comprobaron además el ELF y
los ejecutables y se extrajeron los 11 opcodes del ELF como evidencia ESTÁTICA,
sin presentarlos como traza ejecutada.

Hubo un error del master: el SHA-256 del código del depurador se transcribió con
63 caracteres. La guarda bloqueó esa tarea antes de llamar al proveedor. Se
preservó el manifiesto exacto en `manifest_initial.json`, se corrigió el archivo
de trabajo y se añadió una prueba que rechaza hashes mal formados antes de correr.
El manifiesto inicial corregido no debe reusarse sobre su antiguo checkpoint:
la guarda de identidad lo rechazará. Usar el comando de continuación de abajo.

Segunda corrida local: `continuation/`. Se reutilizaron por hash las dos
revisiones aceptadas. Ollama aceptó las reglas de datos ausentes. En otra tarea
devolvió `bpAddr` donde el contrato exigía `branchTarget`; quedó REJECTED.
No se reinterpretó su respuesta para obtener un PASS.

Tercera corrida del master: `preparation/`. Una comprobación estática del código
oficial 2.8.2 fijado por hash validó `onStepInto`: el breakpoint de rama tomada
va al destino; el no tomado avanza 8 bytes. No instala una pausa separada en el
delay slot. Se generó el contrato de captura y se inspeccionaron las ubicaciones
designadas `raw/` y `normalized/`: falta el manifest de captura en ambas.

El JSON consolidado está en `artifacts/hybrid_campaign_20261003/final_report.json`.
Incluye timestamps, latencias, usage, tareas y fallos. Cada corrida conserva sus
eventos y reportes originales; el reporte consolidado es una proyección derivada.
No se produjo un evento OPEN de circuito en vivo: no hubo dos fallos consecutivos
de un mismo proveedor antes de su siguiente éxito. Esa transición sí está probada
con mocks. Ningún proveedor cloud tiene llamadas presupuestadas restantes.

## Operación

El runner usa manifiestos con dependencias y proveedores ordenados, no selección
aleatoria. Cada tarea contiene contexto acotado, hashes de fuentes y un contrato
JSON propiedad del master. Máximo 3 intentos y 2 fallbacks; un proveedor no se
repite para la misma tarea. Los workers no reciben herramientas ni permisos de
escritura. Las tareas locales son operaciones explícitas del master, nunca
comandos obtenidos de una respuesta.

La concurrencia máxima es 3 total, 2 cloud y 1 por proveedor. Las reservas de gasto
se serializan antes de las llamadas. Dos fallos abren el circuito 300 segundos;
una tarea posterior puede probarlo una vez pasado el plazo. Un límite de gasto
no se recupera por esperar. Ctrl+C detiene la planificación y drena las llamadas
ya iniciadas, limitadas a 60 segundos.

Cada transición tiene evento inmutable con hash y checkpoint atómico. Al reiniciar,
una respuesta ya persistida se valida sin volver a invocar; si el resultado de
una llamada es incierto queda `INTERRUPTED_UNKNOWN`. No se promete exactly-once
remoto cuando el proceso muere en tránsito. Los artefactos aceptados se verifican
por hash. El lock residual requiere inspeccionar el PID; no se borra a ciegas.

Se añadieron solicitudes nativas de JSON para Ollama/Gemini/Azure y una instrucción
system para Nova. El parser sigue rechazando Markdown, claves duplicadas, NaN,
tipos erróneos y respuestas semánticamente equivocadas. Ollama usó esta opción
en la continuación. Los cambios cloud de formato tienen tests con mocks, pero
no se recertificaron live porque el límite local está agotado.

Desde `C:\Fate Soldiers 3`, reanudar el último checkpoint sin duplicar trabajo:

```powershell
python tools/hybrid_campaign.py tools/hybrid_capture_finalize.json --output artifacts/hybrid_campaign_20261003/preparation --max-tasks 10 --max-iterations 50
```

La reanudación real se probó: **cero llamadas nuevas**. Un checkpoint terminado
no genera tareas nuevas por sí solo. Para una siguiente tanda se prepara un
manifiesto explícito, se revisa `--dry-run` y se usa el MISMO diario global. Puede
usarse Ollama; más llamadas cloud requieren una decisión explícita sobre el
presupuesto, no otro directorio para evadirlo.

## Captura y comparación pendientes

Ejecutable prioritario comprobado:
`D:\Juegos\Playstation\Playstation 2\PS2 Tools\PCXS2 V2.3\pcsx2-qt.exe`,
versión **2.8.2.0**, SHA-256
`982c7c62600a999cf15a25c18349426166c785e7867b2fcc5018d733245b71a3`.
La carpeta secundaria contiene también 2.3.261 y 1.7.4163; no se mezclaron estados.

ELF: `C:\DW3\sources\dumps\dw3xl_ps2\SLUS_206.17`, 1.905.272 bytes, SHA-256
`d26695fa7769cabbddbd89168924279cd1035eeb0bdd3744aec95257f7cfa731`.
Coincide con la evidencia previa. Se volvió a comprobar en las corridas locales.

El siguiente trabajo es verificar la exportación del debugger con configuración
aislada y capturar A antes de LUI en `0x00100008`, B en el SEGUNDO hit de
`0x00100018`, después del delay slot `0x00100030`. Hay que registrar la traza de
11 instrucciones y los registros/RAM del contrato generado. No se ejecutó retail
en esta campaña. No se ha demostrado que la interfaz exija intervención humana;
por eso no se inventa un bloqueo `WAITING_FOR_HUMAN_EVIDENCE` ni una secuencia de
clicks supuestamente verificada.

`tools/retail_compare.py` compara capturas normalizadas conservando originales.
Cada directorio de entrada requiere `manifest.json`: `origin` (`PCSX2` o `HOST`),
`elf_sha256`, mapa `files` de rutas relativas a SHA-256 y lista `memory` con
`snapshot`, `base`, `length`, `file`. PCSX2 requiere además `pcsx2_version`,
`exe_sha256` y `boot_method`. Los originales deben figurar también en `files`.
Se valida integridad y formato; la autenticidad de los originales requiere revisión
del master y no se demuestra por el texto `origin=PCSX2`.

Cada `snapshot_A/registers.json` y `snapshot_B/registers.json` incluye `pc`, `hit`,
`gpr` (32 objetos low64/high64), `HI/LO/HI1/LO1`, `SA`, `Status/Cause/EPC`,
`branch`, `delay_slot` y `absent` (mapa de campo a razón). Los hex tienen 8 dígitos
para campos de 32 bits y 16 para mitades de 64. Campos desconocidos usan null más
razón. La traza JSONL tiene 11 filas con `pc/opcode/before/after/branch_taken/delay_slot`;
before/after pueden estar ausentes explícitamente. No extrae registros de un
savestate automáticamente: ese normalizador sigue pendiente.

El comparador reporta el primer campo observado divergente, ambos valores y la
última observación coincidente; enumera cobertura ausente y no atribuye una causa
sin evidencia. No transforma concordancia parcial en equivalencia.

```powershell
python tools/retail_compare.py --retail RUTA_CAPTURA_PCSX2 --host RUTA_CAPTURA_HOST --output RUTA_NUEVA_COMPARACION_JSON
```

## Validación y archivos

Pruebas finales: 53 híbridas (incluyen las 28 existentes) y 6 del comparador,
todas PASS; sin tokens cloud. Logs `tests_hybrid_final_v2.log` y
`tests_compare_final.log`. Se verificaron formato, fallback, circuitos, concurrencia,
presupuesto compartido, interrupción ambigua, reanudación, revisión independiente,
secretos, integridad, anchuras, hit incorrecto de B y primera divergencia sintética.
Los fixtures sintéticos viven solo en temporales de tests, nunca como evidencia retail.

Archivos modificados: `AGENTS.md`, `tools/hybrid_router.py`,
`tools/hybrid_policy.json`, `tools/hybrid_diagnostics.py`, `tests/test_hybrid_router.py`.
Archivos nuevos: `tools/hybrid_campaign.py`, `tools/hybrid_capture_campaign.json`,
`tools/hybrid_capture_continue.json`, `tools/hybrid_capture_finalize.json`,
`tools/retail_compare.py`, `tests/test_hybrid_campaign.py`,
`tests/test_retail_compare.py` y este documento. Evidencia nueva bajo
`artifacts/hybrid_campaign_20261003/`; diario global ampliado sin alterar eventos
previos. No se modificó el corpus, C++, ABI, ELF ni dumps retail; no se inventaron
commits Git.
