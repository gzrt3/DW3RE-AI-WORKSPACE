# Objetivo vigente: port nativo de PC

Actualización autorizada por el usuario: 2026-10-05 UTC. Esta especificación
aclara y amplía el objetivo existente; conserva el trabajo y la evidencia previos.

## Entregable final

Desarrollar, completar y verificar Dynasty Warriors 3 Complete Remastered como un port nativo standalone de Windows x64, compilado con MSVC/CMake y entregado como DW3_Remastered.exe. Integrar Dynasty Warriors 3 y Dynasty Warriors 3 Xtreme Legends en un único producto jugable, con ambos conjuntos de modos, mapas, lados, personajes, armas, progreso y funciones originales disponibles sin cambio ni montaje de discos. El producto debe ejecutar el código de juego recompilado y sus subsistemas nativos dentro del proceso del port, sin instalar ni ejecutar PCSX2 durante el uso normal; PCSX2 queda como referencia independiente de verificación. Leer los assets extraídos de /data/ mediante un VFS combinado con identidades y precedencia explícitas por versión. Completar gráficos, vídeo, audio, controles de teclado y mando, guardado/carga, menús, batallas y transiciones, preservando el comportamiento original mediante comparaciones reproducibles de estado, entradas y salidas. Proporcionar una base de modding documentada con configuración y sustitución de recursos verificable, junto con compilación, preparación de datos y empaquetado reproducibles. Continuar desde el código y evidencia actuales en C:\Fate Soldiers 3 y los originales en C:\DW3; conservar historia y trabajo útil. Corregir divergencias y regresiones con pruebas de alcance adecuado, sin declarar ausencia absoluta de errores. Finalizar únicamente cuando todos los criterios de aceptación del port nativo y de la integración completa tengan evidencia reproducible de extremo a extremo. Trabajar autónomamente dentro de los permisos efectivos y los presupuestos ya autorizados, sin reiniciar contadores ni ampliar límites.

## Punto de partida verificado

- Ejecutable de desarrollo actual: `fate_game.exe`; el nombre de entrega será
  `DW3_Remastered.exe` cuando el empaquetado real esté preparado.
- Ciclo004: compilación Release aprobada; proceso detenido en `0x0019A6C4`,
  integridad de entradas MATCH. MODLOAD7/15 versión0x106 siguen sin implementar.
- Recuperaciones de cadena/caché y consulta del evento CDVD verificadas mediante
  contratos Debug/Release y ejecución nativa acotada. Esto no acredita el juego.
- SetupHeap coincide en argumentos/retorno con los checkpoints de referencia.
  El VFS tiene pruebas de recursos/sectores; la integración jugable sigue abierta.
- Ninguno de los ocho criterios finales está cerrado. No hay título ni batalla
  completa demostrados. Publicación de código anterior: `1981eed1c6199d826b6b22bc12b151fa6e2dedec`.

## Próximos hitos y evidencia requerida

1. **Arranque nativo real:** recuperar19A6C4 y MODLOAD7/15 desde los originales;
   completar carga/inicialización de módulos y subsistemas con ABI, resultados
   y propiedad de recursos correctos. Identificar los argumentos y archivos
   solicitados realmente; conservar fallos y comparar trazas antes/después.
2. **Título y menús:** conectar presentación nativa y entrada al bucle real;
   verificar imagen original, navegación, selección, audio y salida limpia.
3. **Primera batalla completa:** carga de terreno/personajes, IA, combate,
   animación, colisiones, objetivos y resultados; comparar entradas deterministas
   y estados/imagen/audio con referencias independientes.
4. **DW3 + XL completos:** inventario exhaustivo, VFS dual y tablas unificadas;
   pruebas de alcance y finalización por modo, mapa, lado y transición, sin
   solicitudes de disco. Conservar diferencias legítimas de cada versión.
5. **Persistencia y modding:** progreso, desbloqueos, ajustes y guardados después
   de reiniciar; documentar formatos/precedencia y demostrar al menos un cambio
   de configuración y un reemplazo de recurso reversibles en el port real.
6. **Entrega:** compilación reproducible, preparación de /data/, paquete Windows
   x64 y pruebas en una instalación limpia sin PCSX2. Verificar dependencias y
   procesos, sesiones completas prolongadas, regresiones y diagnósticos de datos
   ausentes. Las mejoras de remasterización no sustituyen la fidelidad base.

## Reglas de aceptación

Se conservan íntegros los ocho criterios de COMPLETE_REMASTERED_PLAN.md.
Los requisitos nativos y de modding de este documento son obligatorios y se
verifican dentro de esos criterios; no se reduce el alcance a una demo o al boot.
PCSX2, las capturas y los modelos auxiliares ayudan a comprobar el desarrollo;
ninguno acredita por sí solo un criterio ni forma un requisito de ejecución del
producto. Un porcentaje de fases no representa porcentaje del juego terminado.

Una función oficial de XL se acredita con el inventario de las versiones
suministradas. Cualquier modo solicitado que no pertenezca a ellas se registra
como requisito adicional; no se presenta como contenido original ya existente.

Conservar presupuestos y límites más estrictos, los originales, la procedencia,
respuestas rechazadas y resultados fallidos. No sustituir trabajo útil ni
recrear un pipeline desde cero sin evidencia de que sea necesario.

## Referencias de estado

- `evidence/native_repair_20261005.json` (resumen público; evidencias originales conservadas localmente)
- `docs/NATIVE_REPAIR_20261005.md`
- `docs/NATIVE_PIPELINE_20261005.md`
- `docs/COPILOT_PIPELINE.md`
