# Ciclo027: inicialización PAD antes de los logos

Prioridad: boot nativo y primeros logos originales. Los ocho criterios finales
siguen abiertos; no hay logo, vídeo, título ni batalla nativa acreditados.

Release003 compila. Native003 supera las continuaciones170B24,1ADE0C y1AEF98,
obtiene ambos servidores PAD y devuelve la versión403 recibida del IOP. Después
PADMAN solicita RegisterVblankHandler, ordinal8 de vblank0101, todavía sin
implementación. El servicio no completa el RPC. La observación nativa termina
por su plazo cooperativo40s, exit2, PROCESS_FAILED, inputMATCH,2416 observaciones
y cero presentaciones. Computer Use capturó la ventana nativa negra; el puntero
visible no es imagen del juego. Se conserva con native003.

## Reparaciones verificadas

- Recuperados116words del caller170B24..170CF4 y68words de InitPAD
  1ADDD0..1ADEE0 desde la traducción preservada y el ELF XL identificado.
  Se registran sus retornos de llamadas y destinos de yield antes del catálogo.
  JAL170BE4→170D00 y JAL1ADEC0→1ADEE0 conservan argumentos,RA y delay slot.
- SQ/LQ del primer bloque alinean a16bytes hacia abajo y usan el propietario
  de memoria. La semántica se contrastó con intérprete/recompilador de PCSX2
  commit236f67a82fd8a37b1e5c128228403fb7b89b3cd8; fuentes y hashes conservados.
  No se modificó el emisor global ni se corrigió su Load128 general.
- Load32,Load64 y Store32 del runtime conservan BadVAddr al señalar excepción.
  Un fallo previo demuestra que se perdía aunque EPC/Cause fueran correctos.
- Recuperado el retorno1AEF98..1AEFB4: siete words originales. BGEZL comprueba
  signed low64, anula LW si la rama no se toma y conserva upper64 al restaurar
  registros. Las cargas abortan inmediatamente si el propietario señala fallo.

## Pruebas y alcance

Contratos finales Debug/Release009 PASS por configuración:

- Caller:116guardas y1conflicto,432comparaciones GPR128/RAM completa,
  128casos de alineación SQ/LQ,24superposiciones con stack,16fallos de memoria.
- Dieciséis recorridos del caller con2541fronteras, reintentos y timeout de
  ambos puertos; los callees externos son fixtures.
- Init:68guardas y1conflicto,560comparaciones;8recorridos de versión con32
  fronteras y4fallos LW.
- Retorno de versión:7guardas y1conflicto,448comparaciones,12anulaciones y16
  fallos de carga, incluidos signo low32/low64 opuesto y delay-slot EPC/BD.

Estos contratos decodifican los words originales localmente. No equivalen a
lockstep PCSX2 ni certifican timing, controladores completos o gameplay.
Regresiones waitsema e IRQ recompiladas contra el runtime actualizado pasan
Debug/Release;15tests Python pasan. Las3regresiones IOP generales pendientes
de026 (emulator,imports,compatibility) no se repitieron ni se declaran resueltas.

Se conservan los intentos fallidos: formato de recuperación, expectativas
incorrectas de SQ desalineado, SQ/LQ del candidato bruto, BadVAddr perdido y
la expectativa incorrecta de excepción para02000000. Ese último acceso puede
ser espejo de RAM o devolver0 según dirección; no se alteró el runtime para
satisfacer la prueba. La prueba final usa direcciones desalineadas inequívocas.

## Evidencia y siguiente paso

Evidencia local: artifacts/native_pipeline_20261005/pad_boot_027.
Resumen público: evidence/native_pad_boot_20261005.json.
Native001 se detuvo1ADE0C; native002,1AEF98; ambos conservan inputMATCH.
La referencia PCSX2 aislada sigue pausada en00081FC0; no se obtuvo un nuevo
checkpoint original PAD. La observación de la referencia no es salida nativa.

Nueva barrera medida: vblank:8,version0101,PC120CF0,caller167F08,
a0=0,a1=10hex,a2=1651E8,a3=16D990. Verificar cola, prioridades, duplicados,
contexto,retorno y callbacks contra el VBLANK original antes de implementarlos.
Cuando el RPC termine, falta el retorno EE1ADF60..1ADF7C, siete words localizados
pero aún sin integrar. Después siguen los callees1711E0,171130 y170D00 del caller.
Seguir las solicitudes reales de MOVIE/KOEILOGO.PSS y MOVIE/OMEGA.PSS; sus nombres
no prueban orden ni alcanzabilidad. No usar mocks PAD ni reproducirlos por una
secuencia host inventada.

Se conservaron fuentes sin commit, originales, presupuestos y sesiones.
No hubo nuevas llamadas cloud. El respaldo027 sólo está verificado cuando su
verification.json final indica VERIFIED, con sus dependencias026/025/023.
