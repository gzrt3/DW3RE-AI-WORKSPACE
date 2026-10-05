# Current verified state

Current cycle008:14 owned IOP continuation contracts PASS Debug/Release; full
Release buildPASS and3 native probes inputMATCH, still MODLOAD7/SIO2MAN with
no title. Four adviser queues integrated. Real GitHub review led to a reproduced
and repaired queue-overwrite bug. One real AWS Nova Pro review succeeded; its
incorrect claim was rejected. Budget history preserved, capUSD10,30 call grants
remaining. See ADVISER_POOL.md, NATIVE_IOP_CONTINUATIONS_20261005.md and
evidence/adviser_pool_20261005.json. Historical entries below remain preserved.

Native input component update: fate_native_input now implements the Windows
XInput1.4 backend, two fixed player assignments, polling/error handling,
deadzone conversion, focus/rumble and a candidate32-byte PS2SDK serializer.
Ten host contracts pass Debug/Release with /W4 /WX. The native read-only probe
reports1167/disconnected on all four indices. It is NOT connected to fate_game
or proven against original padRead/SIO2. Saves remain a design, not an integrated
single-file backend. See INPUT_AND_SINGLE_SAVE.md and native_input evidence.
The full native executable has not been rebuilt or run for this input component;
cycle007 remains the game baseline and all8 final gates remain open.

Audit after cycle007: current executable/ELF hashes, nine retained run files and
45 recorded source fingerprints match; no native behavior change or new run.
Original SIO2MAN metadata identifies2.5 (exports2.3), distinct from SDK3.17.
Play!'s persistent loader requests provide an additional architecture reference,
with documented ABI/result/residency differences from original MODLOAD1.6.
See audits/CURRENT_RECHECK_20261005.md. The subsequent user-requested input/save
research is in INPUT_AND_SINGLE_SAVE.md: common XInput provider and proposed
single SQLite save container preserving both games' original paths/payloads.
The real host XInput1.4 probe works; all four indices were disconnected.
Neither input nor that save container is integrated in gameplay. All8 gates open.

Latest update: cycle007, 2026-10-05 UTC. Release build and real native live
observation passed their scoped checks. The game remains blocked at MODLOAD1.6
export7 / IOP0x14374, now identified as the actual request for
cdrom0:\MODULES\SIO2MAN.IRX;1 with zero argument bytes. No GS image was produced.
The state-preserving SDL presenter is available with --live/--live-seconds;
Computer Use verified the real window and its clean close. This does not prove
title, video, Press Start or gameplay. The earlier hidden-window attempt is
preserved; the probe now preserves SDL visibility when live mode is requested.

Read BOOT_TO_PRESS_START_TRIAGE.md and audits/BOOT_WEB_AUDIT_20261005.md first.
Ten public source files were verified against pinned revisions. PS2SDK and
PCSX2 help reconstruct loader/SIO2 semantics; upstream PS2Recomp still contains
older false-completion behavior and must not replace this modified runtime.
Seven original movie candidates match mounted copies. Their execution and
transitions remain unverified. Native input is still a mock bridge.

Two presentation contracts pass Release (empty GS and known synthetic VRAM),
preserving prepared EE/IOP memory, registers and scheduler objects. Seven
missing-import contracts and eleven call-completion contracts pass Debug and
Release; probe12, bridge14 and pipeline8 tests pass. The new observation logs
registers and bounded hexadecimal filenames without accepting missing imports.
All eight final criteria remain open. Next: original MODLOAD7 request/worker
ownership and resumable startup of the identified SIO2MAN, then measured EE
continuations, original video loops and authentic Press Start/input/audio.

Full migration backup VERIFIED:268654 files,65702318359 bytes, zero errors and
zero deletions. External junction targets remain separately preserved.
Current source/build in D; C:/Games/DW remains the reserved final destination.

## Historical cycle006 baseline

Latest native probe: cycle006, 2026-10-05 UTC, built and run from the D Git
checkout. Runtime and full Release build passed. The bounded process timed out
after10seconds with input integrity MATCH at **MODLOAD1.6 export7, PC0x14374**.
MODLOAD15 is implemented and no longer logged as missing. The explicit import
barrier suppresses the failed RPC reply; this run does not reach the historical
EE0x0019A6C4 stop, which remains unresolved. No fabricated completion is used.

Synchronous IOP calls now reject a yield, exhausted instruction budget or
out-of-RAM stop as a function return. Eight regressions reproduced false
completion before repair; eleven contracts pass Debug/Release after repair,
along with four existing focused suites. Eight pipeline tests pass. cycle006
integrates the repair and has the same MODLOAD7 stop and stderr hash as cycle005.
See NATIVE_CALL_COMPLETION_20261005.md and evidence/native_call_completion_20261005.json.

Active source: D:/DW3-GitHub-Publish-20261004. Final product: C:/Games/DW (NVMe),
reserved but not released. Backup: D:/Backup/DWProject; see STORAGE_LAYOUT.md.
The then-running backup later completed as recorded above. Original C trees and
external junction targets remain preserved; nothing was deleted in cycle007.

The previous23CB40 and1A7014 barriers are passed. IOMAN1.4 devctl0x4391 now
returns the shared CDVD event; the actual run logged event3. String scan/return
and cache block continuations are bound to the identified original ELF words.
The cache lowering supports direct coherent RDRAM mappings only. Unsupported
mappings fail explicitly; cache tags, timing and TLB exceptions remain outside
its scope. See NATIVE_REPAIR_20261005.md for the exact limitations.

Boot continuation contracts pass Debug/Release. Two focused IOP import/version
suites per configuration pass under /W4 /WX; production IOP was rebuilt in both.
Ten native observer tests pass. Historical failed broad IOP strict builds are
preserved locally; the entire IOP test suite is not claimed to pass.

**0/8 final acceptance criteria verified.** No title screen, complete battle,
combined gameplay or full original parity has been demonstrated. Actual FILEIO
clear/wait/SIF notification lifecycle still requires independent state evidence.

All three adviser queues are integrated. Real ChatGPT and Microsoft Copilot
replies were collected and reviewed; incorrect claims were rejected. GitHub's
completed signed-branch review is retained and marked stale against D's distinct
published emitter. The unvalidated C emitter remains unpublished. ChatGPT showed
a usage limit after answering; no retry or upgrade was attempted. Provider quotas
and Azure/AWS limits remain separate and unchanged. See COPILOT_PIPELINE.md and
audits/THREE_ADVISER_REVIEW_20261005.md.

Six missing-import regressions and three MODLOAD contracts pass Debug/Release.
Original MODLOAD15 instruction replay through the local IOP core agrees for2077
synthetic paths per configuration. This is a return/selected-ABI comparison,
not an independent PCSX2 trace. The cycle005 runtime source matched the tested C
text after newline normalization; cycle006 adds the documented D-only repair.
cycle005 is an incremental integration build,
not a fresh clean rebuild. See evidence/native_import_barrier_20261005.json.
Original assets, raw logs, provider ledgers and personal data remain outside Git.

The current user-authorized product target is explicit in NATIVE_PC_OBJECTIVE.md:
a standalone native Windows x64 port, both games complete, no disc swapping,
with verified modding and end-to-end release evidence. No acceptance gate closed.
