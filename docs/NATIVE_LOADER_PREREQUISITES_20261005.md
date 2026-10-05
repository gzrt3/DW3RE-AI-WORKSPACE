# Original loader prerequisites

The native PC port still has no demonstrated title, original movie or battle.
This change supplies the file, allocation and image-loading contracts required
before running the original MODLOAD worker. It does not enable that worker by
turning off HLE globally or accept unimplemented services as successful.

## Dependency order

IOMAN native reads and SYSMEM allocation were implemented independently while
the original LOADCORE was examined. Selected LOADCORE image services consume
those prerequisites. The next dependent work is module registration/linking and
original MODLOAD worker startup, followed by actual SIO2/DMA/IRQ behavior and
the measured EE continuation. Rendering, original video/Press Start, controls,
battle, combined content, saves and final packaging remain required.

## Runtime behavior

- IOMAN6 returns actual bytes read, preserves short reads and EOF, and advances
  each descriptor by that count. Failed host reads publish no staged bytes.
  Invalid descriptors and owned-RAM violations are explicit errors. Original
  IOMAN1.4 export6 identifies the driver dispatch and EBADF behavior; its internal
  errno variable and arbitrary guest-device routing are not implemented here.
- SYSMEM allocation uses 256-byte pages, low/high/fixed placement, exact
  ownership on free, reusable/coalesced holes and separate largest/total free
  queries. Original free-block queries use bit31. The runtime still manages only
  `0x120000..0x1F0000`; it does not reproduce the original boot reservation map,
  RAM-resident allocator metadata or timing. Host internal allocations retain
  their smaller alignment and cannot be freed through guest SYSMEM.
- LOADCORE1.3 exports22/23 probe and load selected fixed/relocatable ELF images.
  ModuleInfo is a separate header preceding text, not IopModuleID. The caller
  must already own the entire header/image span in one allocation. Original
  entry/GP adjustments, word copy/BSS tails, relocations and untouched header
  tail are preserved. Staged writes roll back on unsupported or unsafe input.
  COFF, unverified versions and unknown relocation types remain unhandled.
  These services do not allocate, register, link or start the module.

The selected LOADCORE relocator uses the next relocation offset for HI16 and
its own type250 signed chain. A generic MIPS symbol-based relocation routine
is not interchangeable. The module-cursor loader remains a different API.

## Verification

The focused build uses MSVC `/W4 /WX`. The selected suites include 11 native
file-read contracts, 12 allocator contracts (including 10,000 deterministic
operations checked against an independent page bitmap), 18 loader-image
contracts and a version-dispatch regression. Existing continuation, import,
missing-import and call-completion tests are included.

`tools/verify_loadcore_original.py` requires the identified original LOADCORE
SHA256 and runs `ps2_iop_loadcore_original_replay`. It preserves input/executable
hashes, stdout/stderr and failure/timeout status in a new directory. The replay
executes original exports22/23 at their unrelocated PCs with the local IOP core.
It compares the return, preserved registers, full FileInfo and every loaded
header/image/BSS/relocation byte for SIO2MAN, MODLOAD and LOADCORE at three
allocation bases, plus fifteen malformed-header cases. This is 24 comparisons
per configuration, not an independent PCSX2 trace or gameplay parity.

Original LOADCORE:
`51c9e79f4529d3590643a46ce63d73433b377a38ccc9fd0fad59a25b463d3bd3`.
Original SYSMEM:
`1b03e6ffd2042c2545cf1a78ab937b6b57ccda037783e7ad52467bb9f5556054`.
Original SIO2MAN:
`d02dd7bcf83a802c388b6ce1fdd447b4d5c29dcc7ba11000ccd66f8f14714fd6`.

Raw local evidence lives under
`artifacts/native_pipeline_20261005/loader_prerequisites_001`, with original
inspection in `loadcore_original_009` and `sysmem_original_010`. Public result
evidence records the executed checks and scoped results separately.

## Remaining ownership integration

EE `sceSifAllocSysMemory` and `sceSifAllocIopHeap` currently reach generic
host-tagged IOP allocation. Their matching EE frees work, but a guest SYSMEM5
cross-free would be rejected. No such retail cross-free has been observed.
Resolve the proper public allocation/ownership APIs before depending on this
cross-boundary behavior; allowing every guest free to release internal host
objects would lose the ownership guarantees.

LOADCORE registration16/removal17, internal data/list state and import linking
still contain incomplete HLE paths. DMACMAN also has false zero-return stubs.
Do not infer complete MODLOAD readiness from the new image-service tests.
