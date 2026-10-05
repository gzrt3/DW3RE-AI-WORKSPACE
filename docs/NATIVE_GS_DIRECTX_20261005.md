# Reporte028: puente GS a Direct3D

La ruta de presentación GS → RGBA → textura SDL → Direct3D11/12 está verificada
con datos de prueba. Se observó la imagen por Computer Use y se compararon los
4096píxeles RGBA completos recuperados de la GPU. Esto acredita el transporte
gráfico probado, no los logos ni la equivalencia gráfica de DW3.

El arranque nativo con Direct3D11 todavía no produce una imagen: PMODE=0 mantiene
desactivados ambos circuitos de visualización GS. El código se bloquea durante
la inicialización PADMAN en RegisterVblankHandler (vblank0101,ordinal8). La nueva
medición dura20s, termina por plazo cooperativo con exit2,inputMATCH,1215
observaciones y cero presentaciones. No se forzó PMODE ni se sustituyó el boot
por una secuencia de vídeos. Los ocho criterios finales permanecen abiertos.

## Conexión utilizada

El árbitro GIF del runtime entrega paquetes a GS::processGIFPacket. GSCpuBackend
procesa el estado GS/VRAM y construye el frame; el observador del mismo ejecutor
lo obtiene y lo presenta con SDL. El archivo histórico src/gs_wrapper.cpp no es
el propietario de esa ruta. Su código incompleto no se usó como solución.

Auto ahora prefiere Direct3D11 en Windows. Se puede seleccionar explícitamente
`--renderer direct3d11`, `--renderer direct3d12` o `--renderer software`.
Una selección explícita fallida informa el error y no cambia silenciosamente
de backend. Auto conserva fallback documentado. VSync sigue opcional y no
cambia el reloj ni las interrupciones internas de PS2.

Vulkan no está integrado en este presentador. Direct3D11/12 presentan el frame
producido por el GS actual; no convierten automáticamente su rasterizador CPU
en un renderer GS completo por GPU. Texturas, VU, efectos y timing del juego
siguen requiriendo pruebas originales.

## Verificación

| Configuración | Resultado |
| --- | --- |
| Software automático/dummy, Debug y Release | 4contratos por configuración; selección explícita D3D11 imposible rechazada |
| Direct3D11 explícito, Debug y Release | 4contratos por configuración, readback RGBA idéntico |
| Direct3D12 explícito, Release | 4contratos, readback RGBA idéntico |
| Software explícito, Release | 4contratos |
| Auto en Windows, Release | 4contratos, eligió Direct3D11 |
| Build completo Release001 | PASS |
| Probe del juego native001 | PROCESS_FAILED/exit2 por plazo; PMODE0 y vblank:8 pendientes |

Los contratos prueban pantalla habilitada/deshabilitada, VSync on/off, canales,
filas/columnas, alfa opaco de salida con alfa VRAM variable, preservación de
memoria EE/IOP, registros, objetos del scheduler y avance VBLANK. La prueba
opcional de readback se ejecuta una vez y queda desactivada en el juego normal.
Se conserva la expectativa fallida inicial de64x32: el GS actual tiene un
fallback640x448 para dimensiones inferiores a64. La prueba final usa64x64;
ese comportamiento previo no se presenta como corregido.

GPT-6.1 Sol revisó los cambios mediante el agente gs_d3d_review, sin editar ni
certificar el resultado. No encontró defecto concreto; sus huecos de cobertura
de selección/alfa se añadieron y comprobaron. La imagen observada tiene el título
"Diagnostico GS/GPU - patron sintetico, no es el juego". La captura se conserva
en artifacts/native_pipeline_20261005/gs_presenter_028/computer-use-direct3d11.png.

## Pausa, preservación y siguiente etapa

La automatización principal permanece PAUSED. Computer Use comprobó
"DW3 - Revision del pipeline nativo" como Disabled. Los revisores anteriores
terminaron y no quedaron builds/probes anteriores activos. No se hicieron
llamadas Azure/AWS ni cambios de límites. Se preservaron originales y fuentes.
El respaldo027 está VERIFIED y requiere026/025/023; el028 debe comprobarse en
su verification.json final. Los snapshots no incluyen los binarios reconstruibles.

Por instrucción del usuario, publicar este checkpoint gráfico coherente en Git
y después enfocar el audio nativo. Para obtener logos reales sigue pendiente
vblank:8 y la posterior activación de PMODE por el juego; las reparaciones de
ese boot no se sustituyen con patrones diagnósticos ni retornos ficticios.

Resumen verificable: evidence/native_gs_directx_20261005.json.
