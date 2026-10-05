# Native IRQ registration checkpoint

Release `irq_registration_017/native-001` passes the recovered AddIntcHandler
wrapper `0x001A4500` and continues through interrupt enable, graphics setup and
GS buffer initialization. It stops at missing EE continuation `0x00198918`,
with RA `0x00198900`, SP `0x01FFF9C0` and GP `0x002D8170`. Exit code is
4294967295; input integrity is MATCH. No native game image, title, movie or
battle is demonstrated. All eight final acceptance gates remain open.

## Original wrapper and ownership

The selected XL ELF identifies four words at `[0x001A4500, 0x001A4510)`:
`24030010, 0000000C, 03E00008, 00000000`. The entry sets syscall number16
in v1, uses the existing numeric dispatcher and returns through the original
JR/NOP delay. Mapping `0x001A4508` executes only the return tail. Original-word
and existing-owner guards run before registration; generated originals remain
intact. This checkpoint adds the wrapper around the existing native scheduler
registration. It does not establish complete original-kernel behavior.

## Scoped verification

Debug and Release `contract-*-004.log` PASS under the focused `/W4 /WX` target:
four opcode mutations reject before partial registration; two mapping conflicts
preserve the existing owner; two wrapper registrations/returns preserve the
selected ABI and do not repeat registration on the return-only entry. Three
scheduled VBLANK cases check an enabled callback, a masked cause and a removed
handler. The fixture checks cause/argument/GP, an owned callback stack, no early
callback and preservation of the registering stack. Existing graphics, CRT,
allocator, memory-routing and VBLANK regressions also pass. These are focused
contracts and caller-only original-opcode comparisons, not independent PCSX2
lockstep or complete IRQ timing verification.

The full incremental Release build in `native-build-001.log` completes with
exit0 in `build-owner-005.json`. The retained native trace passes `1A4500`,
`1A5368`, `1A4560`, `199FD4`, `234450`, `180450`, `1985A0`, `198808`,
`198998`, `1988D0` and `198900` before failing at `198918`. A successful build
and the moved barrier do not close a gameplay criterion.

## Preserved failures and evidence

Release attempts001/002/003 remain in the evidence directory. Attempt001 logs
`AddIntcHandler wrapper mapping conflict`. The recorded implementation diagnosis
is that the conflict fixture polluted the shared global dispatch table; the
corrected fixture restores its previous slot. Attempt002 logs `registration
fabricated completion or callback`;003 additionally records actual handlerID2
versus expectedID1 and zero callback calls. Their recorded implementation
diagnosis is duplicate execution: the fixture manually invoked the wrapper
before the scheduler replayed the saved original context. The corrected fixture
runs that wrapper through the scheduler. ExpectedID1 after reset remains valid.
These diagnoses are preserved as implementation accounts supported by the logs
and corrected fixture; earlier source diffs or independent root-cause proofs are
not claimed.

See [public evidence](../evidence/native_irq_registration_20261005.json), with
hashes for contracts, build, launch and process logs. Its source identities come
from the saved017 launch. Current source now contains018 work and is not labeled
as the tested017 source. The launch manifest itself does not establish
source-to-binary correspondence. Exact original insertion ordering, optional
arguments, kernel clobbers and complete IRQ timing remain unverified. No new
original IRQ-registration checkpoint exists. A verified backup for015–017 has
not been established.
