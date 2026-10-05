# Native DMA and VIF initialization checkpoint

The Release executable now passes the original MODLOAD7/SIO2MAN startup,
DMA initialization at `0x0019A6C4`, VIF tail at `0x00198580` and DMA channel
return at `0x0019A678`. Run `ee_dma_init_014/native-003` stops at missing
`0x00180384`, with exit4294967295 and input integrity MATCH. No title, movie,
battle or rendered game image is demonstrated. All eight final gates remain open.

Auxiliary automations, advisers, cloud work, installations and publication remain
paused. The source delta is local and uncommitted.

## Repairs and original identity

- Recovered164 original words at `19A6C0..19A950` exclusive from preserved
  translation, with a verified signed64 BGEZ correction at19A6F0. Restored the
  original13-word byte-clear helper and four-word channel-return tails.
- Reconstructed the eight original VIF-tail instructions. Its two LQ/SQ pairs
  send the unchanged32-byte initialization packet from2857C0 to VIF1_FIFO.
  The JR delay writes **GIF_CTRL at10003000**; earlier working notes calling
  that address VIF0 STAT were incorrect.
- `PS2Runtime::Store128` previously discarded every hardware and RAM-alias
  write. It now uses the existing memory owner and DMA completion drain.
  Focused tests reproduced the dropped alias before this change.
- A second retained failure showed VIF1 CYCLE=0404 and CODE=04000000 inside
  the interpreter while CPU reads returned zero. Command-owned register reads
  now use that owner. CPU row/column writes update the same backing state.
- Registration checks the selected original words and rejects mismatches or
  existing mappings. Original generated source and retail files are preserved.

The XL ELF SHA256 is
`d26695fa7769cabbddbd89168924279cd1035eeb0bdd3744aec95257f7cfa731`.
Hashes for each interval, packet, source and run are in
`evidence/native_dma_vif_20261005.json`. Instruction identity and local tests
are not independent PCSX2 lockstep verification.

## Verification

Evidence root: `artifacts/native_pipeline_20261005/ee_dma_init_014`.

| Check | Observed result |
| --- | --- |
| Focused Debug and Release | PASS with /W4 /WX |
| DMA initialization | 23 contracts and7,000 parameter combinations per configuration |
| DMA channel return | 12 cases per configuration, including low64 LW sign extension |
| Store128 routing | 20 cases: RAM4, scratchpad2, VU12, misalignment2 |
| Original VIF packet | Four source aliases, full128 payload, CPU register readback and return delay PASS |
| VIF state coherence | CPU writes, commands and reset across three MMIO aliases PASS |
| Native probe tooling | 12 tests PASS |
| Full Release builds | native-build-001,002,003 PASS |
| Native runs | Three failures preserved; successive barriers198580,19A678,180384 |
| MODLOAD regression in native-003 | SIO2MAN module21/thread1/argc1/return0/resident3; MODMSIN module22/return0/resident3 |

Final focused logs are `contract-Debug-final-010.log` and
`contract-Release-final-010.log`. Earlier failed tests005,006,007 are retained.

To reproduce the focused suite after building the native runtime libraries:

```powershell
cmake -S . -B D:/DW3-DMA-Continuation-Build -G "Visual Studio 17 2022" -A x64 -DFATE_DMA_INIT_ONLY=ON -DFATE_RUNTIME_BUILD_DIR=D:/DW3-Publication-Build/runtime
cmake --build D:/DW3-DMA-Continuation-Build --config Release --target dma_init_contract --parallel 4
& D:/DW3-DMA-Continuation-Build/bin/Release/dma_init_contract.exe C:/DW3/sources/dumps/dw3xl_ps2/SLUS_206.17
```

Repeat with Debug. Full builds use `scripts/build_native.ps1`. Run the bounded
`tools/native_boot_probe.py` into a new evidence directory; the retained
`native-003/launch.json` identifies the exact launch and input hashes.

## Remaining work

The next measured barrier is180384 after the preserved prefix
`src/recomp/FUN_00180370_0x180370.cpp`. Preserved continuations exist in
`FUN_0014eba0_part102.cpp`, `FUN_0017d410_part7.cpp` and
`FUN_0017faa0_part2.cpp`; compare their words with the ELF before recovery.
Live arguments are a0=1, a1=280, a2=E0, a3=0, RA=1801C4 and SP=1FFFB40 (hex).

The VU FBRST/SYNC prefix, split VIF command payloads, complete GS FIFO semantics,
DMA/IRQ timing and independent original-state comparison remain unresolved.
Direct runtime Load8/16/64/128 and Store8/16/64 still have low-RAM-only paths;
this change does not repair them or certify all memory operations. SIFCMD
rejected-packet warnings remain. Do not equate module residency with controller
transactions, or successful VIF initialization with a rendered frame.

DirectX11/12 or Vulkan can implement the native rendering backend. The original
game's GS/GIF commands still require an interpretation layer. The present live
viewer uploads a runtime-produced image through SDL; selecting an accelerated
presenter does not establish a complete hardware rendering backend. Preserve
that distinction when assessing the user's requested API transition.

Checkpoint path: `D:/Backup/DWProject/ee-dma-vif-20261005-014`.
Its external `verification.json` is the copy/hash result; the path alone is
not backup verification. Restore by cloning its base bundle and overlaying
`worktree/`. The prior MODLOAD checkpoint and original asset locations remain.
