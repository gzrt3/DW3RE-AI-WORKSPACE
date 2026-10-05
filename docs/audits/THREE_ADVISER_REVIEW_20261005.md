# Independent review of three adviser exchanges

All replies are untrusted advisory material. Structural collection checks request
identity, bounded schema and current source hashes; semantic decisions below
were made independently. No adviser patch was applied and no game parity is
inferred. Raw replies and earlier rejected statements remain preserved locally.

## ChatGPT: MODLOAD1.6 contract

Request: modload-contract-review-81bd9b382e1450e3e94e92bb.
Actual reply SHA256: 0dda41a4d755ea829976c36d91f8d67cac18fc4b89b605e696bb200682e2d4bf.
Submitted once through the supported browser; the exact Copy response text was
saved and collected with matching source hashes. The UI displayed a usage limit
after answering. No resubmission, replacement chat or upgrade was attempted.

1. **Rejected:** alleged missing increment for host. iop_modload.cpp line40
   already increments address after reading the four prefix bytes. For a path
   starting at A, the loop leaves A+3, line40 advances to A+4, and line59 reads
   the device byte. Another increment would skip that byte. The existing
   exhaustive host byte cases and original-instruction replay cover this.
2. **Rejected:** alleged strlen truncation in compareOriginal. That routine
   uses putPath at line108; putPath copies path.data()/path.size() at line19.
   strlen at line63 belongs to the distinct fixed-string IRX consumer fixture.
   The proposed defect confuses these call paths.
3. **Accepted scope limitation, already documented:** return and selected ABI
   registers do not establish full machine-state equivalence. Scratch clobbers,
   memory exceptions and timing remain outside this helper's verified contract.
   Do not modify the identified original slice to invent a parity test.
4. **Bounded portability suggestion, not a demonstrated Windows defect:** the
   target uses MSVC and 8-bit char representation. The cast-based high-byte
   fixture does not show a mismatch. Explicit RAM-byte checks could improve
   fixture diagnostics when broadening compiler/platform coverage.

## Microsoft Copilot: missing-import barrier

Request: missing-import-review-2ab4eec150862e04949aacd1.
Actual assistant JSON was extracted exactly from the observed response text,
not reconstructed from the prompt. The reservation preceded the one actual
send. A first click was rejected because the send button was outside the window;
the draft remained visible, was scrolled into view, and then sent once.

1. **Accepted diagnostic limitation:** runCycles has a noexcept scheduling
   boundary. Its host can observe the logged fault, but there is no dedicated
   structured fault query; missingImports is internal. Consider an explicit
   fault snapshot for host diagnostics. Propagating an exception through the
   noexcept EE accounting path is not an acceptable repair. No claim that a
   surviving unrelated thread proves the failed thread succeeded.
2. **Rejected for the tested synchronous nested path:** the exception rethrows
   through each enclosing runCpu frame; each catch marks its own cpu stopped.
   ActiveCpuGuard restores ownership while unwinding. nestedCallback and
   scheduledThread explicitly check caller/callback output sentinels and that
   the failed scheduler thread is not resumed. A catch at a different API
   boundary needs its own analysis; it does not refute this mechanism.
3. **Not a demonstrated false completion:** handled=true prevents another
   implementation from dispatching the same failed RPC. Completion flags remain
   false and callback/server policies are Suppress. rpcDoesNotSignalSuccess
   checks those flags and the untouched reply buffer. A structured diagnostic
   field may help, but returning unhandled would enable an incorrect fallback.

## GitHub Copilot: signed branches

The retained completed review is signed-branch-emitter-0595911910673287d122d766,
reply SHA256 cfca3533de6105e8e63877baaa625d55c4844db4dc3d648b7c509efdbea8d94d.
It correctly limits likely-branch conclusions because the supplied excerpt
ends before that emission body, and supplies valid signed64 counterexamples.
This review refers to the C emitter variant. D intentionally retains the
published emitter; collection in D therefore marks that reply STALE_SOURCE.
It must not authorize publication of the unvalidated C emitter edit.

The earlier Microsoft claim that INT64_MIN has no mismatch with low32=0 remains
rejected: BLTZ and BGEZ differ. Neither model confidence nor multiple agreeing
responses replaces original evidence and tests.

## Native integration evidence

D runtime ps2_runtime and ps2_iop Release builds completed. Full D cycle005
also built successfully; its 10-second native probe timed out with input
integrity MATCH at MODLOAD1.6 export7, PC0x14374. MODLOAD15 no longer appears
as missing in this run. The stricter failure now prevents a fabricated RPC
completion; the prior EE19A6C4 stop is not reached, and is not claimed repaired.
No title, battle or final acceptance criterion was verified.

Next implement original MODLOAD7 argc/argv, worker-thread and module ownership
with explicit completion semantics, then replay the native boot. Keep all eight
final acceptance criteria open and preserve cycle004 and cycle005 independently.
