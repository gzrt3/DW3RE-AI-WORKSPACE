# Color return and original DMA comparison

Cycle023 native Release builds successfully, passes1B7F84 and stops at missing
EE1B1004 after WaitSema. Input integrity MATCH. No native image, title, movie
or battle has been demonstrated; all eight final acceptance criteria remain open.

The original two-word return stores all64 bits of v1 at gp-0x77F0. The recovered
owner preserves the captured RA, aliases and delay-slot exception state. A new
test failed because Store64 omitted BadVAddr; the runtime now records the fault
address before its existing exception path. Debug/Release each pass24 selected
opcode RAM/GPR128 comparisons, nine owner/wrap cases,14 delay faults, two original
word guards, one mapping conflict and prior graphics/IRQ regressions.

Independent PCSX2 DMA replay exposed two real differences: terminal MADR stayed0
instead of01FFFB90, and FQC stayed2 instead of0. Pinned PCSX2v2.8.2 Gif.cpp/Hw.cpp
support the repair. The native chain updates its final payload pointer and clears
FIFO occupancy after draining. Masked packets retain occupancy across timer
advancement and drain on unmask. Preserve initial failures and fixture correction.

Four captured intervals now match in Debug and Release (eight runs):
19A510→180490,1B8040→1804A4,1B7F84→180328 and19AA4C→1B7F0C. All32 GPR128,
10 decoded integer/control fields and all32MB RAM match. The DMA pair additionally
matches12 explicit MMIO words; its actual native32-byte GIF payload is preserved
and forwarded to GS. Nine Python tooling tests pass. This is scoped checkpoint
parity, not timing, rendered output or complete PS2 hardware equivalence.

Computer Use operated the restored original and captured color entry/return and
the next1B1004 entry. The separate experience session remains available. The first
new CLI attempt rejected a forward-slash ISO path despite filesystem existence;
the native-separator attempt restored the checkpoint successfully. Failed launch
logs remain. PCSX2 warned MTVU was enabled; VU/GS state stability is not certified.

The user-supplied log is retained byte-for-byte with SHA256
4d3b5d8369c89eb5068e4085eda5a90aebbab3b28975de5eef28d2f598f56773.
It records XL C22D5152/SLUS20617, eight module requests, XL→DW3→XL disc changes,
and a five-bank stream buffer (32768 bytes each). MCMAN/MCSERV return2 while the
other listed module returns are0. Native original-module callbacks currently
log SIO2MAN and MODMSIN; absence of callbacks for HLE modules is not evidence of
missing modules. Bootstrap IDs differ and must not be hardcoded to the reference.
Its50 TLB warnings and three COP2 warnings are research leads, not proven native
defects. Found patches in a log does not prove which patches were applied.

Reproduction and exact hashes: evidence/native_color_dma_parity_20261005.json,
local color_return_023/validation-002.ps1 and run_replays.py; use fresh evidence
directories. DMA details: dma_submit_022/original-dma-replay-001/repair-summary-002.json.
Next: recover1B1004 and external call/lifecycle boundaries from original words,
starting with the newly captured checkpoint; continue native boot to movies and
Press Start. Do not infer game completion from these passing comparisons.

Incremental backup destination: D:/Backup/DWProject/color-dma-20261005-023.
Its verification.json must say VERIFIED before treating the copy as complete.
