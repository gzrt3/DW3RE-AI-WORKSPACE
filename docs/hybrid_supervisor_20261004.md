# Supervisor evidence loop checkpoint — 2026-10-04

This checkpoint extends the existing supervisor state; it does not replace its
journal, reset provider budgets, or rerun retail capture/comparison.

## Current entry-state finding

The comparison label `A.LO` is the `LO` special register in Snapshot A. The
retail decoder reads it from the PCSX2 EE CPU savestate register block at byte
offset 528 and normalizes it as 64-bit hexadecimal. The host observer reads
`ctx.lo` from its `PS2Runtime` CPU context. Both snapshots are at PC
`0x00100008` before executing the first ELF instruction. The recorded values
remain retail `0x000000000000003c` and host `0x0000000000000000`.

The deterministic audit also compares the 32 MiB A memory snapshots, hashes the
inputs, records per-register differences and producers, and labels the required
handoff values unknown where evidence does not establish them. It classifies
this as an entry-state difference, not a translated-instruction fault. No host
register is filled from PCSX2 data and no game/runtime patch is authorized.

The Azure proposal remains immutable. A deterministic consumer records its
`REJECTED_INSUFFICIENT_EVIDENCE` assessment and schedules the A-state audit.
The audit verifies the comparison values against the underlying captures,
compares all recorded A registers and the 32 MiB RAM image, and concludes that
the observed difference precedes the first guest instruction. It does not
authorize a game-code or runtime patch.

The pool then attempted one strict-schema diagnosis with Ollama and one
fallback with Azure. Both were rejected by the semantic contract; their
attempts and usage remain in the campaign journal. The deterministic producer
follow-up still ran and recorded the host `R5900Context` constructor, explicit
`main.cpp` initialization, and retail register decoder with source hashes. It
stops at `REAL_EXTERNAL_BARRIER`: the repository does not establish which EE
handoff fields must be reproduced from BIOS/pre-entry state. No retail capture
was repeated, no source patch was applied, and no host iteration was generated.

## Provider state and spending

- Ollama remains the first worker for this bounded classification.
- Gemini's preserved `gemini-2.5-flash` request received HTTP 404 and remains
  `MODEL_UNSUPPORTED`; the router does not retry it automatically.
- Azure `gpt-4.1-mini-1` remains an authorized fallback while its call ledger
  permits it.
- AWS Playground access for Nova 2 Lite and Nova Pro was reported verified.
  AWS STS now succeeds in the local host environment. The saved router
  invocation still has only generic `PROVIDER_ERROR`, so the exact Bedrock
  failure cause remains unknown.
- Nova 2 Lite remains the default AWS model. Nova Pro is selectable only via an
  explicit task role. The policy contains explicit per-million-token prices
  for both Nova models and retains its existing USD 10 spending ceiling plus
  the additive call ledger. Older reservations include a real failed AWS
  invocation without usage, so historical cost remains unknown and accounting
  fails closed pending reconciliation. A separate live-provider cooldown also
  remains active after that real invocation. OpenAI, Bedrock OpenAI, and
Claude 3 Haiku remain disabled.

The journal identifies the latest real AWS adapter invocation at
`2026-10-04T00:28:11Z` as `PROVIDER_ERROR`, with no usage fields. The later
`2026-10-04T10:16:04Z` Nova 2 Lite probe failed locally with
`AWS_USD_PRICE_REQUIRED`, `adapter_attempted=false`, and no reservation. At
the current recheck the former remains inside the 24-hour window; the router
reports `PROBE_COOLDOWN_24H` without contacting Bedrock. STS identity preflight
succeeds. No Nova smoke invocation was made.

The probe cooldown now uses provider adapter attempts, not every
`probe_started` record. A pre-adapter local policy failure remains in the
append-only journal but does not itself start a provider cooldown; an explicit
reason is still required for any recheck. Actual provider attempts and
unresolved interrupted probes remain cooldown-protected. Current smoke status
is therefore blocked by genuine recent/unknown-cost evidence, not by the
earlier missing-price event. Nova Pro was not called.

## Operations

The supervisor runs with premium Codex reserved:

```powershell
python tools/hybrid_supervisor.py run --codex-mode PREMIUM_RESERVED --poll-seconds 30
```

`status` classifies idle as a real external barrier, premium-required, or an
orchestration defect. A zero-ready state without an evidenced blocker writes a
diagnostic and fails closed. Host recapture helpers allocate a new
`host_iteration_NNNN` directory; the baseline and retail evidence remain
read-only. Recomparison binds to the same guided retail manifest and records a
divergence fingerprint and progress class.

Validation performed for this implementation: full Python unit suite, 155
tests. The supervisor run used one Ollama request (`qwen2.5-coder:7b`, 2,050
prompt-eval and 187 eval tokens) and one Azure request (`gpt-4.1-mini-1`,
3,671 prompt and 164 completion tokens); both failed the strict semantic
contract. Billed cost is unknown. No Bedrock smoke inference ran in this host
session because the local AWS CLI session was expired. Product states stay
`BOOT_CHAIN_STATUS=STOPPED_NOT_CLOSED`,
`INTERACTIVE_MAIN_LOOP=NOT_DEMONSTRATED`, and `PROJECT_COMPLETE=false`.
