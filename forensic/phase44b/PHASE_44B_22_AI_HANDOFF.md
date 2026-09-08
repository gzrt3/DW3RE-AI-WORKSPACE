# PHASE 44B.22 — AI HANDOFF

Phase 44B.22 is `PARTIAL/BLOCKED`.

## Confirmed

- Source remains revision `236f67a82fd8a37b1e5c128228403fb7b89b3cd8`.
- MSVC, Windows SDK, CMake, and Ninja are installed.
- Isolated vcpkg contains PNG `1.6.58`, ZLIB `1.3.2`, FFmpeg `9.0.1`, DirectX-Headers `1.619.5`, and glslang `16.4.0`.
- No hooks were added and no production files changed.

## Blocker

HarfBuzz failed with `ValueError: path is on mount 'X:', start on mount 'D:'` after a temporary `SUBST` workaround. The root cause is mixed absolute paths embedded by vcpkg packages built under `D:\Juegos\...` and consumed under `X:`.

## Required continuation

Create a fresh physical no-space forensic dependency root, e.g. `D:\PCSX2_FORENSIC_DEPS`, bootstrap vcpkg there, install the current PCSX2 dependency closure, configure an out-of-tree baseline, and build only unmodified PCSX2. Do not add instrumentation until that baseline succeeds.
