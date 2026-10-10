# Dynasty Warriors 3 + Xtreme Legends para PC

Recompilación estática para reunir DW3 y DW3:XL en un juego nativo de Windows,
con los recursos de los volcados propios del usuario. V3.1 sigue en desarrollo:
no hay una versión jugable aprobada ni una release de producto.

El GS usa PCSX2 2.8.2 como biblioteca, con Vulkan como primera opción y D3D11/12
mediante la misma API. Reproduce una captura de batalla a 640×480. La comparación
estricta con PCSX2 software todavía falla y la conexión al juego nativo está
pendiente. El montaje conjunto conserva referencias entre reinicios; aún no
sustituye el estado de progreso ni MixJoy.

- [Recrear las pruebas verificadas](docs/REPRODUCE.md)
- [Estado V3.1 y resultados](docs/V3_1_STATUS.md)
- [Checkpoint V3 anterior](docs/V3_STATUS.md)
- [API gráfica](research/pcsx2_bridge/README.md)
- [Contenido combinado](research/combined_session/README.md)
- [Criterios del producto](docs/COMPLETE_REMASTERED_PLAN.md)

Herramientas usadas: PS2Recomp para generar C++ localmente; CMake y MSVC para
compilar; PCSX2 GS/GSRunner para reproducir capturas y obtener la referencia
software; Python para verificar contratos, identidades y diferencias de imagen.
El código GS derivado de PCSX2 es GPL-3.0-or-later.

El árbol actual excluye recursos, ejecutables, saves, capturas y C++ traducido
del juego. La limpieza de este checkpoint conserva los commits anteriores.
El [README anterior](docs/history/README_20261005.md) queda como historial.
