# Dynasty Warriors 3 Recompiled

An unofficial native recompilation and preservation project for **Dynasty
Warriors 3** and **Dynasty Warriors 3: Xtreme Legends**, with cross-platform
support as a development goal.

Our goal is to bring the original PlayStation 2 experience to modern hardware
while preserving its gameplay, content, and visual identity, and eventually
combine both games without disc swapping.

## Project status

**Early development — not yet playable.** V3.1 is a development checkpoint,
not a finished game release.

The project currently includes:

- An experimental native C++20 recompilation runtime.
- A PCSX2-derived GS library with Vulkan, Direct3D 11, and Direct3D 12 backends,
  tested through capture replay. Connection to the native game is pending.
- Reproducible rendering comparisons using locally supplied PS2 GS captures.
- Automated host-side contract tests and continuous integration.
- Research into combining DW3 and Xtreme Legends without disc swapping.

Native boot, gameplay, and full hardware compatibility remain under development.
Hardware and software rendering still differ in the strict comparison. Passing
host tests does not establish gameplay compatibility.

See [V3.1 status and verification results](docs/V3_1_STATUS.md) for the current
blockers, evidence, and limits of each test.

## Target platforms

| Platform | Status |
|---|---|
| Windows x64 | Primary development target |
| Linux x64 | Planned |
| Steam Deck | Planned |
| Android ARM64 | Research |
| macOS | Research |

Platform support will be announced after native builds and runtime tests have
been verified.

## Game requirements

The project is designed around legally obtained copies of:

- **Dynasty Warriors 3** — NTSC-U, SLUS-20277 (executable `SLUS_202.77`).
- **Dynasty Warriors 3: Xtreme Legends** — NTSC-U, SLUS-20617
  (executable `SLUS_206.17`).

A future installer is planned to verify the user's disc images and extract the
required game data. Other regional releases require independent identification
and compatibility validation.

**No copyrighted game assets, disc images, game executables, or BIOS files are
distributed.** Game captures, saves, and translated game code remain outside
the public source tree.

## Graphics research

The original PlayStation 2 presentation remains our reference. Optional future
enhancements may include higher rendering resolutions and modern display
support.

Experimental neural rendering and AI-assisted image enhancement are long-term
research areas. [NVIDIA DLSS 5](https://research.nvidia.com/labs/adlr/DLSS5/)
is a research target, not an implemented feature. These enhancements would be
optional, disabled by default, independent of the original rendering experience,
and never required to play.

Integration depends on technical feasibility, platform compatibility, and
appropriate licensing. No proprietary or unauthorized neural rendering runtimes
are bundled.

## Development

- [Reproduce the verified tests](docs/REPRODUCE.md)
- [Current architecture and evidence](docs/V3_1_STATUS.md)
- [Graphics API and build instructions](research/pcsx2_bridge/README.md)
- [Combined-content research](research/combined_session/README.md)
- [Product acceptance criteria](docs/COMPLETE_REMASTERED_PLAN.md)
- [Earlier V3 checkpoint](docs/V3_STATUS.md)

PS2Recomp generates C++ locally; CMake and MSVC build the Windows candidates;
PCSX2 GS and GSRunner replay captures and provide rendering references; Python
checks contracts, file identities, and image differences.

The project draws on the broader PS2 native-port and reverse-engineering
community. Third-party components retain their respective licenses; the
PCSX2-derived GS code is **GPL-3.0-or-later**.

## Disclaimer

This is an independent, unofficial fan project. It is not affiliated with or
endorsed by Koei Tecmo, Omega Force, or Sony Interactive Entertainment.

Dynasty Warriors and related trademarks belong to their respective owners.
