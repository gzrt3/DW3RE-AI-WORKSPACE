# Supervisor persistente y captura parcial real

Se reanudó el checkpoint anterior sin ejecutar `hybrid_capture_finalize` ni
reiniciar campañas aceptadas. Antes de editar se verificaron los 34 eventos y
todos los hashes del manifest anterior. Estado SHA-256:
`4d1cafeed93d41dec7b79b8cdb2284763e4dc92493c8abd28bcf654dd2b9c65f`.
Reporte anterior:
`498adcf80a2f65f19fa2c89d3fad0510b88c274a9e8a5c681742f94d07dc0a78`.
Esos archivos históricos se conservan. El supervisor añade un journal propio
en `artifacts/hybrid_autoloop_20261003/supervisor/`.

```powershell
python tools/hybrid_supervisor.py run --enable-adviser --poll-seconds 30
python tools/hybrid_supervisor.py status
python tools/hybrid_supervisor.py stop
```

El DAG bloquea únicamente descendientes de evidencia ausente. Admite dos
operaciones independientes simultáneas, una campaña pool y una revisión premium
a la vez. El pool existente sigue imponiendo sus límites por proveedor y dos
llamadas cloud simultáneas como máximo. Solo operaciones master registradas;
ningún texto de worker se ejecuta o aplica como patch.

Con READY_TASKS=0 permanece IDLE_WAITING_FOR_EXTERNAL_INPUT, dormido 30 segundos,
sin inferencia ni llamadas cloud. Observa los árboles de evidencia previstos y
el ledger. La disponibilidad Adviser se consulta sin inferencia solo cuando hay
trabajo premium bloqueado y la consulta vence; mínimo una hora entre consultas
de cooldown. Los resets son pistas que se vuelven a comprobar, nunca autorización
para eludir cuota. El último estado de disponibilidad es una observación fechada,
no garantía de disponibilidad futura.

Persistencia: lock con PID/creation-time, leases con operación acotada,
proyección atómica, journal fsync/hash-chained dividido a 1 MiB, recuperación
de proyección vieja válida y rechazo de una proyección adulterada. Los locks
muertos se archivan antes de retirar únicamente ese archivo. Los resultados
por intento y rechazos permanecen; una inferencia premium interrumpida y de
resultado incierto NO se reenvía. Las campañas conservan su deduplicación propia.
Guard de 512 MiB libres antes de admitir operaciones. Stop/Ctrl+C drena las
operaciones acotadas y guarda el estado. Idle no produce un journal nuevo por
cada poll; solo actualiza el heartbeat de `final_report.json`.

El journal compartido del router publica ahora eventos mediante staging fsync
y hardlink exclusivo, para evitar reservas parcialmente visibles. Los budgets
no se reinician. AWS/Azure/Gemini tienen cero entradas cloud restantes en el
ledger existente. NO se autorizaron ventanas nuevas. Exclusivamente el humano
puede usar `authorize-budget --window-id IDENTIFICADOR_UNICO`; reutiliza la API
aditiva existente, con límites existentes, sin crear recursos ni borrar gasto.
El supervisor jamás invoca esa autorización por su cuenta.

La CLI configurada (versión 0.160.0) expuso `gpt-6-astra` en `model/list`.
`account/rateLimits/read` observó disponibilidad sin hacer inferencia.
Una revisión premium acotada Astra sí terminó: 29,720 input, 882 output,
122 reasoning output observados; billed/costo desconocidos. No se asume que
este sea el modelo de la sesión interactiva. Esas interfaces están documentadas
en la documentación del protocolo app-server.

Ollama `qwen2.5-coder:7b` realizó UNA revisión nueva del helper host: 3,620 input,
48 output observados. Se rechazó por contrato semántico: marcó erróneamente
que se suministraban valores retail y no devolvió la etiqueta exigida. El original
queda en el journal del router. Azure/Gemini fueron bloqueados ANTES del adapter
por límite de llamadas; AWS no se invocó. Cloud calls nuevas = 0.
Esto no invalida la verificación externa previa de los proveedores.

La captura automática CLI `-debugger -fastboot -elf` + PINE SaveState obtuvo A
real en PC 0x00100008 antes del LUI, sin controlar la GUI. PCSX2 instalado en la
carpeta literal `PCXS2 V2.3` es realmente **2.8.2.0**:
`D:\Juegos\Playstation\Playstation 2\PS2 Tools\PCXS2 V2.3\pcsx2-qt.exe`.
Exe SHA-256 `982c7c62600a999cf15a25c18349426166c785e7867b2fcc5018d733245b71a3`.
ELF `C:\DW3\sources\dumps\dw3xl_ps2\SLUS_206.17`, hash exacto
`d26695fa7769cabbddbd89168924279cd1035eeb0bdd3744aec95257f7cfa731`.
Serial por nombre `SLUS_206.17`; región no verificada independientemente.
Savestate A original `capture/raw/point_00.p2s`, hash
`a4aa17ca62fdcb4906ce70af36533b0b730a4f5be53afc506101bbedb83796f5`.
El proceso creado para esta A terminó; esa A no se mezcla con otro boot.

Se decodificaron GPR128 low/high, PC, HI/LO/HI1/LO1, SA, COP0 Status/Cause/EPC,
IsDelaySlot y RAM EE completa 32 MiB. Branch nativo queda conservado pero su
equivalente canónico permanece ausente. B/traza retail todavía están AUSENTES.
El decoder tiene fixtures y fuente pinned; la observación real de PC/código/
registro/RAM es consistente, pero no equivale a certificar todas las estructuras
internas de savestate o una ABI universal entre versiones.

`host_snapshot.py` generó un target aislado sobre una copia instrumentada de
la traducción original y PS2Runtime real, loader actual e inicialización SP/GP
del host. No cambia src/include/corpus. Observa 11 instrucciones y detiene B
mediante excepción del observer antes del checkpoint. Incluye GPR completos y
32 MiB por snapshot; Debug y Release coinciden en los campos observados.
Mantiene /W4 /WX, excepción C4324 por padding ABI y C4127 exclusivamente sobre
la copia traducida, igual al contrato del corpus. El catálogo diagnóstico solo
registra el entry real; otros PCs quedan sin resolver. No llega a syscall/HLE.
Es un diagnóstico del prefijo, excluye VFS/pad y el catálogo completo de gameplay;
no se presenta como prueba de equivalencia del ejecutable interactivo.

La A retail difiere ya del estado inicial HOST: entre otros, LO=0x3c frente a 0,
Status=0x70030c11 frente a 0x00010001, SP=0x92f80 frente a 0x80000 y
GP=0x99270 frente a 0. Se guardan como observaciones iniciales, NO como atribución
a una instrucción traducida ni como justificación de una corrección.
También se produjo un índice estático de 7,400 registros del dispatcher,
sin duplicados, con hashes de los siguientes destinos declarados.

La investigación pinned y revisión Astra no encontraron Run/Step/breakpoints
en PINE; Qt usa acciones internas del debugger, sin API remota publicada en
esas fuentes. Computer Use nativo falló después de retry/reset por pipe ausente.
No se hizo inyección de procesos ni automatización por coordenadas.

El procedimiento humano único está en
`artifacts/hybrid_autoloop_20261003/supervisor/human_procedure.md`:
`python tools/pcsx2_capture.py guided`. Abre el ejecutable/ELF exactos,
exporta A automáticamente y exige solo F11 seguido de Enter para cada uno de
los diez puntos posteriores. Exportación, hashes y normalización son automáticos.
`guided_001` es una sesión nueva con UUID/config preboot; no mezcla la A anterior.
Si quedan originales parciales, se preservan y debe elegirse otro `guided_NNN`
mediante `--root`. El supervisor detecta `guided_*/normalized/manifest.json`.

Ante A/B+traza válidas, valida originales/hashes/cobertura y ejecuta comparación
HOST/retail. Si encuentra una divergencia, conserva evidencia y crea tareas de
atribución/scope master. **No contiene un motor genérico que aplique patches
arbitrarios de LLM**. La atribución y aprobación de un patch arquitectónico
siguen siendo barreras de master cuando no existe un validator/operación acotada
registrado. No se afirma que todo el futuro port pueda completarse sin intervención.

README define un bootstrap de recursos, explícitamente sin gameplay/renderer;
no hay un contrato medible de cobertura full-game PROJECT_COMPLETE. El DAG
registra esa definición pendiente; nunca la sustituye por build/menu/PC advancing.
BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.
INTERACTIVE_MAIN_LOOP=NOT_DEMONSTRATED.

Validación final y hashes de esta implementación quedan en
`supervisor/validation.json` e `implementation_manifest.json`. Se ejecuta la
suite relevante completa una vez al finalizar, con cloud mockeado:

```powershell
python -m unittest discover -s tests -p "test_*.py" -v
```

Para reanudar desde el entorno configurado, leer state/journal del supervisor y sus tareas
premium bloqueadas; no borrar leases, ledger ni evidencia. `retry-tooling` solo
admite tareas determinísticas REJECTED con motivo explícito, nunca tareas premium
inciertas ni una campaña pagada duplicada. El process_alive del comando status
comprueba PID y creation-time; un reporte antiguo no prueba que siga vivo.
