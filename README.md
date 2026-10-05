# Dynasty Warriors 3 Complete Remastered

Work in progress: a Windows x64 static recompilation and native runtime project for Dynasty Warriors 3 and Dynasty Warriors 3 Xtreme Legends.

**This is a development workspace, not a playable remaster.** No title screen or complete battle has been demonstrated. All eight final acceptance criteria remain open. Successful builds and focused contracts do not establish equivalence with the original games.

Current product contract: [native PC objective](docs/NATIVE_PC_OBJECTIVE.md).

## Current state

- The native executable loads the identified XL ELF and executes translated EE code with an owned runtime.
- SetupHeap arguments and return agree with recorded reference checkpoints in Debug and Release; other state differences remain open.
- The original IOP reboot request now reaches the selected module startup and original EESYNC callback, followed by the new EE handshake.
- A verified catalog restores 7,636 existing resume aliases and 589 original return tails. Existing reviewed overrides take precedence.
- The latest native development cycle passes `0x0023CB40`, the shared CDVD event request and `0x001A7014`, then stops at `0x0019A6C4` with input integrity MATCH. MODLOAD exports7/15 remain unresolved; see `docs/CURRENT_STATUS.md`.
- Bounded Copilot review queues are connected to the native pipeline. GitHub runs hourly locally; Microsoft uses Computer Use through the main continuation. See [integration and limits](docs/COPILOT_PIPELINE.md).
- Combined data/VFS components exist, but combined gameplay, graphics, sound, input, saves and full content coverage remain unverified.

The implementation and acceptance criteria are in [the project plan](docs/COMPLETE_REMASTERED_PLAN.md). Historical entries are retained and may describe superseded states.

## Repository contents

| Path | Purpose |
| --- | --- |
| `src/`, `include/` | Native host, translated EE corpus and reviewed repairs |
| `tools/PS2Recomp/` | Modified runtime/IOP/recompiler source, with upstream license |
| `tools/` | Trace comparison, provenance, data extraction and bounded probes |
| `tests/` | Synthetic contracts and tooling regression tests |
| `scripts/build_native.ps1` | Build dependencies and host without machine-specific paths |
| `docs/`, `research/`, `evidence/` | Plan, compact research context and selected verification reports |

Build trees, Python environments, cloud credentials/budget journals, ISO images, BIOS files, extracted game assets, memory dumps, savestates and personal saves are kept outside Git. Generated C++ is retained as source; Git compresses it during transfer and storage.

## Build on Windows

Install Visual Studio 2022 with Desktop development with C++, CMake 3.25 or newer, Git and Python 3.12 or newer. From PowerShell at the repository root:

```powershell
./scripts/build_native.ps1 -Configuration Release -Parallel 4
```

The script obtains SDL2 at the named release and builds the vendored runtime separately. Its CMake configuration obtains the declared raylib and FFmpeg dependencies. A network connection is needed on the first build. `-BuildRoot D:/DW3-build` places intermediate files on another drive. `-SDL2Source <path>` reuses a local SDL source tree.

Output: `out/native/game/bin/Release/fate_game.exe`. The executable is currently a boot diagnostic with native dependencies, not a packaged final game. The existing development build and clean-checkout validation are distinguished in [build notes](docs/PUBLICATION.md).

## Local input data and verification

Supply the original identified game dumps and the original IOP modules locally. `tools/prepare_combined_data.py --help`, `tools/extract_iop_modules.py --help` and `tools/native_boot_probe.py --help` describe their inputs. Original files are never downloaded by this repository.

The native reboot profile in `include/fate/native_iop_manifest.hpp` identifies the required original modules by SHA-256. A missing or mismatched module must fail explicitly. Extracted assets and BIOS-derived bytes are intentionally absent from Git.

Tooling checks that do not require retail data:

```powershell
python -m unittest discover -s tests -p test_resume_catalog.py -v
python -m unittest discover -s tests -p test_native_boot_probe.py -v
```

For a bounded local run, provide `--exe`, `--dump-root`, `--elf`, `--iop-root`, a new `--output` directory and a timeout to `tools/native_boot_probe.py`. Logs preserve input identities and failures. A timeout or process exit is not a verified boot.

## Modding and contributions

Prefer verified translated behavior. Keep variant identity for DW3 and XL assets, preserve register widths and delay slots, and add focused regressions for measured errors. Do not replace unresolved instructions or hardware behavior with successful dummy returns. Read `AGENTS.md` and the current plan before changing runtime code.

The existing GPLv3 license is preserved. Vendored components retain their own notices. Dynasty Warriors and its game content belong to their respective owners; game data is not included here.
