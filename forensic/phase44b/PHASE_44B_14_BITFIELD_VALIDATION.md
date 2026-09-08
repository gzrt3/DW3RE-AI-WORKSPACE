# PHASE 44B.14 — Bitfield validation

| Check | Result | Evidence |
|---|---|---|
| GIF tag qword count | PASS | A: 25; B: 31, matching `1+NLOOP×NREG`. |
| PRIM source | PASS | Tag PRIM `0x23C` with `PRE=1`; no standalone PRIM slot is present. |
| XYZF2 source qword | PASS | Register slot `0x04`, qword 3 of A's first loop. |
| Offset ambiguity | PASS | 16-byte qword offsets are explicit in both CSVs. |
| Endianness | PASS | Little-endian `u64`; repeated raw decode is deterministic. |
| Register ordering | PASS | `REGS=0x12,0x04,0x00` and repeated payload slots match. |
| Independent sample | PASS | B is a separate tag at stream offset 1776 with NLOOP 10. |
| Primitive assembly | NOT_ATTEMPTED | Explicitly out of scope. |

The samples validate raw GIF/PACKED extraction, tag-supplied PRIM state, and XYZF2 extraction. They do not validate topology execution or draw-batch assembly. No character or upstream routing claim follows.
