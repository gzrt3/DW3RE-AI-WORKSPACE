# XInput y un archivo de guardado para el port nativo

Diseño investigado el2026-10-05 UTC. No integrado todavía en el juego.
Objetivo: mandos Windows reales y `C:/Games/DW/saves/DW3_Complete.dw3save`
como archivo principal de partidas de DW3 + XL, conservando sus datos originales.
El bloqueo de arranque MODLOAD7/SIO2MAN sigue abierto.

## Estado del código que hay que conectar

| Componente | Hallazgo comprobado | Trabajo necesario |
| --- | --- | --- |
| `src/input/pad_bridge.cpp` | Devuelve siempre un mando simulado, ignora puerto/slot y anuncia éxito. | Sustituir la simulación por un proveedor con conexión, datos y errores reales. |
| `src/native_presenter.cpp` | Inicializa vídeo/eventos SDL, procesa cierre, pero no entrada; el registro lo declara. | Muestrear el proveedor en el punto de observación del ejecutor, incluso sin cuadros GS. |
| `src/sdl_window.cpp` | Tiene otro camino de entrada SDL, sin instancia en el main observado. | Evitar dos proveedores consumiendo el mismo mando. Reutilizar una interfaz común. |
| `runtime/ps2_pad.h` y `ps2_pad.cpp` | Backend concreto que usa raylib y siempre el mando0; ignora puerto/slot. | Inyectar el estado común para ambos jugadores y eliminar dependencia de otra ventana para leerlo. |
| `Kernel/Stubs/Pad.cpp` | Reconstruye32bytes desde botones/ejes, pierde presiones del backend y SetActDirect devuelve1 sin vibrar. | Conservar presión disponible, negociar modo y conectar vibración real. |
| `Kernel/Stubs/MemoryCard.cpp` | Backend por carpetas/FILE*, dos puertos, formato reiniciado a true, espacio libre constante y finalización inmediata. | Separar almacenamiento del protocolo; persistir metadatos y calcular espacio/resultados. |
| `src/unsupported_hle.cpp` | Las funciones libres hle_sceMc* detienen explícitamente; el viejo src/io/mc_bridge.cpp no se incluye en fate_game. | Identificar las llamadas originales antes de conectar el backend correcto. No confundir archivos existentes con integración activa. |

También hay una discrepancia concreta para revisar: Pad.cpp asigna las presiones
16/17/18/19 como L1/L2/R1/R2; el
[libpad público](https://github.com/ps2dev/ps2sdk/blob/ac92a9f657d2e531dd8f060250b07f2a5ac6dea5/ee/rpc/pad/include/libpad.h#L95)
declara L1/R1/L2/R2 y32bytes en total. El puente local sólo declara20bytes.
Comparar con el padRead original antes de acreditar un arreglo de ABI.

## Implementación recomendada de XInput

Usar XInput1.4 en Windows moderno con `xinput.h` y `Xinput.lib`, suministrados
por el SDK de Windows. `XInputGetState` lee y `XInputSetState` controla los dos
motores. En CMake, enlazar Xinput en el target del proveedor Windows; SDL puede
seguir ocupándose de la ventana y el teclado. No hace falta PCSX2 ni un servicio.

1. Crear un proveedor de host que entregue por jugador conexión, botones, ejes,
   gatillos y número de muestra. Separarlo del serializador del paquete PS2.
2. Asignar explícitamente índices XInput0..3 a los dos jugadores. Conservar la
   asignación durante desconexiones; no mover automáticamente al jugador2 al1.
3. Consultar los mandos conectados por actualización; espaciar búsquedas en
   índices vacíos. Error1167 significa desconectado; cualquier otro error se
   conserva como error. No reutilizar botones de una muestra fallida.
4. Aplicar zona muerta configurable; convertir ejes con centro128, extremos
   0/255 e inversión vertical. Hacer la negación de -32768 en un entero más
   ancho. Evitar dividir por cero al normalizar un stick centrado.
5. Serializar por bytes, con botones activos en0 y modo negociado según el
   original. Conservar los32bytes esperados y validar el rango completo de RAM.
   Las llamadas EE verificadas y la ruta IOP/SIO2 deben consumir la misma muestra.
6. Conectar actuadores con XInputSetState. Parar motores al cerrar/perder foco;
   liberar botones al perder foco según la política explícita del port.
7. Registrar muestra, puerto, PC y cuadro para repetición determinista de Start,
   menús y batalla. Reproducir una grabación no debe consultar el mando real.

| Xbox / XInput | DualShock2 |
| --- | --- |
| A / B / X / Y | Cruz / Círculo / Cuadrado / Triángulo |
| View/Back / Menu/Start | Select / Start |
| LB / RB | L1 / R1 |
| LT / RT | L2 / R2, con valores analógicos de gatillo |
| Pulsación de sticks | L3 / R3 |
| Cruceta y sticks | Cruceta y ejes correspondientes |

XInput no informa presión analógica de los botones frontales ni de LB/RB.
Usar0/255 para ellos es una política de compatibilidad que debe declararse;
no equivale a medir la presión de un DualShock2. Validar si DW3 usa esos valores.

Prueba real de host ejecutada con `tools/probe_xinput.py`: XInput1.4 disponible,
cuatro índices consultados una vez, los cuatro devolvieron1167/desconectado.
No se inyectaron botones ni se activó vibración. No demuestra entrada al juego.
Pruebas pendientes: dos mandos, conexión/desconexión, todos los botones,
extremos/zona muerta, presión serializada, vibración y Start en el juego original.

## Un archivo principal para las partidas

Recomendación para el HLE existente: **contenedor SQLite integrado estáticamente**,
con extensión `.dw3save`. El juego sigue leyendo/escribiendo sus nombres y bytes
originales mediante sceMc*/MCSERV; el backend los guarda dentro del contenedor.
No hace falta reinterpretar o inventar ahora la estructura interna de cada partida.

El ELF base contiene `/BASLUS-20277XXXXXXXX` y rutas icon.sys/musou.ico.
El ELF XL contiene tanto `BASLUS-20277XXXXXXXX` como `BASLUS-20617XXXXXXXX`.
Son cadenas originales con sufijo plantilla, no nombres finales verificados.
Esta evidencia favorece un espacio común de rutas; todavía falta observar
su construcción y uso. No separar por variante de modo que XL deje de ver DW3.

Modelo propuesto:

- Un registro de versión del contenedor y estado persistente por tarjeta lógica.
- Entradas identificadas por puerto/slot/ruta PS2 conservada sin pérdida, con
  tipo archivo/directorio, atributos, tiempos, tamaño y bytes BLOB.
- Ambos juegos comparten la tarjeta lógica0. Si el original necesita tarjeta1,
  tendrá su propio espacio lógico dentro del mismo archivo, sin aliasar0 y1.
- Descriptores abiertos y posiciones de lectura permanecen en memoria; leer,
  escribir parcialmente, seek, truncar, listar, renombrar y borrar conservan
  sus contratos. Capacidad, formato y errores no se inventan.
- Las operaciones mutadoras se confirman en transacciones. El resultado de
  sceMcSync se publica sólo al completar la operación y su persistencia requerida.
  Agrupar una secuencia completa de guardado exige primero identificar su frontera
  original; una transacción de base de datos no prueba ese protocolo del juego.
- Mantener un escritor de juego; un editor de mods usa exportación o el juego
  cerrado. Integridad del contenedor y hashes de payload se verifican por separado.

SQLite puede integrarse con su amalgamación C fijada por versión/hash; añadir
C al proyecto CMake si se compila sqlite3.c. Proponer rollback journal
`journal_mode=DELETE` y persistencia `synchronous=FULL` o más estricta tras
medir requisitos. **Un archivo principal al cerrar correctamente**: durante
escritura/recuperación puede existir un journal auxiliar. No desactivar el journal
para prometer un único archivo en todo instante; tampoco borrarlo tras un fallo.
La protección depende de las garantías del sistema de archivos y hardware.
Respaldos versionados quedan en el respaldo del proyecto, sin sobrescribir
partidas personales. Copiar el contenedor con el escritor detenido y cerrado,
o usar una API de respaldo consistente; no copiar sólo el archivo abierto.

Alternativa si la ruta real exige sectores: una imagen `.ps2` de tarjeta8MiB
con512bytes de datos +16de repuesto/ECC por página (8,650,752bytes). PCSX2
documenta en su fuente lectura, escritura NAND y borrado por bloques. Ambos
juegos pueden compartir la misma imagen lógica; no necesita un proceso PCSX2.
Sin embargo, conectarla al HLE por archivos requiere implementar/importar el
sistema de archivos PS2, y conectarla por SIO2 requiere su protocolo completo.
Por eso no es un reemplazo inmediato del backend por carpetas.

Antes de migrar partidas: importación a un contenedor NUEVO, conservación de
originales, comparación de cada payload y metadato, exportación reversible y
pruebas del juego: guardar, cerrar, reabrir, cargar, compartir progresión
DW3/XL. Incluir falta de espacio, corrupción, corte del proceso durante escritura,
rollback y fallos de flush/commit. Guardar dos formatos juntos no unifica por sí
solo desbloqueos ni evita las comprobaciones de disco del contenido.

## Fuentes consultadas

- [Microsoft: guía XInput](https://learn.microsoft.com/en-us/windows/win32/xinput/getting-started-with-xinput)
  y [XInputGetState](https://learn.microsoft.com/en-us/windows/win32/api/xinput/nf-xinput-xinputgetstate):
  índices, errores, muestreo, zonas muertas, vibración y enlace con el SDK.
- [DirectXTK GamePad](https://github.com/microsoft/DirectXTK/blob/74e9b3c3871280b3a8b9907f862c55a50ae392ef/Src/GamePad.cpp#L1346):
  implementación XInput con reintentos espaciados, normalización y vibración.
- [PS2SDK libpad](https://github.com/ps2dev/ps2sdk/blob/ac92a9f657d2e531dd8f060250b07f2a5ac6dea5/ee/rpc/pad/include/libpad.h):
  bits de botones, estados y distribución del paquete. Contrastar con el original.
- [SQLite como formato de aplicación](https://sqlite.org/appfileformat.html) y
  [transacciones atómicas](https://sqlite.org/atomiccommit.html): contenedor,
  BLOB, journal y límites de persistencia. Consultados con Computer Use.
- [PCSX2 MemoryCardFile](https://github.com/PCSX2/pcsx2/blob/144a19ba05fd1aa514f7228972f0c6260c61b4e8/pcsx2/SIO/Memcard/MemoryCardFile.cpp):
  referencia para la alternativa de tarjeta por sectores, con ECC y NAND.

No se integraron dependencias nuevas ni se migraron partidas durante esta
investigación. La siguiente implementación aislada es el proveedor XInput y
su contrato de serialización; la integración final mantiene el orden
MODLOAD7/SIO2MAN → vídeo original → Press Start → batalla/guardado.
