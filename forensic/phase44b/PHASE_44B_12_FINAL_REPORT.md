# PHASE 44B.12 — Final report

**PHASE_44B_12: PARTIAL**  
**GS_BATCH_RECONSTRUCTION: PARTIAL**  
**PRIM_SEMANTICS: PARTIAL**  
**XYZF2_GEOMETRY: CONFIRMED**  
**CHARACTER_GEOMETRY: UNKNOWN**  
**ORIGINAL_VS_DW3RE_GEOMETRY_GAP: UNKNOWN**  
**SECTION5_SELECTION: UNKNOWN**  
**0033_ATTRIBUTION: UNKNOWN**  
**PRIMARY_REMAINING_UNKNOWN: límites de emisión que separan submits de vértices en draw batches reales**  
**NEXT_FORENSIC_EXPERIMENT: implementar un consumidor GIF fiel a GS para el VSync 0 de 190004, preservando estado PRIM completo y límites EOP/transferencia antes de procesar el dump B**  
**PRODUCTION_CHANGES: 0**

## Answers

1. An actual batch is a sequence of vertex submissions under one defensible GS primitive/state context; a PRIM write alone is not a batch.
2. `PRIM=51,069` was a register-observation count, not a draw count. The corrected audit sees 51,070 observations.
3. Actual batch count: UNKNOWN. Heuristic grouping was rejected.
4. The selected interval contains 49,957 `XYZF2` and 2 `XYZ2` submissions; per-batch counts remain UNKNOWN.
5. Primitive types cannot yet be promoted because complete batch boundaries are unresolved.
6. Large geometry is present, but character-like classification is UNKNOWN.
7. Weapon-like classification is UNKNOWN.
8. No batch is defensibly correlated with resources 1622/1626/1630/1670.
9. A geometry gap versus DW3RE is UNKNOWN until equivalent batch/vertex accounting exists on both sides.
10. Section5 selection cannot be proven by this GSDump.
11. `0x0033` routing cannot be proven; no L1/L2 assumption was used.
12. Strongest unknown: which GS vertex submissions form the complete character body.
13. Next experiment: replay-faithful GS consumer for one VSync, then validate against the screenshot.

## Observability

| Layer | Status |
|---|---|
| Section0 | NOT_OBSERVABLE |
| Section5 | NOT_OBSERVABLE |
| EE matrix producer | NOT_OBSERVABLE |
| DMA | PARTIAL |
| VIF | NOT_OBSERVABLE |
| VU1 | PARTIAL |
| GIF | OBSERVABLE |
| GS | OBSERVABLE |

