# PHASE 44B.22D — Baseline Build

## Scope

Read-only forensic baseline build of the configured PCSX2 source. No instrumentation, runtime changes, DW3RE changes, PCSX2 installation changes, game execution, or GS-dump changes were performed.

## Source and configuration

- Source: `D:\Juegos\Playstation\Playstation 2\_forensic\PCSX2_SOURCE`
- Required source revision: `236f67a82fd8a37b1e5c128228403fb7b89b3cd8`
- Observed source revision: `236f67a82fd8a37b1e5c128228403fb7b89b3cd8`
- Build directory: `D:\PCSX2_FORENSIC_BUILD_03`
- Generator: Visual Studio 17 2022
- Platform: x64
- Configuration: Devel
- CMake: `C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe`
- Configure result: PASS
- Build command: `cmake --build D:\PCSX2_FORENSIC_BUILD_03 --config Devel --parallel 8`
- Build duration: approximately 70.234 seconds

## Result

The baseline build is BLOCKED. Compilation stops in the `common` target at:

`common/YAML.h(8,1): error C1083: Cannot open include file: 'ryml.hpp'`

The dependency is physically present at:

`D:\PCSX2_FORENSIC_DEPS\vcpkg\installed\x64-windows\include\ryml\ryml.hpp`

Therefore this is not evidence that the dependency is absent. It is a CMake target include-directory/layout propagation mismatch between the unmodified source expectation (`#include "ryml.hpp"`) and the selected ryml package layout (`include\ryml\ryml.hpp`) for this configured build.

Per the phase scope, no source or build fix was applied after this failure.

Build log: `D:\PCSX2_FORENSIC_BUILD_03\baseline_build.log`

## Executable result

No PCSX2 executable was created. The only `.exe` files found under the build tree are compiler-identification helpers:

- `D:\PCSX2_FORENSIC_BUILD_03\CMakeFiles\3.31.6-msvc6\CompilerIdC\CompilerIdC.exe`
- `D:\PCSX2_FORENSIC_BUILD_03\CMakeFiles\3.31.6-msvc6\CompilerIdCXX\CompilerIdCXX.exe`

These are not PCSX2 binaries and were not used for runtime validation.

## Source-change audit

`git status --short` in the source tree contains only the two documented Phase 44B.22C CMake changes:

- `cmake/FindLZ4.cmake`
- `cmake/FindShaderc.cmake`

No C++ instrumentation or production renderer/runtime changes were added.
