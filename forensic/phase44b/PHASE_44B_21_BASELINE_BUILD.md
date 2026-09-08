# PHASE 44B.21 — BASELINE BUILD

`BASELINE_PCSX2_BUILD = BLOCKED`

The unmodified source was configured out-of-tree at:
`D:\Juegos\Playstation\Playstation 2\_forensic\PCSX2_BUILD_BASELINE_02`

Command shape used:

```text
cmake -S D:\Juegos\Playstation\Playstation 2\_forensic\PCSX2_SOURCE -B D:\Juegos\Playstation\Playstation 2\_forensic\PCSX2_BUILD_BASELINE_02 -G "Visual Studio 17 2022" -A x64 -DENABLE_TESTS=OFF -DENABLE_GSRUNNER=OFF -DENABLE_QT_UI=ON -DUSE_VULKAN=ON -DUSE_OPENGL=ON
```

CMake successfully detected MSVC 19.44.35228 and Windows SDK 10.0.26100.0. Configuration stopped before generation because the current PCSX2 source requires `PNG >= 1.6.40` and `ZLIB`, neither available to CMake. No compilation, executable, or SHA-256 was produced.

Per the phase stop condition, forensic hooks were not added.
