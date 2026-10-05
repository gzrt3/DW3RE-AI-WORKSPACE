# MODLOAD research obtained with Agent Reach

Secondary reference: ps2dev/ps2sdk commit
`ac92a9f657d2e531dd8f060250b07f2a5ac6dea5`,
[MODLOAD source](https://github.com/ps2dev/ps2sdk/blob/ac92a9f657d2e531dd8f060250b07f2a5ac6dea5/iop/system/modload/src/modload.c)
and [LOADCORE header](https://github.com/ps2dev/ps2sdk/blob/ac92a9f657d2e531dd8f060250b07f2a5ac6dea5/iop/system/loadcore/include/loadcore.h).
Retrieved through Agent Reach's Jina WebChannel; raw responses are retained
under artifacts/agent_reach_20261005_001. SDK source identifies MODLOAD 2.9
and says it is mostly based on SDK 3.1.0. Our selected retail module is MODLOAD
1.6: this is an architecture aid, not a replacement or parity oracle.

The definitions identify three questions for the retail audit:

1. LoadStartModule packages a module-thread request; ModuleLoaderThread uses
   the worker's identity, semaphore and event completion path. Verify those
   transitions in original 1.6 before replacing the native barrier with a result.
2. Module entry builds argc/argv from the filename and packed argument strings.
   The current host path passing argument byte length and a byte-buffer pointer
   cannot be assumed equivalent. Compare the original builder, including zero
   argument bytes.
3. LOADCORE exposes module records, boot-mode data and linked libraries. One
   coherent owner must supply this guest state. The header's public void return
   types do not specify actual retail return-register contents.

These reinforce the original-derived contract in
artifacts/native_pipeline_20261005/loadcore_lifecycle_011/contract.md. They do
not justify invented boot modes, synchronous success or a completed SIO2MAN.
Next native work: shared LOADCORE state, module/boot lifecycle and linked-call
dispatcher, followed by the original MODLOAD worker.

The HTML view returned only the file's beginning/end. That partial capture is
preserved; the raw URL was fetched separately. A zero-exit reader is insufficient
proof of a complete source file. A narrowed GitHub search returned zero results
even though raw code contains LoadStartModule; search-index absence does not
establish absence of the function.
