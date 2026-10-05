# Agent instructions

This repository contains a Windows x64 static recompilation project in development. Read README.md, docs/CURRENT_STATUS.md and docs/COMPLETE_REMASTERED_PLAN.md before work. Historical plan entries may be superseded by the current status.

- Preserve translated source and original provenance. Verify a reconstruction against the identified original binary before using it.
- Do not introduce dummy success, invent hardware state, skip missing instructions or claim full parity from compilation or synthetic tests.
- Keep guest register widths, memory alias rules, ABI and delay-slot behavior explicit.
- Use unique output directories for probes; preserve failures as evidence. All eight final acceptance criteria remain open until demonstrated end to end.
- Coordinate writers and builds. Never delete another process's active build or originals.
- Original game data, BIOS, savestates, credentials, provider ledgers and personal saves belong outside Git. Configure cloud endpoints through environment variables and preserve existing spending limits; publication is not authorization for new spending.
- The vendored runtime contains local modifications; do not replace it with an unmodified upstream checkout.
- Build with scripts/build_native.ps1. The full game target currently uses separately built native runtime libraries. Focused tooling tests run without game data.
- Public evidence normalizes local paths. Embedded hashes identify the original local artifacts; normalized JSON files have different hashes.

- The bounded Copilot bridge and native pipeline are documented in docs/COPILOT_PIPELINE.md. Advisers never apply code; recheck live source hashes and independently verify every claim. Preserve submitted/uncertain requests without automatic retries.
