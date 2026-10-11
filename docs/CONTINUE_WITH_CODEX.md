# Continue with Codex 6.1 Sol

Select GPT-6.1 Sol with High reasoning in Codex, open the existing local workspace
`D:\dw3-port`, and paste the prompt below. The project requires local private inputs
for execution; a fresh public clone can run host tests and data setup but cannot
yet reproduce the full native candidate. Do not upload private material.

```text
Continue the existing DW3 + Xtreme Legends native project as one continuous task.
Read AGENTS.md, WORKING_BASE.md, notes/CODEX_V3_1_OBSERVED_ROOT_HANDOFF.md and
notes/V31_CALLBACK_ORIGINAL_COMPARISON_20261010.md. Then read the public
docs/PROJECT_AUDIT.md and docs/COMPLETION_BRIDGE.md in v2_worktree/publish.

The latest source candidate is v2_worktree/native_v31_source_003, with build
v2_worktree/native_v31_source_build. It is not promoted. The preserved previous
working base and historical GS/swap evidence must remain unchanged.

Callback 0x00235CC0 is generated through the producer and matches an original
PCSX2 input in all 32 GPR128, all 32MiB RAM and return PC 0x001A73C8. The extra
128 synthetic cases also pass. The two original stores target RAM 0x002D0468
(0 -> 1) and 0x002D046C (0 -> 0). This was a reset capture, not MixJoy evidence.
Native write ordering, full CPU state and interrupt timing remain unverified.

Find the earliest original/native boot divergence under equal pinned inputs.
Existing native probes show zero GS frames and only the last published PC
0x001AD660/RA 0x001AD674; the active instruction and cause are unknown. Use
numeric dispatcher/scheduler/interrupt traces and PCSX2 captures to establish
the cause before changing runtime or producer semantics. Do not restore legacy
continuation adapters by assumption. Keep fixes global when the cause is global.

Use the already pinned PCSX2 GS library, with Vulkan primary. Connect actual
ordered DMA/VIF/VU/GIF output and verified IRQ/readback semantics. Diagnose the
existing draw-2 RGB and alpha-representation differences without weakening
comparators. Do not replace the GS backend merely to work around unknown causes.

Integrate the verified two-disc resolver with native VFS and CDVD/IOP. Measure
content-state writers, consumers, resource mappings and persistence against the
preserved XL->DW3->XL original behavior. Build one XL-based native session with
both data roots and a disc-independent profile. Do not force an always-successful
disc check or assume the callback globals enable MixJoy.

PCSX2 is the original reference, not the shipping launcher. Use computer-use
skill for Windows actions; hide memory/disassembly and populated breakpoint
instruction cells before screenshots. Keep .p2s, RAM, dumps and game-derived
source local. Local scripts may inspect explicitly authorized originals and
emit only numeric summaries; respect all remaining access restrictions.

Continue until original boot/menu/movies, playable battles, combined content,
audio/input, persistence and clean-machine/soak acceptance all pass. Maintain
one claims ledger and one reproducible build/install recipe rather than adding
version phases. Run independent tests appropriate to each actual correction.
Publish only public source, safe numeric evidence and concise English docs.
Do not label a ZIP or importer as a complete playable game before those gates
pass. End with the exact verified result, remaining blockers and artifact hashes.
```

The optional UI starts with `python installer/setup.py`. The CLI, limitations
and verification commands are in [installer/README.md](../installer/README.md).
Original debugger entry/return captures for this callback are already complete;
do not ask the user to recreate them unnecessarily.
