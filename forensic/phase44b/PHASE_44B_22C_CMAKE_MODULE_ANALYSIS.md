# PHASE 44B.22C — CMAKE MODULE ANALYSIS

## FindLZ4.cmake

The module uses `find_path(lz4.h)`, `find_library(... lz4d)` and `find_library(... lz4)`, then `SELECT_LIBRARY_CONFIGURATIONS(LZ4)`. That produces a multi-item `LZ4_LIBRARY` list for multi-config generators. The old line 41 passed that list to `set_target_properties` as one unquoted property value, causing an invalid argument count.

The minimal fix assigns `IMPORTED_LOCATION_DEBUG` and `IMPORTED_LOCATION_RELEASE` separately and declares the imported configurations. No compiler/runtime behavior changes.

## FindShaderc.cmake

The module requires `shaderc/shaderc.h` and searched only `shaderc_shared.1`/`shaderc_shared`. The isolated vcpkg port provides the header and static `shaderc.lib`, not a shared DLL. Adding `shaderc` to the search names lets CMake discover the available library.

This is sufficient for configure because the current Windows build does not link the imported Shaderc target directly; the Vulkan source dynamically loads `shaderc_shared` at runtime. That runtime availability remains untested and is not claimed by this phase.
