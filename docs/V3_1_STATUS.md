# V3.1 verified status — 2026-10-10

**Research checkpoint, not a playable release. Eight product gates remain open.**

The current source candidate builds Debug/Release but does not reproduce the
historical native boot frontier. Existing 30-second probes show zero GS frames;
last published PC is 0x001AD660, RA 0x001AD674. Active instruction/cause are unknown.

Callback 0x00235CC0 now matches a real original PCSX2 input in all 32 GPR128,
all 32MiB RAM and return PC. The additional 128 synthetic cases pass. Native
store ordering, whole CPU/interrupt timing and whole boot remain unverified.

Vulkan/D3D11/D3D12 GS capture replay is tested; native gameplay integration is
pending. The first measured SW/HW RGB difference follows draw 2. Alpha
representation equivalence and the cause remain unproven; thresholds were not
weakened. Combined-content host contracts do not prove MixJoy semantics.

The two-ISO data importer passes 14 synthetic tests and one real pair: 180 disc
files, 5,084,888,300 bytes, originals unchanged by SHA256 recheck. It prepares
private data, not a complete game. The optional Tk UI is not end-to-end verified.

[Audit and upstream research](PROJECT_AUDIT.md), [completion contract](COMPLETION_BRIDGE.md),
[continuation prompt](CONTINUE_DEVELOPMENT.md), [numeric evidence](evidence/LATEST_AUDIT.json).

Historical ledgers remain unchanged in docs/evidence; their earlier frontier
claims do not describe the current source candidate. FINAL KIT, historical
binaries, 19 GS registers and XL→DW3→XL remain preserved. No candidate promotion.
