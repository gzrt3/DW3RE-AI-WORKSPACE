# Ciclo 029: VBLANK original y continuación de PAD

El ejecutable nativo supera la barrera `vblank:8`. El módulo VBLANK original
ejecuta su inicialización y administra las listas de callbacks y los eventos;
el runtime entrega las fases IRQ0/11. Native001 completa nuevas llamadas PAD
y se detiene en la entrada EE todavía ausente `0x001AE7B0`, con RA `0x170C8C`.
Build Release PASS, integridad de entradas MATCH, salida 4294967295. No hay
logo, vídeo ni título acreditado. Los ocho criterios finales siguen abiertos.

El hito que mantiene abierta la sesión de gráficos es visualizar los vídeos
iniciales originales mediante el arranque del juego. Audio sigue después.

## Implementación

- VBLANK deja de instalarse como tabla HLE. Se ejecuta la imagen identificada
  por SHA256 `5181693327dfd6ee0be8e2331a287109098e26253a4788a5d121f1fd73f1e4ce`,
  de 3465 bytes. Su entrada crea un evento, 16 nodos y dos callbacks internos,
  y registra/habilita sus manejadores de inicio y fin con el GP del módulo.
- El reloj IOP entrega las fases durante ejecución e inactividad. Los bits
  pendientes permanecen mientras la interrupción está enmascarada y se consumen
  al entregarla. La cadencia NTSC aproximada existente permanece; esto no
  demuestra precisión temporal de hardware.
- QueryIntrContext observa un contexto IRQ con duración delimitada a la
  llamada. Los callbacks originales rechazan Register/Release desde IRQ con
  -100. El GP corresponde al dispatcher original, no al último registrante.
- DMA conserva eventos que dejan de ser elegibles porque un callback anterior
  deshabilitó interrupciones. Se comprueba y consume cada evento por separado.
- Se recuperan 146 words EE: retorno 1ADF60, hojas 1711E0,171130 y170D00.
  Permanecen explícitos anchos, aliases, delay slots y fallos de memoria.

## Evidencia

Directorio local: `artifacts/native_pipeline_20261005/vblank_original_029`.
Contratos PAD: `artifacts/native_pipeline_20261005/pad_boot_027/data-recovery-001`.

La prueba previa `before-003.log` demuestra inicialización original correcta
pero contador de IRQ detenido. `final-debug-001.log` y `final-release-001.log`
pasan siete grupos: inicialización/listas, fases en idle, prioridades y
capacidad, argumento/GP/contexto/lifetime, máscaras, wait sobre el hilo dueño
y preservación de DMA. El probe compila con /W4 /WX. Son ejecución original
en el núcleo IOP local con llamadores de prueba, no lockstep PCSX2 independiente.

Cuatro regresiones IOP Release pasan: import barrier, call completion,
continuation y MODLOAD. Quince tests Python del observador pasan. No se
declaran resueltos los tres fallos generales IOP históricos ni el gating
preexistente de callbacks TIMRMAN durante CpuSuspendIntr.

PAD Debug PASS y Release PASS. La repetición Release en `contracts-003` verifica
hashes estables de bibliotecas antes y después: el intento anterior coincidió
con una construcción del runtime y se conserva como provisional. Se comparan
GPR128/RAM completa con el decoder local de words originales; servicios externos
son fixtures. Se conservan también el fallo de ruta del runner, el candidato
bruto y las correcciones de expectativas del probe VBLANK.

La identidad del VBLANK seleccionado coincide con el manifest. La comprobación
ROMDIR encontró que no está dentro de IOPRP253.IMG; este ciclo no establece su
procedencia de bootstrap y no lo atribuye a esa imagen.

Computer Use inspeccionó el depurador de referencia existente; no obtuvo un
nuevo checkpoint ni una captura de vídeo nativo. Native001 terminó en la nueva
entrada ausente antes de una observación visual útil. La captura diagnóstica
Direct3D del ciclo028 conserva su alcance de prueba de transporte gráfico.

## Continuación

Recuperar 1AE7B0..1AE8E8 y su selector de buffers 1AE2A0..1AE300, conservando
la llamada real a 1A5118 para coherencia. Verificar estados, modos e índices de
PAD antes del siguiente probe. Después seguir activación GS y solicitudes
reales de los vídeos; no reproducir una secuencia host que el juego no pidió.

Automatizaciones generales siguen pausadas. No se hicieron llamadas cloud ni
cambios de presupuesto. El CI del checkpoint gráfico f4bb9e3 terminó SUCCESS
en el run 37291630196. El resumen de este ciclo está en
`evidence/native_vblank_20261005.json`; su publicación y respaldo requieren
confirmación por los registros de Git y verification.json correspondientes.
