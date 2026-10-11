# Project audit — 2026-10-10

**Not playable. MixJoy unresolved. No completed native game can be packaged today.**

The requested final product cannot be derived from the current evidence by
adding an installer. This package contains the public source, data setup tool,
verification records and a concrete completion contract. It has no game executable,
generated guest code, disc data, BIOS, emulator states or private captures.

## Current evidence

| Area | Verified result | Remaining gap |
|---|---|---|
| Source candidate | Debug/Release source builds; 3,519 generated units; no historical game/runtime object imports | Whole-boot semantics not established; FFmpeg is an identified external binary dependency |
| Callback 0x00235CC0 | Actual PCSX2 input replay: all 32 GPR128, all 32 MiB RAM and return PC match; 128 additional synthetic cases pass | One real input, not CPU/peripheral/timing parity; no native write-order tracing |
| Native boot | Existing 30-second probes produce zero GS presentations; last published PC 0x001AD660, RA 0x001AD674 | Active instruction and cause not identified; historical frontier not reproduced |
| Modern GS | PCSX2-derived Vulkan/D3D11/D3D12 bridge works for capture replay | Not connected to native gameplay; SW/HW draw-2 RGB difference remains unexplained |
| Combined content | Host resolver tests cover identities, remount and persistent references | No demonstrated shared CDVD/IOP consumer or validated MixJoy state replacement |
| Audio/input/saves | Partial host/service contracts and research | Native battle, original audio, controls, persistent combined progress and soak unverified |
| Disc setup | Synthetic ISO importer tests cover valid input and 13 negative/preservation cases | See real-disc verdict below; preparation is not runtime integration |
| Product | Eight acceptance criteria remain open | No playable release |

The callback entry was recorded after a normal XL reset, not a disc swap.
It writes RAM 0x002D0468 from 0 to 1, then RAM 0x002D046C from 0 to 0,
and returns to 0x001A73C8. Those observations do not establish a MixJoy consumer,
an MMIO write, or a content-activation rule. The claim that XL merely confirms
cached state remains a hypothesis until its consumers and persistence are measured.

The current source candidate replaces an older continuation-registration block.
That change is a comparison lead, not the demonstrated cause of the boot regression.
Neither the published PC nor a successful callback fixture is permission to
restore legacy adapters, force PC/RA or return dummy success.

Fresh preservation checks pass for 31/31 FINAL KIT files, 9/9 frozen inputs,
the preserved native binaries, five producer inputs, nineteen GS registers and
the XL→DW3→XL evidence. Historical failures remain retained.

## GitHub projects reviewed

Repository revisions below were read from public GitHub metadata. Documentary
claims about other games are not execution evidence for DW3. No new dependency
was substituted into the runtime during this audit.

| Project / reviewed revision | Practical use | Decision |
|---|---|---|
| [PCSX2](https://github.com/PCSX2/pcsx2/tree/fd9d310ccbb6b8b62c976da8886a3c8fd3a10ff3) v2.8.2, GPL-3.0-or-later | Original debugger reference, GS replay, hardware/service semantics | Retain the already pinned GS bridge and numeric capture method |
| [PS2Recomp](https://github.com/ran-j/PS2Recomp/tree/2c5fbb9389e11dd95693385969490c9e8e6f57b4), GPL-3.0 | Producer/runtime and game-specific SIF RPC profiles | Compare specific fixes against our pinned fork; no blind upgrade |
| [PS2SDK](https://github.com/ps2dev/ps2sdk/tree/2c670453980fcc3fe46ead6399b730b12c8556eb), AFL-2.0 | Public pad, CDVD, memory-card and SIF contracts | Verify layouts/return codes against the retail game's observed calls |
| [ICO PC](https://github.com/nathanialf/ico-pc/tree/d4f74da4e1097c3da5cc4a01e78eb6bd4e78f5b4), MIT according to its README | ISO-first setup, platform boundary and presentation defaults | Installer/architecture reference; its game-specific decompilation is not a DW3 runtime replacement |
| [paraLLEl-GS](https://github.com/Arntzen-Software/parallel-gs/tree/cc6184af7e0c03da603045ca371ffa5dae9b0655), LGPLv3+ according to its README | Independent Vulkan-compute GS implementation and RenderDoc debugging | Useful later for differential work; documented replay format is v8, our capture is v9, so compatibility is unproven |

PS2Recomp's [IOP documentation](https://github.com/ran-j/PS2Recomp/blob/2c5fbb9389e11dd95693385969490c9e8e6f57b4/ps2xIOP/README.md)
describes native RPC/DMA profiles, not execution of IRX binaries. Its existing
game profiles do not demonstrate Koei sound compatibility. PS2SDK contracts
therefore help implementation, but cannot supply an unmeasured Koei protocol.

The [paraLLEl-GS README](https://github.com/Arntzen-Software/parallel-gs/blob/cc6184af7e0c03da603045ca371ffa5dae9b0655/README.md)
explicitly limits its hardware-accuracy claims and lists Vulkan feature
requirements. Replacing the working bridge now would add integration uncertainty
without addressing the observed boot failure. ImHex can help inspect bounded
binary structures locally; a viewer/plugin does not resolve scheduling or GS routing.

## Most efficient engineering decision

Keep one XL-based runtime with both original data roots. Share a verified resolver
between native VFS and CDVD/IOP; translate disc-dependent content references into
stable edition/resource identities. Persist the measured semantic state, not LSNs,
save states or a fabricated always-successful disc check. Keep original visuals
as the default. Use the existing GS bridge after observing actual DMA/VIF/GIF input.

First identify the earliest original-versus-native boot divergence under equal
inputs; fix its demonstrated cause. Trace content-state writers and consumers
alongside the resolver work when the required execution landmarks are available.
Rendering enhancements, a new GS backend and broad module rewrites have lower
value than those missing contracts. [The bridge](COMPLETION_BRIDGE.md) defines
one continuous implementation/verification task, not another version ladder.

## Real-disc importer verification

PASS: the CLI imported both real user ISOs, extracted and verified 180 disc files
(5,084,888,300 bytes), rechecked both original ISO hashes and wrote a successful
receipt. This does not unpack the thousands of entries inside BNS archives or
install a playable runtime. Fourteen synthetic tests pass; the optional Tk UI
was not exercised end-to-end. Numeric evidence: [LATEST_AUDIT.json](evidence/LATEST_AUDIT.json).
