# PHASE 44B.11 — Final report

**PHASE_44B_11: PARTIAL**  
**GSDUMP_REPLAY: CONFIRMED**  
**GIF_CONTINUITY: CONFIRMED**  
**A+D_DECODING: CONFIRMED**  
**GS_DRAW_LEDGER: CONFIRMED**  
**GS_GEOMETRY: OBSERVABLE**  
**CHARACTER_GEOMETRY_IDENTIFICATION: UNKNOWN**  
**SECTION5_SELECTION: UNKNOWN**  
**0033_UPSTREAM_ATTRIBUTION: UNKNOWN**  
**PRIMARY_REMAINING_UNKNOWN: qué subconjunto de los submits GS pertenece al cuerpo completo del personaje**  
**NEXT_FORENSIC_EXPERIMENT: procesar los tres intervalos VSync restantes de 190004 con el mismo parser continuo y correlacionar sus batches con la imagen capturada**  
**PRODUCTION_CHANGES: 0**

## Gate achieved

The first VSync interval of dump `190004` was reconstructed as a continuous 3,034,048-byte path-3 GIF stream. It yielded 6,466 valid GIF tags, 6,652 A+D writes, 51,069 PRIM operations, 49,957 XYZF2 operations, 51 TEX0 operations, zero parser errors, and zero boundary-crossing events.

The result establishes that the original capture contains substantial GS geometry submission. It does not establish complete-body identity. `XYZ2` and `UV/ST` were not observed in this interval and were not inferred from `XYZF2` or any other register.

The full paired-dump differential was intentionally deferred after the minimum successful gate; no claim is made about complete-dump equality or character-specific batch counts.

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

No hypothesis that `0x0033` means L1/L2 was used.

