# PHASE 44B.10 — GSDump format

## Recovery status

**GSDUMP_DECODING: CONFIRMED at container/record level; PARTIAL at full GIF semantic level.**

Temporary decompression was performed from the two original `.gs.zst` files. Originals were not changed.

## Confirmed container

Both files begin with Zstandard magic `28 B5 2F FD` when compressed. The decompressed stream begins with `0xFFFFFFFF`, followed by a little-endian header-size field `0x0012C02E` (1,228,846 bytes).

The header fields are:

| Field | Value |
|---|---:|
| state version | 8 |
| state size | 4,194,752 bytes |
| serial offset | 36 |
| serial size | 10 |
| CRC | `0xC22D5152` |
| screenshot | 640 × 480 |
| screenshot size | 1,228,800 bytes |
| serial | `SLUS-20617` |

After the header payload, the stream contains the GS state and an 8,192-byte private-register block. Records then use the documented IDs:

* `0`: transfer — path byte, 32-bit byte size, payload.
* `1`: VSync — field byte.
* `2`: ReadFIFO2 — 32-bit size. None observed.
* `3`: GS private-register snapshot — 8,192 bytes.

## Confirmed records

| Dump | Transfer records | Transfer payload bytes | VSync | FIFO | Reg snapshots | Residual bytes |
|---|---:|---:|---:|---:|---:|---:|
| `190004` | 12,905 | 12,136,768 | 4 | 0 | 4 | 0 |
| `190008` | 15,788 | 14,314,816 | 4 | 0 | 4 | 0 |

All observed transfer records use path index `3`.

## GS evidence

The first transfer payload begins with a structurally valid GIF tag and subsequent payloads contain GIF-like packed data. A bounded parser found 25,342 and 30,756 GIF-tag candidates, with 12,640 and 15,256 tags carrying `PRE=1`. These are **INFERRED FROM ARTIFACT** candidates: the parser encounters 299/368 transfer-boundary cases that require a complete PCSX2-1.6 replay parser to classify without ambiguity.

The dumps therefore contain GS/GIF submission evidence, including raw transfer payloads and the GS state snapshot. The container does not contain Section0, Section5, EE-side producer structures, VIF instructions, or VU1 program/memory provenance as separately labelled records.

## Scope conclusion

The format is sufficient to inspect the original game's GS-side stream and compare transfer volume/state. It is not, by itself, a proof of the source object identity or of the complete character assembly path before GIF/GS.

