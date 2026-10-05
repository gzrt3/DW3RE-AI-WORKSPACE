# Native graphics initialization checkpoint

The Release run graphics_init_015/native-005 passes missing180384, GParam19852C,
VBLANK1A4CC0, GsSetCrt1A4420 and allocator tail234444. It stops at missing
syscall wrapper1A4500 from199FC0, RA199FC8, cause2 and handler2343B8.
Input integrity MATCH; no native game image, title, movie or battle.
Both subsequent host VSync probes reproduce this barrier. All eight final gates
remain open. The changed source is uncommitted and auxiliary work stays paused.

## Repairs

Recovered graphics and VBLANK intervals retain original words, ABI widths,
signed64 branches, return delays and conflict guards. Existing1A4CF0 ownership
is preserved. Runtime64-bit memory routes through its owner; INTC status latches
and write-one-to-clear behavior release the original poll on scheduled VBLANK.

GsSetCrt's four original words dispatch numeric syscall2 and return normally.
HLE no longer fabricates PMODE.EN1, and scalar v0 writes preserve its upper64.
The seven allocator-tail words234444..234460 preserve the JAL delay,64-bit
zero return, saved RA and JR stack delay. Original generated sources stay intact.

## Evidence and limits

Evidence root: `artifacts/native_pipeline_20261005/graphics_init_015`.
Debug/Release contract012 PASS:15 memory routing cases,3 VIF64 aliases,
4 CRT wrappers,4 GParam returns,8 allocator scenarios/16 ABI boundaries,
42 caller-only scenarios/322 full GPR128+RAM boundary comparisons,15 INTC
cases and poll released at scheduled tick1. External callees are deliberately
excluded by the caller harness; it is not independent PCSX2 lockstep.
Registration conflicts and v0 upper-lane failures007/009/010 are retained.
Attempt008 used the wrong executable path; it is not a successful test.

Computer Use observed an isolated PCSX2 debugger. Six actual original
checkpoints were saved: entry100008, graphics180384, VBLANK1A4CC0,
CRT1A4420/return180448 and allocator234444. Full GPR128, RAM, raw savestates,
input hashes and screenshots remain local. Selected original PCs/code match.
The session exited1; no allocator-return checkpoint exists.

CRT reference a0=1,a1=2,a2=1 keeps PMODE0 and returns v0=0 with upper64
0400000002000000 preserved. It also writes video mode registers and clobbers
at/v1/a0..t1. Native HLE does not yet reproduce all those registers/clobbers.
Full CRT timing/behavior and all memory widths are unverified.

## Next work and community references

Verify/register original AddIntcHandler wrapper1A4500 and return1A4508; words
24030010,0000000C,03E00008,00000000 are identified from XL. The existing numeric
dispatcher owns real registration; test IRQ lifecycle and stack/GP ownership.
Exact original insertion ordering and optional argument semantics remain open.

The supplied PNACH text has129 lines/50 profiles:47 profiles/123 lines are
version-bound candidates; three profiles/six lines are quarantined (merged-only
executable identity and XL horse destination-register mismatch). Ten Message
Box extended writes are bytes; preserve full original-word guards and raw text.
Instruction mods cannot become effective simply by writing guest RAM when
static C++ still executes the original operation. Preserve the user's3F40
widescreen variant separately from the earlier3F60 variant.

The eight supplied modding files remain originals/reference material. Their
safe import/schema and native optional-profile integration are pending.
Generated no-interlace/widescreen candidates are not applied. No optional cheat,
movie suppression or modified gameplay replaces the unpatched acceptance run.
