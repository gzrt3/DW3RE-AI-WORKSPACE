# PHASE 44B.20 — AI HANDOFF

The isolated source checkout is:
`D:\Juegos\Playstation\Playstation 2\_forensic\PCSX2_SOURCE`

Revision:
`236f67a82fd8a37b1e5c128228403fb7b89b3cd8`

No PCSX2 source, installed emulator, DW3RE production file, ELF, LINKDATA, or original dump was modified. No build or game execution occurred.

## Continue here

1. Provision/locate an isolated supported Windows toolchain and out-of-tree CMake build directory.
2. Add instrumentation only in the isolated checkout at the hooks listed in `PHASE_44B_20_HOOK_MAP.csv`.
3. Gate EE logging on the known native code locations for `0x0033` and `0x0030`; do not label `0x0033` as L1/L2.
4. Correlate the resulting EE → DMA1/VIF1 → GIF → GS stream with the existing 44B.10–44B.19 evidence.

The current evidence remains insufficient to claim `Resource1670 Part 12 → GS` at runtime.
