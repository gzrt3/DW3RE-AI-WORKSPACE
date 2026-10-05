# Native graphics buffer and packet returns

The Release run `gs_packet_return_019/native-001` passes the original graphics
buffer continuation `0x00198918` and packet return `0x00198C7C`. It now stops at
missing continuation `0x0019A510`, with input integrity MATCH. No title, movie
or battle is demonstrated; all eight final acceptance criteria remain open.

## Original instructions and repairs

The buffer tail contains32 original XL instructions at `[0x198918,0x198998)`.
Its raw recovery is preserved separately. Three generated MOVN operations
incorrectly copied128 bits; the reviewed include now copies only low64,
preserving the destination upper64. The selected PCSX2 interpreter and native
emitter independently confirm that width. Original translated files remain intact.

The BNE condition is evaluated before the MULT delay slot overwrites v0 and
HI/LO. The original64-bit configuration mask, signed shifts, saved registers,
JR and stack restoration remain explicit. Only entry198918 is registered after
checking all32 words and ownership. The following function198998 is excluded.

The next measured stop198C7C was the original `JR RA` with `ADDIU v0,zero,6`
in its delay slot. Both words are guarded, and the existing verified return
executor performs them. The value6 comes from the original instruction.

## Verification and retained failures

The raw buffer candidate fails Release001 at case0/register3 because MOVN
overwrites upper64. After the three localized corrections, Debug/Release002
each pass576 original-opcode comparisons,32 word guards and one ownership
conflict. Cases cover signed dimensions, both format branches, selected/ignored
configuration bits, low64 conditions with low32 zero, RAM aliases, GPR128,
HI/LO, unchanged HI1/LO1, saved frame and full RAM comparisons.

Packet-return Debug/Release001 each add two opcode guards, one owner conflict
and four original-opcode return comparisons. All buffer, IRQ, CRT, allocator,
memory-routing and VBLANK regressions still pass. These selected decoders and
runtime contracts are not independent PCSX2 lockstep or complete GS parity.

Both incremental full Release builds succeed. Native018 passes198918 and fails
at198C7C; native019 passes both and fails at19A510. Each probe has inputMATCH.
See [buffer evidence](../evidence/native_graphics_buffer_20261005.json),
[packet-return evidence](../evidence/native_graphics_packet_return_20261005.json)
and the preceding [IRQ repair](NATIVE_IRQ_REGISTRATION_20261005.md).

## Advisers and next work

One AWS Nova Pro review completed with4403 input and288 output tokens; its
calculated cost is USD0.004444, billed amount unknown. Its claim that BNE is
evaluated after MULT contradicts the saved code and was rejected. The first,
larger request was rejected locally before submission for exceeding the existing
prompt limit; a smaller distinct request was submitted once. Both are retained.

Ollama qwen2.5-coder:7b also answered a bounded mask-arithmetic review
(144 input/159 output tokens). Its mask and equality answers were incorrect and
were rejected using direct integer calculations. No adviser output changed
code. A parallel pool-audit agent hit a token rate limit and was not retried.
Azure still has unreconciled historical costs; no Azure call or budget change
was made. Existing UI limits and paused review schedules were preserved.

Next recover19A510 from its original instructions, verify the caller and its
continuations, then repeat the native boot. Authentic movies, Press Start,
input/audio, battles, combined content, saves, modding and packaging remain
required. Source is uncommitted. The external checkpoint
`graphics-buffer-20261005-019/verification.json` is authoritative for backup
completion; earlier015–017 backup notes describe their historical state.
