# String and cache continuations, shared CDVD event route

The previous native cycle stopped at `0x0023CB40` and reported IOMAN1.4
export31 as unhandled. The original XL ELF and original IOPRP253 modules are
identified in `artifacts/native_pipeline_20261004/repair_003/original-evidence.json`.

## Original EE continuation

Nine original words at `23CB40..23CB60` restore the remainder of the byte scan
and its return. BNEL compares the low64 lane, increments the pointer only in
the taken delay slot, and returns to the existing byte-scan entry. On zero,
the increment is annulled and the original copy routine at23CE40 receives the
unchanged arguments. Its continuation returns the original destination, restores
the full128-bit s0/ra stack values, then executes JR with ADDIU sp in the delay
slot. The live byte result is preserved; the earlier prologue is not repeated.

Only resumes23CB40/48/50 are added. Registration verifies all nine words in
loaded guest RAM and rejects an existing conflicting mapping. Tests cover
high-bit branch cases,32-bit pointer wrap/sign extension, annulment, argument
and upper-lane preservation, uncached stack aliases and full128-bit LQ restore.
Focused Debug/Release builds and contracts pass.

## Versioned IOMAN devctl

The identified original FILEIO poweroff thread calls
`devctl("cdrom0:",0x4391,nullptr,0,output,4)`. Original CDVDMAN handles this
control by calling `sceCdSC(-11)` and returning the shared interrupt event ID.
The new IOMAN route forwards to that same existing service owner. It does not
create an unrelated event, set bit0x10 or invoke a host shutdown.

The route is limited to the verified IOMAN version0x104, device and command.
Other controls retain the missing-import barrier. Path, stack arguments and
output RAM ranges are checked before the service query; exactly four output
bytes are written. Known temporary file-slot exhaustion returns-24. Host
validation failures return-22 and event-allocation failure returns-12. Those
defensive failure policies are not claimed to reproduce original invalid-pointer
exceptions. General registered-driver devctl dispatch and original module errno
storage remain unimplemented.

Two focused IOP suites pass per configuration with /W4 /WX: imports and import
versions. The event test verifies identity with sceCdSC(-11), output sentinels,
repeated requests, invalid arguments, unsupported versions/devices/commands and
fresh event bits after reset. Bit0x10 is initially absent and remains absent
until explicitly signaled by the test. This is a synthetic service contract;
the original FILEIO clear/wait and SIF80000013 lifecycle still needs independent
execution-state evidence.

The first strict IOP build exposed an unused default executor parameter and
implicit negative-to-unsigned error constants; these now express the existing
behavior explicitly. Version fixtures use uint16_t constants. The attempt to
build every IOP test also found historical unused variables/narrowing in the
emulator suite; that failed attempt is preserved. The broad suite is not claimed
to pass. Native observer tooling passes10 tests.

## Evidence and remaining work

All build attempts and scoped results are retained under
`artifacts/native_pipeline_20261004/repair_003`. The production IOP library
was rebuilt for Debug and Release before rerunning the EE contracts. Native
cycle003 is the combined integration observation; consult its result and
pending-work packet before starting another cycle. A build or a later PC is
not game parity. All eight final acceptance criteria remain open.

Cycle003 built successfully. The actual process passed23CB40, logged shared
CDVD event3 and no longer reported unhandled IOMAN31. It stopped at1A7014
with PROCESS_FAILED, inputMATCH. This verifies the observed event query, not
the entire original FILEIO clear/wait/SIF80000013 lifecycle.

## Cache block continuation

Twenty original words at1A700C..1A7058 are checked before registering1A700C
and1A7014. The existing1A705C return is preserved. The back edge goes to the
decrement at1A700C, not the preceding BEQ. BGTZ tests signed low64; its ADDIU
pointer delay executes on both paths, wraps at32bits and preserves high64.
Each block returns to the scheduler at the backward edge.

CACHE0x18 means data-cache hit writeback with invalidation. The independent
PCSX2 Cache.cpp implementation confirms that operation. This host has one
coherent RDRAM allocation for EE stores and DMA; there are no private dirty
cache lines to copy back. The bounded continuation validates each of its eight
direct-RDRAM addresses and uses host memory fences at SYNC. It does not issue
MMIO reads/writes, clear memory or simulate success for unknown address spaces.
An unsupported mapping stops at its CACHE PC. This lowering does not implement
cache tags, guest TLB/cache exceptions, timing, or instruction-cache behavior.
The earlier generated prefix's other cache paths and signed32 predicates remain
outside this repair and need their own review; the corpus was not regenerated.

Debug/Release contracts pass for signed64 branch cases, exact decrement and
back edge, pointer sign extension, high lanes, all four supported RAM aliases,
unchanged bytes, the last valid block and unsupported/mixed mappings. Native
observer tooling passes10 tests. Evidence: repair_004. These are synthetic host
contracts, not a new retail execution trace.

Cycle004 built successfully and passed1A7014. The actual process stopped at
missing **0x0019A6C4**, with PROCESS_FAILED/inputMATCH.
Its log also reports MODLOAD version0x106 export15 at1439C and export7 at14374.
The pinned SDK names those exports IsIllegalBootDevice and LoadStartModule;
its table version1.7 is only a reference, so match the selected original module
before implementing version1.6 behavior. Do not insert a successful dummy load.
Next recover the exact19A6C4 interval and original MODLOAD ABI/lifecycle,
including owned module startup and the filesystem path actually requested.
No title, battle, combined gameplay or complete runtime parity is demonstrated.
