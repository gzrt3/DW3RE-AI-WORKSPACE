# Observed callback and source candidate — 2026-10-10

Status: **PARTIAL; candidate not promoted; no playable release**.

The observed indirect call from `0x001A73C0` to `0x00235CC0`, with return address
`0x001A73C8`, was missing from the discovered body map. A numeric-only, read-only
Ghidra inspection identifies a contiguous five-instruction leaf ending exclusively
at `0x00235CD4`: two stores, one return and its delay slot. The following padding
word is excluded. Ghidra and the independent local ELF classifier agree.

The original map is preserved. The candidate adds this observed root and preserves
the known discontiguous body ranges. It does not generate the 34 unmapped static
JAL targets or treat executable-segment padding as code. Five input identities are
pinned: ELF, map, observed log, Ghidra report and producer configuration.

PS2Recomp generated all 3,519 units and 33,099 global entries through its existing
emitter. All 17,176 identified return sites are registered. There are no annotation
identity disagreements, missing nonzero delay slots, truncated requested bodies,
unhandled instructions or generated stubs in this census. Two independent runs
produce the same 3,522 output files by hash. Identity and emission coverage remain
separate from semantic correctness.

A source candidate rebuilds Debug and Release for the generated corpus, EE runtime, IOP, SDL2, raylib
and GLFW. Its recipe imports zero historical game/runtime objects. FFmpeg remains
an identified external binary dependency. Source projects, compiled input hashes,
binary hashes and link maps are retained privately; the linked registry and root
symbol are checked. No fourth callback adapter is added.

An independent controlled test copies PCSX2's public `ADDIU` and `SW`
implementations unchanged from pinned commit
`fd9d310ccbb6b8b62c976da8886a3c8fd3a10ff3`. Across 128 initialized states it compares
full 128-bit GPRs, all 32 MiB RAM and the return PC, including the reviewed delay
slot. Memory and branch harness shims are explicit. This is instruction-level
evidence: no live original callback, native store ordering, MMIO parity, timing or
whole-game equivalence is claimed. Both configurations pass with zero mismatches.

The rebuilt Debug and Release observers stop at their configured deadline after 30 seconds,
with zero GS presentations and no missing-target event. Its last published CPU
context is `PC 0x001AD660`, `RA 0x001AD674`; that context alone does not prove the
active instruction or that the callback was reached. Both scheduler snapshots
have one thread marked Running, no wait reason, and no semaphore waiters. The cause
of the lack of progress remains unknown. The candidate has not reproduced the
historical boot frontier and cannot replace the preserved working base. Exit code
2 is the intentional observer deadline result; the generic probe's
`PROCESS_FAILED` label must not be interpreted as a demonstrated crash.

Live PCSX2 effect capture remains pending. Full debugger screenshots were rejected
by automatic approval review because they could expose private memory or
disassembly; filtered controls alone did not prove screenshot safety. No image
workaround or private screenshot publication is used.

The FINAL KIT files, original map, historical candidates, nineteen GS registers
and XL→DW3→XL evidence remain preserved by hash. Rollback selects the unchanged
previous binary. The eight product gates remain open. Graphics production and
MixJoy consumer/causal-write validation are unchanged.

Portable discovery commands and negative tests are in
[research/discovery](../research/discovery/README.md). Numeric verification results
are recorded in the additive [candidate ledger](evidence/V3_1_OBSERVED_CANDIDATE.json).
