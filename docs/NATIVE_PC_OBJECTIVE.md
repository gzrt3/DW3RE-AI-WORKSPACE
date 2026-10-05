# Objetivo vigente: port nativo de PC

Ciclo028: puente GS→Direct3D11/12 probado con readback RGBA y observación Computer Use de patrón diagnóstico. Auto prefiereD3D11; selección explícita y VSync comprobados. BuildReleasePASS. El juego mantienePMODE0, vblank:8 sin implementar,1215observaciones/0presentaciones en20s,inputMATCH. No logos originales;0/8criterios. Automatización principalPAUSED y revisorGitHubDisabled. Publicar checkpoint gráfico y después audio, según el usuario. Ver docs/NATIVE_GS_DIRECTX_20261005.md.

Historial previo:

Ciclo027: Release003 PASS;170B24,1ADE0C y1AEF98 superados. Ambos servidores PAD responden y la versiÃ³n403 procede del IOP. Nueva barrera vblank:8 (RegisterVblankHandler),antes de completar init. Native003: plazo40s,exit2,inputMATCH,2416observaciones y0presentaciones. Computer Use observÃ³ la ventana nativa negra. Contratos PAD Debug/Release PASS;3regresiones IOP generales siguen abiertas. Primeros logos pendientes;0/8criterios cerrados. Ver docs/NATIVE_PAD_BOOT_20261005.md.

Los estados anteriores se conservan como historial.

ActualizaciÃ³n026: las ocho cargas originales y BindRpc80000400 ya se completan
en native008. Nueva barrera EE170B24, Release009 PASS/inputMATCH; sin logos ni
imagen nativa acreditada. ContinÃºa la prioridad de boot y primeros logos, con
los ocho criterios finales abiertos. Ver NATIVE_BOOT_PROVIDERS_20261005.md.

Prioridad del usuario tras ciclo025: primero arranque nativo y primeros logos
originales, paso a paso.1B1004 estÃ¡ reparado; sigue pendiente el servicio RPC
80000400, cargas de mÃ³dulos sin entrada y la continuaciÃ³n234400. No hay imagen
nativa acreditada. El objetivo final y los ocho criterios se conservan.
Consultar NATIVE_WAITSEMA_20261005.md antes del historial siguiente.

Ubicaciones vigentes: desarrollo en `D:/DW3-GitHub-Publish-20261004`,
entrega final en `C:/Games/DW` (NVMe) y respaldo en `D:/Backup/DWProject`.
Los arboles anteriores se conservan mientras termina su verificacion; ver
`docs/STORAGE_LAYOUT.md`. La carpeta final aun no contiene un juego terminado.

ActualizaciÃ³n autorizada por el usuario: 2026-10-05 UTC. Esta especificaciÃ³n
aclara y amplÃ­a el objetivo existente; conserva el trabajo y la evidencia previos.

## Entregable final

Desarrollar, completar y verificar Dynasty Warriors 3 Complete Remastered como un port nativo standalone de Windows x64, compilado con MSVC/CMake y entregado como DW3_Remastered.exe. Integrar Dynasty Warriors 3 y Dynasty Warriors 3 Xtreme Legends en un Ãºnico producto jugable, con ambos conjuntos de modos, mapas, lados, personajes, armas, progreso y funciones originales disponibles sin cambio ni montaje de discos. El producto debe ejecutar el cÃ³digo de juego recompilado y sus subsistemas nativos dentro del proceso del port, sin instalar ni ejecutar PCSX2 durante el uso normal; PCSX2 queda como referencia independiente de verificaciÃ³n. Leer los assets extraÃ­dos de /data/ mediante un VFS combinado con identidades y precedencia explÃ­citas por versiÃ³n. Completar grÃ¡ficos, vÃ­deo, audio, controles de teclado y mando, guardado/carga, menÃºs, batallas y transiciones, preservando el comportamiento original mediante comparaciones reproducibles de estado, entradas y salidas. Proporcionar una base de modding documentada con configuraciÃ³n y sustituciÃ³n de recursos verificable, junto con compilaciÃ³n, preparaciÃ³n de datos y empaquetado reproducibles. Continuar desde el cÃ³digo y evidencia actuales en C:\Fate Soldiers 3 y los originales en C:\DW3; conservar historia y trabajo Ãºtil. Corregir divergencias y regresiones con pruebas de alcance adecuado, sin declarar ausencia absoluta de errores. Finalizar Ãºnicamente cuando todos los criterios de aceptaciÃ³n del port nativo y de la integraciÃ³n completa tengan evidencia reproducible de extremo a extremo. Trabajar autÃ³nomamente dentro de los permisos efectivos y los presupuestos ya autorizados, sin reiniciar contadores ni ampliar lÃ­mites.

## Punto de partida verificado

El registro siguiente corresponde a la redefiniciÃ³n inicial del objetivo.
El estado actual se registra en CURRENT_STATUS.md: MODLOAD7/SIO2MAN, DMA/VIF,
preparaciÃ³n grÃ¡fica, GsSetCrt, IRQ y retornos de buffers/paquetes superados en
color_return_023/native-002; siguiente continuaciÃ³n ausente1B1004. VSync del monitor
opcional con VBLANK interno conservado; sin tÃ­tulo ni batalla. Se conserva el punto de
partida histÃ³rico y los ocho criterios finales siguen abiertos.

- Ejecutable de desarrollo actual: `fate_game.exe`; el nombre de entrega serÃ¡
  `DW3_Remastered.exe` cuando el empaquetado real estÃ© preparado.
- Ciclo004: compilaciÃ³n Release aprobada; proceso detenido en `0x0019A6C4`,
  integridad de entradas MATCH. MODLOAD7/15 versiÃ³n0x106 siguen sin implementar.
- Recuperaciones de cadena/cachÃ© y consulta del evento CDVD verificadas mediante
  contratos Debug/Release y ejecuciÃ³n nativa acotada. Esto no acredita el juego.
- SetupHeap coincide en argumentos/retorno con los checkpoints de referencia.
  El VFS tiene pruebas de recursos/sectores; la integraciÃ³n jugable sigue abierta.
- Ninguno de los ocho criterios finales estÃ¡ cerrado. No hay tÃ­tulo ni batalla
  completa demostrados. PublicaciÃ³n de cÃ³digo anterior: `1981eed1c6199d826b6b22bc12b151fa6e2dedec`.

## PrÃ³ximos hitos y evidencia requerida

1. **Arranque nativo real:** continuar desde1B1004 con instrucciones originales;
   completar carga/inicializaciÃ³n de mÃ³dulos y subsistemas con ABI, resultados
   y propiedad de recursos correctos. Identificar los argumentos y archivos
   solicitados realmente; conservar fallos y comparar trazas antes/despuÃ©s.
2. **TÃ­tulo y menÃºs:** conectar presentaciÃ³n nativa y entrada al bucle real;
   verificar imagen original, navegaciÃ³n, selecciÃ³n, audio y salida limpia.
3. **Primera batalla completa:** carga de terreno/personajes, IA, combate,
   animaciÃ³n, colisiones, objetivos y resultados; comparar entradas deterministas
   y estados/imagen/audio con referencias independientes.
4. **DW3 + XL completos:** inventario exhaustivo, VFS dual y tablas unificadas;
   pruebas de alcance y finalizaciÃ³n por modo, mapa, lado y transiciÃ³n, sin
   solicitudes de disco. Conservar diferencias legÃ­timas de cada versiÃ³n.
5. **Persistencia y modding:** progreso, desbloqueos, ajustes y guardados despuÃ©s
   de reiniciar; documentar formatos/precedencia y demostrar al menos un cambio
   de configuraciÃ³n y un reemplazo de recurso reversibles en el port real.
6. **Entrega:** compilaciÃ³n reproducible, preparaciÃ³n de /data/, paquete Windows
   x64 y pruebas en una instalaciÃ³n limpia sin PCSX2. Verificar dependencias y
   procesos, sesiones completas prolongadas, regresiones y diagnÃ³sticos de datos
   ausentes. Las mejoras de remasterizaciÃ³n no sustituyen la fidelidad base.

## Reglas de aceptaciÃ³n

Se conservan Ã­ntegros los ocho criterios de COMPLETE_REMASTERED_PLAN.md.
Los requisitos nativos y de modding de este documento son obligatorios y se
verifican dentro de esos criterios; no se reduce el alcance a una demo o al boot.
PCSX2, las capturas y los modelos auxiliares ayudan a comprobar el desarrollo;
ninguno acredita por sÃ­ solo un criterio ni forma un requisito de ejecuciÃ³n del
producto. Un porcentaje de fases no representa porcentaje del juego terminado.

VSync de presentaciÃ³n del monitor serÃ¡ opcional, apagado por defecto en el
diagnÃ³stico actual. El reloj, VBLANK e interrupciones internos de PS2 se
conservan. Una futura velocidad de simulaciÃ³n o interpolaciÃ³n mayor requerirÃ¡
pruebas propias de fÃ­sicas, animaciÃ³n, audio y controles; no queda acreditada
por desactivar la sincronizaciÃ³n del presentador SDL.

Una funciÃ³n oficial de XL se acredita con el inventario de las versiones
suministradas. Cualquier modo solicitado que no pertenezca a ellas se registra
como requisito adicional; no se presenta como contenido original ya existente.

Conservar presupuestos y lÃ­mites mÃ¡s estrictos, los originales, la procedencia,
respuestas rechazadas y resultados fallidos. No sustituir trabajo Ãºtil ni
recrear un pipeline desde cero sin evidencia de que sea necesario.

## Referencias de estado

- `evidence/native_repair_20261005.json` (resumen pÃºblico; evidencias originales conservadas localmente)
- `docs/NATIVE_REPAIR_20261005.md`
- `docs/NATIVE_PIPELINE_20261005.md`
- `docs/COPILOT_PIPELINE.md`
