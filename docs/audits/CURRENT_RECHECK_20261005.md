# Auditoría contrastada del estado y de referencias adicionales

Revisión posterior a cycle007, 2026-10-05 UTC. Fuente auditada:
`395df9ffe45faf4e55567785caf34da2bd21035d`, verificada también en origin/main.
**0/8 criterios finales. El objetivo sigue siendo el port nativo completo.**

## Qué quedó comprobado

- Coinciden los hashes actuales del ejecutable y ELF de `live_final`, los nueve
  archivos de lanzamiento/stdout/stderr de las tres observaciones y los45
  archivos incluidos en la huella acotada de fuentes. Esta huella no cubre cada
  unidad de traducción del proyecto.
- Se verificó la conservación de los diez archivos públicos previamente fijados.
  Se descargaron y contrastaron cuatro fuentes nuevas de Play!, y después tres
  de controles/tarjetas: los siete coinciden con el texto del conector tras
  normalizar saltos de línea. Los bytes originales tienen su propio SHA256.
- El informe del respaldo sigue diciendo VERIFIED. Se leyó ese informe; no se
  volvió a calcular el hash de sus65.7GB. Los destinos de junctions siguen aparte.
- No había juego ni compilación coordinadora activos; los dos MSBuild observados
  eran nodos con `/nodeReuse:true`. No se lanzó otra compilación ni ejecución
  idéntica, porque el código nativo no cambió durante esta auditoría.
- Se recogieron las tres colas de asesoría. Las respuestas anteriores cambiadas
  siguen marcadas como obsoletas; el estado COLLECTED_UNREVIEWED del colector no
  sustituye la revisión semántica conservada en THREE_ADVISER_REVIEW_20261005.md.

El último comportamiento real sigue siendo: MODLOAD1.6 export7, IOP0x14374,
petición de `MODULES/SIO2MAN.IRX`, cero presentaciones GS. La ventana y los
contratos aprobados no prueban vídeo, Press Start, batalla ni guardado.

## Hallazgo nuevo: la versión exacta de SIO2MAN

El IRX original seleccionado tiene6553bytes, SHA256
`d02dd7bcf83a802c388b6ce1fdd447b4d5c29dcc7ba11000ccd66f8f14714fd6`.
Su cabecera IOPMOD identifica **sio2man2.5**, entrada0x634, GP0x8F80 antes de
reubicación; su tabla exportada identifica **sio2man2.3**. No son la misma clase
de versión. El PS2SDK público revisado se identifica como3.17.

Se localizaron28 stubs de importación en ocho bibliotecas: loadcore1.3,
intrman1.2, stdio1.3, dmacman1.2, thbase1.1, thevent1.1, thsemap1.1 y sysclib1.3.
Son tablas estáticas; no implican28 llamadas ejecutadas. La entrada original
registra exports, prepara eventos/hilo, registra interrupción0x11, configura
DMA11/12 y arranca un hilo. Registrar solamente el nombre como HLE no cubre esto.

## Fuente adicional que puede acelerar el bloqueo principal

[Play! IopBios.cpp](https://github.com/jpd002/Play-/blob/83700b2c31e593bc94e845b4b31b797be84dda59/Source/iop/IopBios.cpp#L452)
presenta un diseño concreto: petición persistente con propietario, suspensión
del hilo solicitante, preparación de argc/argv en el hilo cargador, retorno a
una continuación y notificación al completar. Sus estructuras están en
[IopBios.h](https://github.com/jpd002/Play-/blob/83700b2c31e593bc94e845b4b31b797be84dda59/Source/iop/IopBios.h#L519).
Esto es útil como arquitectura de referencia para sustituir la llamada local
no reanudable, manteniendo los contratos del MODLOAD1.6 original.

No copiarlo sin adaptación: el wrapper
[LoadStartModule](https://github.com/jpd002/Play-/blob/83700b2c31e593bc94e845b4b31b797be84dda59/Source/iop/Iop_Modload.cpp#L174)
recibe resultPtr pero no lo usa en la función revisada. La preparación alinea
a4bytes, mientras el original analizado alinea a8. Tampoco establece allí
el ModuleInfo en a3. Su finalización trata la residencia3 de forma distinta
del original1.6. Su utilidad es el diseño de propiedad/reanudación, no la
equivalencia del comportamiento. No se importó ni ejecutó código externo.

[Play! SIO2](https://github.com/jpd002/Play-/blob/83700b2c31e593bc94e845b4b31b797be84dda59/Source/iop/Iop_Sio2.cpp#L173)
añade otra referencia para registros, transferencias DMA, interrupciones y
protocolos de mando/tarjeta. Complementa PCSX2 y el original identificado.

## Decisión de ejecución

Mantener el pipeline. Implementar petición MODLOAD7 persistente y continuaciones
de RPC/hilo antes de aceptar el arranque de un módulo. Verificar entrada ABI,
resultPtr, reentrancia, suspensión, cancelación por reboot y descarga real.
Después medir las dependencias del SIO2MAN2.5 original y reparar cada barrera.
La mayor palanca actual es corregir estos contratos; más capacidad de modelos
o recompilar sin cambios no aporta evidencia adicional.

La petición posterior de XInput y un archivo único de guardado queda desarrollada
en [INPUT_AND_SINGLE_SAVE.md](../INPUT_AND_SINGLE_SAVE.md), con una prueba real
de disponibilidad de XInput y rutas candidatas de ambos ELF originales.
Estas tareas comparten la frontera SIO2/IOP, pero sus módulos de host pueden
prepararse de forma aislada sin fingir que el arranque ya funciona.

Evidencia local: `artifacts/native_pipeline_20261005/web_audit_009` y
`input_save_audit_001`. Evidencia pública compacta: `evidence/current_audit_20261005.json`.
Se conservaron los resultados previos; no hubo borrados, gasto cloud ni nueva
captura de juego. No hay nueva prueba de equivalencia integral.
