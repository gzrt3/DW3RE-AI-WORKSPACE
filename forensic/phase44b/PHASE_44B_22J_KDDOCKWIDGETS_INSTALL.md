# PHASE 44B.22J — KDDockWidgets 2.3.0 Development

## Installation/provisioning

- `KDDOCKWIDGETS_DEVELOPMENT = PASS`
- `KDDOCKWIDGETS_VERSION: 2.3.0`
- `KDDOCKWIDGETS_QT_VERSION: Qt6 / Qt 6.10.1`
- `KDDOCKWIDGETS_COMPILER: MSVC 19.44.35228.0 (Visual Studio 2022)`
- `KDDOCKWIDGETS_ARCHITECTURE: x64`
- `KDDOCKWIDGETS_HEADERS: FOUND`
- `KDDOCKWIDGETS_IMPORT_LIBS: FOUND`
- `KDDOCKWIDGETS_CMAKE_CONFIG: FOUND`
- `KDDOCKWIDGETS_DIR: D:\PCSX2_FORENSIC_DEPS\kddockwidgets-2.3.0\lib\cmake\KDDockWidgets-qt6`
- `KDDOCKWIDGETS_INSTALLATION: PASS`

Installed files include:

- Headers: `D:\PCSX2_FORENSIC_DEPS\kddockwidgets-2.3.0\include\kddockwidgets-qt6`
- Import library: `D:\PCSX2_FORENSIC_DEPS\kddockwidgets-2.3.0\lib\kddockwidgets-qt6.lib`
- Runtime DLL: `D:\PCSX2_FORENSIC_DEPS\kddockwidgets-2.3.0\bin\kddockwidgets-qt6.dll`
- CMake config: `D:\PCSX2_FORENSIC_DEPS\kddockwidgets-2.3.0\lib\cmake\KDDockWidgets-qt6\KDDockWidgets-qt6Config.cmake`

The source tag `v2.3.0` was built from commit `c38711026e17e34916dd82c6fcbdcc0d2342f541` in an isolated tree. Qt6, examples, tests, docs, and Python bindings were configured as required for this dependency build.

## PCSX2 configure/build

- `CMAKE_CONFIGURE: PASS`
- `PCSX2_BUILD: BLOCKED`
- `RUNTIME_EXECUTED: NO`
- `INSTRUMENTATION_MODIFIED: NO`
- `DW3RE_MODIFIED: NO`
- `PRODUCTION_CHANGES: 0`

PCSX2 configure discovered both Qt6 and KDDockWidgets. The frontend compiled through source compilation and failed at link time:

```text
ryml.lib(...): error LNK2038: _ITERATOR_DEBUG_LEVEL value '0' does not match value '1' in cmake_pch.obj
...
pcsx2-qt.exe : fatal error LNK1319: differences detected: 8
```

Classification: build/toolchain ABI configuration mismatch. KDDockWidgets itself built successfully, and this is no longer a missing-package/configure blocker. The current KDDockWidgets build used `Release`, while PCSX2 uses the custom `Devel` configuration; the already-installed ryml/c4core libraries also expose the iterator-debug-level mismatch at the final link.

Build log: `D:\PCSX2_FORENSIC_BUILD_03\phase_44b_22j_build.log`
Configure log: `D:\PCSX2_FORENSIC_BUILD_03\phase_44b_22j_configure.log`

No `pcsx2-qt.exe` was produced. A partial `pcsx2-qt.lib` exists but is not an executable and was not run.

## Architectural boundary

PCSX2 is a forensic/reference laboratory only. DW3RE remains an independent standalone native executable target and is not coupled to PCSX2.
