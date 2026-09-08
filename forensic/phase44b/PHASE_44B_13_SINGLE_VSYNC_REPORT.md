# PHASE 44B.13 — Single-VSync GS consumer report

## Verdict

**PHASE_44B_13: PARTIAL**  
**GS_REPLAY: PARTIAL**  
**PRIMITIVE_ASSEMBLY: UNKNOWN**  
**DRAW_BATCHES: UNKNOWN**  
**LARGE_GEOMETRY: CONFIRMED**  
**CHARACTER_GEOMETRY: UNKNOWN**  
**SECTION5_SELECTION: UNKNOWN**  
**0033_ATTRIBUTION: UNKNOWN**  
**PRODUCTION_CHANGES: 0**

## Selected input

Dump `190004`, VSync interval 0, records 1–3226, continuous path-3 stream of 3,034,048 bytes.

## Direct GS evidence

The stream was consumed with persistent GIF state. It contains 6,466 GIF tags, 6,652 A+D writes, 49,957 `XYZF2` submissions and 2 `XYZ2` submissions. `PRIM` was observed 51,070 times. `PRIM` is state and is not a primitive/draw count.

## Gate result

The container/GIF/vertex stage is valid. The primitive-assembly gate is not passed. The current state transition stream does not yet provide defensible emission boundaries and topology accounting. Heuristic grouping by PRIM/state would create false batches, so no actual primitive count, primitive-type count, or per-batch XYZ bounds is promoted.

The apparent count of 49,959 position submissions is reported only as a total vertex-register observation (`49,957 XYZF2 + 2 XYZ2`), not as a batch or primitive count.

## Sanity checks

* PRIM count versus draw count: passed — they are kept separate.
* No silent geometry discard: not established for primitive assembly.
* No duplication: not established for primitive assembly.
* Deterministic vertex ordering: stream order is deterministic; topology order is not yet validated.
* Strip/fan/sprite rules: not promoted.

## Observability

| Layer | Status |
|---|---|
| GIF | CONFIRMED |
| A+D | CONFIRMED |
| GS state | PARTIAL |
| Vertex emission | CONFIRMED |
| Primitive assembly | UNKNOWN |
| Draw batches | UNKNOWN |
| Section0 | NOT_OBSERVABLE_FROM_GSDUMP |
| Section5 | NOT_OBSERVABLE_FROM_GSDUMP |
| EE matrix | NOT_OBSERVABLE_FROM_GSDUMP |
| DMA/VIF/VU1 | NOT_OBSERVABLE_FROM_GSDUMP |

