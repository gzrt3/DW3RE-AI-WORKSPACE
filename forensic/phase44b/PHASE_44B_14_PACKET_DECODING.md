# PHASE 44B.14 — Packet decoding

## Samples

Both samples come from dump `190004`, VSync 0, GSDump record 20. The record payload begins at file offset `5,433,214`; sample A is at record-relative offset 80 and sample B at 480.

| Sample | GIF stream offset | NLOOP | EOP | PRE | GIF-tag PRIM | FLG | NREG | REGS | Expected qwords | Observed |
|---|---:|---:|---:|---:|---:|---:|---:|---|---:|---:|
| A | 1,376 | 8 | 0 | 1 | `0x23C` / 572 | 0 / PACKED | 3 | `0x2,0x1,0x4` | 25 | 25 |
| B | 1,776 | 10 | 0 | 1 | `0x23C` / 572 | 0 / PACKED | 3 | `0x2,0x1,0x4` | 31 | 31 |

Formula: `1 + NLOOP × NREG`; therefore A is `1 + 8×3 = 25`, B is `1 + 10×3 = 31`. No endian conversion or byte reordering is required for the little-endian qwords shown in the CSVs.

The register sequence is unambiguous: `0x02` (`STQ`), `0x01` (`RGBA`), `0x04` (`XYZF2`). Each loop repeats that sequence. The PRIM value is supplied by the GIF tag because `PRE=1`; there is no standalone `PRIM` register slot in this packet.

## PRIM state supplied by the GIF tag

There is no packed `GIF_REG_PRIM` payload in these samples. Because `PRE=1`, the tag's 11-bit `PRIM` field supplies the active GS PRIM state before the packed loops. For sample A and B it is `0x23C` / 572. Using the GS PRIM bitfield:

| Field | Bits | Raw value | Decoded |
|---|---:|---:|---:|
| PRIM | 0–2 | 4 | TRIANGLESTRIP |
| IIP | 3 | 1 | 1 |
| TME | 4 | 1 | 1 |
| FGE | 5 | 1 | 1 |
| ABE | 6 | 0 | 0 |
| AA1 | 7 | 0 | 0 |
| FST | 8 | 0 | 0 |
| CTXT | 9 | 1 | 1 |
| FIX | 10 | 0 | 0 |

The tag's `PRE=1` and PRIM `0x23C` are retained as the state that precedes the packed loops. This is GS state, not a draw call.

## XYZF2 payload

In sample A, the first `XYZF2` payload is qword 3:

`raw128 = 0x00000FF00001F1E90000883B0000A530`

The field layout is the packed GS XYZF2 layout: X bits 0–15, Y bits 32–47, Z bits 68–91, F bits 100–107. Decoded raw fields:

| Field | Bits | Raw integer |
|---|---:|---:|
| X | 0–15 | `0xA530` = 42288 |
| Y | 32–47 | `0x883B` = 34875 |
| Z | 68–91 | `0x001F1E` = 7966 |
| F | 100–107 | `0xFF` = 255 |

No coordinate scaling is applied. These are raw GS coordinate fields. A screen-coordinate conversion is intentionally not asserted here.

## Execution order

For sample A the first loop is:

`STQ(qword 1) → RGBA(qword 2) → XYZF2(qword 3)` with tag PRIM preloaded by `PRE=1`.

The same three-register sequence repeats for all eight loops. Sample B repeats the same sequence for ten loops. Therefore the selected packets are real `PACKED` packets containing `XYZF2` and a tag-supplied PRIM state, but they do not by themselves establish a primitive emission or draw batch.
