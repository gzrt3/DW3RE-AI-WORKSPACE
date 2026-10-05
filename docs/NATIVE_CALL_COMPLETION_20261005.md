# Synchronous IOP calls require an actual return

The host's synchronous guest-call helper previously returned the current v0
after any execution stop. A yield, instruction-budget boundary or jump outside
RAM could therefore appear to complete a module entry or RPC callback. Its
temporary CPU and stack were then destroyed, so treating the result as a
resumable call was also incorrect.

The helper now requires the call-return sentinel after the return delay slot,
with no pending branch, yield or reboot. An incomplete call logs its entry,
stopping PC and reason, then unwinds through the same execution barrier as a
missing import. Suspended synchronous callers stop, scheduler-owned callers
become dormant, and callback result stores and RPC completion are suppressed.
CPU ownership and call depth unwind through RAII. A captured reboot request
remains owned by the existing deferred lifecycle.

## Verification

Before the repair, eight of nine new regressions failed against the published
runtime; a completed negative guest return already passed. Preserve that failing
baseline. The final suite includes eleven cases covering yielded, budget-exhausted
and out-of-RAM entries and RPCs, nested callback writes, scheduled caller
resumption, legitimate negative returns, collected boot callbacks and deferred
reboot ownership. All eleven pass in Debug and Release under MSVC /W4 /WX.
The existing import, version, missing-import barrier and MODLOAD suites also
pass in both configurations. These are synthetic execution contracts.
Eight pipeline tests pass, including classification of incomplete calls by
entry, stopping PC and reason. A nonreturning deferred reboot is not classified
as a discarded synchronous continuation or proof of completed boot.

Reproduce without original game data:

```powershell
cmake -S tools/PS2Recomp/ps2xIOP -B out/iop-completion -DPS2X_IOP_BUILD_TESTS=ON '-DCMAKE_CXX_FLAGS=/W4 /WX /EHsc'
cmake --build out/iop-completion --config Debug --target ps2_iop_call_completion_tests
ctest --test-dir out/iop-completion -C Debug -R '^ps2_iop_call_completion_tests$' --output-on-failure
```

Repeat the build and test with Release. Local raw evidence, including the
failing baseline, is in artifacts/native_pipeline_20261005/call_completion_006.

The full Release build through scripts/build_native.ps1 passed. cycle006's
10-second native probe timed out with input integrity MATCH at MODLOAD1.6
export7, IOP PC0x14374. Its stderr SHA256 matches cycle005 exactly; no new
incomplete-call diagnostic occurred in this bounded boot. This confirms the
repair's integration without advancing the remaining module-load barrier.
The historical EE0x0019A6C4 continuation remains unresolved.

## Limits and next work

This barrier does not implement continuation storage for synchronous calls,
loader-worker scheduling, module-manager startup states, MODLOAD7 argc/argv,
module residency metadata or rollback of effects performed before the stop.
Normal scheduler timeslices still retain their own CPUs; they are not rejected
merely for yielding. Logs and negative startup results expose failure, but a
structured public execution-fault result remains future work. Module-manager
paths that observe an allocated image ID still need separate lifecycle review.

Recover MODLOAD1.6 export7 from the identified original, using its actual loader
worker and argument contract. Do not use this failure barrier as a substitute
for those semantics or call the current raw-argument loader and declare success.
No independent PCSX2 trace, title screen, battle or final acceptance criterion
is established by these tests.
