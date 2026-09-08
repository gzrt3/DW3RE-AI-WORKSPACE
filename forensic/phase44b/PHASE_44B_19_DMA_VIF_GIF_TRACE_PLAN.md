# DMA/VIF/GIF minimum trace plan

The minimum useful bridge is one event ID carried through:

`handler entry → generated buffer → DMA1(MADR,QWC,CHCR) → VIF1 destination/unpack → GIF path-3 source → GSDump transfer ordinal/offset`.

The installed PCSX2 configuration has trace categories for DMA/VIF/GIF, but the local INI shows them disabled and no captured runtime log exists. A live Pine-style memory read is insufficient because it observes current registers, not historical transfer provenance.

Required custom hook locations in a source build are the DMA1 transfer/completion path, VIF1 packet consumer, GIF path-3 transfer entry, and GSDump writer/transfer ordinal. Exact function names cannot be responsibly asserted without a local PCSX2 source checkout.

