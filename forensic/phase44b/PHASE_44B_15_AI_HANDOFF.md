# PHASE 44B.15 — AI handoff

Primitive assembly is proven on two independent real packets from `190004`, VSync 0.

* Sample A: 8 vertices → 6 triangle-strip primitives.
* Sample B: 10 vertices → 8 triangle-strip primitives.
* Winding alternates: `(v0,v1,v2)`, then `(v2,v1,v3)`, etc.
* XYZF2 raw fields, RGBA, STQ and source qword offsets are preserved.
* No restart/discontinuity was observed inside either packet.

Do not count PRIM writes as draws. Do not identify these packets as characters, weapons, resources, Section5 selections, or `0x0033` output. The next task is conservative continuous-stream application with explicit EOP/state boundaries and a separate batch-candidate ledger.

