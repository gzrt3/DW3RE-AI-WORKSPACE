# PHASE 44B.13 — Final report

**PHASE_44B_13: PARTIAL**  
**GS_REPLAY: PARTIAL**  
**PRIMITIVE_ASSEMBLY: UNKNOWN**  
**DRAW_BATCHES: UNKNOWN**  
**LARGE_GEOMETRY: CONFIRMED**  
**CHARACTER_GEOMETRY: UNKNOWN**  
**SECTION5_SELECTION: UNKNOWN**  
**0033_ATTRIBUTION: UNKNOWN**  
**PRIMARY_REMAINING_UNKNOWN: cómo separar las emisiones primitivas GS reales de las escrituras de estado y definir sus límites de batch**  
**NEXT_FORENSIC_EXPERIMENT: validar un solo paquete packed que contenga PRIM+XYZF2 contra la semántica exacta de GS, incluyendo el formato de los datos de XYZF2, antes de ensamblar el intervalo completo**  
**PRODUCTION_CHANGES: 0**

## Answers

1. An actual primitive requires enough ordered vertex submissions under one active PRIM topology to satisfy GS assembly; a PRIM write alone is not one.
2. Actual primitive count: UNKNOWN.
3. Actual batch count: UNKNOWN.
4. Largest batches: UNKNOWN; large vertex traffic is confirmed but boundaries are not.
5. PRIM was large because it counts repeated GS state observations inside GIF operations.
6. The stream contains enough vertex traffic to be compatible with substantial scene/character geometry, but complete-character identity is UNKNOWN.
7. No batch is defensibly correlated with a known DW3 resource.
8. The dump proves GS-side vertex-register submissions and state traffic.
9. It cannot prove Section5, `0x0033`, EE matrices, VIF/VU1 provenance, or complete-body identity.
10. Strongest unknown: replay-faithful GS primitive assembly semantics for this captured stream.
11. Smallest next experiment: decode and validate one representative packed PRIM+XYZF2 packet at raw 128-bit/qword level.

