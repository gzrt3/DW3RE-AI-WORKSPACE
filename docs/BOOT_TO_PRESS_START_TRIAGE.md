# Triage: original boot, movies and Press Start

This ordering follows dependencies and risk. The target remains the complete
native Windows port in NATIVE_PC_OBJECTIVE.md; all eight final gates stay open.
Baseline: cycle006, Release build passed, 10-second probe timed out at
MODLOAD1.6 export7 / IOP PC0x14374, input integrity MATCH. No title or battle.

| Order | Work and measured gap | Required proof before moving past it |
| --- | --- | --- |
| P0.1 | Original module loader and resumable IOP execution. MODLOAD7 is missing; synchronous calls cannot resume after yield. Existing image startup passes raw bytes instead of argc/argv, tests residence against exact0/2 and lacks original ModuleInfo ownership. Some module-manager paths accept an ID after failed startup. | Capture the actual filename/arguments at the failed call. Recover selected-original request, loader-thread/semaphore/event, entry ABI and lifecycle. Exercise yield/resume, reentrant load, failed load/start, returned result and unload. No RPC completion before actual completion. Then native boot with unchanged originals. |
| P0.2 | Remaining original EE continuations and initialization. Historical0x0019A6C4 remains unresolved but was reached via an unverified RPC path. | Repair only identified original intervals; preserve registers/widths/delay slots and compare checkpoints. A later PC alone does not prove successful initialization. |
| P0.3 | Safe native observation. main.cpp runs only the scheduler. PS2Runtime::run resets prepared IOP/EE state; the old renderer wrapper is incomplete. | Present the current runtime GS output without reinitialization. Pump a real Windows window, record source/dimensions, preserve faults, and verify close/stop. Empty output must remain explicitly empty; no placeholder title, magenta frame or video-player substitute. |
| P0.4 | Original PSS stream, IPU/MPEG and GS path. Local data contains MOVIE/KOEILOGO.PSS, OMEGA.PSS and OPENING.PSS; XL also has MOVIE2/OPENING.PSS. These names do not prove order or reachability. MPEG.cpp has FFmpeg-backed decoding; IPU.cpp contains fixed guest addresses requiring game/version validation. | Hash originals and mounted copies; trace guest file requests and actual byte delivery through demux, decoding, timestamps and framebuffer. Validate decoded output/audio against an independent original run. Recover call sites before installing any version-specific HLE. |
| P0.5 | Original boot-to-attract-to-Press-Start state machine, timing, sound and input. PadBridge currently returns mock released buttons. Audio and real title resource path remain unverified. | Record natural boot, at least two attract loops, skip input and actual Start transition to the menu. Correlate video/audio, input and guest state with the original. No manual sequence or invented menu image. |
| P1.1 | First battle: VIF/VU, GS effects, animation, audio, controls, AI, collisions, objectives and results. | Reproducible deterministic scenario from title through results, with independent state/image/audio comparisons and regression cases. |
| P1.2 | Complete DW3/XL integration: variant table identity, VFS precedence and content inventory, no disc checks requiring physical media. | Mode/map/side/character/weapon coverage and transitions across both variants; test every inventory row and preserve legitimate differences. Requested non-original content must be identified separately. |
| P1.3 | Saves, unlocks, settings, modding. | Save/reload/restart and content progression; documented reversible setting and resource overrides in the real port. |
| P2 | Packaging, clean installation, long sessions, performance and remaining defects. | Reproducible Windows x64 package in C:/Games/DW with local /data/, no PCSX2 runtime process/dependency, clean-machine and regression evidence. |

## Source evidence for the first blocker

Selected original MODLOAD.IRX SHA256:
`4a9027499d8fe06ced66d0ab66a9e930b30943c17fd2b5ae5f0bf76abf8360a7`.
Its export table at0x2DB0 identifies version1.6 and export7 at0x3F0.
Disassembly retained locally in
`artifacts/native_pipeline_20261005/modload_007/original-modload-disassembly.txt`.

- 0x3F0..0x44C builds request command3 with filename, arglen, argument pointer
  and result pointer; helper0xD94 rejects interrupt context with-100 and uses
  the original loader thread, semaphore and event. Reentrant loader calls run
  directly. Startup configures priority8, stack0x1000 and attr0x02000000.
- 0x1064..0x131C starts only a module in state1 (-206 otherwise). It constructs
  argv[0] from the filename, followed by NUL-separated arguments, passes
  argc/argv/0/ModuleInfo with module GP, and sets state2 before entry.
- It stores the actual entry result and uses its low two bits:0 resident,
  2 removable resident,1/3 unload. The helper returns0 after completed entry.
- Current LOADCORE contains broad stubs, so loading the original MODLOAD image
  without implementing its dependencies would not establish original behavior.

## Human verification and priorities

Use Computer Use on the actual native window and retain captures tied to the
executable/input hashes and logs. A screenshot of an empty framebuffer proves
only that observation works. The progress webpage is a separate status tool.
Reference captures must identify PCSX2 and must never be labelled native output.

Current work first exposes the actual unresolved module request, then connects
state-preserving GS observation. This observation is instrumentation, not a
substitute for implementing P0.1. Do not spend cycles on cosmetic menus or
packaging before original boot/video/Start transitions execute.

Originals, failed probes and history remain preserved. The full backup is still
being verified; no cleanup follows from a partial file count. Adviser queues
are advisory and never authorize dummy returns or establish acceptance by vote.
