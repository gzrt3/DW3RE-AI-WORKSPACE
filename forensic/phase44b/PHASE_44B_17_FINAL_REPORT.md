# PHASE 44B.17 — Final forensic report

**GS_GEOMETRY: CONFIRMED**  
**CROSS_DUMP_REPEATABILITY: CONFIRMED**  
**SECTION0_ATTRIBUTION: UNKNOWN**  
**0033_ATTRIBUTION: UNKNOWN**  
**0030_ATTRIBUTION: UNKNOWN**  
**CHARACTER_ATTRIBUTION: UNKNOWN**  
**SECTION5_OBSERVABILITY: UNKNOWN**  
**MATRIX_POOL_OBSERVABILITY: UNKNOWN**  
**PRODUCTION_CHANGES: 0**

## Findings

1. The large GS clusters are real geometry submissions, not merely PRIM state writes.
2. The 2,680/2,678 and 2,730/2,728 triangle-strip signatures repeat across both dumps with the same measured counts and state signature. This is strong structural repeatability, not object identity.
3. No GS candidate can be defensibly mapped to Section0 assets 1622, 1626, 1630, or 1670. Their known individual parts contain 14–22 submitted vertices, whereas the GS candidates are aggregate-scale; raw coordinate spaces and object boundaries are not equivalent.
4. Static evidence documents handlers for `0x0033` and `0x0030`, but no runtime call/DMA/VIF/VU1 provenance links either path to a GS candidate. Both path attributions remain UNKNOWN.
5. Character, weapon, stage, effects, and UI separation is not possible from the current candidate signatures because verified spatial extents, texture identity, and object/resource markers are missing.
6. Section5 and the matrix-pool producer are not observable in these GS dumps.

## Stop condition

Condition B is reached: current dumps establish repeatable GS geometry but cannot establish upstream Section0/path attribution. The exact missing observation is a synchronized runtime trace joining Section0 command/resource identity and `0x0030/0x0033` execution to the corresponding GIF transfer range.

## Minimum next experiment

Capture one synchronized runtime event for a known resource (preferably Resource 1670 Part 12): Section0 command offset/resource ID, native handler entry (`0x0030` or `0x0033`), DMA/GIF transfer range, and GS stream offset in the same frame. Do not change production behavior.

