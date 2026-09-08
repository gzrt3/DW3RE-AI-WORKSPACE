# PHASE 44B.21 — TOOLCHAIN AUDIT

## Result

`EXISTING_MSVC = YES`

`EXISTING_WINDOWS_SDK = YES`

`CMAKE = YES (installed inside Visual Studio, not on PATH)`

`NINJA = YES (installed inside Visual Studio, not on PATH)`

`PRODUCTION_CHANGES = 0`

## Located components

- Visual Studio: `C:\Program Files\Microsoft Visual Studio\2022\Community`
- `cl.exe`: `C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.44.35207\bin\Hostx64\x64\cl.exe`
- Compiler version: `19.44.35228`
- `link.exe`: same MSVC directory, `link.exe`; linker version `14.44.35228.0`
- `vcvars64.bat`: `C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat`
- `VsDevCmd.bat`: `C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\Tools\VsDevCmd.bat`
- CMake: `C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe`, version `3.31.6-msvc6`
- Ninja: `C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\Ninja\ninja.exe`, version `1.12.1`
- Windows SDKs located: `10.0.14393.0`, `10.0.15063.0`, `10.0.16299.0`, `10.0.17134.0`, `10.0.22621.0`, `10.0.26100.0`

The exact source revision remains `236f67a82fd8a37b1e5c128228403fb7b89b3cd8` in the clean isolated checkout at `D:\Juegos\Playstation\Playstation 2\_forensic\PCSX2_SOURCE`.

## Interpretation

The previous “toolchain absent” conclusion was incomplete because tools were not on PATH. A supported Visual Studio generator successfully found MSVC and selected SDK `10.0.26100.0`. The configure step then failed on required external packages `PNG >= 1.6.40` and `ZLIB`; no dependency installation was attempted.
