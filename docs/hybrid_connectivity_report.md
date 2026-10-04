# Diagnostico de conectividad: continuacion del bootstrap

2026-10-03 UTC / 2026-10-02 America/Hermosillo. Condicion de salida B: hacen falta
permisos del entorno que esta sesion no puede ampliar. No se infiere ningun fallo
de las cuentas a partir de las restricciones locales.

## Restricciones y causa observada

La configuracion entregada a esta sesion declara filesystem workspace-write,
red restringida y categorias `sandbox_approval`, `rules`, `skill_approval`
desactivadas. Solo `mcp_elicitations` admite solicitudes. No se intento evadir
estas restricciones ni pedir una elevacion que esa politica no permite.
Esto es configuracion declarada; no es una inspeccion de reglas internas del
firewall de Windows ni prueba de que un componente especifico sea el responsable.

DNS resolvio los seis hosts probados. El GET local respondio HTTP 200. Los cinco
HEAD HTTPS cloud fallaron antes de obtener respuesta HTTP con PermissionError,
errno 13, WinError 10013. El patron es consistente con la restriccion de red
declarada; no demuestra AUTH_FAILED, billing, cuota o modelos no disponibles.

Azure CLI existe, pero tanto `--version` como `account get-access-token` salen
con exit 1, PermissionError errno 13 sobre
`<user>\.azure\azureProfile.json`. No se leyo ese archivo directamente,
no se imprimio el stderr crudo ni se obtuvo/guardo token. El perfil esta fuera
del directorio de proyecto permitido. Ademas, los endpoints Azure de datos e
identidad sufren el mismo bloqueo HTTPS.

AWS no se resuelve por PATH en esta sesion. `os.stat` devuelve FileNotFoundError
para `C:\Program Files\Amazon\AWSCLIV2\aws.exe`; devuelve PermissionError,
WinError 5, para el candidato bajo AppData. Ollama CLI tampoco se resuelve por
PATH y su candidato bajo AppData devuelve WinError 5. Esto NO demuestra ausencia
de instalaciones en el host: corrige la conclusion demasiado fuerte del reporte
anterior. No se buscaron credenciales ni se recorrio el perfil del usuario.

La primera evidencia del nuevo diagnostico usa `exists: false` incluso en los
casos de acceso denegado; la excepcion adjunta es la evidencia autoritativa.
Se corrigio el script para emitir `exists: null` ante inaccesibilidad, con test,
sin alterar ni repetir el diagnostico historico.

## Ejecutables y versiones

| Programa | Resolucion observada | Version |
|---|---|---|
| Python | C:\Program Files\SVP 4\mpv64\python.exe | 3.12.9 |
| Ollama CLI | No resuelto por PATH; candidato AppData inaccesible | No obtenida del CLI |
| Ollama servidor | http://localhost:11434/api/version | 0.35.0 |
| Azure CLI | C:\Program Files\Microsoft SDKs\Azure\CLI2\wbin\az.cmd | --version bloqueado por perfil |
| AWS CLI | No resuelto por PATH; ver distincion ausencia/acceso denegado | No obtenida |

PowerShell observado: 7.6.4. `Get-Command -All` tambien encontro el wrapper `az`
sin extension en la misma carpeta. Python no importa automaticamente modulos
vecinos al ejecutar este script; se usa importlib con la ruta exacta del router,
sin cambiar la instalacion de Python ni variables globales del entorno.

Variables comprobadas solo como booleanos: GEMINI_API_KEY y OPENAI_API_KEY=true;
AZURE_OPENAI_API_KEY, AZURE_CONFIG_DIR, AWS_PROFILE, AWS_REGION,
AWS_DEFAULT_REGION, AWS_ACCESS_KEY_ID, AWS_SECRET_ACCESS_KEY, AWS_SESSION_TOKEN,
HTTP_PROXY y HTTPS_PROXY=false. Ausencia de variables AWS no implica ausencia
de credenciales de CLI/SSO. No se inspeccionaron archivos de credenciales.

## Matriz de certificacion

| Provider/model | Esta ejecucion Codex | Estado externo comunicado por usuario |
|---|---|---|
| Ollama/qwen2.5-coder:7b | PASS live nuevo; HYBRID_OK exacto | PASS |
| Gemini/gemini-2.5-flash configurado | TEMPORARILY_UNAVAILABLE: red local; inferencia no enviada | Inferencia PASS |
| Azure/gpt-4.1-mini-1 | TEMPORARILY_UNAVAILABLE: perfil CLI y red; inferencia no enviada | Inferencia PASS |
| OpenAI/modelo no seleccionado | TEMPORARILY_UNAVAILABLE: red; sin descubrimiento autenticado ni inferencia | Clave configurada; inferencia no certificada |
| AWS/us.openai.gpt-5.6-luna configurado | Barrera local CLI/red; no inferencia ni STS en esta sesion | STS PASS; profiles ACTIVE; TEMPORARILY_UNAVAILABLE por account verification |

La verificacion de cuenta AWS sigue siendo un estado externo reportado, no una
respuesta Bedrock nueva. No hubo retry AWS, Sol ni Astra. OpenAI billing/cuota
siguen sin verificar; no se probaron modelos alternativos. Las rutas/limites del
router y la evidencia antigua no se modificaron.

## Comandos y probes ejecutados

```powershell
Get-Command python,ollama,az,aws -All -ErrorAction SilentlyContinue | Select-Object Name,CommandType,Source
python -m unittest discover -s tests -p 'test_hybrid*.py' -v
python tools/hybrid_diagnostics.py --live-ready
```

El primer lanzamiento del diagnostico fallo al importar el router, antes de
iniciar probes o inferencias. Se corrigio esa carga y se lanzo una vez mas.
El script ejecuto `python --version`, `az --version` y, capturando y descartando
stdout sensible, `az account get-access-token --resource
https://cognitiveservices.azure.com/ --output json`. No ejecuto --version de
programas no resueltos ni cambio credenciales/PATH/configuracion.

Conectividad sin credenciales, un intento por endpoint:

- GET http://localhost:11434/api/version
- HEAD https://generativelanguage.googleapis.com/v1beta/models
- HEAD https://YOUR-AZURE-RESOURCE.openai.azure.com/openai/v1/models
- HEAD https://login.microsoftonline.com/common/v2.0/.well-known/openid-configuration
- HEAD https://api.openai.com/v1/models
- HEAD https://bedrock-runtime.us-east-1.amazonaws.com/

Solo Ollama supero prerequisitos: el adapter verifico GET /api/tags y envio un
POST /api/generate, qwen2.5-coder:7b, max output 32, timeout 30 segundos. Usage
observado NUEVO: prompt_eval_count=40, eval_count=5. Los providers cloud se
omitieron antes de reservar nuevas llamadas. No se observo usage ni costo cloud;
costo monetario facturado desconocido. No se aumento presupuesto.

La autorizacion explicita de esta continuacion se registra con campaign
`connectivity-followup-v1`. Permite esta unica ronda pese al cooldown del comando
probe habitual, sin cambiarlo. Un segundo --live-ready se rechaza antes de
cualquier probe. No cambiar campaign ni borrar diarios para evadir esa barrera.
`python tools/hybrid_diagnostics.py` reproduce solo diagnosticos sin inferencia;
no ejecutarlo en un bucle. Una certificacion posterior requiere una nueva
autorizacion y evidencia, manteniendo limites del router.

## Contrato JSON y tests

Se conserva el rechazo estricto de Markdown. No habia un defecto de contrato
que requiriera normalizacion: el prompt exigia JSON puro y el revisor lo rechazo
correctamente. No se cambio parser ni se repitio e2e. La inferencia nueva de
HYBRID_OK solo certifica disponibilidad del worker local.

Self-tests ejecutados sin cloud: suite del router mas tests del diagnostico.
La evidencia self_tests_followup conserva el resultado final. Los nuevos tests
cubren redaccion de stderr, descarte del token, distincion HTTP401/transporte,
permisos, versiones, inaccesibilidad frente a ausencia y no repeticion live.

Archivos nuevos: tools/hybrid_diagnostics.py, tests/test_hybrid_diagnostics.py,
docs/hybrid_connectivity_report.md y eventos adicionales del diario existente.
No se modifico hybrid_router.py, hybrid_policy.json ni AGENTS.md. No se modifico
producto, runtime, ABI, boot chain, evidencia retail o PCSX2.

## Acceso minimo necesario para continuar

1. Autorizar HTTPS saliente TCP443 para los cinco hosts cloud enumerados arriba.
   DNS ya funciona. No hace falta abrir acceso de red indiscriminado.
2. Permitir que Azure CLI acceda a su perfil existente en
   <user>\.azure, empezando por la lectura bloqueada de azureProfile.json.
   El alcance adicional de cache que pudiera necesitar CLI no se ha determinado;
   no se pide escritura general del perfil del usuario ni copiar credenciales.
3. Exponer la ruta real de la instalacion AWS ya existente al PATH de esta sesion
   y permitir lectura/ejecucion de ese ejecutable. La ruta real no pudo establecerse
   desde este sandbox; no se solicita instalar otra copia ni cambiar autenticacion.

La politica actual no permite solicitar `sandbox_approval`. El usuario debe
conceder esos accesos mediante el entorno que inicia Codex o proporcionar una
sesion autorizada. No se recibio una nueva denegacion de auto-review: simplemente
la categoria de escalacion esta desactivada en la configuracion disponible.

BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED
INTERACTIVE_MAIN_LOOP=NOT_DEMONSTRATED
