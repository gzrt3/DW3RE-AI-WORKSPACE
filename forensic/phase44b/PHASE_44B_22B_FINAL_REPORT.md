# PHASE 44B.22B — FINAL REPORT

`NO_SPACE_PATH_ROOT = YES`

`STALE_X_PATHS_ELIMINATED = YES`

`PNG_REUSED = YES`

`ZLIB_REUSED = YES`

`FFMPEG_REUSED = YES`

`HARFBUZZ_CONFIGURE = PASS`

`HARFBUZZ_BUILD = PASS`

`PCSX2_CMAKE_CONFIGURE = PARTIAL`

`BASELINE_PCSX2_BUILD = BLOCKED`

`PCSX2_EXECUTABLE_CREATED = NO`

`FORENSIC_HOOKS_ADDED = NO`

`PRODUCTION_CHANGES = 0`

The physical no-space root solved the original HarfBuzz path contamination. HarfBuzz 14.4.0 built successfully, and the clean PCSX2 configuration found the principal dependencies. The unmodified PCSX2 source then stopped at two source/CMake-to-package-layout compatibility points: `FindLZ4.cmake` line 41 and `FindShaderc.cmake` line 19.

No PCSX2 source modification is permitted in this phase, so the baseline cannot be claimed buildable. No installed emulator, DW3RE file, ELF, LINKDATA, profile, or GS dump was modified.
