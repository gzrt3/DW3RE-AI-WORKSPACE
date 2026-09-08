# PHASE 44B.22 — DEPENDENCY SETUP

`DEPENDENCIES_ISOLATED = PARTIAL`

An isolated vcpkg checkout was created at:
`D:\Juegos\Playstation\Playstation 2\_forensic\PCSX2_DEPS\vcpkg`

Resolved successfully:

- PNG `1.6.58`
- ZLIB `1.3.2`
- FFmpeg `9.0.1`
- DirectX-Headers `1.619.5`
- glslang `16.4.0`

The first FFmpeg attempt failed because its port rejects paths containing spaces. It was then built successfully through a temporary `X:` mapping. That exposed a second issue: packages installed under the original `D:` root retain absolute paths, and HarfBuzz built under `X:` fails with:

`ValueError: path is on mount 'X:', start on mount 'D:'`

The temporary `X:` mapping was removed. No global packages or existing PCSX2 installations were modified.

## Exact remaining blocker

The dependency environment must be bootstrapped from a physical path without spaces from the beginning, for example `D:\PCSX2_FORENSIC_DEPS`, with install/build/package roots all on that same path. Reusing the partially populated spaced root through `SUBST` is not valid because generated package metadata mixes mount roots.
