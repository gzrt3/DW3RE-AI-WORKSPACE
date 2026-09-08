# PHASE 44B.12 — AI handoff

The first VSync of `190004` is a fully consumed continuous path-3 stream of 3,034,048 bytes. Correct GIF parsing requires:

* PACKED payload: `NLOOP * NREG` qwords.
* REGLIST payload: `NLOOP * ceil(NREG/2)` qwords.
* IMAGE/IMAGE2 payload: `NLOOP` qwords.
* zero-loop structural GIF tags consume only 16 bytes.
* A+D uses the second 64-bit word's low byte as the register address.

Observed in this interval: 6,466 GIF tags, 6,652 A+D writes, 51,070 PRIM register observations, 49,957 XYZF2 submissions, 2 XYZ2 submissions, 0 UV/ST, and 378 TEX0 operations.

Do not call PRIM observations draw calls. Do not promote heuristic groups to batches. Do not infer character identity, Section5, or `0x0033` from GS output.

The next implementation target is a replay-faithful GS consumer that preserves full PRIM fields, consumes register payloads according to GIF mode, tracks state, and creates a batch only when vertex submissions and an emission boundary are defensible. Process dump B only after this single-interval result is stable.

