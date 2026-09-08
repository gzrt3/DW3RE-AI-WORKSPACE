# PHASE 44B.16 — AI handoff

The continuous GIF consumer now supports conservative geometry continuity analysis. Effective state/topology changes during active vertex emission create candidate boundaries; PRIM writes alone do not.

VSync 0 candidate results:

* `190004`: 222 candidate segments, 50,955 position submissions.
* `190008`: 240 candidate segments, 61,399 position submissions.
* Largest `190004` candidates: 2,730/2,728 and 2,680/2,678 triangle-strip vertices/primitives; 1,980/659 triangle-list vertices/primitives.
* 2,730 and 2,680 strip signatures recur in `190008`.

Treat all candidate groups as non-definitive. Per-candidate XYZ extents and complete framebuffer/texture-upload separation remain incomplete. No character, Section5, or `0x0033` attribution is allowed.

Next experiment: replay one large candidate against the screenshot while separating texture uploads and retaining a verified raw XYZ ledger for that candidate.

