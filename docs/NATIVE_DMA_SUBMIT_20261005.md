# Original GIF DMA submission

Cycle022 restores the 15 original words at EE19AA4C. The native Release build
passes and reaches missing continuation1B7F84 with input integrity MATCH.
The first 32-byte GIF packets reach the GS backend; no native image, title,
movie or battle is demonstrated. All eight final acceptance criteria stay open.

The restoration preserves low64 BNEL comparison and delay-slot annulment,
memory owners, exception boundaries, saved registers and the original SP+50
return delay. It starts the actual GIF chain; completion is not fabricated.
Debug and Release each pass192 original-opcode GPR128/full RAM comparisons,
15 word guards, one owner conflict, six faults and six actual GIF DMA cases,
plus the previous DMA/VIF regressions.

Failed tests exposed incorrect general exception vectors in the runtime.
Pinned PCSX2v2.8.2 cpuException confirms general offset180 and refill offset0:
normal general80000180, boot generalBFC00380, boot refillBFC00200. The focused
graphics suites pass in Debug/Release including12 new vector cases. The broad
runtime expansion suite and complete EXL/ERL behavior have not been verified.

Computer Use captured original19AA4C and return1B7F0C. That interval has no RAM
changes and does change DMA registers. Direct native replay of the captured
device state is pending. The suspected END-tag TADR issue was rejected; MADR
remains unmeasured. Preserve the corrections and all failed test logs.
Cycle021's four original integer/RAM replay passes remain historical evidence
for that runtime revision; they were not rerun after the exception-vector fix.

Reproduce through local dma_submit_022/validation-004.ps1 and the exact focused
commands in dma-focused-summary-006.json, choosing unique output paths.
Next: same-state DMA comparison, original1B7F84 recovery, authentic boot and
movies/Press Start. Source and prior evidence remain uncommitted and preserved.
