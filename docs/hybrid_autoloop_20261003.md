# Autoloop ejecutado y detenido ante evidencia humana

Estado verificado: WAITING_FOR_HUMAN_EVIDENCE. El comando superior ejecuto cuatro
ciclos persistentes de preparacion: dos conservaron fallos de comprobacion CLI,
y dos completaron preparacion/revalidacion. La ayuda del Qt real sale por stderr
con exit 1; el tooling ahora comprueba version y opciones, sin confundir ese
contrato CLI con el contrato de inferencia. No se reenviaron tareas aceptadas.

Comando exacto para continuar desde C:\Fate Soldiers 3:

```powershell
python tools/hybrid_autoloop.py --max-cycles 5 --max-tasks-per-cycle 10 --max-cloud-concurrency 2
```

Persistencia: `artifacts/hybrid_autoloop_20261003/state.json`, `journal.jsonl`,
`cycles/` y `final_report.json`. El journal tiene cadena SHA-256 y fsync; el estado
se reconstruye de el. Manifest y artifacts de cada ciclo se validan por hash.
Una llamada interrumpida de resultado incierto no se reenvia automaticamente.
Ctrl+C detiene nuevas tareas y drena las llamadas acotadas ya enviadas.

Una llamada nueva real: Ollama qwen2.5-coder:7b, 898 tokens entrada/48 salida,
8.027 segundos. Extraccion A/B aceptada por JSON exacto contrastado con la
especificacion hasheada. Cloud: cero llamadas; Gemini/Azure/AWS conservan sus
caps agotados. Los estados externos previamente verificados no se reclasifican
como rotos. AWS sigue configurado como us.amazon.nova-2-lite-v1:0. Reparacion
Nova/Gemini: una peticion explicita con original conservado, cubierta con mocks;
no recertificada live porque no se aumento el presupuesto.

La repeticion de la misma orden se verifico con cero peticiones duplicadas.
Suite final: 88/88 PASS (74 hybrid/autoloop, 8 capture, 6 comparison), sin cloud.
Contadores diferencian tareas nuevas de reusos por hash. El informe JSON conserva
usage, llamadas, circuitos, hashes y logs. Costos calculados/facturados desconocidos,
no se presentan estimaciones como gastos. Una ventana adicional requiere opcion
explicita del humano; usa el mismo diario y no reinicia reservas ni techos USD.

Preparacion determinista: ELF SHA-256 y entry verificados; 11 opcodes leidos del
ELF como analisis estatico, nunca como traza ejecutada; CLI/PINE y layout de
save revisados; config aislada comprobada con `-testconfig` (exit 0), sin ejecutar
retail; copia aislada de BIOS/NVM/MEC para proteger la instalacion original;
esquema y helpers preparados; tests del tooling. No cambios en src/sources,
runtime, corpus, ABI, /W4 /WX ni dumps retail previos.

PCSX2: la carpeta denominada PCXS2 V2.3 contiene realmente version 2.8.2.0.
Ejecutable: D:\Juegos\Playstation\Playstation 2\PS2 Tools\PCXS2 V2.3\pcsx2-qt.exe.
Hash: 982c7c62600a999cf15a25c18349426166c785e7867b2fcc5018d733245b71a3.
ELF: C:\DW3\sources\dumps\dw3xl_ps2\SLUS_206.17.
Hash: d26695fa7769cabbddbd89168924279cd1035eeb0bdd3744aec95257f7cfa731.

PINE ofrece lectura y SaveState, sin breakpoint/Run/Step. El helper de control
de escritorio fallo con native pipe unavailable, tambien tras retry/reset.
No se ejecuto retail. Procedimiento humano unico y exacto:
`artifacts/hybrid_autoloop_20261003/human_procedure.md`.
Originales nuevos: `capture/raw`; normalizados: `capture/normalized` dentro de
ese directorio de evidencia. F11 desde el branch ejecuta tambien el delay slot;
el estado intermedio queda ausente. Decoder ligado a la build y probado con
fixtures sinteticos; requiere certificacion con un primer save real.

Al llegar captura real, la MISMA orden valida formato, hashes, originales y
memoria requerida. Compara si `capture/host/manifest.json` existe y es valido;
una captura host actual ausente es un bloqueo explicito, no una sustitucion por
el viejo probe sin runtime. Una primera divergencia genera inspeccion acotada
de fuentes, revision y tests. La correccion C++ automatica no esta certificada:
sin atribucion, scope y patch justificables se detiene antes de modificar el
producto. El loop avanza solo las operaciones deterministas implementadas.

Fuentes oficiales inspeccionadas, guardadas separadamente y hasheadas: el
[parser CLI de esta version](https://raw.githubusercontent.com/PCSX2/pcsx2/v2.8.2/pcsx2-qt/QtHost.cpp)
y [configuracion de compression del save](https://raw.githubusercontent.com/PCSX2/pcsx2/v2.8.2/pcsx2/Config.h).
Otros excerpts oficiales del debugger/PINE/save/R5900 se conservaron en
`artifacts/retail_capture_20261003/inspection`.

BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED
INTERACTIVE_MAIN_LOOP=NOT_DEMONSTRATED

Compilar no demuestra equivalencia; avanzar PC tampoco. No existe comparacion
retail real ni primera divergencia nueva demostrada todavia.
