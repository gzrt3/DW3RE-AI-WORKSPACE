# Completion contract

Deliver one native Windows x64 game using the user's two supported disc dumps,
one launcher and one persistent profile. Preserve the original 4:3 presentation,
gameplay and timings by default. Do not convert the project into an emulator
launcher or use a PCSX2 save state as the shipping activation mechanism.

There is no guaranteed shortcut from today's state to that result. The following
contracts make the required work precise and falsifiable. They form a single
continuous task; a pass advances the same implementation rather than naming a
new release or freezing a partially playable milestone.

| Boundary | Implementation required | Independent acceptance evidence |
|---|---|---|
| ISO → private data | Existing importer plus a runtime consumer of its receipt; supported executable/archive identities; pinned producer inputs | Extracted-file hashes agree with original extents; wrong edition, truncation and output collisions rejected |
| ELF → native CPU | Complete reachable producer coverage, correct returns/delay slots, scheduling, interrupts, cache/TLB and memory semantics | Equal-input original/native landmarks and earliest-divergence trace; no forced PC/RA or fabricated success |
| CPU → services | Measured SIF RPC/DMA ABI, async completion and buffers for CDVD, pad, cards, sound and movies | Original request/result/checkpoint comparisons; unsupported calls remain explicit errors |
| CPU → GS | Ordered DMA/VIF/VU/GIF path into existing GS ABI; FINISH/SIGNAL/readback and timing return to runtime | Original packet ordering/register effects; real native frames; reference rendering with differences classified rather than hidden |
| Both discs → one content state | XL logic with both roots through one resolver; observed writers/consumers mapped; stable edition/resource identities | Cold boots without ISOs, both content sets available, no collision/fallback errors, observed XL→DW3→XL behavior compared with native state |
| State → disk | Versioned native profile, content identities, atomic save, migrations and explicit errors | Restart/restore reproduces content/progress; corrupted profile and changed assets fail without silently enabling content |
| Game → product | Original menu, movies, battle, audio, controls, maps/sides/modes, saves and long-session stability | All eight existing product gates pass against an identified binary/data receipt; clean-machine installation and end-to-end play test |

For the boot regression, the last published native PC 0x001AD660 is only a
landmark. Instrument dispatcher entry/return and scheduler transitions in a
candidate copy with numeric events: sequence, guest PC, target, RA, thread,
wait reason, pending interrupt and relevant memory addresses. Pin binary/input
hashes and compare original and native at the same semantic point. Verify that
instrumentation preserves baseline output. Do not infer the active instruction
from a stale observer field. Stop speculative code changes at the first mismatch
and verify a bounded correction against the original before applying it globally.

The original callback 0x00235CC0 now has one real-context result match. Preserve
that closure; do not reopen it merely because later boot stalls. Registration
coverage, full CPU state, interrupt timing and callers remain distinct contracts.

For combined content, a disc-check branch is not sufficient evidence. Record
the first relevant writer, old/new value, emitting PC, callers, subsequent readers,
disc-independent resource resolution and save/restore behavior. RAM 0x002D0468
and 0x002D046C are callback effects only; no MixJoy attribution is established.
Keep synthetic sector handles internal and invalidate them on remount. Use
edition + resource ID/path + content hash in persistent state. Shared resources
require full content equality or an explicitly verified mapping, never a filename
match. Unknown unlock/progress fields remain unknown until measured.

Rendering must retain GS memory/CLUT/alpha/field semantics. The current draw-2
RGB divergence and HW/SW alpha representation need matched logical-coordinate
readback and representation proof before changing a shader or tolerance. Keep
software reference output and all failed comparisons. Switching to paraLLEl-GS
does not close DMA/VU/interrupt integration.

The shipping installer may generate/build privately from the disc ELF or consume
verified, redistributable native components once their recipe exists. The current
public checkout has no complete game-code generation/build recipe. Never bundle
private generated guest code as a substitute. A clean machine must reproduce
the runtime using documented tool revisions and user data before release.

Reversal selects preserved binaries and baselines. New capture directories are
additive. Candidate acceptance is per demonstrated behavior; product acceptance
requires every gate. Host CI or importer success cannot authorize a playable label.
