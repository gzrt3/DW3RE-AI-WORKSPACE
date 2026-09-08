# PHASE 44B.19 — Final report

**PCSX2_EXISTING_RUNTIME_TRACE = PARTIAL**  
**EE_PC_OBSERVABLE = PARTIAL**  
**RESOURCE_MEMORY_OBSERVABLE = NO**  
**0033_RUNTIME_HOOK = NO**  
**0030_RUNTIME_HOOK = NO**  
**DMA1_OBSERVABLE = PARTIAL**  
**VIF1_OBSERVABLE = NO**  
**GIF_RUNTIME_OBSERVABLE = PARTIAL**  
**GS_OFFSET_RUNTIME_OBSERVABLE = PARTIAL**  
**PCSX2_SOURCE_LOCAL = NO**  
**SOURCE_BUILD_REQUIRED = YES**  
**MINIMUM_RUNTIME_TRACE = event_id + Part12 command/resource identity + handler PC + generated buffer range + DMA1 MADR/QWC + GIF transfer ordinal, joined to existing GSDump GS offset**  
**PRODUCTION_CHANGES = 0**

## Findings

The local installation labelled PCSX2 1.6.0 reports file version `1.7.4163.0`; its installed configuration contains Vulkan/GS dump support and debugger/trace categories. The executable also has a portable profile. The trace categories for EE GIF tags, VIF codes, DMA registers, DMA events, VIF events and GIF events are disabled in the local INI, and no runtime trace artifact exists.

The local `PCXS2 V2.3` directory contains an executable with file version `2.6.3.0`, but no local configuration/source evidence sufficient to establish the requested bridge. It is not selected for this experiment because the captures and format are from the 1.6.0 installation.

Local source search found only PS2Recomp kernel stubs and debug scripts, not a usable PCSX2 source checkout. Therefore exact source hook names cannot be confirmed locally and no emulator build was attempted.

Static evidence partially connects Part12 to the documented native handlers, but does not reveal the runtime pointer, buffer, DMA, VIF, GIF provenance or GS offset. The causal chain remains UNKNOWN.

## Stop condition

Hard capability blocker reached. The minimum missing capability is a synchronized emulator/runtime callback chain, requiring an isolated PCSX2 source build or equivalent instrumentation. No production or emulator files were modified.

