# PHASE 44B.22E — Build

## Command

```text
cmake --build D:\PCSX2_FORENSIC_BUILD_03 --config Devel --parallel 8
```

## Result

- MSBuild exit code: `0`
- `common.lib`: built successfully
- `pcsx2.lib`: built successfully
- `updater.exe`: built successfully
- Build log: `D:\PCSX2_FORENSIC_BUILD_03\phase_44b_22e_build_resume.log`

The ryml blocker is resolved. The configured build has `ENABLE_QT_UI=OFF`, so this build produces the PCSX2 core library rather than a PCSX2 frontend executable. No PCSX2 process was started.

## Produced binaries

- `D:\PCSX2_FORENSIC_BUILD_03\common\Devel\common.lib`
- `D:\PCSX2_FORENSIC_BUILD_03\pcsx2\Devel\pcsx2.lib`
- `D:\PCSX2_FORENSIC_BUILD_03\updater\Devel\updater.exe`

`updater.exe` is not the PCSX2 emulator executable and was not executed.
