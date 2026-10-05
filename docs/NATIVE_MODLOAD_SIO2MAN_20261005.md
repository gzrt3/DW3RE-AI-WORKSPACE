# MODLOAD7/SIO2MAN: native boot barrier repaired

The native Release executable now executes the selected original SIO2MAN through
the original MODLOAD1.6 worker. In `modload_focus_013/native-003`, module21 enters
on thread1 with argc1, returns0 and reaches resident state3. The filename is the
actual `cdrom0:\MODULES\SIO2MAN.IRX;1` request. The process proceeds beyond the
old MODLOAD7 barrier and stops at the unresolved EE continuation `0x0019A6C4`.
No title, movie, battle or end-to-end acceptance criterion is verified.

The user's focus instruction remains active: the main automation is PAUSED,
GitHub Copilot's reviewer is Disabled, and auxiliary servers, advisers, cloud
work, installation and publication remain paused. This work used local source,
original files and saved reference evidence; it did not capture new PCSX2 output.

## Repair

- LOADCORE1.3 now owns coherent guest module, library, client and boot-mode lists.
  Its bounded lifecycle implementations are checked against selected original
  instructions, including register/unregister/search and original link rollback.
- Import dispatch executes the original JR delay slot once and captures its
  return target before the delay slot changes registers. Linked guest J targets
  execute original code. Registered HLE providers have guest-callable thunks;
  missing ordinals and unsupported targets remain explicit failures.
- A nested guest callback clears its inherited import boundary while retaining
  its parent's suspended boundary. This fixes the continuation regressions
  found during integration.
- Native module entry receives filename plus packed string arguments, a null
  argv terminator, GP and ModuleInfo. It no longer receives byte count as argc.
- Boot executes original DMACMAN, SYSCLIB and MODLOAD. Original SYSCLIB startup
  changes its embedded STDIO version before registration; executing that startup
  avoids the duplicate STDIO registration observed in the failed early probes.
- Selected SYSMEM, LOADCORE, INTRMANP, THREADMAN, IOMAN and STDIO images supply
  guest export tables backed by explicit native handlers. Original input bytes
  remain unchanged; only their loaded guest copies receive thunks.
- Initial mode4=0 comes from retained PCSX2 IOP RAM. After the selected UDNL
  reboot, mode4=3 follows the original UDNL/LOADCORE instructions. LOADCORE1.1
  QueryBootMode12 matches all92 bytes of the selected LOADCORE1.3 routine;
  only that historical ordinal/version combination was added.

## Verification

Evidence root: `artifacts/native_pipeline_20261005/modload_focus_013`.
The compact public record is `evidence/native_modload_sio2man_20261005.json`.
The local focused checkpoint is
`D:/Backup/DWProject/modload-sio2man-20261005-013`; its `verification.json`
records the final copy/hash result. It contains a complete base Git bundle plus
the uncommitted source delta and local evidence; it is not a game release.

| Check | Observed result |
| --- | --- |
| Focused build | Debug and Release pass with `/W4 /WX` |
| Regression suites | 11/11 pass per configuration |
| LOADCORE state replay | 32 comparisons per configuration; full RAM and preserved ABI |
| LOADCORE library replay | 69 comparisons per configuration |
| Import/entry contracts | Six cases: linked/unlinked delay, changed RA, absent ordinal, unsupported thunk, packed argv |
| Original positive probe | Caller completes; module11, entry0, resident3, thread1, argc1; 2,727 instructions |
| Original missing-file probe | Caller completes with -203; no module entry, no resident-count increase; 1,333 instructions |
| Full native build | Release passes in `native-build-003.log` |
| Native observation | SIO2MAN module21, entry0, resident3; later MODMSIN module22 also resident |
| Native process outcome | PROCESS_FAILED at EE0x0019A6C4; exit4294967295; input integrity MATCH |

The 11 suites cover import versions, import barriers, call completion, owned
continuations, MODLOAD, IOMAN reads, SYSMEM allocation, LOADCORE image/link/state
and loader dispatch. This is not a claim that every repository test was run.

Original replay uses the local IOP interpreter, not an independent PCSX2
lockstep. The library replay intercepts cache flush and excludes stack scratch;
the state replay compares full RAM without intercepted calls. The MODLOAD probe
uses a synthetic caller and a host limited to the exact SIO2MAN filename.
The separate native run uses the game's real request path.

Failed attempts remain intact: duplicate provider setup, missing initial boot
state, inherited callback boundaries, a duplicate diagnostic getter compilation
error and a test that incorrectly used aligned word loads on packed strings.
That test was corrected to read bytes; runtime alignment rules were preserved.

## Reproduce locally

Use the configured focused build with `PS2X_IOP_BUILD_TESTS=ON`. Build the test
targets before running CTest; repeat with Debug and Release. Original replays
require the user's local files and are not GitHub-hosted tests.

```powershell
ctest --test-dir D:/DW3-IOP-Library-Build -C Release --output-on-failure -R '^ps2_iop_(import_version|import_barrier|call_completion|continuation|modload|ioman_read|sysmem_allocation|loadcore_image|loadcore_link|loadcore_state|loader_dispatch)_tests$'
& D:/DW3-IOP-Library-Build/Release/ps2_iop_loadcore_state_tests.exe 'C:/Fate Soldiers 3/data/iop/boot/LOADCORE.IRX'
& D:/DW3-IOP-Library-Build/Release/ps2_iop_loadcore_link_original_replay.exe 'C:/Fate Soldiers 3/data/iop/boot/LOADCORE.IRX'
& D:/DW3-IOP-Library-Build/Release/ps2_iop_modload_original_probe.exe 'C:/Fate Soldiers 3/data/iop/boot' C:/DW3/sources/dumps/dw3xl_ps2/MODULES/SIO2MAN.IRX '<new-output-path>.bin'
# Supply missing-file as the final argument to exercise the original error path.
```

For full integration, build with `scripts/build_native.ps1` and use
`tools/native_boot_probe.py` with a new output directory. The exact launch and
input hashes for the measured run are retained in `native-003`.

## Remaining scope

The old missing-MODLOAD7/SIO2MAN startup barrier is repaired. Actual SIO2 input
transactions, DMA/IRQ timing and controller/gameplay parity are not established
by successful module startup. SIFCMD rejected-packet warnings remain in the
native run. Other loadmodule requests still have literal STDIO format strings;
their individual outcomes are not inferred from those lines.

Some named HLE boot services still use the older module-manager policy. Prepared
native modules use host-owned allocations; the successful original MODLOAD7
path uses guest SYSMEM allocation. Do not generalize this evidence to arbitrary
module unloading or all service ownership. Failed prepared-image installation
can retain diagnostic state; the native reboot fails closed and must be reset,
not resumed or retried as though installation succeeded. Full transactional
rollback and recovery after arbitrary failed native starts remain follow-up work.

Next native barrier: recover EE0x0019A6C4 from the original executable and verify
its continuation. Keep this milestone distinct from title/video/Press Start and
from the eight final acceptance criteria, which all remain open.
