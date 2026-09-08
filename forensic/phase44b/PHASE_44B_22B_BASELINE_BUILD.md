# PHASE 44B.22B — BASELINE BUILD

`BASELINE_PCSX2_BUILD = BLOCKED`

HarfBuzz and the isolated dependency bootstrap succeeded far enough to start a clean PCSX2 CMake configuration. The baseline did not generate because the unmodified current PCSX2 CMake modules are incompatible with the selected vcpkg layouts for LZ4 and Shaderc.

Per the phase stop condition, no source-level workaround was applied. No compiler build, PCSX2 executable, hash, or runtime validation exists.
