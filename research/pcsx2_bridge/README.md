# GS moderno mediante API directa

Biblioteca de investigación para Vulkan y Direct3D 11/12 basada en PCSX2 2.8.2. Usa su
parser GIF, rasterizador hardware, transferencias, estado completo y snapshots.
El generador conserva los avisos GPL originales del Host derivado de GSRunner y
elimina su entrada de CPU, `wmain` y despacho MTGS. La VM permanece apagada.

La ABI es 2. El propietario llama a toda la API desde un solo hilo. `open` recibe directorios
de recursos públicos y escritura separados; `close` debe ejecutarse antes de
descargar la DLL. No hay trabajo de cierre dentro de DllMain. La ABI devuelve
errores explícitos y no cruza objetos C++ entre módulos. `gif_ordered`
recibe GIF previamente arbitrado: no reemplaza DMA/VIF ni el arbitraje nativo.
Vulkan se selecciona con 0; Direct3D 11 con 11 y Direct3D 12 con 12. La mezcla
usa Maximum a resolución interna 1x para conservar la aritmética GS.

Con MSVC 2022, CMake y Python 3.12, obtener PCSX2 y comprobar la revisión:

```powershell
git clone --branch v2.8.2 --depth 1 https://github.com/PCSX2/pcsx2.git <pcsx2-source>
git -C <pcsx2-source> rev-parse HEAD
cmake -S <pcsx2-source> -B <build> -G "Visual Studio 17 2022" -A x64 -DENABLE_QT_UI=OFF -DENABLE_GSRUNNER=ON -DENABLE_TESTS=OFF -DCMAKE_PREFIX_PATH=<pcsx2-dependencies>/deps -DCMAKE_PROJECT_Pcsx2_INCLUDE=<repository>/research/pcsx2_bridge/inject.cmake
cmake --build <build> --config Release --target dw3_gs_probe --parallel 4
```

La revisión esperada está en `third_party/pcsx2-v2.json`. Las dependencias Windows
oficiales deben comprobarse contra el SHA-256 de ese archivo. CMake no descarga
datos de juego. Colocar sus DLL de dependencias junto a los ejecutables locales.

```powershell
<build>/Release/dw3_gs_probe.exe <pcsx2-source>/bin/resources <directorio-nuevo> 11
<build>/Release/dw3_gs_probe.exe <pcsx2-source>/bin/resources <otro-directorio-nuevo> 12 <captura-local-descomprimida.gs>
<build>/Release/dw3_gs_probe.exe <pcsx2-source>/bin/resources <directorio-comparacion-nuevo> 12 <captura-local-descomprimida.gs> 2
<build>/Release/dw3_gs_contracts.exe <pcsx2-source>/bin/resources <directorio-contratos-nuevo> 12
```

Sin captura, el probe dibuja un sprite GIF sintético y comprueba una imagen con
color y un Save/Load GS. Con captura, restaura los 8 KiB de registros y el freeze
v9 de 4.194.813 bytes, procesa eventos en orden y exporta campos. Esto no incluye
las cachés de render targets ni la historia de composición/deinterlace de la GPU.
El replay acepta únicamente
el flujo ordenado de ruta 3 presente en las capturas locales auditadas. Las
imágenes y estados permanecen fuera de Git. No es todavía el backend conectado
a `fate_game.exe`, ni acredita contenido combinado jugable.

Con dos pases se carga el freeze una sola vez y se repiten únicamente los eventos,
como GSRunner. Los nombres `loop_1_field_0..3` identifican el segundo pase; no se
sustituyen los campos ausentes del primero. La captura de batalla auditada tiene
18.651 transferencias por pase, cuatro VSync y cero discrepancias entre el campo
del paquete y CSR. Su primer campo frío no tiene salida GS; la causa precisa no
se ha instrumentado. Un fallo de descarga GPU o escritura sigue siendo un error.

La comparación usa GSRunner oficial con `-loop 2 -upscale 1 -ini <archivo>` y
`ScreenshotSize=1` bajo `[EmuCore/GS]`. Con último evento VSync, sus PNG
`frame00001..4` corresponden a `loop_1_field_0..3`. `compare_frames.py` compara
esas imágenes sin escalar, recortar, buscar otra fase ni reemplazar un campo:

```powershell
python compare_frames.py <png-reference-directory> <direct-ppm-directory> <new-report.json> --reference-run <reference-result.json> --bridge-run <bridge-result.json>
```

En la prueba histórica con mezcla Basic, los cuatro campos DX11 y DX12
coincidieron exactamente con la referencia DX11 a 640×480. Esto verificó el adaptador con esas
capturas; ambos lados reutilizan el mismo GS y no son oráculos semánticos
independientes. No certifica todas las escenas, DMA/VIF/VU, IRQ ni juego nativo.
La ventana Direct3D 12 también se observó mediante Computer Use.

La prueba actual emplea GSRunner **software** y registra diferencias en los
tres backends, también con Maximum: no pasa igualdad exacta. Ver
[resultados actuales](../../docs/V3_STATUS.md) y
[receta reproducible](../../docs/REPRODUCE.md). `run_replay.py` valida el dump
antes de abrir el GS y produce manifests ligados a captura e imágenes. El
comparador rechaza manifests incompatibles, salidas ausentes o imágenes alteradas.

`snapshot` devuelve RGBA8, filas superiores primero, `stride=width*4`, con aspecto
original corregido y resolución interna. Devuelve 1 si aún no existe salida,
0 si copia la imagen y -1 ante error. Con capacidad insuficiente devuelve sus
dimensiones y no escribe píxeles. `error` pertenece al hilo y permanece válido
hasta la siguiente llamada de ese hilo. El resto devuelve 0 o -1.
`poll` atiende la ventana sin emitir VSync ni transferencias. El argumento final
opcional del probe mantiene la última imagen hasta 20.000 ms para observación.

Los contratos comprueban reapertura dos veces, rechazo de otro hilo, tamaños y
versiones inválidas, staging de entrada sin alineación, Save estable y
restauración del control de punto flotante del host. Los estados y capturas se
guardan fuera del repositorio. Los recursos públicos y dependencias PCSX2 se
necesitan junto al binario; esta carpeta contiene fuentes, no un producto.
