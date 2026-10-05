# Current verified state

Ciclo029: VBLANK original ejecuta init y callbacks; superado vblank:8. Build Release y contratos VBLANK/PAD Debug/Release PASS. Native001 llega a EE1AE7B0, RA170C8C; exit4294967295 e inputMATCH. No vídeo/logo/título; 0/8 criterios. Gráficos siguen abiertos hasta visualizar los vídeos iniciales originales; audio después. Ver docs/NATIVE_VBLANK_20261005.md.

Historial conservado:

Ciclo028: puente GS→Direct3D11/12 probado con readback RGBA y observación Computer Use de patrón diagnóstico. Auto prefiereD3D11; selección explícita y VSync comprobados. BuildReleasePASS. El juego mantienePMODE0, vblank:8 sin implementar,1215observaciones/0presentaciones en20s,inputMATCH. No logos originales;0/8criterios. Automatización principalPAUSED y revisorGitHubDisabled. Publicar checkpoint gráfico y después audio, según el usuario. Ver docs/NATIVE_GS_DIRECTX_20261005.md.

Historial previo:

Ciclo027: Release003 PASS;170B24,1ADE0C y1AEF98 superados. Ambos servidores PAD responden y la versiÃ³n403 procede del IOP. Nueva barrera vblank:8 (RegisterVblankHandler),antes de completar init. Native003: plazo40s,exit2,inputMATCH,2416observaciones y0presentaciones. Computer Use observÃ³ la ventana nativa negra. Contratos PAD Debug/Release PASS;3regresiones IOP generales siguen abiertas. Primeros logos pendientes;0/8criterios cerrados. Ver docs/NATIVE_PAD_BOOT_20261005.md.

Los estados anteriores se conservan como historial.

Latest026: native Release009 build PASS. SIF outgoing DMA now signals channel6,
not incoming channel5; preserved before-test FAIL and after Debug/Release PASS.
All eight original game modules enter/return/reside in native008, including
MCMAN, LIBSD and KOEISND. Memory-card BindRpc80000400 returns a real owned IOP
server163848 and its next RPC completes. Next missing EE00170B24. InputMATCH;
no native logo/movie/title/battle. Five original provider tables and IRQ234400
are integrated. Focused tests pass; three of14 broader IOP tests still fail.
Read NATIVE_BOOT_PROVIDERS_20261005.md. All8 final gates OPEN; source uncommitted.
Earlier states below are retained as history.

Latest025: full native Release build PASS; recovered1B1004 now passes.
Next barrier is memory-card BindRpc80000400 returning server0; only SIO2MAN and
MODMSIN game-module entries observed, plus missing invocation234400. Native20s
timeout and live20/60s runs preserve inputMATCH; zero GS presentations. Computer
Use observed the native black window. Original BindRpc return has server7F448.
Two new original intervals match32 GPR128,10 control fields and32MB RAM in both
Debug/Release;580 local opcode comparisons,24 faults/annuls per configuration
and20 Python tests PASS. See NATIVE_WAITSEMA_20261005.md. User priority: native
boot and the first original logos, step by step. No logos/title/movie/battle;
all8 final gates OPEN. Previous entries below are historical.

Latest023: native Release build PASS;1B7F84 passes, next missing EE1B1004
after WaitSema. InputMATCH; no native title/movie/battle. Four original intervals
match Debug/Release:32 GPR128,10 control fields and32MB RAM; DMA also matches12
MMIO words after measured MADR/FQC repair. Store64 BadVAddr repaired and tested.
Computer Use captured color entry/return and next1B1004. Supplied PCSX2 log now
records original XLâ†’DW3â†’XL transitions and module sequence; native integration
remains open. See NATIVE_COLOR_DMA_PARITY_20261005.md. All8 final gates OPEN.
Backup of this increment is verified only by the final checkpoint verification.json.
Earlier status entries below are historical.

Latest022: native Release build PASS; GIF submission19AA4C passes twice,
and the first32-byte packets reach GS. Next missing EE0x001B7F84. InputMATCH;
no native image/title/movie/battle. Debug/Release DMA and graphics contracts
PASS; general exception vectors repaired from pinned PCSX2 evidence.
Original DMA entry/return captured; native hardware replay pending. Cycle021
integer/RAM comparisons remain historical. See NATIVE_DMA_SUBMIT_20261005.md.
All8 final gates OPEN. Prior entries below are retained as history.

Latest021: full native Release build PASS;1B8040 passed, next missing
EE0x0019AA4C in GIF DMA submission. InputMATCH; no native title/movie/battle.
Both original19A510â†’180490 and1B8040â†’1804A4 checkpoint replays PASS in
Debug/Release, all32 GPR128,10 decoded control fields and32MB RAM identical.
GS32 alias routing repaired after a preserved failure;48 RAM,12 owner,24 fault
and prior graphics/IRQ contracts pass per configuration. Computer Use continues
from fresh state after human input. Original disc swap remains unverified.
See NATIVE_GS_STORE_20261005.md. All8 final gates OPEN.

The following020 status is historical.

Latest020: full native Release build PASS; recovered graphics configuration
tail19A510 passes, next missing EE0x001B8040. InputMATCH; no native title/movie/
battle. Debug/Release each pass216 original-opcode cases plus4 saved-RA overlap
aliases and prior regressions;15 Python tests PASS. Two isolated original
PCSX2 sessions opened through Computer Use; real19A510 entry captured and45
words MATCH. Original return/disc swap remain unverified. Manual input is active
in the experience window; do not compete for controls. See
NATIVE_GRAPHICS_CONFIG_20261005.md. All8 final gates OPEN.

The following019 status is historical.

Latest native result: **graphics buffer and packet returns passed; missing
EE0x0019A510**, 2026-10-05 UTC. Incremental full Release builds PASS;
gs_buffer_018/native-001 passes198918 and stops198C7C, then
gs_packet_return_019/native-001 passes both and stops19A510. InputMATCH in both.
No title, movie or battle; all8 final gates OPEN.

Three MOVN lowerings now preserve upper64. The raw candidate's register mismatch
is retained. Per Debug/Release:576 original-opcode buffer comparisons,32 word
guards/one owner conflict, plus4 packet returns/two word guards/one conflict
PASS, with prior graphics/IRQ regressions. These are scoped contracts, not
independent PCSX2 lockstep. See NATIVE_GRAPHICS_BUFFER_20261005.md and the
buffer/packet-return evidence JSON. Missing015â€“017 evidence records are now saved.

The user resumed available project pools and excluded OpenClaw. Native review
agents completed useful work. One Nova Pro review and one local Ollama review
completed; their incorrect claims were rejected and raw replies retained. Azure
accounting remains unresolved; no extra call, cap increase or authentication
repair. A rate-limited agent was not retried. Review schedules remain paused.

Next: original19A510 continuation and its caller, then real movies/Press Start.
Preserve full native-product scope, originals and uncommitted source. Check
D:/Backup/DWProject/graphics-buffer-20261005-019/verification.json for the final
backup result; previous backup statuses below are historical.

## Historical graphics and VSync checkpoint

Latest native result: **graphics initialization continues to missing
EE0x001A4500**, 2026-10-05 UTC. Full Release build PASS;
graphics_init_015/native-005 passes180384, GParam19852C, VBLANK1A4CC0,
GsSetCrt1A4420 and allocator234444, then stops at1A4500. Two subsequent live
host_vsync_016 probes (on/off) have inputMATCH,25 observations and zero GS
presentations. No title, movie or battle; all8 final gates OPEN.

Optional host VSync defaults off and is selectable with `--vsync on|off`.
Four presenter contracts pass in each Debug/Release, including opposite SDL
hints, software fallback, prepared memory/register/event preservation and
continuing guest VBLANK/field parity. Fourteen probe tooling tests pass.
Physical monitor sync, VRR and unlocked simulation remain unverified.
See NATIVE_HOST_VSYNC_20261005.md and evidence/native_host_vsync_20261005.json.

Selected graphics tests pass42 caller scenarios/322 GPR128+RAM boundaries,
8 allocator scenarios/16 ABI boundaries,4 CRT wrappers,4 GParam returns,
15 INTC cases and scheduled poll completion. These tests skip external callees
and are not independent PCSX2 lockstep. Six actual original debugger checkpoints
were captured, including CRT entry/return and allocator entry. Full CRT mode
registers/kernel clobbers and allocator return parity remain open. The isolated
PCSX2 session exited1; no allocator return checkpoint exists. See
NATIVE_GRAPHICS_20261005.md and evidence/native_graphics_20261005.json.

Next: restore the original four-word AddIntcHandler wrapper at1A4500 from
verified XL words, test real owned registration and IRQ lifecycle, then probe
again. Community PNACH and supplied modding references are audited candidates,
not applied native behavior. Preserve both widescreen variants separately.
Source remains uncommitted; auxiliary schedules/cloud/publication stay paused.
The entries below are historical and their180384 barrier is superseded.

Latest native result: **DMA/VIF initialization passed**, 2026-10-05 UTC.
Release run `ee_dma_init_014/native-003` passes MODLOAD7/SIO2MAN, EE19A6C4,
EE198580 and EE19A678, then fails at missing EE180384. Input integrity MATCH;
no title/movie/battle demonstrated. All8 final gates OPEN. Auxiliary work stays
PAUSED; source remains uncommitted. See NATIVE_DMA_VIF_20261005.md and
evidence/native_dma_vif_20261005.json for tests, failures and exact limits.

Per Debug/Release:23 DMA contracts plus7,000 parameter combinations,12 channel
returns,20 Store128 cases, original VIF packets across4 source aliases and
CPU/command/reset coherence across3 MMIO aliases PASS. Store128 now reaches the
memory owner; VIF1 reads no longer return a stale shadow after commands.
These scoped tests do not prove full PS2 hardware or gameplay parity.

## Previous MODLOAD milestone

Latest native result: **MODLOAD7/SIO2MAN startup barrier repaired**, 2026-10-05
UTC. Full Release run `modload_focus_013/native-003` executes original SIO2MAN
on MODLOAD worker thread1 with argc1, returns0 and makes module21 resident3.
It proceeds to the unresolved EE0x0019A6C4 continuation, exit4294967295,
input integrity MATCH. No title/movie/battle is demonstrated; all8 final gates
remain OPEN. SIO2 transfers/controller parity and SIFCMD warnings remain open.

Eleven focused suites pass Debug/Release with /W4 /WX. Per configuration,
32 original LOADCORE state comparisons and69 library comparisons pass;
positive and missing-file original MODLOAD worker probes pass. This is local
original-instruction replay, not independent PCSX2 lockstep. See
[repair and exact limits](NATIVE_MODLOAD_SIO2MAN_20261005.md) and
`evidence/native_modload_sio2man_20261005.json`.

User-directed focus: main automation PAUSED, GitHub reviewer Disabled,
auxiliary servers/advisers/cloud/publication paused. Source changes remain
local and uncommitted; do not overwrite them. Earlier states below are history
and their MODLOAD7 barrier descriptions are superseded by this measured run.

Agent Reach1.5.0 installed for public-source research; GitHub and Jina exercised
against pinned PS2SDK, with a full MODLOAD source comparison MATCH. Exa returned
a quota limit; no retries or paid key. All66 tooling tests PASS locally and in Windows CI run37262482135 on3b1fac6. This installation
does not change native runtime behavior or close an acceptance gate. See
AGENT_REACH.md and evidence/agent_reach_20261005.json.

Native work in progress: LOADCORE library registration/linking component has
16 isolated contracts and69 selected-original instruction comparisons PASS per
Debug/Release. It remains an uncommitted integration candidate: emulator linked
call dispatch, shared guest state and original module lifecycle are still needed.
No new full native build/run; loader_prerequisites_001 remains the live baseline.
Local evidence: artifacts/native_pipeline_20261005/loadcore_lifecycle_012/library-001.

Anti-slop integration: pinned 3.2.20 core/comment skills and MIT notices are
installed locally, with scoped Codex/Copilot instructions. All59 selected Python
tests PASS; the five pinned files also match after an index checkout with
autocrlf enabled. This is tooling verification, not a new native run or a
gameplay milestone. Original visuals, source provenance and all8 acceptance
gates are preserved. See ANTISLOP.md and audits/ANTISLOP_20261005.md.
Remote CI run37261101749 now PASS on a33e102: all59 tests and pinned-file checks.
The prior Windows8.3 path-comparison failure was reproduced and fixed in the
fixture; its failed run remains preserved. No native runtime source changed.

Latest: loader_prerequisites_001. IOMAN native reads, SYSMEM page256 allocation
and selected LOADCORE1.3 exports22/23 are implemented. Nine selected suites PASS
Debug/Release:11 file,12 allocator (10,000 bitmap-checked operations),18 image
contracts plus version and existing regressions. Original LOADCORE replay PASS:
24 comparisons per configuration, including full SIO2MAN/MODLOAD/LOADCORE image
bytes at three bases. Full Release buildPASS. A40-second live native observation
ended at its deadline, exit2/inputMATCH,2420 observations/zero GS presentations;
MODLOAD7/SIO2MAN remains the barrier. Computer Use observed the real black window.
No title/movie/battle; all8 final gates OPEN. Read NATIVE_LOADER_PREREQUISITES_20261005.md
and evidence/native_loader_prerequisites_20261005.json. Next: actual LOADCORE
module list, boot modes, registration/linking and original MODLOAD worker.
One new Nova Pro review completed; unsupported short-read claim rejected.
AWS reservedUSD0.0318751, capUSD10,29 calls remain; billed amount unknown.
Microsoft request typed but not sent because a privacy modal appeared; no
automatic retry or privacy action. GitHub hourly IOMAN reply prompted a new all-alias end-of-RAM test; it passes
both configurations. Prior states below remain historical.

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
