# Ciclo026: cargas de arranque y respuestas RPC

Prioridad vigente: ejecutar el boot nativo y sus primeros logos originales.
Los ocho criterios finales siguen abiertos. Todavía no hay vídeo, logo,
pantalla de título ni batalla nativa acreditados.

El ciclo026 instala las tablas originales de SIFMAN, SIFCMD, CDVDMAN y VBLANK
con sus propietarios HLE existentes. PADMAN ya entra y retorna en el host.
También recupera el epílogo original EE234400, con sus siete instrucciones
verificadas, semántica de EI, restauración LD y delay slot de JR.

La medición de LOADFILE reveló cargas omitidas. En native004–006 el bucle EE
consumía un índice antes de que la carga IOP terminara. Eliminar un fallback
incorrecto de dispatchGuestBranch reparó un defecto probado de yield, pero
no corrigió estas cargas. Sus fallos y resultados se conservan por separado.

La causa medida está en sceSifSetDma: un envío EE→IOP activaba el canal5/SIF0
de recepción. El handler original podía consumir una respuesta END antigua
que seguía en el buffer entrante, señalando el semáforo de otra solicitud.
Se corrigió al canal6/SIF1. La prueba focal falla antes del cambio y pasa
después en Debug y Release. Usa handlers sintéticos: verifica dirección,
máscara, rechazo de transferencia, payload y ausencia de señal a un semáforo
ajeno; no ejecuta por sí sola un END original ni acredita timing del hardware.

En native007, los índices0,4,8,C,10,14,18 se consumen una sola vez después de
las cargas SIO2MAN, MCMAN, MCSERV, PADMAN, LIBSD, MODHSYN y MODMSIN. Sus entradas
originales retornan y sus módulos quedan residentes. MCMAN/MCSERV retornan2;
los demás retornan0. KOEISND retorna−200 por falta de timrman0102 y el bucle
original reintenta el mismo índice1C. El error ya no se convierte en éxito.
La ejecución termina por su límite15s con integridad de entradas MATCH.

TIMEMANI original exporta timrman0103 con28 slots; KOEISND requiere los
ordinals4/20/22/23. TIMEMANP sólo tiene17 slots. Se añade únicamente TIMEMANI
al conjunto de imágenes de proveedores. La prueba de enlace verifica sus
metadatos, slots, imports de KOEISND y barrera fuera de tabla. Esto no prueba
todavía ejecución, callbacks ni precisión temporal del proveedor de timers.

## Resultado final de026

Build completo Release009 PASS. Native008 carga los ocho módulos en orden,
incluido KOEISND, que retorna0 y queda residente. BindRpc80000400 ahora obtiene
el servidor IOP163848 y su llamada posterior completa. La nueva barrera es la
continuación EE00170B24, llamada desde180030. Termina con exit4294967295 e
inputMATCH. Se solicitó observación visible40s, pero el proceso terminó antes
de obtener una captura; no se afirma un nuevo chequeo visual nativo.

## Verificación y límites

- Build nativo Release008 PASS y native007 TIMEOUT/MATCH.
- Por Debug/Release:512 comparaciones del epílogo IRQ,4 fallos de alineación,
  siete guardas de opcodes y un conflicto de propietario PASS.
- Por Debug/Release:8 contratos de yield/retorno/excepción/checkpoint y
  cuatro contratos de dirección SIF PASS.
- Por Debug/Release:5 transiciones de proveedores,224 comparaciones de slots,
  cuatro imports timrman0102 y ocho barreras explícitas PASS. Son callers
  sintéticos enlazados a metadatos originales, no lockstep de PCSX2.
- Las15 pruebas Python del probe pasan.
- La regresión IOP completa conserva3 fallos de14 en ambas configuraciones:
  emulator, imports y compatibility. No están resueltos ni ocultos.
- Se conserva el primer build del test SIF sin include requerido, el primer
  build IRQ con C4127 y el intento de lanzar el test IRQ desde una ruta errónea.
  La ejecución corregida del test IRQ sí pasa en ambas configuraciones.

La vía de despacho HLE de comandos conserva un buffer físico de recepción;
su consumo/coherencia frente a futuros IRQ SIF0 reales sigue pendiente. Esta
corrección no acredita el transporte SIF completo ni el comportamiento de VU,
GS, SPU2, disco, memoria de tarjeta o mandos. El debugger original se observó
pausado en1A76D8; no se obtuvo una nueva captura de234400.

KOEISND sí existe en MODULES/CDROM/KOEISND.IRX,36613bytes, SHA256
c78b7d1074b914efe4dabd890530a6e204f060e0f3b3a883ca56357b1b870a6a.
La sospecha anterior de ausencia del archivo queda corregida y conservada.

Siguiente: recuperar la continuación170B24 de su traducción y opcodes originales,
verificar sus stores de128 bits, llamadas, bucles y retornos. Después seguir la primera solicitud real de MOVIE/KOEILOGO.PSS o
MOVIE/OMEGA.PSS desde el VFS hasta decodificación, presentación, audio y
transición. Los nombres de los archivos no prueban su orden de reproducción.

Evidencia local: artifacts/native_pipeline_20261005/boot_providers_026/.
Sin llamadas cloud nuevas; las colas asesoras se recolectaron. Revisión local
aportó el hallazgo de dirección SIF; una revisión posterior alcanzó su cuota y
no se reintentó. Los originales y las fuentes anteriores se conservan.
