# PHASE 44B.22K — AI Handoff

ABI alignment is **KNOWN**.

PCXS2's upstream configuration intentionally maps MSVC iterator levels as follows: Debug=2, Devel=1, Release/RelWithDebInfo=0. The generated `Devel|x64` frontend project confirms level 1. The failed link proves that the installed release `ryml/c4core` objects use level 0; KDDockWidgets 2.3.0 was also built as Release and has no Devel variant.

The correct strategy is to preserve PCSX2 Devel at level 1 and rebuild the affected C++ dependencies with level 1. Do not force PCSX2 Devel to 0, do not switch to Release as a substitute, and do not rebuild Qt initially. Qt's official SDK supplies normal release/debug libraries and has not been identified by the linker as the mismatch source.

Minimal Phase 44B.22L action: build isolated level-1 variants of `ryml/c4core` and KDDockWidgets 2.3.0 with MSVC2022 x64 and the PCSX2 Devel runtime/exception model, then relink PCSX2 Devel. This phase performed no changes, no full build, and no runtime execution.

Architectural boundary remains unchanged: PCSX2 is forensic/reference laboratory tooling only; DW3RE is an independent standalone native executable.
