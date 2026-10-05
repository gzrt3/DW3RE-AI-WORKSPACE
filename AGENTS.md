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
- Read docs/ADVISER_POOL.md for the four-adviser coordinator. Collect it before continuation work. For a changed READY Bedrock task, the owning continuation may dispatch one bounded review through the configured original private router after accounting and service-access checks; no new ledger, cap increase, fallback or automatic retry. Keep native implementation progressing while an adviser is unavailable.

User objective clarification2026-10-05: docs/NATIVE_PC_OBJECTIVE.md is the
current product contract. Final target is the native Windows x64 standalone
DW3 + XL port, with modding and full end-to-end evidence; preserve all8criteria.

<!-- antislop:start -->
## Scoped anti-slop review

Read `docs/ANTISLOP.md` before applying anti-slop. Apply it during authorized
development using the project scope defined there. This project default follows
the user's autonomous-development request; it is not a saved global preference.
For new interface/copy work, read `.agents/skills/antislop/SKILL.md`. For comment
edits, also read `.agents/skills/antislop-code/SKILL.md`. Their references to
`antislop.md` mean the installed core SKILL.md above.
Preserve original visuals, translated code, ABI/provenance explanations, licenses
and historical evidence. Do not add approval loops for already authorized work,
truncate technical comments to meet a line limit, or turn review into a claim of
bug-free gameplay. The native objective and original-behavior evidence take
precedence over website styling rules. Report failures and untested scope openly.
<!-- antislop:end -->
