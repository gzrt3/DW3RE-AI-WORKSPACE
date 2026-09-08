# Minimum instrumentation

## Required

An isolated PCSX2 source build or equivalent emulator hook logging one frame/event with:

`frame,event_id,resource_id,section,part,command_offset,opcode,ee_pc,ra,a0,a1,a2,a3,buffer_start,buffer_end,dma1_madr,dma1_qwc,dma1_chcr,vif1_dest,gif_transfer_ordinal,gif_offset,gs_stream_offset`

## Smallest practical subset

If full tracing is too large, the minimum bridge is:

`event_id, Resource1670/Part12 command offset, handler PC, generated buffer range, DMA1 MADR/QWC, GIF transfer ordinal`.

The existing GSDump supplies the downstream GIF/GS bytes. Without the event ID and buffer/DMA link, the existing dump cannot be joined to Part12.

## Build requirement

`SOURCE_BUILD_REQUIRED = YES` for a reliable historical EE/DMA/VIF/GIF chain. The installed binaries expose configuration and capture facilities but not the required synchronized callbacks. No build was performed.

