# PHASE 44B.19 — AI handoff

The runtime bridge is not available from the installed artifacts alone.

Confirmed:

* PCSX2 installation path and binaries.
* Captured GS dump downstream records and GS offsets.
* Static Part12/`0x0033`/`0x0030` evidence.
* Local PCSX2 trace/debug configuration exists but relevant EE/DMA/VIF/GIF sources are disabled.
* No usable PCSX2 source checkout is present; PS2Recomp stubs are not PCSX2 internals.

Missing:

* runtime Resource1670/Part12 identity and command pointer;
* EE PC/RA/arguments at `0x001303E0` or `0x00131390`;
* generated buffer range;
* DMA1 MADR/QWC history;
* VIF1/GIF provenance;
* synchronized mapping to an existing GSDump offset.

Required next experiment: isolated PCSX2 source instrumentation (or equivalent debugger hooks) emitting one event ID across handler, buffer, DMA1, VIF/GIF and GSDump transfer ordinal. Do not infer L1/L2, character identity, Section5, or Resource1670→GS from current evidence.

