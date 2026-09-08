# PHASE 44B.22I — PCSX2 Qt Frontend Dependency Closure

## Final fields

- `QT_SDK: D:\PCSX2_FORENSIC_DEPS\qt-sdk\6.10.1\msvc2022_64`
- `QT_VERSION: 6.10.1`
- `QT_ARCHITECTURE: x64`
- `CURRENT_BLOCKER: KDDockWidgets-qt6 2.3.0 development package/configuration`
- `MISSING_DEPENDENCIES_TOTAL: 1`
- `MISSING_DEPENDENCIES: KDDockWidgets-qt6 2.3.0 development package`
- `ALREADY_AVAILABLE_DEPENDENCIES: Qt 6.10.1 SDK, Qt modules, vcpkg native dependencies, PCSX2 bundled third-party libraries, MSVC2022, Windows SDK`
- `KDDOCKWIDGETS_REQUIRED_VERSION: 2.3.0 or compatible package accepted by find_package version semantics`
- `KDDOCKWIDGETS_FOUND: NO development package; runtime DLL only`
- `OTHER_REQUIRED_DEPENDENCIES: NONE currently missing from the declared Windows/Qt closure`
- `FINAL_DEPENDENCY_KNOWN: YES`
- `INSTALLATION_PERFORMED: NO`
- `SOURCE_MODIFIED: NO`
- `DW3RE_MODIFIED: NO`
- `INSTRUMENTATION_MODIFIED: NO`
- `PRODUCTION_CHANGES: 0`
- `DEPENDENCY_CLOSURE: PASS`

## Closure table

| Dependency | Required for | Found | Version | Architecture | Purpose | Action |
|---|---|---|---|---|---|---|
| Qt6 Core/Gui/Widgets | CMake, build, runtime | YES | 6.10.1 | MSVC2022 x64 | Frontend and UI | Available at the forensic SDK |
| Qt6 CoreTools/GuiTools/WidgetsTools/LinguistTools | CMake/build | YES | 6.10.1 | MSVC2022 x64 | `moc`, `uic`, `rcc`, translations | Available in SDK |
| Qt6 SVG | Build/runtime support | YES | 6.10.1 | MSVC2022 x64 | Qt SVG support | Available in SDK |
| KDDockWidgets-qt6 | CMake, build, runtime | NO (dev) | Required 2.3.0 | Expected Qt6/MSVC x64 | Docking/debugger UI | Resolve separately |
| Git | Configure/version metadata | YES | Local | x64 host | Build metadata | Available |
| Threads | Configure/build | YES | Windows | x64 | Thread support | Available |
| PNG/JPEG/ZLIB/Zstd/LZ4/WebP | Configure/build/runtime | YES | Required versions satisfied | x64-windows | Image/compression support | Available in forensic vcpkg |
| SDL3 | Configure/build/runtime | YES | Required >=3.2.6 | x64-windows | Input/audio/window support | Available |
| FreeType | Configure/build/runtime | YES | Required >=2.10 | x64-windows | Font rendering | Available |
| plutovg/plutosvg | Configure/build | YES | Required versions satisfied | x64-windows | Vector rendering | Available |
| RapidYAML/ryml | Configure/build | YES | 0.16.0 | x64-windows | YAML parsing | Available; include patch already documented |
| FFmpeg components | Configure/build/runtime | YES | Required >=7.1 | x64-windows | Media/video support | Available |
| DirectX-Headers | Configure/build | YES | Required >=1.618.1 | x64-windows | Windows graphics headers | Available |
| Shaderc | Configure/build | YES | Local package | x64-windows | Vulkan shader compilation | Available |
| Vulkan headers | Build | YES via bundled `vulkan-headers` target | Local | x64 | Vulkan backend | Warning about `Vulkan_INCLUDE_DIR` is non-fatal |
| MSVC | Configure/build | YES | VS2022 / MSVC 19.44 | x64 | Compiler/linker | Available |
| Windows SDK | Configure/build | YES | 10.0.26100.0 | x64 | Platform SDK | Available |
| Vtune | Optional | NO | Unknown | N/A | Optional profiling | Not required |

## KDDockWidgets closure

The source explicitly requires:

```cmake
find_package(KDDockWidgets-qt6 2.3.0 REQUIRED)
```

The frontend links and includes KDDockWidgets types throughout `pcsx2-qt`, and the Windows dependency property file expects `kddockwidgets-qt6.lib`/`kddockwidgets-qt6d.lib` plus the matching DLL. The expected development package must therefore provide headers, import libraries, and a CMake package/config exposing the `KDDockWidgets-qt6` target, built for Qt6/MSVC2022/x64 and compatible with Qt 6.10.1.

Scoped searches found only runtime DLLs:

- `D:\Juegos\Playstation\Playstation 2\PS2 Tools\PCXS2 V2.3\kddockwidgets-qt6.dll`
- `D:\Juegos\Playstation\Playstation 2\PS2 Tools\PCXS2 V2.3\kddockwidgets-qt62.dll`

No KDDockWidgets headers, import libraries, or `KDDockWidgets-qt6Config.cmake` were found. The vcpkg version catalog contains port metadata (latest listed 2.4.1), but no installed package was present; the source's explicit requirement remains 2.3.0.

## Is KDDockWidgets the final blocker?

For the currently declared Windows Qt frontend closure, it is the only missing configure-time dependency identified. It is therefore the current and likely final known blocker, not merely an unexamined first dependency. A future configure/build after resolving it may still expose an integration/link issue, but no additional missing dependency is currently evidenced by the source configuration or installed forensic tree.

## Runtime distinction

Qt runtime DLLs are present in the provisioned SDK and existing PCSX2 installations. KDDockWidgets runtime DLLs exist in the local PCSX2 V2.3 installation, but their development compatibility/version is not proven and they cannot satisfy CMake or linking. Runtime deployment still requires the matching Qt/KDDockWidgets DLL set and plugins after a successful build.
