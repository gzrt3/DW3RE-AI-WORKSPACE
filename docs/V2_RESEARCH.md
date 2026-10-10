# Integración gráfica y contenido combinado

Fecha: 2026-10-09. Estado: investigación e implementación en curso; sin versión jugable aprobada.

## Herramientas y uso

| Herramienta | Uso y resultado comprobado |
| --- | --- |
| PS2Recomp + MSVC | CPU EE traducida y runtime nativo. M12 incorpora 1.083 alias de retorno; sigue detenida en una llamada directa a `0x001A6968` desde `0x00235F14`, retorno `0x00235F1C`. |
| CMake + CTest | Compilación y contratos aislados. No sustituyen una sesión de juego. |
| PCSX2 2.8.2 | Captura local de GS y observación XL→DW3→XL. Se conservan los 19 registros completos y la secuencia; no se observó la primera escritura causal del intercambio. |
| Direct3D 11 | Presentación de píxeles reales y lectura de vuelta verificada. El reproductor anterior usa rasterización CPU y restaura parcialmente el estado GS. |
| FINAL KIT 1.0 | Extractor, decodificadores GIF/PSS/ADPCM y contratos de pad. Ocho verificaciones Python y dos contratos C++ sintéticos; no certifican paridad de hardware. |
| Git + SHA-256 | Referencias separadas, identidades de entradas, preservación de baselines y publicación sin incorporar nuevas entradas privadas. |

## Backend moderno

Se adopta PCSX2 `v2.8.2`, revisión
`fd9d310ccbb6b8b62c976da8886a3c8fd3a10ff3`, para estudiar y reutilizar GS/VU/VIF/SPU2.
Los avisos y licencias originales se conservan. El backend debe recibir GIF antes
del rasterizador, conservar la memoria de registros privilegiados de 8 KiB y
restaurar íntegramente el estado GS. Los 19 registros de pantalla por sí solos
no contienen todo el estado de dibujo.

La referencia GSRunner enlaza el núcleo PCSX2 y reproduce dumps; no es todavía
la biblioteca aislada del port. Su modo dump no ejecuta instrucciones EE del
juego. La integración nativa debe evitar el intérprete/recompilador EE de PCSX2
y comprobar transferencia, VSync, FIFO y estado frente a esa referencia.

## Un solo juego

El objetivo es un único ejecutable y un catálogo instalado con DW3 y XL.
Los dos dumps son entradas de instalación; la ejecución no debe solicitar un
intercambio de discos. La procedencia de cada recurso se conserva internamente.
Un RID igual o un nombre igual no autorizan sustituir bytes de otra edición.

El VFS existente monta ambas ediciones y mantiene los sectores Base al consultar
XL. Persistencia y conexión completa al runtime siguen pendientes: algunos
accesos CDROM/IOP aún usan una sola raíz. Los sectores sintéticos se reasignan
por orden de consulta y no deben guardarse entre sesiones. El estado de PC debe
persistir identidades y claves de recursos, después verificar y resolverlas al
arrancar. El contenido instalado y el progreso/desbloqueos son estados distintos.

La secuencia de intercambio demuestra cambios de medio y carga de datos Base.
No demuestra aún que MixJoy sea solamente una comprobación o caché. Sustituir
su función exige observar entradas, salidas, estado retenido y consumidores.
No se introducirán retornos exitosos o flags guest inventados.

## Condición de aprobación

Backend moderno conectado al productor GIF nativo; apariencia original
contrastada por eventos equivalentes; controles, audio, vídeo y guardado reales;
contenido DW3/XL disponible tras reiniciar sin swap; una batalla completa y
las ocho compuertas del proyecto demostradas. No hay aprobación de V2.0 jugable.

## Fuente y distribución

PCSX2 conserva su licencia GPL-3.0-or-later. La licencia del repositorio y los
avisos de terceros permanecen. Antes de distribuir binarios derivados se deben
proporcionar las fuentes correspondientes y las instrucciones de compilación.
Los dumps, BIOS, recursos, capturas crudas, guardados y cuerpos guest privados
no se incorporan en este incremento. No se reescribe el historial existente.
