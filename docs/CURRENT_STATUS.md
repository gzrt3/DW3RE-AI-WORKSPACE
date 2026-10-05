# Current verified state

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
The ongoing backup has verified48000/268654 files with zero errors at the latest
observation; it must finish source/destination hashing before cleanup.
Original C trees and external junction targets remain preserved.

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
