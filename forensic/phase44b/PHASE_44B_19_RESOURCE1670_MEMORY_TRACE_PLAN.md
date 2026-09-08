# Resource 1670 runtime trace plan

Static evidence identifies Part12 at Section0 offset `0x31A4`, size 10,628 bytes, with `0x0033` and `0x003C` records. It does not identify the runtime virtual address after loading/copying/decompression.

Minimum observation required:

1. Break/log at the Section0 dispatcher when the command pointer lies in the Part12 range.
2. Record ResourceID=1670, Part=12, command offset/opcode, EE PC, RA, A0–A3 and relevant stack.
3. Follow the pointer into the generated/staging buffer and record start/end/size.
4. Correlate that buffer with DMA1 MADR/QWC and then the GIF path-3 transfer.

Without the runtime pointer, a memory watchpoint cannot be placed defensibly. The existing GS dumps cannot supply this address or resource identity.

