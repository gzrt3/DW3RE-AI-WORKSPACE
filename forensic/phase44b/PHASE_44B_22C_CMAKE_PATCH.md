# PHASE 44B.22C — CMAKE PATCH

`CMAKE_PATCH_REQUIRED = YES`

`CMAKE_PATCH_SCOPE = DEPENDENCY_DISCOVERY_ONLY`

Source checkout: `D:\Juegos\Playstation\Playstation 2\_forensic\PCSX2_SOURCE`

Two files changed, both CMake-only:

```diff
cmake/FindLZ4.cmake
- IMPORTED_LOCATION ${LZ4_LIBRARY}
+ IMPORTED_CONFIGURATIONS "DEBUG;RELEASE"
+ IMPORTED_LOCATION_DEBUG "${LZ4_LIBRARY_DEBUG}"
+ IMPORTED_LOCATION_RELEASE "${LZ4_LIBRARY_RELEASE}"

cmake/FindShaderc.cmake
- NAMES shaderc_shared.1 shaderc_shared
+ NAMES shaderc_shared.1 shaderc_shared shaderc
```

No C++ source, renderer code, emulator logic, or production file was changed. The patch is required because the existing modules do not consume the available dependency layouts correctly.
