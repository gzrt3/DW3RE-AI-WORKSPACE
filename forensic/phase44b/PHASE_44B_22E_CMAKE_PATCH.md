# PHASE 44B.22E — CMake Patch

## Scope

One CMake-only include-discovery change was applied. No C++ source, runtime logic, instrumentation, compiler semantics, or production renderer was modified.

## Exact file

`D:\Juegos\Playstation\Playstation 2\_forensic\PCSX2_SOURCE\common\CMakeLists.txt`

## Exact diff

```diff
-target_include_directories(common PUBLIC ../3rdparty/include ../)
+target_include_directories(common PUBLIC ../3rdparty/include ../ "${RYML_INCLUDE_DIR}/ryml")
```

`RYML_INCLUDE_DIR` is supplied by the installed `rymlConfig.cmake` and resolves to the package `include` directory. Appending `/ryml` makes the existing PCSX2 bare includes visible without changing `common/YAML.h`.

## Patch classification

`CMAKE_PATCH_SCOPE: INCLUDE_DISCOVERY_ONLY`
