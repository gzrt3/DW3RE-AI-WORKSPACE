# IOP import failures and MODLOAD1.6 validation

The IOP runtime previously returned zero for an unknown import and resumed at
the caller's return address. Unsupported ordinals of several partially handled
libraries also escaped the missing-import counter. A module, nested callback,
or RPC could therefore continue after an operation that never happened.

Missing imports now log their library, ordinal, version and fault PC and unwind
the affected execution without inventing a guest return value. Nested CPU
ownership is restored, affected scheduler threads become dormant, module startup
reports failure, and a failed RPC does not copy output or signal completion.
Registered compatible guest exports remain available as a fallback. This change
does not implement the missing operation or certify other incomplete/yielded
module-startup paths. Previously implemented generic stubs remain a separate audit.

Six focused regressions pass under MSVC /W4 /WX in Debug and Release. The first
baseline failed all five then-existing tests; the RPC case additionally exposed
an invalid old test fixture with no owned queue. That fixture was corrected in
the new test, with failed runs retained. The existing import and version suites
also pass. Earlier broad IOP suite failures remain unresolved.

MODLOAD version0x0106 export15 now implements the selected original module's
device-prefix check. The original export table at0x2DB0 points to0x1700;
the full interval0x1700..0x17DC was checked. It skips ASCII spaces, recognizes
rom/host/cdrom/atfile and accepts a digit or colon immediately after the device
prefix. Signed LB, unsigned arithmetic and branch-delay pointer increments
matter. This does not validate the whole path or guarantee a file exists.
The pinned newer SDK's explicitly unofficial constant-zero implementation is
not the source of this behavior.

The HLE is restricted to version1.6 and owned direct IOP RAM or its cached and
uncached aliases. Invalid/unsupported memory becomes an explicit execution
barrier; original memory exceptions are outside this helper's scope. The HLE
preserves registers other than v0; the original's caller-saved scratch-register
clobbers and exact instruction timing are not reproduced.

Three focused MODLOAD contracts pass in both configurations. A separate optional
replay runs the identified original instruction bytes through IopCpuCore and
compares the return value for2,077 supplied paths in Debug and Release. This
uses synthetic input strings and the existing IOP core, not a new independent
PCSX2 trace or a completed original-module startup.

Reproduce the original comparison after building ps2_iop_modload_tests:

```powershell
python tools/verify_modload_boot_device.py --module <original-MODLOAD.IRX> --exe <ps2_iop_modload_tests.exe> --output <new-evidence-directory>
```

The runner checks the complete original SHA256 and export table before extracting
the slice, retains stdout/stderr and records the executable and slice hashes.
Original module SHA256:
`4a9027499d8fe06ced66d0ab66a9e930b30943c17fd2b5ae5f0bf76abf8360a7`.

Evidence directories: native_pipeline_20261004/import_barrier_005 and modload_005.
Full D cycle005 now integrates these changes: Release buildPASS, native probe
TIMEOUT10seconds/inputMATCH at MODLOAD7/PC14374. MODLOAD15 no longer appears
as missing. The failed RPC no longer fabricates completion, so the prior19A6C4
stop is not reached or claimed repaired. MODLOAD7 remains unimplemented; verify
its argc/argv, worker-thread, completion and module ownership before adding it.
No title, battle or final acceptance criterion is claimed.
