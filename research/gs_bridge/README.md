# Referencia de capturas GS

Esta herramienta recibe una captura local descomprimida y genera campos de
imagen. Conserva el orden de eventos de la captura. Usa el rasterizador CPU
existente y Direct3D 11 para presentar y comprobar los píxeles mediante readback.
El estado inicial de vértices y transferencias sigue sin restaurarse completamente.
No está conectada al juego nativo ni acredita una versión jugable.

```powershell
cmake -S research/gs_bridge -B out/gs_capture
cmake --build out/gs_capture --config Release
ctest --test-dir out/gs_capture -C Release --output-on-failure
out/gs_capture/Release/gs_replay.exe <captura.gs> <directorio-nuevo>
```

El backend PCSX2 posterior debe consumir GIF antes del rasterizador y usar su
restauración completa de estado. Ver `docs/V2_RESEARCH.md` y
`third_party/pcsx2-v2.json`. No se incluyen capturas, recursos o ejecutables del juego.
