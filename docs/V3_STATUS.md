# Consolidación V3 — 2026-10-09

V3.0 no está terminada. Los ocho criterios de producto siguen abiertos.

## Decisiones

Este repositorio es el árbol público canónico. M12 se conserva como referencia
privada. Los contratos host nuevos se compilan desde este árbol, sin importar
objetos M12. Se mantiene la autorización del usuario para reutilizar componentes
de PCSX2 bajo GPL; el componente actualmente enlazado es el GS. La ABI 2 expone
Vulkan como opción 0, D3D11 como 11 y D3D12 como 12.

## Resultados ejecutados

| Prueba | Antes | Después | Alcance |
|---|---|---|---|
| Handle: alterar LSN, tamaño, edición, ruta o fabricarlo | Cinco fallos: se aceptaban | Cinco rechazos correctos | Datos sintéticos |
| Repetir CTest | Carpeta fija impedía repetir | Fixtures nuevos por corrida | Contratos host |
| Un byte de VSync distinto de CSR | PASS con dos discrepancias | Rechazo, exit 1 | Copia local de captura real |
| Captura válida | Cuatro VSync, 18.651 transferencias | Conteos preservados | Ruta 3 ya arbitrada |
| Vulkan | No expuesto en ABI | Contratos y replay ejecutados | Cuatro salidas del segundo pase |
| Comparador | Precondiciones manuales | Comprueba runs, captura, orden e imágenes | Sin escalar ni sustituir campos |
| Conservación | Identidades fijadas | Kit, evidencias y baseline intactos | Hashes locales |
| Git | 14.272 paths guest generados indexados | Retirados del índice | Archivos locales e historial conservados |
| Probe Windows con archivo que no es PE | Prueba detenida hasta el límite de 30 s | Rechazo antes de lanzar; 15 pruebas pasan en 1,7 s | Herramienta host, sin cambios M12 |

La captura real mide 22.144.225 bytes; SHA-256
`421803f4f89eea899dde81cbbca864aa2f784cb40cb70bef3476c6699fe1d99f`.
Freeze v9: 4.194.813 bytes; cuatro actualizaciones de registros, cero FIFO.
Las dos inspecciones producen JSON idéntico. El primer campo del primer pase
no produce snapshot; su causa sigue sin determinarse. Se comparan los cuatro
campos del segundo pase, con esa selección declarada antes de comparar.

Maximum reduce las diferencias observadas frente a Basic, pero no las elimina
ni identifica por sí solo su causa. Frente a software, el error máximo por
canal observado es 90/255; la mayor media por canal es aproximadamente 0,526
para Vulkan y 0,513 para D3D. Los cuatro campos de cada backend fallan igualdad
exacta. Se conservan los resultados fallidos y no se amplía la tolerancia.

La referencia es el renderer software del GSRunner oficial fijado, con las
mismas entradas, dos pases y resolución original. Su rasterizado difiere de
Vulkan/D3D, pero comparte GS y lector de estados: no es una prueba completa de
equivalencia con hardware PS2.

Se comprobaron 31 archivos del kit y dos evidencias históricas. M12 Release y
sus tres fuentes GS siguen intactos. Se preservan los 19 registros GS y la
secuencia XL→DW3→XL. La primera escritura causal durante el swap sigue sin
observarse con todos los datos solicitados; la hipótesis de caché de MixJoy
no se convierte en un flag inventado.

## Criterios de producto

| Criterio | Estado |
|---|---|
| Identidad e inventario de ambas ediciones | OPEN |
| Boot, título y menú nativos | OPEN; último probe aislado llega a 0x00237014 |
| Batalla completa y comparación determinista | OPEN |
| Contenido combinado sin swap | OPEN |
| Modos, mapas, bandos y dificultades | OPEN |
| Gráficos, audio, vídeo y controles | OPEN; replay GS probado, conexión nativa pendiente |
| Progreso y saves | OPEN; sólo referencias de recursos probadas |
| Construcción limpia, instalación y sesión larga | OPEN |

La etapa 1 sigue PARTIAL por contratos de hardware pendientes y el cierre
incompleto de productores/dependencias del runtime histórico. La infraestructura
gráfica permite medir la etapa 2; su salida no se acepta con el fallo frente a
software. No se inicia integración del runtime como si esa salida hubiera pasado.

Próximo trabajo: localizar la primera divergencia GS hardware/software sin
cambiar freeze, transferencias ni orden. Instrumentar mezcla, textura y scanout
antes de atribuirles el error. Después validar el propietario completo de
0x00237014 y todas sus entradas interiores; el candidato generado todavía
carece de prueba integrada Debug/Release.

Los ocho grupos CTest pasan en Debug y Release. También pasan desde una
exportación pública con carpeta de compilación vacía (Release). La selección
de tooling heredada pasó seis suites; su séptima, el probe Windows, pasa tras
la corrección. Una exploración adicional de todas las pruebas Python alcanzó
el límite de 90 s y registró errores anteriores sin llegar al resumen; no se
presenta como una regresión completa aprobada. Anti-slop verifica las cinco
reglas fijadas; eso sólo prueba identidad de reglas, no juego ni coherencia
semántica por sí mismo.

El guardado de diagnósticos del probe se mantiene al rechazar entradas no PE;
el formato del encabezado sigue la
[especificación PE de Microsoft](https://learn.microsoft.com/en-us/windows/win32/debug/pe-format).
