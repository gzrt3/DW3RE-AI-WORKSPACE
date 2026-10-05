# Development adviser pool

`tools/adviser_pool.py` collects GitHub Copilot, Microsoft Copilot, browser
ChatGPT and Bedrock replies against the current source hashes. The native cycle
also synchronizes the fourth queue. PowerShell, Python, CMake/MSVC and Git remain
the implementation/build/verification tools. Public documentation and pinned
PS2SDK, PCSX2 and Play! sources support research; downloaded code and model
answers require independent review before use.

The product target remains the standalone native PC port. No adviser or passing
tool test closes a game acceptance criterion.

Public-source research uses the local [Agent Reach integration](AGENT_REACH.md)
when useful to an identified barrier. Its pinned excerpts can inform a new
bounded review; it is not a fifth model provider and adds no spending grants.

## Operation

```powershell
python tools/adviser_pool.py collect
python tools/adviser_pool.py enqueue
python tools/adviser_pool.py dispatch-bedrock --request-id <READY-ID> --role NOVA_PRO
```

Collection and export invoke no models. Export is idempotent for unchanged
source/objective. The compact `rpc-continuation-review` task can be routed to
each adviser. A real reply is kept verbatim; incorrect JSON, stale source and
unsupported claims remain preserved rather than silently repaired. Findings
are proposals, never executable instructions.

GitHub Copilot's existing hourly **DW3 - Revision del pipeline nativo** reads
the active checkout's `artifacts/copilot_bridge/inbox.json`. Computer Use
observed this D-drive path on2026-10-05; older notes referring to C are historical.
Microsoft Copilot and ChatGPT are UI transports driven by an available main
continuation, not headless background APIs. Read COPILOT_PIPELINE.md and the
Computer Use skill before submitting. Preserve uncertain submissions, defer
quota/access/onboarding blockers and continue independent native work.

## Private provider connection

The original private router, policy and append-only cost journal remain outside
this repository. Optional local `artifacts/adviser_pool/config.json` contains
`private_root`, `router_path`, and an optional `github_bridge`. Environment
overrides are `DW3_PRIVATE_ROOT`, `DW3_HYBRID_ROUTER`, `DW3_GITHUB_BRIDGE`.
The private-root setting does not redirect the GitHub queue. These are trusted
local paths configured by the owner, never values supplied by a model reply.
Keep this file and provider evidence out of Git.

Bedrock dispatch creates one durable no-retry submission marker and enters the
existing journal lock. The private router checks its existing call allowance,
exact model price, historical liabilities and spending ceiling before invoking
the AWS CLI. No new ledger, free-credit assumption, budget reset, fallback
provider or automatic retry is created. Select the already-authorized AWS region
using `AWS_REGION`; it is not inferred from account screenshots. The current
verified control-plane region is us-east-2.

GitHub/Microsoft Copilot and ChatGPT subscriptions have separate quotas from
Azure and AWS. Local tool discovery proves installation only. Successful
accounting checks do not prove current authentication/model availability. The
actual adapter result, token usage and semantic review determine a call's status.

## Verification

Run the `test_adviser_pool.py`, `test_copilot_bridge.py` and
`test_native_pipeline.py` unittest suites. They cover stale/duplicate requests,
unknown costs, isolated queue failures, exact malformed-output preservation and
keeping model output outside execution. They use fake adapters and incur no
cloud charges. Real provider attempts are recorded separately in the private
journal and `artifacts/bedrock_bridge`; never infer live connectivity from tests.

## Observed cycle008 result

GitHub Copilot completed one real review through Computer Use. Its bounded
server-reuse concern was reproduced and repaired. Nova Pro also completed one
real CLI request (3903 input/289 output tokens, estimatedUSD0.0040472); its
ownership claim contradicted the supplied code and was rejected. Three old
reservation liabilities were reconciled additively against pinned evidence,
with109 original events preserved. Total reservedUSD0.0223391, ceilingUSD10,
30 remaining call grants. These are reservation/estimate figures, not settled
AWS billing or evidence of game completion. Microsoft Copilot was accessible
but showed onboarding/settings; no settings or request were changed. ChatGPT
was deferred under its previously observed usage limit.
