# Dynasty Warriors 3 Complete Remastered

Work in progress: a Windows x64 static recompilation and native runtime project for Dynasty Warriors 3 and Dynasty Warriors 3 Xtreme Legends.

**This is a development workspace, not a playable remaster.** No title screen or complete battle has been demonstrated. All eight final acceptance criteria remain open. Successful builds and focused contracts do not establish equivalence with the original games.

Current priority: [original boot, movies and Press Start](docs/BOOT_TO_PRESS_START_TRIAGE.md).

Ciclo028: puente GS→Direct3D11/12 probado con readback RGBA y observación Computer Use de patrón diagnóstico. Auto prefiereD3D11; selección explícita y VSync comprobados. BuildReleasePASS. El juego mantienePMODE0, vblank:8 sin implementar,1215observaciones/0presentaciones en20s,inputMATCH. No logos originales;0/8criterios. Automatización principalPAUSED y revisorGitHubDisabled. Publicar checkpoint gráfico y después audio, según el usuario. Ver docs/NATIVE_GS_DIRECTX_20261005.md.


Ciclo027: Release003 PASS;170B24,1ADE0C y1AEF98 superados. Ambos servidores PAD responden y la versiÃ³n403 procede del IOP. Nueva barrera vblank:8 (RegisterVblankHandler),antes de completar init. Native003: plazo40s,exit2,inputMATCH,2416observaciones y0presentaciones. Computer Use observÃ³ la ventana nativa negra. Contratos PAD Debug/Release PASS;3regresiones IOP generales siguen abiertas. Primeros logos pendientes;0/8criterios cerrados. Ver docs/NATIVE_PAD_BOOT_20261005.md.

The following026 checkpoint is retained as history.
Cycle026: all eight initial modules now enter, return and reside, including
KOEISND. Correcting outgoing SIF DMA direction removed premature RPC completion.
Memory-card binding and its next call complete; next missing continuation is
`0x00170B24`. Full Release build passes; no native logo has been demonstrated.
Three broader IOP regressions remain open. See [current evidence](docs/NATIVE_BOOT_PROVIDERS_20261005.md).
The following025 checkpoint is retained as history.
The latest native run passes original SIO2MAN startup, DMA/VIF initialization,
graphics setup, GsSetCrt, IRQ registration and recovered graphics buffer/packet
returns. It also passes the recovered graphics configuration tail19A510 and store return1B8040; GIF submission19AA4C also passes; color return1B7F84 passes; the recovered `0x001B1004` continuation also passes. It now waits for memory-card RPC `0x80000400`, with missing module startup and invocation `0x00234400` under investigation; no game image is demonstrated. User priority: native boot and the first original logos. See [cycle025](docs/NATIVE_WAITSEMA_20261005.md). See the
[buffer and packet checkpoint](docs/NATIVE_GRAPHICS_BUFFER_20261005.md),
[graphics checkpoint](docs/NATIVE_GRAPHICS_20261005.md),
[DMA/VIF checkpoint](docs/NATIVE_DMA_VIF_20261005.md) and the preceding
[MODLOAD7/SIO2MAN repair](docs/NATIVE_MODLOAD_SIO2MAN_20261005.md).
`scripts/observe_native.ps1` runs a bounded visible observation with preserved
logs; it is not a standalone game release.

Current product contract: [native PC objective](docs/NATIVE_PC_OBJECTIVE.md). The local final product directory is `C:/Games/DW` on NVMe; see [storage layout](docs/STORAGE_LAYOUT.md). It is reserved, not a playable release.

## Current state

- The native executable loads the identified XL ELF and executes translated EE code with an owned runtime.
- SetupHeap arguments and return agree with recorded reference checkpoints in Debug and Release; other state differences remain open.
- The original IOP reboot request now reaches the selected module startup and original EESYNC callback, followed by the new EE handshake.
- A verified catalog restores 7,636 existing resume aliases and 589 original return tails. Existing reviewed overrides take precedence.
- Native `waitsema_resume_025/native-001` passes `0x001B1004` and times out at memory-card RPC binding with input integrity MATCH; live runs produce no GS presentation. Selected graphics Debug/Release contracts pass; full CRT kernel state and gameplay remain unverified. See `docs/CURRENT_STATUS.md`.
- Four bounded advisory queues are connected: GitHub Copilot, Microsoft Copilot, browser ChatGPT and AWS Bedrock through the existing private budget ledger. Real GitHub and Nova Pro reviews ran in cycle008; all findings are independently checked. See [pool integration and limits](docs/ADVISER_POOL.md).
- Combined data/VFS components exist, but combined gameplay, graphics, sound, input, saves and full content coverage remain unverified.

The implementation and acceptance criteria are in [the project plan](docs/COMPLETE_REMASTERED_PLAN.md). Historical entries are retained and may describe superseded states.

Agent reviews use [the scoped anti-slop integration](docs/ANTISLOP.md), pinned
with its MIT license. It guides honest reporting, interface work and comments;
runtime tests and original-behavior comparisons remain the correctness checks.

[Agent Reach](docs/AGENT_REACH.md) is installed locally for public GitHub and
web research with preserved evidence. These paths were exercised against PS2SDK;
Exa returned a quota limit. Findings require original-version verification
before changing native behavior.

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

Host presentation VSync is optional and defaults to off. Use `--vsync on` or
`--vsync off` with `fate_game`; this enables live presentation. The bounded
observer accepts `./scripts/observe_native.ps1 -VSync on -Seconds 120`.
Internal PS2 VBLANK timing stays enabled. SDL may implement pacing in software;
this setting does not establish VRR, higher simulation FPS or physical display
synchronization. See [presentation checks](docs/NATIVE_HOST_VSYNC_20261005.md).

## Modding and contributions

Prefer verified translated behavior. Keep variant identity for DW3 and XL assets, preserve register widths and delay slots, and add focused regressions for measured errors. Do not replace unresolved instructions or hardware behavior with successful dummy returns. Read `AGENTS.md` and the current plan before changing runtime code.

The existing GPLv3 license is preserved. Vendored components retain their own notices. Dynasty Warriors and its game content belong to their respective owners; game data is not included here.
