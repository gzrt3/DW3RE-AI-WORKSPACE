# Native pipeline — 2026-10-04 Sonora / 2026-10-05 UTC

Preserve the existing project. The old capture supervisor had no runnable tasks
and its recorded process was dead. Repeating that queue cannot repair the next
native failure. Continue with bounded build, observation and evidence-backed
repair cycles; retain the capture queue for independent comparisons.

## Native cycle

`tools/native_pipeline.py` builds the existing `fate_game` target, invokes the
bounded observer, and writes `pending-work.json`. Missing guest PCs and versioned
IOP imports become concrete investigations. Runner exit0 certifies no gameplay.
Check build ownership first: its lock coordinates other instances of this runner,
not arbitrary manual builds. After an interrupted controller, check descendant
build processes before resuming. A missing controller lock is insufficient.

```powershell
python tools/native_pipeline.py --build-dir out/host-barrier-20261003 --exe out/host-barrier-20261003/bin/Release/fate_game.exe --dump-root C:/DW3/sources/dumps/dw3xl_ps2 --elf C:/DW3/sources/dumps/dw3xl_ps2/SLUS_206.17 --iop-root data/iop --output artifacts/native_pipeline_20261004/cycle_001 --timeout 10
```

Cycle001 was launched once. Inspect its process identity and build log; never
repeat into the same evidence directory or overlap its active build. This runner
uses no paid provider, does not apply worker output or reset budgets. Provider
workers remain advisers; historical unknown liabilities require reconciliation.

## Reviewed recovery and verification

`tools/recover_continuation.py` extracts bounded candidates from preserved
translation, checks instruction annotations against the ELF, rejects external
gotos/partial blocks and records provenance. Matching comments do not prove C++
semantics: review and behavioral contracts are still mandatory.

The first candidate restores39 instructions at `0x001B0308..0x001B03A0` from
`FUN_0019b910_part43.cpp`; only five required resumes are registered after all39
words match RAM. Original generated sources remain unchanged. Signed BGEZ at
`0x001B0358` now reads the signed low64 lane, consistent with the independent
R5900 interpreter. Four signed branch emitter families were also edited locally;
the emitter's own build/test is pending. The old corpus is not globally repaired.

The new focused CMake option `FATE_BOOT_CONTINUATIONS_ONLY=ON` builds target
`boot_continuations_contract` against the separately built runtime. Override
`FATE_RUNTIME_BUILD_DIR` if that runtime is outside `tools/PS2Recomp/build`.
Evidence is in `artifacts/lockstep_20261004/next_native_barrier_audit_001`:
Debug002 and Release003 build/run exits0. Synthetic ABI, delay-slot and width
contracts pass; this is not a retail trace comparison. Recovery8, classification4
and native observer10 Python tests also pass.

Original IOMAN version0x104 export31 is devctl, not AddDrv. Original FILEIO
requests cdrom0 command0x4391; CDVDMAN obtains the shared interrupt event ID via
sceCdSC(-11). Route to the existing owner, validate output arguments and preserve
original FILEIO clear/wait/SIF80000013 lifecycle. Do not invent an event or force
bit0x10. Then recover the next measured EE barrier and continue title/menus.

## Publication, cleanup and coordination

Public GitHub main verified at `ce4b7b6faca25f141c225d0b16fa309c08f7dbe9`.
Clean publication build passed; its probe reproduced Release098's1B0308 stop,
inputMATCH. The new recovery/pipeline remain local pending reviewed publication.

Cleanup preserved verified D archives and original game assets. It removed
68,091 files,36,111,085,747 logical bytes, with no skips/errors. Observed C free
space increased29,918,011,392 bytes (27.86GiB). Evidence:
`artifacts/publication_20261004/cleanup_001.json` and the verified archive manifests.

Copilot checkout: `D:/DW3-GitHub-Publish-20261004`. Independent assignment:
renderer audit written only to `docs/audits/COPILOT_RENDERER_AUDIT.md`. Preserve
that report and avoid overlapping boot/runtime edits or staging unknown files.

All8 final acceptance criteria remain unverified. No title or battle observed.


## Connected Copilot advisers and completed native cycles — 2026-10-05 UTC

Native cycles001/002 completed their builds successfully. Both bounded probes
remain PROCESS_FAILED/inputMATCH at the newly measured missing PC0x0023CB40;
the old1B0308 barrier is passed. IOMAN31 version0x104 at0x29040 remains open.
No active native cycle/build remains at this checkpoint. Prior RUNNING notes
are historical. Next recover the identified23CB40 interval and original IOMAN
devctl0x4391 using the shared CDVD event owner, preserving FILEIO clear/wait.

GitHub Copilot desktop now has one local hourly review automation, current
checkout, Auto/Balance, with one new request maximum and no build/code edits.
Its first observed run succeeded in51seconds. Microsoft Copilot personal also
returned a real JSON reply through Computer Use; main hourly continuation now
includes that transport when available, one new request maximum, no uncertain
retry. Both actual replies were collected and independently reviewed; the
Microsoft INT64_MIN/no-mismatch sentence was rejected. Quotas remain separate
from Azure/AWS. No new auxiliary cloud calls or budget resets.

Bridge14 and pipeline5 tests pass. Collection rechecks current source hashes,
excludes stale pending work, preserves prior receipts/raw replies and bounds
input size. No model output is executed or automatically applied. Read
docs/COPILOT_PIPELINE.md and docs/audits/COPILOT_REVIEW_20261005.md. Evidence:
artifacts/native_pipeline_20261004/adviser_integration_003/verification.json.
All8 acceptance criteria remain open; no title/battle observed.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED.


## Original string, CDVD event and cache continuation — cycles003/004

Cycle003 buildPASS; actual probe passes23CB40 and logs shared CDVD event3,
with no unhandled IOMAN31. Next1A7014 recovered from20 identified original
words; bounded direct-RDRAM cache lowering, low64 BGTZ, exact back edge and
delay slot pass Debug/Release contracts. Cycle004 buildPASS; actual probe
PROCESS_FAILED/inputMATCH at0x0019A6C4, with MODLOAD15/7 version0x106 still
unhandled. No active build/probe remains. Details and limits are in
docs/NATIVE_REPAIR_20261005.md, repair_003 and repair_004/verification.json.

Focused IOP import/version suites pass Debug/Release under /W4 /WX; production
IOP rebuilt both configurations. Observer10 tests pass. Earlier strict broad
IOP test failures remain preserved; no broad-suite or retail parity claim.
Both adviser queues collected; no new reply and no Microsoft READY request.
No new cloud calls/budget reset; unvalidated broad emitter edit stays local.
Next recover19A6C4 and verify selected-original MODLOAD7 LoadStartModule /
15 IsIllegalBootDevice against exact version and lifecycle before implementing.
Do not return dummy success or infer successful module loads from reaching a PC.
GAME_PARITY=NOT_COMPLETE; BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED; all8criteria
remain open. No title/battle observed.
