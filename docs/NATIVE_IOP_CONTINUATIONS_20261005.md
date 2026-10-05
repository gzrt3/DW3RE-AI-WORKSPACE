# Owned IOP continuations — cycle008

The scheduler and SIF RPC bridge now preserve a guest callback across ordinary
yield, DelayThread, event waits and instruction-slice boundaries. The callback
uses its owning IOP thread, a stable CPU frame and the same stack. Only an actual
return sentinel produces a result. A reply transport retry consumes the cached
result rather than calling the guest again.

Pending requests snapshot metadata and hold their allocation before invocation.
Failed callbacks retain evidence and cannot automatically run again. Unsupported
module removal/reset while execution is pending is rejected before mutation;
whole-emulator teardown explicitly discards both owners. Synchronous call paths
remain strict: a yield or fault is not a successful return.

Independent review identified a competing-caller defect. A second CPU could
consume or poison the first request, including after its callback returned but
before transport succeeded. The new regression failed before repair (12/13),
then passed after binding pending state to the caller CPU, executor and thread.
This identity check precedes token consumption and persists through transport.

Fourteen continuation contracts pass in Debug and Release. The three selected
Debug suites and all six selected Release suites pass. One incremental MSVC
COMDAT link failure is retained; disabling incremental linking for that retry
resolved it. The full native Release build passed after the ownership repair.
Original logs remain under `artifacts/native_pipeline_20261005`.

All three cycle008 probes retain input integrity MATCH and stop at original
MODLOAD1.6 export7 / IOP0x14374 requesting MODULES/SIO2MAN.IRX. No title, movie or
battle is demonstrated. The tests use synthetic interpreted modules through
production services; they are not independent PCSX2 lockstep evidence. Exact
original SIFCMD wrapper stack layout, cancellation of suspended calls and other
synchronous/DMA callback paths remain outside this implementation's proof.

A real GitHub Copilot review highlighted possible reuse of an active server
descriptor. Independent inspection confirmed queueRpcCall could overwrite it
after dequeue while the first callback was pending. A second regression failed
before repair (13/14). The receiver now rejects a second request for a server
owned by a pending completion or RpcLoop before changing queue links/metadata.
The test verifies rejection, unchanged descriptor, first completion once and
acceptance of the next request after completion. This is an explicit unsupported
overlap barrier, not a reconstruction of original concurrent-client semantics;
DMA payload ownership still needs original evidence. Preserve the raw adviser
answer and the failed test under cycle008 evidence.

## Next original-code dependency

The selected original MODLOAD1.6 request uses command3, filename+0x0C,
arglen+0x14, args+0x18, resultPtr+0x24, module-ID/error+0x28, completion event+0x2C.
Its real loader worker owns semaphore/event waits, nested loads and argc/argv
packing. The entry ABI is argc, argv,0,ModuleInfo with module GP and8-byte stack
alignment. Module ID, raw entry result, execution completion and residency are
separate values: raw v0&3 determines residency; a negative entry value alone
does not mean execution failed.

LOADCORE export23 creates a separate0x30-byte ModuleInfo before text_start.
SIO2MAN's PT_SCE_IOPMOD first word0xF80 is IopModuleID, not that ModuleInfo.
Reserve header ownership before relocating; do not write at base-0x30 after
placing an image. The current loader lacks the required metadata/lifecycle.

Consider executing the identified original MODLOAD instead of reconstructing
its entire worker. First implement and validate its actual LOADCORE dependencies:
3/8/9/16/17 currently contain zero-success stubs;22/23 are missing. Switching
the manifest alone would fabricate successful loading. Boot-mode12 and cache4
also need scoped original semantics. Preserve the original disassembly in
`modload_007/original-modload-disassembly.txt` and the source hash identities.

Original SIO2MAN subsequently needs actual SIO2 register/FIFO and DMA11/12
completion, IRQ0x11 and event0x2000. A successful module entry alone would not
prove controller or memory-card transport. All eight product gates remain open.
