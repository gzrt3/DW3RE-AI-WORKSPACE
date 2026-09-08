# PHASE 44B.12 — PRIM semantics audit

**PHASE_44B_12: PARTIAL**  
**PRIM_SEMANTICS: PARTIAL**  
**XYZF2_GEOMETRY: CONFIRMED**

The first VSync of dump `190004` parses completely as a 3,034,048-byte continuous path-3 stream: 6,466 GIF tags, zero parser errors, and zero unconsumed bytes.

`PRIM` is a GS state register, not a draw counter. The 51,069/51,070 observations include repeated state writes inside packed/direct GIF operations. They must not be reported as draw calls.

Corrected packed/reglist addressing gives:

| Observation | Count | Status |
|---|---:|---|
| PRIM register observations | 51,070 | confirmed register observations |
| XYZF2 submissions | 49,957 | confirmed |
| XYZ2 submissions | 2 | confirmed |
| UV/ST submissions | 0 | confirmed not observed |
| TEX0 operations | 378 | confirmed |
| A+D writes | 6,652 | confirmed |

The one-count difference from the previous 51,069 value is a decoder-audit correction caused by distinguishing packed (`NREG` qwords) from reglist (`ceil(NREG/2)` qwords). It is not a draw count.

The PRIM low three bits encode primitive type; the remaining bits are GS state flags. A real batch requires vertex submissions plus a defensible packet/emission boundary. Naive grouping by PRIM/state changes produced heuristic groups and is rejected as evidence.

No character, weapon, resource identity, Section5 selection, or `0x0033` attribution is established. The `0x0033 -> L1/L2` hypothesis remains UNKNOWN.

