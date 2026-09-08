# PHASE 44B.20 — FINAL REPORT

`PHASE_44B_20: PARTIAL`

`PCSX2_SOURCE: ACQUIRED`

`PCSX2_BUILD: BLOCKED`

`EE_PC_HOOK: PARTIAL`

`0033_HOOK: PARTIAL`

`0030_HOOK: PARTIAL`

`RESOURCE1670_MEMORY: BLOCKED`

`DMA1_TRACE: FEASIBLE_DESIGN / NO_RUNTIME_DATA`

`VIF1_TRACE: FEASIBLE_DESIGN / NO_RUNTIME_DATA`

`GIF_TRACE: FEASIBLE_DESIGN / NO_RUNTIME_DATA`

`GS_CORRELATION: PARTIAL`

`RESOURCE1670_TO_GS: UNKNOWN`

`PRODUCTION_CHANGES: 0`

The isolated upstream source gives a practical bridge map: EE execution context, DMA1/VIF1, DMA2/GIF, GS transfer, and GSDump serialization are all identifiable. It does not itself provide a runtime trace, nor does it identify DW3RE Resource1670 from inside PCSX2. The installed dump binary is version `1.7.4163.0`; the audited source revision is current upstream and may differ.

The minimum future bridge must log, in one monotonic event stream: EE PC/RA and selected arguments; DMA1 MADR/QWC/CHCR; VIF1 payload address/size/TTE; GIF tag/MADR/QWC and packet bytes; GS transfer buffer/size; and a timestamp/frame correlation. It must be built in the isolated tree and run with isolated configuration.
