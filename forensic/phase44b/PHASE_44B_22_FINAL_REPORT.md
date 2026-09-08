# PHASE 44B.22 — FINAL REPORT

`PNG_FOUND = YES`

`PNG_VERSION = 1.6.58`

`ZLIB_FOUND = YES`

`ZLIB_VERSION = 1.3.2`

`DEPENDENCIES_ISOLATED = PARTIAL`

`CMAKE_CONFIGURE = PARTIAL`

`BASELINE_PCSX2_BUILD = BLOCKED`

`EXECUTABLE_CREATED = NO`

`PROCESS_VALIDATION = BLOCKED`

`FORENSIC_HOOKS_ADDED = NO`

`PRODUCTION_CHANGES = 0`

PNG/ZLIB and several required dependencies were acquired in the isolated vcpkg environment. FFmpeg completed successfully only when built through a no-space temporary mount. The remaining bootstrap failed at HarfBuzz because package metadata generated under the physical spaced path was later consumed through `X:`, producing mixed-mount paths and linker failure.

The exact next requirement is a fresh isolated dependency root physically located at a path without spaces, with vcpkg install/build/package roots all using that same path. Do not continue from the mixed root. No PCSX2 baseline build or runtime test is valid yet.
