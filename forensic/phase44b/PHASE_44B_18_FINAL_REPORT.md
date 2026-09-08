# PHASE 44B.18 — Runtime correlation final report

**RESOURCE1670_RUNTIME_OBSERVABLE = UNKNOWN**  
**SECTION0_TO_0033 = PARTIAL**  
**SECTION0_TO_0030 = PARTIAL**  
**0033_TO_BUFFER = UNKNOWN**  
**0030_TO_BUFFER = UNKNOWN**  
**BUFFER_TO_DMA = UNKNOWN**  
**DMA_TO_GIF = UNKNOWN**  
**GIF_TO_GS_CANDIDATE = PARTIAL**  
**RESOURCE1670_TO_GS = UNKNOWN**  
**CHARACTER_ATTRIBUTION = UNKNOWN**  
**SECTION5_OBSERVABILITY = UNKNOWN**  
**MATRIX_POOL_OBSERVABILITY = UNKNOWN**  
**PRODUCTION_CHANGES = 0**

## Result

Stop condition B is reached. Static evidence directly identifies Resource 1670 Part 12 at `0x31A4`, its `0x0033` command path and the native handler `0x001303E0`; static control evidence identifies the `0x0030` handler `0x00131390`. This is not runtime execution correlation.

The GS dumps prove downstream GS/GIF geometry and repeatable large signatures, but they do not carry ResourceID, Section0 command pointer, EE PC, output-buffer address, DMA history, VIF packet provenance, or VU1 provenance. Consequently no GS candidate can be linked directly to Part12, `0x0033`, or `0x0030`.

PCSX2 1.6.0 local configuration confirms that debugger/trace categories exist, but EE GIF/VIF/DMA event sources are disabled and no synchronized runtime trace artifact is available. The existing Pine script can read live state, not reconstruct historical causality.

## Exact missing observation

One synchronized runtime record containing: frame/time, ResourceID=1670 and Part12 command offset, EE PC at `0x001303E0` or `0x00131390`, generated EE buffer address/range, DMA1 source/QWC, VIF/GIF location, and the corresponding GSDump stream offset/tag.

## Minimum next experiment

Add a temporary, isolated emulator instrumentation hook for one known Part12 execution that logs the above chain without changing game or renderer behavior. If emulator instrumentation is unavailable, a controlled live debugger capture of EE PC + DMA1/VIF1/GIF state at the handler and GS transfer is the minimum substitute.

