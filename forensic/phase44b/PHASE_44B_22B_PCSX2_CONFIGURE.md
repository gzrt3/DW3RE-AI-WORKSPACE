# PHASE 44B.22B — PCSX2 CONFIGURE

`PCSX2_CMAKE_CONFIGURE = PARTIAL`

Fresh build root:
`D:\PCSX2_FORENSIC_BUILD_02`

The exact source revision was used:
`236f67a82fd8a37b1e5c128228403fb7b89b3cd8`

Configuration used the official `Visual Studio 17 2022` x64 generator, MSVC `19.44.35228.0`, SDK `10.0.26100.0`, and the clean vcpkg toolchain at `D:\PCSX2_FORENSIC_DEPS\vcpkg\scripts\buildsystems\vcpkg.cmake`.

Minimal flags:

```text
-DENABLE_TESTS=OFF -DENABLE_GSRUNNER=OFF -DENABLE_QT_UI=OFF
-DUSE_VULKAN=ON -DUSE_OPENGL=ON
```

CMake resolved PNG 1.6.58, ZLIB 1.3.2, JPEG 62/libjpeg-turbo 3.2.0, Zstd 1.5.7, WebP 1.6.0, FFmpeg 9.0.1 and PkgConfig. It then stopped on two compatibility issues without modifying source:

1. `cmake/FindLZ4.cmake:41`: `set_target_properties` received an invalid argument count after the vcpkg LZ4 target was found.
2. `cmake/FindShaderc.cmake:19`: `SHADERC_LIBRARY` was not found in the installed Shaderc layout.

No CMake source module was changed and no build was started.
