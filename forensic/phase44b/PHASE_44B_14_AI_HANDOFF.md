# PHASE 44B.14 — AI handoff

Two independent raw samples from `190004`, VSync 0, record 20 passed validation:

* A: stream offset 1376, `NLOOP=8`, `NREG=3`, 25 qwords.
* B: stream offset 1776, `NLOOP=10`, `NREG=3`, 31 qwords.
* Both: `PACKED`, `PRE=1`, `REGS=0x2,0x1,0x4`.
* Both execute `STQ → RGBA → XYZF2` per loop; PRIM is supplied by the tag's `PRE` field.
* A first XYZF2 raw fields: X=0xA530, Y=0x883B, Z=0x001F1E, F=0xFF.
* Tag PRIM `0x23C`: type 4 / TRIANGLESTRIP, IIP=1, TME=1, FGE=1, ABE=0, AA1=0, FST=0, CTXT=1, FIX=0.

The qword CSVs are the authoritative raw evidence. Do not treat the GIF-tag PRIM field (`0x23C`) as a draw call. There is no packed PRIM payload in these samples. Primitive assembly and batch boundaries remain the next phase, and `Section5`/`0x0033` remain UNKNOWN.
