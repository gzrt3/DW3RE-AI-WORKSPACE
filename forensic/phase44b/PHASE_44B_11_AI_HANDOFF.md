# PHASE 44B.11 — AI handoff

The replay gate succeeded on dump `190004`, VSync interval 0. The parser must retain the following rules:

* GSDump header and record parsing are confirmed.
* Only path-3 payloads enter the GIF stream.
* GIF parsing is continuous across records, even though no tag/payload crossing occurred in the selected interval.
* GIF `REGLIST` payload size is `NLOOP * ceil(NREG/2)` qwords.
* Zero-loop GIF tags are accepted as structural tags and consume only their 16-byte tag.
* A+D writes use the second 64-bit word's low byte as the GS register address and preserve the first 64-bit word as the value.
* `XYZF2` and `XYZ2` remain separate metrics.
* No Section0 opcode, Section5 selection, EE matrix producer, VIF stream, or VU1 memory provenance is available.
* `0x0033 -> L1/L2` remains UNKNOWN.

Observed first-gate metrics: 6,466 GIF tags; 6,652 A+D writes; 51,069 PRIM operations; 49,957 XYZF2 operations; 0 XYZ2; 0 UV/ST; 51 TEX0; 0 parser errors.

Next action: process the remaining VSync intervals of `190004`, then process `190008`, retaining raw offsets and emitting a complete batch ledger before attempting any character correlation.

