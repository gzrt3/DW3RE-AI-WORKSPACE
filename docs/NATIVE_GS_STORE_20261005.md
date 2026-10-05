# Original graphics returns and GS32 alias repair

Native cycle021 passes1B8040 and continues to missing EE0x0019AA4C in the
GIF DMA submission path. Full incremental Release build PASS; native probe
exits4294967295 with input integrity MATCH. No native movie, title or battle
has been demonstrated. All eight final acceptance criteria remain open.

The recovered JR RA / SW v1,0x40(a0) captures the return before its delay slot,
uses the runtime memory owner and preserves exception PC/EPC/BD on a fault.
Only1B8040 is registered, guarded by both original words and existing owner.
Tests exposed GS32 alias writes bypassing the register owner; read32/write32
now normalize the address before selecting GS registers, like the64-bit path.
The failed test and evidence-script002 path typo are retained locally.

Debug and Release each pass48 original-opcode RAM comparisons, one32-bit address
wrap,12 memory owner cases, three GS dword/CSR alias groups,24 delay-slot faults,
two word guards, one owner conflict and prior graphics/IRQ regressions.

Computer Use operated two isolated original PCSX2 sessions. Real debugger
entry/return pairs19A510→180490 and1B8040→1804A4 were captured through the
owned read/save-only PINE channel. A new native replay harness passes both
pairs in Debug and Release: all32 GPR128,10 decoded control fields and every
byte of32MB EE RAM match, with zero divergences. This does not restore or
compare timing, FPU/VU, GS/GIF, SPU2, IOP, DMA devices, caches or TLB state.
The actual store pair already contains its written value; separate contract
tests establish the store action with differing input values.

The experience session progressed from BIOS to the original Beginner Mode
prompt. Original disc swapping remains unverified. Refresh UI state after
human input and resume the authorized comparison; an actual stop or denial
still stops affected tool input. Original playback is reference evidence only.

Reproduce with the saved validation-003.ps1 and the four replay launch/build
manifests, selecting NEW evidence output directories. See
evidence/native_gs_store_20261005.json and local gs_store_021/summary-001.json.
Next: restore19AA4C from the original15-word DMA submission interval, verify
branch-likely annulment and real DMA ownership, then continue authentic boot.
