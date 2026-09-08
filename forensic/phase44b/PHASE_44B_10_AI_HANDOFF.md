# PHASE 44B.10 — AI handoff

## Files analyzed

Originals:

* `D:\Juegos\Playstation\Playstation 2\PS2 Tools\PCSX2 1.6.0\snaps\Dynasty Warriors 3 - Xtreme Legends_SLUS-20617_20260905190004.gs.zst`
* `D:\Juegos\Playstation\Playstation 2\PS2 Tools\PCSX2 1.6.0\snaps\Dynasty Warriors 3 - Xtreme Legends_SLUS-20617_20260905190008.gs.zst`

Temporary decompressed copies used:

* `C:\Users\jdpp2\AppData\Local\Temp\dw3re_gs44b10\Dynasty Warriors 3 - Xtreme Legends_SLUS-20617_20260905190004.gs`
* `C:\Users\jdpp2\AppData\Local\Temp\dw3re_gs44b10\Dynasty Warriors 3 - Xtreme Legends_SLUS-20617_20260905190008.gs`

## Carry-forward facts

* Container/record parsing is confirmed.
* Both dumps are serial `SLUS-20617`, CRC `0xC22D5152`, state version 8.
* Transfer path is `3` for every observed transfer record.
* Counts are 12,905 vs 15,788 transfer records.
* Counts are 4 VSync and 4 private-register snapshots in each; no ReadFIFO2.
* GIF-tag counts in the reports are bounded-parser candidates, not replay-grade semantic counts.
* Do not claim Section0, Section5, EE matrix, DMA provenance, VIF, or VU1 memory visibility from these files.
* Do not modify PCSX2, DW3 originals, DW3RE runtime, renderer, Section0, or Section5.

## Required continuation

Implement only an offline parser/tool in a temporary or forensic location. Preserve record boundaries, then decode GIF tags and A+D register writes. The first acceptance target is an auditable ledger of PRIM, XYZ2/XYZF2, UV/ST, RGBAQ, TEX0, FRAME, ZBUF, SCISSOR, XYOFFSET, BITBLTBUF/TRX* and image-transfer regions. Only after that should draw batches be compared between `190004` and `190008` and correlated with the screenshots.

## Final state

`PHASE_44B_10=PARTIAL`; `ORIGINAL_COMPLETE_BODY_REACHES_GS=UNKNOWN`; `PRIMARY_REMAINING_UNKNOWN=attributable complete character draw sequence`; `NEXT_FORENSIC_EXPERIMENT=read-only replay-grade GIF/A+D parser`.
