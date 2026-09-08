# PHASE 44B.22G — Qt 6.10 SDK Audit

## Verdict

- `QT_RESOLUTION = BLOCKED`
- `QT_INSTALLED = YES` — runtime only
- `QT_VERSION = 6.10.1` — confirmed from `Qt6Core.dll` in the local PCSX2 V2.3 installation
- `QT_ARCHITECTURE = x64` — confirmed by PE headers (`8664 machine`)
- `QT_COMPILER = UNKNOWN` — runtime DLL metadata does not identify the toolchain
- `QT6_CONFIG_PATH = NOT FOUND`
- `QT6_DIR = NOT SET`
- `QT_COMPATIBLE_WITH_MSVC2022 = UNKNOWN` — x64 runtime is present, but no development SDK/toolchain metadata was found
- `PCSX2_QT_REQUIREMENT = Qt 6.10`
- `INSTALLATION_REQUIRED = YES` — a development SDK is required; the runtime DLLs are insufficient
- `CMAKE_CONFIGURATION_AFTER_AUDIT = NOT_ATTEMPTED`
- `PCSX2_EXECUTABLE = NOT_CREATED`
- `RUNTIME_EXECUTED = NO`
- `INSTRUMENTATION_MODIFIED = NO`
- `PRODUCTION_CHANGES = 0`

## Locations audited

The requested configuration filenames were searched in:

- `C:\Qt`
- `D:\Qt`
- `C:\Program Files\Qt`
- `C:\Program Files (x86)\Qt`
- `D:\Juegos\Playstation\Playstation 2\PS2 Tools`
- `D:\Juegos\Playstation\Playstation 2\_forensic`
- the user-local development tree under `C:\Users\jdpp2`

No `Qt6Config.cmake`, `Qt6CoreConfig.cmake`, `Qt6WidgetsConfig.cmake`, `Qt6GuiConfig.cmake`, or `qmake.exe` was found in the scoped local search.

## Runtime evidence

The local directory `D:\Juegos\Playstation\Playstation 2\PS2 Tools\PCXS2 V2.3` contains Qt 6.10.1 runtime DLLs, including `Qt6Core.dll`, `Qt6Gui.dll`, and `Qt6Widgets.dll`, plus `pcsx2-qt.exe`. Its `qt.conf` only redirects plugins to `./QtPlugins`; it is not a development SDK.

The older `D:\Juegos\Playstation\Playstation 2\PS2 Tools\PCSX2 1.6.0` installation contains Qt 6.9.0 runtime DLLs, which do not satisfy the required Qt 6.10 development requirement.

## Required minimum SDK

A compatible Qt 6.10.x MSVC x64 development installation containing Qt6 CMake package files, headers, import libraries, and the required tools/components for Core, Gui, Widgets, CoreTools, GuiTools, WidgetsTools, and LinguistTools is required. No installation or download was performed.
