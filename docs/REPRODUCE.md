# Recrear las pruebas verificadas

Estas instrucciones recrean los componentes probados. El juego completo aún
no tiene una receta de instalación aprobada. Los contratos usan fixtures
sintéticos y no necesitan archivos de juego.

## Contratos host

Requisitos: Windows x64, Visual Studio 2022 con C++ y Windows SDK, CMake 3.24+
y Python 3.12. Comprobado con MSVC 19.44.35228, SDK 10.0.26100.0, CMake 4.4.3
y Python 3.12.14. En los comandos, `python` debe seleccionar esa instalación.

```powershell
git clone --depth 1 --single-branch --branch codex/v3-consolidation https://github.com/gzrt3/DW3RE-AI-WORKSPACE.git DW3-PC
cd DW3-PC
python scripts/check_public_tree.py
cmake -S research/combined_session -B out/contracts -G "Visual Studio 17 2022" -A x64
cmake --build out/contracts --config Release --parallel 4
ctest --test-dir out/contracts -C Release --output-on-failure
cmake --build out/contracts --config Debug --parallel 4
ctest --test-dir out/contracts -C Debug --output-on-failure
```

Si CMake selecciona otro Python, indicar su ejecutable con
`-DPython3_EXECUTABLE=C:/ruta/python.exe`. CTest conserva fixtures únicos en
`out/contracts/contract_evidence`; se puede repetir sin borrar resultados.
La CI ejecuta estos contratos en Debug y Release, sin acreditar juego completo.

## GS moderno

Usar PCSX2 v2.8.2, commit `fd9d310ccbb6b8b62c976da8886a3c8fd3a10ff3`.
Las dependencias oficiales Windows son el asset **619873001** de
[pcsx2-windows-dependencies](https://github.com/PCSX2/pcsx2-windows-dependencies/releases).
Consultar ese asset en la API pública de GitHub para obtener su descarga.
Verificar antes de extraer: 172.750.623 bytes y SHA-256
`a3133c7841e8fbdab6f4d1d5ad8efec31fb1ecda95ffed39f4d1f36bb7eb0007`.
La carpeta extraída debe contener `deps/include`, `deps/lib`, `deps/bin`.
El archivo se pudo inspeccionar localmente con 7-Zip 26.02. La descarga se obtiene
directamente del asset fijado, sin elegir una versión posterior:

```powershell
$v3Asset = Invoke-RestMethod 'https://api.github.com/repos/PCSX2/pcsx2-windows-dependencies/releases/assets/619873001'
$v3Archive = 'C:/DW3-tools/pcsx2-dependencies.7z'
New-Item -ItemType Directory -Path (Split-Path $v3Archive) -Force | Out-Null
if (Test-Path -LiteralPath $v3Archive) { throw 'Elegir un archivo de descarga nuevo' }
Invoke-WebRequest $v3Asset.browser_download_url -OutFile $v3Archive
if ((Get-Item $v3Archive).Length -ne 172750623 -or (Get-FileHash $v3Archive -Algorithm SHA256).Hash -ne 'a3133c7841e8fbdab6f4d1d5ad8efec31fb1ecda95ffed39f4d1f36bb7eb0007') { throw 'Dependencias distintas de la revisión fijada' }
& 'C:/Program Files/7-Zip/7z.exe' x $v3Archive '-oC:/DW3-tools/dependencies'
```

Establecer estas rutas absolutas según los directorios elegidos:

```powershell
$v3Source = 'C:/DW3-tools/pcsx2'
$v3Deps = 'C:/DW3-tools/dependencies'
$v3Build = 'C:/DW3-build/gs'
$v3Repo = (Get-Location).Path
git clone --branch v2.8.2 --depth 1 https://github.com/PCSX2/pcsx2.git $v3Source
git -C $v3Source rev-parse HEAD
cmake -S $v3Source -B $v3Build -G "Visual Studio 17 2022" -A x64 -DENABLE_QT_UI=OFF -DENABLE_GSRUNNER=ON -DENABLE_TESTS=OFF "-DCMAKE_PREFIX_PATH=$v3Deps/deps" "-DCMAKE_PROJECT_Pcsx2_INCLUDE=$v3Repo/research/pcsx2_bridge/inject.cmake"
cmake --build $v3Build --config Release --target dw3_gs_probe dw3_gs_contracts pcsx2-gsrunner --parallel 4
Copy-Item "$v3Deps/deps/bin/*.dll" "$v3Build/Release/"
& "$v3Build/Release/dw3_gs_contracts.exe" "$v3Source/bin/resources" 'C:/DW3-build/new-contract-run' 0
```

El shim comprueba la revisión y conserva los avisos GPL. Los recursos de PCSX2
son públicos; no se descarga BIOS ni material del juego. Las licencias del
bundle de terceros deben conservarse al redistribuirlo. Aún no se distribuye
un paquete de producto.

## Replay real y comparación

Se requiere una captura GS descomprimida obtenida localmente de tus propios
volcados. El validador acepta formato moderno v9 y ruta 3 ya arbitrada. La
comparación documentada exige cuatro VSync y último evento VSync. Otra captura
no hereda los resultados; los dumps e imágenes permanecen fuera de Git.

```powershell
$v3Dump = 'C:/DW3-private/battle.gs'
$v3VulkanRun = 'C:/DW3-build/new-vulkan-run'
$v3SwRun = 'C:/DW3-build/new-software-run'
python -m venv out/image-env
& out/image-env/Scripts/python.exe -I -m pip --isolated install --index-url https://pypi.org/simple --require-hashes -r research/pcsx2_bridge/requirements.txt
python research/pcsx2_bridge/run_replay.py --build $v3Build --pcsx2 $v3Source --dependencies $v3Deps --capture $v3Dump --output $v3VulkanRun --renderer vulkan
python research/pcsx2_bridge/run_replay.py --build $v3Build --pcsx2 $v3Source --dependencies $v3Deps --capture $v3Dump --output $v3SwRun --reference --renderer sw
& out/image-env/Scripts/python.exe research/pcsx2_bridge/compare_frames.py "$v3SwRun/frames" "$v3VulkanRun/render" 'C:/DW3-build/new-comparison.json' --reference-run "$v3SwRun/result.json" --bridge-run "$v3VulkanRun/result.json"
```

Usar `--renderer dx11` o `dx12` para los otros backends. Cada salida debe ser
una carpeta nueva. El reporte liga captura, ejecutable, DLL, logs e imágenes.
El comparador devuelve exit 1 ante diferencias. El fallo actual frente a
software se conserva como resultado; los campos fríos ausentes no se sustituyen.

La experiencia final requiere instalar ambos volcados una vez y conservar
progreso independiente del disco. Faltan el resolver compartido CDVD/IOP,
estado real de MixJoy, boot completo y pruebas de AV, input, saves y sesión larga.
