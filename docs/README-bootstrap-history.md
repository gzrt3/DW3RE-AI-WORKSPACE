# Fate Soldiers 3

Clean-room C++20 bootstrap for verified DW3/DW3XL binary provenance, ELF resource tables, LINKDATA descriptors, and TIM2 headers. The current executable indexes resources and diagnoses repeated TIM2 frames; it does not implement gameplay or a renderer.

## Build and test

From this project directory in PowerShell:

```powershell
cmake --preset msvc-x64
cmake --build --preset msvc-x64-debug --parallel
ctest --preset msvc-x64-debug
```

MSVC warnings are errors. CTest runs synthetic unit tests and a read-only integration against `C:/DW3/sources/dumps`. The integration writes the verified indexes to `artifacts/`.

## Components

- `fate_core`: provenance, ELF32 MIPS, LINKDATA, TIM2.
- `resource_index`: hash-gated DW3/DW3XL index and TIM2 excess diagnostics.
- `tests/fixtures/synthetic`: synthetic structures only; no game bytes.

Authoritative input fingerprints and the TIM2 layout findings are documented under `C:/DW3/knowledge`.