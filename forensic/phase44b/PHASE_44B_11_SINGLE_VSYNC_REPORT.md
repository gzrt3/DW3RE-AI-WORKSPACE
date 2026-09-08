# PHASE 44B.11 — Single-VSync replay-grade gate

## Result

**PHASE_44B_11: PASS**  
**GSDUMP_REPLAY: CONFIRMED**  
**GIF_CONTINUITY: CONFIRMED**  
**A+D_DECODING: CONFIRMED**  
**GS_DRAW_LEDGER: CONFIRMED**  
**GS_GEOMETRY: OBSERVABLE**

## Selection

* Dump: `190004`
* VSync interval: `0` (stream from post-initial-state through the first VSync record)
* Record range: records `1–3226`; 3,224 path-3 transfer records
* Continuous GIF byte range: `0–3,034,047` (3,034,048 bytes)

## Decoded evidence

| Metric | Result |
|---|---:|
| GIF tags | 6,466 |
| zero-loop/end tags accepted | 7 |
| A+D writes | 6,652 |
| `PRIM` operations | 51,069 |
| `XYZF2` operations | 49,957 |
| `XYZ2` operations | 0 |
| `UV/ST` operations | 0 |
| `TEX0` operations | 51 |
| PRE-bearing tags | 3,200 |
| draw-batch candidates | 3,200 |
| parser errors | 0 |
| unknown packets | 0 |
| boundary-crossing events | 0 |

The ledger includes reconstructed GIF tags and A+D register operations. The first records demonstrate A+D writes to `FRAME_1`, `SCISSOR_2`, `TEX1_2`, `CLAMP_2`, `ALPHA_2`, and `TEST_2`. The stream also contains direct `PRIM` and `XYZF2` submissions.

No `XYZ2` or `UV/ST` operations occur in this selected interval. `XYZF2` is reported separately and is not relabelled as `XYZ2`.

## Boundary test

No GIF tag or payload crossed a path-3 record boundary in the selected VSync interval. This is a valid result; no crossing event is manufactured. Continuity was still preserved by the parser and record order was retained.

## Character conclusion

This proves that GS geometry commands were present in the original capture, but does not identify them as a complete character body. No Section0/Section5/EE/VIF/VU1 provenance is present, and no upstream attribution to `0x0033` is made.

