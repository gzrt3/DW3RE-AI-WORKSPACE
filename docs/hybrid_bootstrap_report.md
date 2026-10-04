# Bootstrap hibrido: reporte factual

Fecha de evidencia: 2026-10-03 UTC (2026-10-02 America/Hermosillo).

Resultado: router de cinco proveedores implementado y validado con 21 self-tests
sin cloud. Una prueba end-to-end LIVE recorrio el circuito completo con Ollama,
incluida revision y rechazo registrado. La certificacion LIVE multi-cloud queda
bloqueada por recursos/permisos del entorno. No se certifica el juego ni el port.

## Archivos nuevos y preservacion

- `tools/hybrid_router.py`: adaptadores, routing, reservas, diario y revisiones.
- `tools/hybrid_policy.json`: rutas, modelos y limites explicitos.
- `tests/test_hybrid_router.py`: 21 pruebas aisladas con adapters/mocks.
- `AGENTS.md`: contrato para futuras sesiones, comandos e invariantes del port.
- `docs/hybrid_bootstrap_report.md`: este reporte.
- `artifacts/hybrid_bootstrap/baseline-20261003T053006.json`: SHA-256 del estado anterior.
- `artifacts/hybrid_bootstrap/events/*.json`: eventos inmutables de intentos,
  reservas, resultados, revision, diagnosticos, self-tests y verificacion baseline.

No existia Git ni AGENTS.md. No se encontro `tools/hybrid_worker.py`, ni buscando
archivos ocultos/ignorados en todo el proyecto. No se invento un reemplazo con
supuesto contrato compatible. El pipeline previo `artifacts/gemini_pipeline`
se inspecciono mediante AST (clases/metodos) y se preservo; no se ejecuto.
Verificacion SHA-256: 14347 archivos preexistentes comprobados, cero cambios o
ausencias en el conjunto protegido (sources cuando existe, src, include, apps,
tests y artifacts/gemini_pipeline). No se modifico codigo del juego ni evidencia
retail. No hay commits ni hashes Git.

## Matriz live

| Proveedor | Modelo/deployment | Resultado observado | Usage observado |
|---|---|---|---|
| Ollama | qwen2.5-coder:7b | PASS: respuesta exacta HYBRID_OK | prompt_eval_count=40; eval_count=5 |
| Gemini | gemini-2.5-flash | TEMPORARILY_UNAVAILABLE: permiso local de red denegado | No disponible |
| Azure | gpt-4.1-mini-1 configurado | Prerequisito CLI falla por permisos locales, antes de inferencia | No disponible |
| OpenAI | Ninguno seleccionado | TEMPORARILY_UNAVAILABLE: descubrimiento /v1/models bloqueado por red | No disponible |
| AWS | us.openai.gpt-5.6-luna configurado | UNSUPPORTED en este host: CLI_NOT_INSTALLED; no inferencia | No disponible |

Ollama: el primer GET de diagnostico no respondio; el probe posterior si verifico
endpoint e inferencia. No se instalaron ni iniciaron servicios.

Gemini/OpenAI: diagnostico posterior sin credenciales confirmo PermissionError,
errno=13, WinError=10013. No se evade la restriccion ni se solicita elevacion.
OpenAI no llego a enviar una peticion de inferencia: acceso real, billing, modelos
y cuota siguen SIN VERIFICAR. El adaptador hace un GET de modelos y, si encuentra
uno de los pequenos permitidos, exactamente un POST Responses sin reintentos.

Azure: `az account get-access-token` termino con exit 1 y error local de permisos;
no se obtuvo token ni se envio inferencia. El primer evento clasifico genericamente
FAILED/PROVIDER_ERROR; un evento diagnostico posterior precisa la causa. El codigo
actual clasifica estos permisos como TEMPORARILY_UNAVAILABLE. No se repitio la
inferencia ni se consultaron claves de recurso. La comprobacion diagnostica del
CLI no genero inferencia.

AWS: el estado remoto previamente reportado sigue siendo
TEMPORARILY_UNAVAILABLE por verificacion de cuenta, SIN REVALIDAR. La barrera
observada ahora es local: no hay AWS CLI en PATH ni en la ubicacion habitual;
tampoco hay herramienta AWS MCP expuesta en esta sesion. No confundir esta
ausencia con un nuevo rechazo de Bedrock. No se hicieron loops de comprobacion.
Las rutas AWS requieren un probe exitoso antes de habilitarse.

Discrepancia adicional: shell observado PowerShell 7.6.4, no 5.1. Los comandos
documentados usan sintaxis compatible con 5.1; no se afirma ejecucion probada en
5.1. Python ejecutado: 3.12.9.

## Prueba end-to-end unica

Comando ejecutado: `python tools/hybrid_router.py e2e`.

Master creo la tarea: ordenar 9, -2, 4, 0 y devolver solo un array JSON.
Ruta LOCAL eligio Ollama `qwen2.5-coder:7b`. Uso: 53 tokens de entrada evaluados,
17 de salida. La respuesta incluyo `[-2, 0, 4, 9]` dentro de un bloque Markdown.

Intento: `df391241063e4071b7a82996b926020d`.
Revision: `947bcfc598f64df3b8a7f581bf88ec07`.
Job SHA-256: `f06a24d00fc82a99484b7dcc2d12082675237211d9a18330532bb3d6f65a38cb`.

Secuencia demostrada: tarea -> router -> worker -> respuesta ->
PENDING_SEMANTIC_REVIEW -> comprobacion independiente JSON -> REJECTED persistido.
El comando devolvio exit 1, correctamente. El contenido numerico coincide, pero
incumple el formato requerido. NO es un PASS de la propuesta. Si se exige una
propuesta aceptada para cerrar la certificacion, esa condicion queda pendiente.
No se relajo el contrato ni se repitio la inferencia para obtener PASS.
Las dos ramas de revision, ACCEPTED y REJECTED, se prueban sin cloud en self-tests.

## Tests y seguridad

`python -m unittest discover -s tests -p test_hybrid_router.py -v`

Resultado final: 21/21 PASS, exit 0. Cobertura: cinco formatos de adaptador,
seleccion OpenAI desde modelos enumerados, fallback, limites, ausencia de retry,
separacion de propuesta/revision, rechazo semantico, redaccion, diagnosticos,
bloqueo concurrente, integridad de evidencia, cooldown y presupuesto persistente.
Mocks no acreditan disponibilidad LIVE cloud. No se ejecutaron tests C++ porque
no se cambiaron fuentes C++; /W4 /WX permanece como regla del proyecto.

En los cinco primeros eventos, `inference_attempted` significaba entrada al
adaptador, incluso si fallaba un prerequisito. Se registro esa imprecision en
un evento diagnostico, sin modificar historia; el contrato actual usa el nombre
correcto `adapter_attempted`. No interpretar el campo historico como evidencia
de inferencia cloud. Los eventos contienen codigos controlados, nunca errores
crudos ni headers de autenticacion.

## Presupuesto y costos

Usage local total observado: 93 tokens de prompt y 22 de salida, dos inferencias.
No se observo usage cloud. No se dispone de gasto facturado, tarifas configuradas,
costos de electricidad ni costos de hardware: costo monetario DESCONOCIDO.
No se presenta cero como gasto facturado ni se inventan precios.

Techos deseados AWS USD 100 y Azure USD 200; limites conservadores locales de
USD 1 para OpenAI/Gemini. Sin precios explicitos, limite persistente de dos
entradas al adaptador por proveedor cloud; el primer probe consumio una reserva
de llamada en cada uno, incluso cuando fallo antes de inferir. Es un limite de
llamadas, no una garantia monetaria. No se crean presupuestos cloud ni recursos.
Con precios configurados se registran reservas y costo calculado por tokens,
siempre separados de `billed_usd`. No aumentar limites ni borrar diarios.

## Uso y limitaciones pendientes

```powershell
python tools/hybrid_router.py run --tier LOCAL --prompt "Propone tres criterios para revisar una declaracion ABI." --timeout 30 --max-output 128
python tools/hybrid_router.py status
python -m unittest discover -s tests -p test_hybrid_router.py -v
```

La salida de run queda pendiente de revision. Para registrar revision del master:

```powershell
python tools/hybrid_router.py review --attempt-id ID --reviewer codex-master --verdict ACCEPTED --evidence "Comprobaciones independientes concretas"
```

El API Python debe usarse bajo `with journal.lock():`, como hace el CLI. El lock
es local, no distribuido. Los SHA-256 detectan alteraciones accidentales; no son
firmas autenticadas contra un atacante que pueda reescribir todo el diario.
El presupuesto cubre exclusivamente llamadas del router en este diario. No mide
gasto de otros clientes. Los precios requieren configuracion y reconciliacion,
no hay sincronizacion de facturacion. Los adaptadores cloud aun requieren pruebas
live en un entorno con las credenciales/CLI/red accesibles; no instalar ni cambiar
credenciales para evitar esta barrera. El worker anterior debe localizarse en
la copia correcta antes de afirmar reutilizacion o compatibilidad.

Proxima barrera de orquestacion: recuperar acceso permitido al entorno cloud y
al worker original, luego comprobar los proveedores pendientes una sola vez
con evidencia nueva y dentro del presupuesto existente. El comando de recheck
exige razon explicita y 24h desde el ultimo probe. No reiniciar el diario.

Proxima barrera del producto: evidencia independiente PCSX2/retail de equivalencia
y cadena runtime/main loop; este bootstrap no trabajo sobre ella.

BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED
INTERACTIVE_MAIN_LOOP=NOT_DEMONSTRATED

Referencias de contratos consultadas: [OpenAI Responses](https://developers.openai.com/api/reference/cli/resources/responses/methods/create),
[Gemini generateContent](https://ai.google.dev/api/generate-content),
[Azure Chat](https://learn.microsoft.com/en-us/rest/api/microsoft-foundry/azureopenai/chat),
[AWS CLI Converse](https://docs.aws.amazon.com/cli/latest/reference/bedrock-runtime/converse.html).
