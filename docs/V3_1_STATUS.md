# Estabilización V3.1 — 2026-10-10

Veredicto **PARTIAL**. El candidato nativo supera 0x00237014 en Debug y en dos
arranques Release. La nueva barrera es una llamada indirecta emitida en
0x001A73C0 hacia 0x00235CC0. No se ha generado un frame desde el runtime nativo.
Los ocho criterios de producto continúan abiertos.

## Arranque y productor

Se integró en un candidato privado aislado el propietario completo
0x00236FE0..0x00237020 y todas sus entradas producidas: 236FE0, 236FF8, 237008
y 237014. El registro comprueba la identidad de las 64 bytes originales y los
límites de la tabla, y conserva sus entradas anteriores para revertir un fallo.
No se editó el cuerpo traducido ni se forzó PC, RA, VSync o paquetes gráficos.

La inspección local identifica 16 palabras originales: 14 anotaciones coinciden
con el ELF; las dos omitidas son NOP. Los tres resumes tienen registro y no
son delay slots. Esto verifica cobertura e identidad, no paridad R5900 completa.
El emisor actual ya genera esas reentradas; la ausencia en el corpus integrado
no se presenta como un nuevo defecto demostrado del emisor.

Release: build PASS; probes 2,407 s y 4,984 s. Debug: build PASS; probe 28,469 s.
Los tres probes terminan con PROCESS_FAILED/4294967295, input MATCH y el mismo
primer destino ausente. No se convierte ese resultado en boot completo.

La nueva dirección no pertenece a ningún propietario del mapa descubierto.
Está en el hueco 235CBC..235CD8, siete palabras, cuatro no nulas. El PC emisor
original contiene una llamada indirecta. Su límite de propietario seguro y
semántica siguen pendientes. La recurrencia exige cerrar la cobertura del
productor y verificar los targets alcanzados; no otra cadena de adapters por
dirección. No se registró 235CC0.

El candidato importa objetos y bibliotecas M6/M7/M11.1. Falta reconstrucción
íntegra de sus productores y el sweep semántico del emisor. Una compilación
incremental no resuelve ese límite. Se conservaron fallos de configuración SDK
y de enlace antes de fijar explícitamente el runtime histórico.

## Gráficos

Vulkan directo coincide pixel por pixel con GSRunner oficial Vulkan en los
cuatro campos del segundo pase, Maximum y 1x, con la captura congelada. No
demuestra identidad con hardware PS2 ni resuelve el fallo frente a software.

El GSRunner oficial desactiva snapshots finales al activar dumps de draws.
Se construyó un ejecutable diagnóstico separado, derivado del Main.cpp público
fijado, que conserva esos snapshots. Las fuentes upstream, el GS y los binarios
oficiales permanecen intactos. Su generador registra hashes y conserva GPL.

Dos corridas diagnósticas Vulkan/software conservan exactamente sus cuatro
imágenes finales respecto a las referencias previas. Los primeros 15 contextos
GS coinciden. El draw 1 coincide antes y después. El draw 2 coincide antes y
difiere después en RGB, en ambas corridas: la primera divergencia observada.

Las salidas SW guardan un rectángulo desde (0,0); las HW guardan el target
completo. El comparador diagnóstico verifica contexto, draw, frame, formato
C_32, misma base de FRAME/backing, 1x y fuentes de coordenadas fijadas antes de
comparar el mismo rectángulo lógico. No recorta cuadros finales ni cambia
tolerancias. Alpha no fue capturada por este diagnóstico y sigue pendiente.

Una comparación exploratoria de las imágenes de textura del draw 2 también
encuentra diferencias; aún falta probar todos sus detalles de representación
antes de atribuir causalidad. Textura, CLUT, rasterizado y readback siguen en
investigación. Clasificación del defecto gráfico: **UNKNOWN**, abierta.

## Corrección del comparador y regresiones

Se reprodujeron cuatro aceptaciones indebidas: renderer desconocido, software
en el rol directo, mezcla Basic y mezcla ausente. La validación ahora las
rechaza y permite la comparación diagnóstica entre el mismo backend oficial y
directo. Siete tests de pairing PASS; dos tests de coordenadas PASS, incluidos
cuatro contraejemplos. Ocho grupos CTest PASS en Debug y Release.

Los 31 archivos FINAL KIT, las dos evidencias históricas, M12 Release y sus
fuentes GS conservan sus identidades. Los 19 registros y XL→DW3→XL permanecen
intactos. No se observaron nuevos consumidores ni la primera escritura causal
de MixJoy. Integración EE→GS, menú, batalla, audio, saves y sesión larga:
**NOT RUN** en esta misión.

## Referencias revisadas

Se estudiaron los flujos [PCSX2](https://github.com/re-rac/rerac/blob/main/docs/workflows/pcsx2.md),
[tests](https://github.com/re-rac/rerac/blob/main/docs/workflows/testing.md),
[trace](https://github.com/re-rac/rerac/tree/main/tools/trace) y
[fidelidad](https://github.com/re-rac/rerac/blob/main/docs/plan/hardware_fidelity_layers.md)
de ReRAC: separación de material personal y fixtures numéricos, regresiones
que no reescriben su referencia y clasificación explícita de diferencias.
Su licencia declarada es ISC. No se copió código ni se adoptaron sus
tolerancias, direcciones, formatos o arquitectura Bevy.

ICO PC se revisó documentalmente tras la referencia del usuario. Su
[build](https://github.com/nathanialf/ico-pc/blob/main/docs/BUILDING.md) compila
fuentes de la descompilación con sustitutos de plataforma y backends Vulkan/
D3D12. No se ejecutó, importó ni adoptó su código. Su documentación es una
referencia para examinar límites de hardware, no prueba de DW3.

La evidencia sanitizada está en `docs/evidence/V3_1_CHECKPOINT.json`. No hay
release ni autorización de producto por CI. Las siguientes pruebas críticas
son cobertura/semántica del target alcanzado y origen de la diferencia del
draw 2; la conexión del GS depende de esos contratos.
