# PHASE 44B.22K — MSVC ABI / `_ITERATOR_DEBUG_LEVEL` Audit

## Required fields

- `PCSX2_CONFIGURATION: Devel`
- `PCSX2_ITERATOR_DEBUG_LEVEL: 1`
- `QT_ITERATOR_DEBUG_LEVEL: 0-compatible release ABI; debug libraries are also present`
- `KDDOCKWIDGETS_ITERATOR_DEBUG_LEVEL: 0` — the installed KDDockWidgets package was built as Release
- `DEPENDENCY_ITERATOR_DEBUG_LEVEL: 0` — proven for the linked release `ryml.lib` and `c4core.lib`
- `ABI_MISMATCH_CONFIRMED: YES`
- `UPSTREAM_CONFIGURATION_EXPECTATION: Debug=2, Devel=1, Release/RelWithDebInfo=0`
- `RECOMMENDED_ALIGNMENT: Preserve PCSX2 Devel at 1 and rebuild C++ dependencies that cross the link boundary with 1`
- `REBUILD_REQUIRED: YES`
- `REBUILD_TARGETS: KDDockWidgets-qt6, ryml/c4core; audit any other C++ static dependency before link`
- `SOURCE_MODIFIED: NO`
- `DW3RE_MODIFIED: NO`
- `INSTRUMENTATION_MODIFIED: NO`
- `FULL_BUILD_PERFORMED: NO`
- `RUNTIME_EXECUTED: NO`
- `PRODUCTION_CHANGES: 0`
- `ABI_ALIGNMENT: KNOWN`

## Why PCSX2 Devel uses level 1

The unmodified PCSX2 build configuration explicitly defines:

```cmake
$<$<CONFIG:Debug>:_ITERATOR_DEBUG_LEVEL=2>
$<$<CONFIG:Devel>:_ITERATOR_DEBUG_LEVEL=1>
$<${CONFIG_ANY_REL}:_ITERATOR_DEBUG_LEVEL=0>
```

The generated `pcsx2-qt.vcxproj` confirms `_ITERATOR_DEBUG_LEVEL=1` in the `Devel|x64` configuration, together with `PCSX2_DEVBUILD`, `_DEVEL`, and `NDEBUG`. This is intentional upstream configuration, not an accidental inherited compiler default. Devel is the optimized development build with development assertions/features enabled.

## Dependency evidence

- Qt 6.10.1 SDK provides both release and debug libraries and is used through Qt DLL/import-library targets. The current link failure does not identify Qt objects as the source of the mismatch; rebuilding Qt is not justified.
- KDDockWidgets 2.3.0 was built with the standard `Release` configuration and installed as a DLL plus import library. Its build does not provide a Devel variant.
- vcpkg release `ryml.lib` and `c4core.lib` are present under `installed\x64-windows\lib`; the linker reports their objects as `_ITERATOR_DEBUG_LEVEL=0`.
- vcpkg debug variants exist under `installed\x64-windows\debug\lib`, but they conventionally correspond to level 2, not PCSX2 Devel level 1. No level-1 dependency variant was found.

Exact link errors from Phase 44B.22J:

```text
ryml.lib(...): LNK2038 _ITERATOR_DEBUG_LEVEL value '0' does not match value '1' in cmake_pch.obj
c4core.lib(...): LNK2038 _ITERATOR_DEBUG_LEVEL value '0' does not match value '1' in cmake_pch.obj
pcsx2-qt.exe: LNK1319 differences detected: 8
```

## Strategy decision

Option A (force PCSX2 Devel to 0) is not recommended because it changes the upstream Devel ABI/diagnostic model. Option C (use Release) would align with release dependencies but removes the intended development configuration and is less suitable for a forensic laboratory build. Option B is the minimal semantically preserving strategy: retain PCSX2 Devel level 1 and build every linked C++ dependency that embeds STL iterator-debug metadata with level 1. Qt should remain the official prebuilt SDK unless a later link/runtime test proves a Qt-specific incompatibility.

## Minimal next action for Phase 44B.22L

Create an isolated level-1 dependency configuration for `ryml/c4core` and KDDockWidgets 2.3.0 using MSVC2022 x64 and the same `/MD`/exception model as PCSX2 Devel, then relink the existing PCSX2 `Devel` frontend. Do not change PCSX2 source semantics, and do not rebuild Qt initially.
