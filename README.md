# Dynasty Warriors 3 Recompiled

Native PC recompilation research for **Dynasty Warriors 3 + Xtreme Legends**.
The goal is one game with both content sets and no disc swapping, preserving
the original gameplay and visual identity.

**Development build — not playable. MixJoy is not yet resolved.**

The current source candidate builds, one original callback matches PCSX2, and
the modern GS library replays captures with Vulkan, Direct3D 11 and Direct3D 12.
Native boot, actual GS frames, combined-content activation and complete gameplay
remain unverified. [Current audit](docs/PROJECT_AUDIT.md).

## Prepare your discs

Requires Python 3.12+ and your own NTSC-U discs: DW3 `SLUS_202.77` and XL
`SLUS_206.17`. No game data, executables, BIOS or private captures are included.

```powershell
git clone --depth 1 --single-branch --branch adviser/v3-consolidation https://github.com/gzrt3/DW3RE-AI-WORKSPACE.git DW3-PC
cd DW3-PC
python installer/setup.py
```

Choose both ISO files and a new output folder outside the checkout. The importer
checks the disc structure/boot identity and verifies extracted-file hashes.
The CLI was tested on both real local discs: **180 files, 5.08 GB**. It prepares
data only; it cannot create or launch a complete playable game today.
[Instructions and limitations](installer/README.md).

## Development package and continuation

Download the **DW3-V3.1-Development-Kit** artifact from a successful
[Development source package run](https://github.com/gzrt3/DW3RE-AI-WORKSPACE/actions/workflows/development-package.yml).
The ZIP contains public source, the importer, evidence summaries and instructions.
It has no prebuilt game and no resolved MixJoy activation.
Use a run for commit `0608979` or a later descendant; earlier ZIPs were superseded
after recovered bootstrap files were caught outside the original private-path gate.

- [Completion contract](docs/COMPLETION_BRIDGE.md)
- [Copy-paste prompt for Adviser 6.1 Sol](docs/CONTINUE_WITH_ADVISER.md)
- [Verified tests and graphics build](docs/REPRODUCE.md)
- [Latest numeric evidence](docs/evidence/LATEST_AUDIT.json)

PS2Recomp generates code locally; CMake/MSVC build candidates; PCSX2 supplies
the original reference and GS library; Python validates captures and data.
Windows x64 is the development target. Other platforms remain unverified.
The PCSX2-derived components retain GPL-3.0-or-later and their notices.

Unofficial and independent; not affiliated with Koei Tecmo, Omega Force or Sony.
Dynasty Warriors and related trademarks belong to their respective owners.
