# Publication and reconstruction notes

This repository replaces an older runtime-only workspace with the native DW3/XL project. Previous Git history and branch tips were preserved before replacement. The root README and CURRENT_STATUS describe the current product; older research pages remain historical evidence.

## What is included

Native host source, the full current translated C++ corpus, modified PS2Recomp source, focused tests, tooling and selected reports. The GPLv3 license and upstream notices are retained. Small source-format files used by the recompiler are included; non-Windows prebuilt modules and retail test assets are excluded.

## What remains local

ISO/ELF images, extracted game assets, BIOS/IRX modules, full reference captures, memory cards, private provider journals, credentials, build trees and old source backups. The public evidence reports normalize local paths; embedded source/log hashes refer to the preserved originals.

Historical snapshots and obsolete entry-probe builds are archived with file manifests and verified before local cleanup. The current native build, runtime libraries and original input data are retained.

## Rebuilding

Use scripts/build_native.ps1 instead of relying on another machine's library paths. It prepares SDL2 release-2.30.11, builds the modified runtime, configures the host with explicit dependency directories and stages its DLLs. Debug uses SDL2d.dll; Release uses SDL2.dll.

The bootstrap uses existing upstream dependency declarations. It is not a fully hermetic build: network dependency availability, the Visual Studio toolchain and supplied original data remain external inputs. CMake's configuration and a successful native link do not prove game equivalence.

The full corpus intentionally remains reviewable C++ rather than an opaque archive. Git compresses stored/transferred objects; an ordinary working checkout requires about 1 GB before dependencies and builds.

## Verification

- Original development Release098: build passed; native execution stopped at missing guest PC 0x001B0308, with original input integrity MATCH.
- Staged tooling: 15 catalog tests and 10 native-probe tests passed.
- Public-history and staged-file scans found no matching known token/private-key signatures. Personal resource defaults and session-log helpers were removed from the public copy.
- Clean Release dependency and host rebuild: PASS. Its bounded native run reproduces the existing missing guest PC 0x001B0308 with input integrity MATCH. See evidence/publication-validation.json; this is a build and process check, not a completed boot.

The public copy uses environment variables for Azure endpoints and a repository-local progress output. Existing private cloud budgets are not copied or reset. Publication does not authorize new cloud resources or unrestricted spending.
