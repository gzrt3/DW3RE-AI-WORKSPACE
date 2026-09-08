# Phase 44B.22L — ABI Dependency Rebuild

## Resultado

`ABI_REBUILD: PASS`

PCSX2 Devel fue reconfigurado y compilado con MSVC 2022 x64 manteniendo
`_ITERATOR_DEBUG_LEVEL=1`. No se ejecutó PCSX2.

## Campos requeridos

```yaml
PCSX2_CONFIGURATION: Devel
TARGET_ABI: MSVC2022 x64 _ITERATOR_DEBUG_LEVEL=1
RYML_VERSION: 0.16.0
RYML_ITERATOR_DEBUG_LEVEL: 1
C4CORE_ITERATOR_DEBUG_LEVEL: 1
KDDOCKWIDGETS_VERSION: 2.3.0
KDDOCKWIDGETS_ITERATOR_DEBUG_LEVEL: 1
QT_VERSION: 6.10.1
QT_REBUILD_REQUIRED: NO
OTHER_ABI_MISMATCHES: NONE OBSERVED
ABI_ALIGNMENT: PASS
CMAKE_CONFIGURE: PASS
PCSX2_BUILD: PASS
PCSX2_EXECUTABLE: D:\PCSX2_FORENSIC_BUILD_03\pcsx2-qt\Devel\pcsx2-qt.exe
PCSX2_EXECUTABLE_SHA256: BE7E5E6107530D78EF6CA3C62AE14C1EF670B0FA8734B8E7E0CE359ADA444C0E
PCSX2_EXECUTABLE_SIZE: 18498048
RUNTIME_EXECUTED: NO
INSTRUMENTATION_MODIFIED: NO
DW3RE_MODIFIED: NO
PRODUCTION_CHANGES: 0
```

## Evidencia y rutas

- RapidYAML source: `D:\PCSX2_FORENSIC_DEPS\rapidyaml-0.16.0-src`
- RapidYAML install: `D:\PCSX2_FORENSIC_DEPS\rapidyaml-0.16.0`
- RapidYAML library: `D:\PCSX2_FORENSIC_DEPS\rapidyaml-0.16.0\lib\ryml.lib`
- RapidYAML CMake package: `D:\PCSX2_FORENSIC_DEPS\rapidyaml-0.16.0\cmake\rymlConfig.cmake`
- KDDockWidgets source: `D:\PCSX2_FORENSIC_DEPS\kddockwidgets-2.3.0-src`
- KDDockWidgets install: `D:\PCSX2_FORENSIC_DEPS\kddockwidgets-2.3.0-devel`
- KDDockWidgets import library: `D:\PCSX2_FORENSIC_DEPS\kddockwidgets-2.3.0-devel\lib\kddockwidgets-qt6.lib`
- KDDockWidgets CMake package: `D:\PCSX2_FORENSIC_DEPS\kddockwidgets-2.3.0-devel\lib\cmake\KDDockWidgets-qt6\KDDockWidgets-qt6Config.cmake`
- Qt SDK: `D:\PCSX2_FORENSIC_DEPS\qt-sdk\6.10.1\msvc2022_64`
- PCSX2 build: `D:\PCSX2_FORENSIC_BUILD_03`

`dumpbin /directives` confirmó `/FAILIFMISMATCH:_ITERATOR_DEBUG_LEVEL=1` en
`ryml.lib` y en un Release object de `kddockwidgets-qt6.dll`.
`c4core` está integrado en los objetos de RapidYAML; no se generó una
biblioteca c4core independiente en esta instalación.

La configuración usó `Qt6_DIR`, `KDDockWidgets-qt6_DIR` y `ryml_DIR` de los
prefijos aislados anteriores. El único cambio de configuración fue dirigir
la detección a esas instalaciones; no se modificó código fuente de PCSX2.

Logs:

- `D:\PCSX2_FORENSIC_BUILD_03\phase_44b_22l_configure.log`
- `D:\PCSX2_FORENSIC_BUILD_03\phase_44b_22l_build.log`

El árbol fuente de PCSX2 conserva únicamente las modificaciones CMake
previas documentadas en fases anteriores (`FindLZ4.cmake`,
`FindShaderc.cmake`, `common/CMakeLists.txt`).

## Arquitectura

PCSX2 continúa siendo exclusivamente una herramienta de laboratorio y
referencia forense. DW3RE sigue siendo un ejecutable nativo independiente;
no depende de PCSX2.

