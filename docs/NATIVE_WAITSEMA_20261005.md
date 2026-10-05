# Arranque y primeros logos — ciclo 025

La prioridad indicada por el usuario es completar el arranque nativo y mostrar
los primeros logos originales, paso a paso. Se conserva el objetivo completo;
la alternativa Xbox y las mejoras posteriores no desplazan este hito.

El build completo Release pasa. La continuación ausente `001B1004` ya está
implementada y el ejecutable avanza hasta el enlace RPC `80000400`, servicio de
tarjeta de memoria. Allí recibe `server=0`. El probe de 20 segundos terminó por
timeout con entradas MATCH. Las observaciones nativas de 20 y 60 segundos
terminaron por plazo con 1.026 y 3.310 observaciones y cero presentaciones.
Computer Use verificó la ventana nativa negra en la última ejecución.
No hay primer logo, vídeo, título ni batalla nativos.

## Reparación verificada

Se recuperaron las 85 palabras originales de `001B1004..001B1158`, con 11 PCs
registrados. BGEZ/BGEZL usan el signo de low64 y los accesos a memoria conservan
el estado de excepción antes de retornar. Las llamadas externas entregan el
control al scheduler; los bucles mantienen sus yields y resultados originales.

Debug y Release pasan, por configuración, 580 comparaciones con un decodificador
local de opcodes originales, 24 casos de excepción/anulación, 85 guardas, un
conflicto de propietario y tres yields. Ese oráculo local no es PCSX2.

Dos pares de checkpoints reales de PCSX2 se compararon con el componente nativo
en ambas configuraciones: `1B1004→1A7068` y `1B100C→1A76D8`. En los cuatro runs
coinciden los 32 GPR128, diez campos enteros/control y los 32 MB de RAM. Son
intervalos hasta la entrada de otra función: no comparan sus callees, scheduler,
timing, IOP, FPU/VU, imagen, audio ni gameplay. También pasan cinco pruebas del
comparador y quince del probe. El build completo fue incremental, no limpio.

## Siguiente obstáculo antes del primer logo

El original retorna de BindRpc en `1B1058` con v0=0 y server `0007F448` en el
cliente de RAM `00376200`. El host recibe server=0. Sus registros muestran la
entrada y residencia de SIO2MAN y MODMSIN; las demás cargas no muestran entrada.
También se registra una invocación ausente en `00234400`.

1. Medir filename, resultado de MODLOAD7, resultado de entrada y fallo exacto
   de archivo/enlace. Revisar el epílogo original `234400` y su propietario.
2. Superar esa inicialización y capturar la primera solicitud real de vídeo.
   `MOVIE/KOEILOGO.PSS` y `MOVIE/OMEGA.PSS` ya tienen identidades verificadas en
   `evidence/boot_movie_candidates_20261005.json`; sus nombres no acreditan orden.
3. Seguir esos bytes por VFS, demux/decodificación y presentación nativa;
   comprobar primer fotograma, reproducción, audio y transición con el original.
   Un reproductor separado o una secuencia manual no acredita el boot del juego.

Evidencia local: `artifacts/native_pipeline_20261005/waitsema_resume_025/`.
Resumen: `evidence/native_waitsema_20261005.json`. Las capturas reales nuevas
permanecen en la sesión de referencia de `color_return_023`. Se preservan los
intentos con PC incorrecto y la primera ventana que expiró antes del screenshot.
No hubo llamadas cloud nuevas. Los ocho criterios finales siguen abiertos;
los cambios permanecen sin commit.
