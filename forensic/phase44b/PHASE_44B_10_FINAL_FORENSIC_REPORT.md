# PHASE 44B.10 — Final forensic report

## Verdict

**PHASE_44B_10: PARTIAL**  
**GSDUMP_DECODING: CONFIRMED**  
**GS_GEOMETRY_OBSERVABLE: PARTIAL**  
**ORIGINAL_COMPLETE_BODY_REACHES_GS: UNKNOWN**  
**SECTION5_SELECTION: UNKNOWN**  
**0033_ROUTING: UNKNOWN**  
**CODEX_CONTINUATION_REQUIRED: YES**

## Evidence

The two original PCSX2 1.6.0 Zstandard dumps decompress cleanly as complete streams. Their headers identify serial `SLUS-20617`, CRC `0xC22D5152`, state version 8, 640×480 screenshots, and a 4,194,752-byte GS state. Both contain only path-3 transfer records after the initial state, plus four VSync and four private-register snapshots; no ReadFIFO2 records are present.

`190004` has 12,905 transfer records / 12,136,768 transfer bytes. `190008` has 15,788 / 14,314,816. The first decompressed difference is at offset 156,215. Headers and private-register blocks are equal; the GS state region differs. A bounded GIF parser observes raw GIF-like tags and PRE-bearing submissions, but has transfer-boundary cases and does not yet provide a replay-grade draw/vertex ledger.

## Can the dumps prove that the complete body reached the original GS?

**No. The result is UNKNOWN, not falsified.** The dumps prove that substantial GS transfer traffic reached the captured PCSX2 GS path and that the capture contains enough raw material for GS-side reconstruction. They do not identify which submitted vertices belong to a complete character body, do not prove the Section5 selection, and do not expose the EE/VIF/VU1 producer chain. The screenshots are corroborating scene outputs, not a complete-body provenance proof.

## Observability matrix

| Layer | Status | Reason |
|---|---|---|
| Section0 | NOT_OBSERVABLE | Not a labelled GSDump record. |
| Section5 | NOT_OBSERVABLE | Selection/consumer identity is absent. |
| EE matrix producer | NOT_OBSERVABLE | EE structures are not included. |
| DMA | PARTIAL | Transfer records expose captured path-3 payloads, not full EE DMA provenance. |
| VIF | NOT_OBSERVABLE | No VIF instruction stream is present. |
| VU1 | PARTIAL | Its downstream GIF output can be studied, but VU1 memory/program/input cannot be attributed. |
| GS | OBSERVABLE | GS state, private-register snapshots, and transfer payloads are present. |
| Final rasterization | PARTIAL | Screenshots exist; exact draw-to-pixel attribution is not established. |

## Strongest positive evidence

The strongest evidence is the clean, fully consumed GSDump record stream with thousands of path-3 transfers and repeated GS/VSync state boundaries. This establishes GS-side activity, not complete-character identity.

## Primary remaining unknown

Whether a replay-grade decode of the path-3 payloads yields a complete, attributable character draw sequence rather than environment/UI/texture/background traffic.

## Next forensic experiment

Build a read-only PCSX2-1.6-compatible replay parser for these decompressed copies that preserves every transfer boundary, decodes GIF tags and A+D register writes, and emits draw batches with PRIM/XYZ2/UV-ST/RGBAQ/TEX0/FRAME/ZBUF/SCISSOR/XYOFFSET attribution; validate it against the paired PNGs without changing production code.

