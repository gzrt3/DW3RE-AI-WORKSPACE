# PHASE 44B.13 — AI handoff

The continuous GIF and A+D stages remain valid. The first VSync of `190004` contains 49,957 XYZF2 and 2 XYZ2 position submissions, but primitive assembly was not promoted.

Rules to preserve:

* PRIM is GS state, never a draw count.
* A primitive requires topology-specific vertex sufficiency and deterministic order.
* A batch requires a defensible emission/state boundary.
* Do not classify large geometry as character, weapon, or accessory.
* Do not infer Section5 or `0x0033` from GS output.

The next forensic action is a packet-level semantic validation of one packed sequence containing `PRIM` and `XYZF2`, including raw XYZF2 field layout and the active PRIM bitfield. Do not process dump B until this passes.

