# PHASE 44B.22H — Qt 6.10.1 Development SDK

## Result

- `QT_DEVELOPMENT_SDK = PASS`
- `QT_INSTALLATION_RESULT: PASS`
- `QT_RUNTIME_VERSION: 6.10.1`
- `QT_DEVELOPMENT_VERSION: 6.10.1`
- `QT_COMPILER: MSVC2022`
- `QT_ARCHITECTURE: x64`
- `QT6_CONFIG_PATH: D:\PCSX2_FORENSIC_DEPS\qt-sdk\6.10.1\msvc2022_64\lib\cmake\Qt6\Qt6Config.cmake`
- `QT6_DIR: D:\PCSX2_FORENSIC_DEPS\qt-sdk\6.10.1\msvc2022_64\lib\cmake\Qt6`
- `CMAKE_CONFIGURATION_AFTER_AUDIT: BLOCKED`
- `CMAKE_CONFIGURE: BLOCKED`
- `PCSX2_BUILD: BLOCKED`
- `PCSX2_EXECUTABLE: NOT_CREATED`
- `PCSX2_EXECUTABLE_SHA256: NONE`
- `PCSX2_EXECUTABLE_SIZE: NONE`
- `RUNTIME_EXECUTED: NO`
- `INSTRUMENTATION_MODIFIED: NO`
- `DW3RE_MODIFIED: NO`
- `PRODUCTION_CHANGES: 0`

## Provisioned SDK

The official Qt 6.10.1 MSVC 2022 x64 package was provisioned at:

`D:\PCSX2_FORENSIC_DEPS\qt-sdk\6.10.1\msvc2022_64`

The selected package set provided the Qt base, SVG, tools, translations, and supporting runtime/development files needed by the PCSX2 Qt frontend. Verified files include:

- `...\lib\cmake\Qt6\Qt6Config.cmake`
- `...\lib\cmake\Qt6Core\Qt6CoreConfig.cmake`
- `...\lib\cmake\Qt6Gui\Qt6GuiConfig.cmake`
- `...\lib\cmake\Qt6Widgets\Qt6WidgetsConfig.cmake`
- `...\bin\qmake.exe`

The existing PCSX2 runtime installation was not replaced or modified.

## CMake result

The forensic build was configured with `ENABLE_QT_UI=ON` and the resolved Qt path. Qt discovery succeeded. Configuration then stopped at the next independent required dependency:

```text
Could not find a package configuration file provided by "KDDockWidgets-qt6" (requested version 2.3.0)
```

Configure log: `D:\PCSX2_FORENSIC_BUILD_03\phase_44b_22h_configure_final.log`

This phase did not install KDDockWidgets, run PCSX2, build the frontend, or apply speculative fixes.

## Architectural boundary

PCSX2 remains a forensic/reference laboratory only. DW3RE remains an independent standalone native executable target and has no PCSX2 dependency.
