# PHASE 44B.16 — Final report

**PHASE_44B_16: PASS**  
**GS_STATE_TRACKING: PARTIAL**  
**GEOMETRY_CONTINUITY: CONFIRMED**  
**BATCH_CANDIDATES: CONFIRMED**  
**LARGE_GEOMETRY_CLUSTERS: CONFIRMED**  
**CHARACTER_GEOMETRY: UNKNOWN**  
**SECTION5: UNKNOWN**  
**0033: UNKNOWN**  
**PRIMARY_REMAINING_UNKNOWN: si los candidatos de geometría corresponden a un objeto/personaje completo o a una mezcla de escena, efectos y otros submits GS**  
**NEXT_FORENSIC_EXPERIMENT: correlacionar un candidato grande con el framebuffer/screenshot mediante replay GS y separación de uploads de textura**  
**PRODUCTION_CHANGES: 0**

## Results

For VSync 0 of `190004`, the continuous consumer observes 50,955 position submissions in the corrected state-tracking pass and generates 222 conservative candidate segments. For `190008`, the same candidate rule yields 61,399 position submissions and 240 candidates. These are candidate groups, not definitive draw-call counts.

The largest measurable candidates in `190004` contain 2,730 vertices / 2,728 strip primitives, 2,680 / 2,678 strip primitives, and 1,980 / 659 triangle-list primitives. Corresponding large-strip signatures with 2,730 and 2,680 vertices also occur in `190008`. This is measurable cross-dump stability, not character attribution.

## Boundary interpretation

Observable discontinuity correlates are effective PRIM/topology changes and relevant state-signature changes while geometry is active. A GIF tag, PRIM write, TEX0 write, or A+D operation alone is not treated as a definitive batch boundary. Candidate boundaries are therefore labelled `CANDIDATE`.

XYZ raw bounds were not promoted globally because the current candidate pass does not yet retain a verified per-vertex raw XYZ ledger for every segment. No coordinate normalization is applied.

## Answers

1. Geometry discontinuities correlate most strongly with effective topology/state-signature changes during active vertex emission.
2. PRIM topology changes are the clearest observed transition; TEX0/frame target changes require fuller state decoding.
3. Yes, conservative candidates can be generated.
4. 222 in `190004` and 240 in `190008` under this candidate rule.
5. Largest candidates: 2,730, 2,680, and 1,980 vertices in `190004`.
6. Their primitive counts are 2,728, 2,678, and 659 respectively.
7. Full XYZ extents remain UNKNOWN for the global candidates.
8. TEX0 signature `0x4000000000000000` is associated with the listed large candidates; semantic texture identity is not claimed.
9. The 2,730 and 2,680 strip signatures are approximately stable across dumps.
10. No candidate is confidently identified as character geometry.
11. Section5 cannot be inferred.
12. `0x0033` cannot be inferred.

