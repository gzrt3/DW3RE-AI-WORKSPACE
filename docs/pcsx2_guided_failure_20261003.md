# Guided capture failure: preserved evidence and retry tooling

The rejected session is `artifacts/hybrid_autoloop_20261003/capture/guided_001`.
The second requested F11 expected `0x00100010`, but `raw/point_02.p2s`
contains **`0x0010000c`**. All decompressed VM entries match point_01 exactly.
Only `PCSX2 Savestate Version.id` differs. A new ZIP timestamp/hash does not
establish instruction execution. The original 19 files are catalogued in
`artifacts/pcsx2_guided_failure_20261003/audit.json`; nothing was added to,
deleted from, or overwritten inside the rejected session.

The emulog records a resume/pause before point_01, but no further resume/pause
between point_01 and point_02. The helper raised
`WRONG_EE_PC_ORIGINAL_PRESERVED` immediately after copying and decoding point_02,
before creating point_02.json. Thus the old helper lost the structured rejection
diagnostic, not the original machine state. No normalization or B was produced.

## What the evidence establishes

There was no observable EE or IOP advancement between the last two savestates.
The instruction at 0x0010000c is LUI, not a branch. This failure does not establish
a retail control-flow divergence or a wrong expected PC. It also does not prove
which window had focus, whether the shortcut was delivered, whether its action
was disabled, or which CPU layout was selected at that instant. Layout files
show that R5900/EE exists; they are not a historical UI observation.

A save race is not demonstrated: saves were separated by about 16 seconds,
the VM payloads are identical, and the intervening resume log is absent. Exact
PINE request timestamps and UI screenshots were not recorded by the old helper.
Those unavailable facts remain absent. F11 delivery/focus is a plausible cause,
not a proved diagnosis. Branch/delay semantics cannot explain executing this
LUI and still observing the unchanged complete VM state.

## Source-matched debugger investigation

Installed `PCXS2 V2.3/pcsx2-qt.exe` is actually **2.8.2.0**. Its SHA-256 is
`982c7c62600a999cf15a25c18349426166c785e7867b2fcc5018d733245b71a3`.
The v2.8.2 DebuggerWindow.cpp, .ui and SaveState.cpp downloaded for this audit
match the previously pinned bytes. Source URLs and hashes are in `source/`.

`actionStepInto` (F11) connects to `DebuggerWindow::onStepInto`. It obtains the
CPU from the current DockManager layout, returns if no CPU/alive/paused state
is available, sets skip-first, and selects a temporary breakpoint. For LUI the
destination is PC+4. For a branch, opcode analysis selects the branch target
or PC+8; the delay slot executes en route. A CPU-thread callback installs the
temporary breakpoint and resumes the VM. UI `update()` is asynchronous and
does not prove the callback executed. The pause handler later clears temporary
breakpoints and updates views. VMManager::SetPaused logs resume/pause before
setting VM state. PINE Status reads VM state; it does not expose the UI PC.

PINE SaveState queues an asynchronous save. The helper waits for a changed,
decodable archive and rechecks paused state. PINE has no step/breakpoint/run
command in this build. Qt's slot requires an in-process invocation or working
UI automation; no exposed external invocation endpoint was found. No injection,
emulator patch, memory/register writes, Run command, or blind clicks were used.
Version.id serializes a malloc-allocated version struct after string copying;
its differing padding is not machine execution evidence.

Official Computer Use was tried, retried, then reinitialized after resetting
Node. All attempts failed with the native-pipe-unavailable error. No UI state
was observed. Astra was invoked successfully as a bounded advisory review;
its result was not accepted because the stream did not certify the no-tools
scope. The findings above rely on deterministic archives, logs and source.

## Tooling changes and validation

`tools/pcsx2_capture.py` now saves a hashed observation sidecar before rejecting
a PC mismatch, prints EXPECTED_PC and OBSERVED_PC, records prior observed and
post-save PCs, UTC/monotonic timing, and explicitly absent UI/CPU-selection
fields. Rejected states never become accepted trace points. Originals remain
exclusive-create files. Observation/transition provenance is included in new
normalized manifests.

`guided-watch` waits for one ordered resume/pause pair in the isolated emulog,
checks PINE paused state, exports, validates the actual PC and ELF opcodes, and
signals export completion. It rejects extra/ambiguous transitions or log
truncation. Log events only trigger capture; they cannot certify an instruction.
The overall operation has a 15-minute limit. There is no console Enter between
steps, removing that focus switch. The watcher does not initiate a debugger step.

Targeted synthetic tests reproduce the exact unchanged-PC failure with changed
archive metadata and verify no original overwrite, missing/ambiguous log edges,
actual pause checks and bounded timeout. A separate live negative test in
`capture/watch_validation_001` booted the verified ELF and deliberately made no
step. It timed out, saved the actual unchanged PC, and rejected; it did not
fabricate a next point or normalized capture. Full-suite results are in the
audit artifact directory. No C++ or retail files changed.

## One minimal remaining human procedure

From PowerShell in `C:\Fate Soldiers 3`, run:

```powershell
python tools/pcsx2_capture.py guided-watch --root artifacts/hybrid_autoloop_20261003/capture/guided_002
```

This opens `D:\Juegos\Playstation\Playstation 2\PS2 Tools\PCXS2 V2.3\pcsx2-qt.exe`
with the isolated configuration, `-debugger -fastboot -elf`, and
`C:\DW3\sources\dumps\dw3xl_ps2\SLUS_206.17` (SHA-256
`d26695fa7769cabbddbd89168924279cd1035eeb0bdd3744aec95257f7cfa731`).
The entry breakpoint is supplied by `-debugger`; no manual breakpoint is needed.

1. Wait for the console's first `READY`. In **PCSX2 Debugger**, select the
   **R5900** layout (EE) and confirm current PC **00100008**. A is exported
   automatically before executing its instruction.
2. In that debugger choose **Debug > Step Into** once. Keep this window focused;
   do not press Enter in the console. Wait for the export-completion beep and
   next `READY`/EXPECTED_PC before choosing Step Into again. If there is no beep,
   or any rejection, stop; do not add speculative keypresses. The bounded helper
   preserves what it observed.
3. Repeat only while the helper requests another step. The first arrival at
   **00100018** is not B; continue through the request at **0010002c**. A branch
   step can include **00100030**. B is accepted only at the second validated
   arrival at **00100018**. On success the helper normalizes and closes its own
   emulator process. Do not select Run, Step Over, or modify state.

No manual dumps/copying are required. Raw saves, observations and transitions
go to guided_002, with normalized A/B/registers/full EE RAM/trace and manifest
created only on successful validation. The continuously running supervisor
detects that manifest and continues. Failed guided_001 and the earlier A remain
separate and are never combined with this boot. Intermediate branch-after and
delay-before registers remain explicitly absent when Step Into cannot expose
them. No full retail comparison or first instruction divergence is claimed yet.

`BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED`

`INTERACTIVE_MAIN_LOOP=NOT_DEMONSTRATED`
