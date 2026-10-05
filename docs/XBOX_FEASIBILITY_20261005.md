# Xbox como base alternativa — evaluación 024

La versión Xbox merece una prueba acotada para DW3 y una comparación de recursos
gráficos. La evidencia actual no demuestra que migrar el producto completo
DW3 + DW3XL reduzca el trabajo restante. No se ha cambiado la base, creado un
port Xbox ni sustituido código, originales o evidencias anteriores.

## Evidencia local

Se inspeccionó el XBE extraído conservado entre los originales:

- Tamaño: 2.564.096 bytes; SHA-256
  `1ae295810cff65688997b8e03e674e09e48af009760e275e7f876bc1f6155379`.
- Certificado: `DynastyWarriors3`, título `4B4F0003`; base `00010000`;
  entrada retail decodificada `000EFCCE`; 14 secciones con límites comprobados.
- Tabla de bibliotecas: `XAPILIB`, `D3D8`, `D3DX8`, `XGRAPHC`, `DSOUND`,
  `XBOXKRNL`, `WMVDEC`, `XMV` y `LIBCMT`, versión 1.0.4721.
- Hay inventarios históricos x86 de 32 bits, vídeos `.xmv`, un archivo
  `linkdataUS.bns` y catálogos TIM2. Estos catálogos no demuestran que cada
  textura sea mejor ni que sus identificadores coincidan con PS2.

Resultado bruto: `artifacts/native_pipeline_20261005/xbox_feasibility_024/xbe-header-001.json`.
La inspección de cabeceras identifica componentes; no verifica ejecución ni el
formato completo. No se ha medido la resolución interna de Xbox ni comparado
modelos, texturas o capturas equivalentes entre las dos versiones.

## Comparación para el objetivo nativo

| Aspecto | Base PS2 actual | Base Xbox propuesta |
| --- | --- | --- |
| CPU | R5900 y runtime ya modificado, con comparaciones originales parciales | x86 de 32 bits; requiere resolver traducción/ABI para el ejecutable x64 |
| Gráficos | GIF/GS, VIF/VU y semántica propia de PS2 | Bibliotecas Xbox D3D8 y GPU NV2A; requiere adaptar llamadas, recursos y sincronización |
| Sonido y vídeos | Ruta IOP/SPU2 y vídeos PS2 | DSOUND, WMVDEC y XMV identificados; sin backend nativo verificado |
| Xtreme Legends | Ejecutable original y referencias de PS2 disponibles | No hubo edición original Xbox de DW3XL; hay que portar y verificar su lógica y datos |
| Evidencia en este proyecto | Build nativo y cuatro intervalos originales comparados; sin título | Inspección estática y análisis históricos; sin ejecución nativa Xbox acreditada |

La cercanía x86/Direct3D es una ventaja técnica potencial, pero un XBE no es un
ejecutable Windows x64 ni usa automáticamente Direct3D 11/12. La ruta Xbox evita
los subsistemas PS2 para el juego base y añade otro conjunto de adaptaciones.
Las diferencias de XL incluyen comportamiento, modos, armas y guardados, además
de recursos; no basta copiar sus archivos al VFS Xbox.

La resolución del port puede ampliarse con cualquiera de las bases al adaptar
el renderer. Conservar lógica PS2 no obliga a conservar su salida de vídeo.
Mejoras de texturas, modelos, distancia de dibujo y presentación se deben
identificar y comprobar por separado, especialmente en contenido exclusivo XL.

## Fuentes revisadas y límites

- [GameSpot, reseña original de Xbox](https://www.gamespot.com/reviews/dynasty-warriors-3-review/1900-2896895/):
  documenta mejoras limitadas, nuevos trajes/dificultades y más datos guardados.
  No prueba una resolución interna concreta ni un incremento general de texturas.
- [Ficha de DW3 y DW3XL](https://en.wikipedia.org/wiki/Dynasty_Warriors_3):
  distingue los lanzamientos originales Xbox/PS2 del juego base y PS2 de XL.
  Se usa solo para el contexto de lanzamiento; no valida implementación.
- [Cxbx-Reloaded](https://github.com/Cxbx-Reloaded/Cxbx-Reloaded):
  su README describe un emulador y una compilación `-A Win32`, con renderer
  Direct3D 9.0c. Exigir Windows x64 no significa que entregue un port de juego x64.
- [Compatibilidad de DW3 en xemu](https://xemu.app/titles/4b4f0003/):
  el reporte visible es `Starts`, xemu 0.8.112, del 8 de noviembre de 2025,
  con problemas de rendimiento y de escalado de texto. Es un reporte comunitario
  antiguo y específico; no demuestra el resultado actual de un port nativo ni
  fue reproducido localmente. Su hash de cabeceras difiere del XBE local.

Las respuestas de Agent Reach, incluidos el timeout de xboxdevwiki y los
resultados útiles, se conservan en `xbox_feasibility_024`. El README consultado
usa una URL de rama móvil; se conserva el contenido y su hash, no se presenta
como una revisión fijada para incorporar código. No se descargó ni integró un
emulador adicional. No se modificaron presupuestos ni se invocaron modelos cloud.

## Decisión y próxima prueba

Conservar el pipeline PS2 mientras se evalúa Xbox. La recomendación se basa en
las dependencias restantes y el alcance XL, no solo en el trabajo ya invertido.
Xbox puede aportar recursos y referencias aunque no sea la base de ejecución.

Antes de una migración total, un prototipo separado debe demostrar:

1. Una ruta de ejecución del XBE hasta su inicialización gráfica y límites HLE
   identificados; mostrar un vídeo mediante un reproductor aislado no cuenta.
2. Título y entrada reales dentro del host nativo propuesto, con una estrategia
   comprobada para x64 y sin depender de ejecutar un emulador externo.
3. Correspondencia de una muestra de texturas/modelos/escenarios Xbox-PS2 y una
   función exclusiva de XL identificada con sus dependencias de código y datos.
4. Registro de trabajo realizado, dependencias pendientes y fallos comparables
   con el pipeline actual; ninguna estimación de velocidad se toma como prueba.

No se promete menor plazo ni ausencia de bugs. El estado de ejecución sigue en
ciclo 023, continuación EE `001B1004` después de WaitSema; MODLOAD7/SIO2MAN ya fue
superado. No hay título, vídeo ni batalla nativos verificados. Los ocho criterios
finales permanecen abiertos.
