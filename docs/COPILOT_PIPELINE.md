# Copilot participation in the native pipeline

## Current three-adviser loop — 2026-10-05 UTC

The active checkout is D:/DW3-GitHub-Publish-20261004. All current bridge paths
below are relative to it. Historical C requests, replies, raw outputs, receipts
and reservations were copied without changes; stale-source replies remain stale.
The older observations below are retained as history, not the current setup.

| Adviser | Exchange | Current bounded task | Transport |
| --- | --- | --- | --- |
| GitHub Copilot | artifacts/copilot_bridge | presentation and signed branches | existing hourly local desktop automation |
| Microsoft Copilot | artifacts/microsoft_copilot_bridge | missing-import failure/ownership | main continuation through Windows Computer Use |
| ChatGPT | artifacts/chatgpt_bridge | MODLOAD device-prefix contract | main continuation through supported browser Computer Use |

native_pipeline.py collects and exports all three queues before and after a
build/probe, with failure isolation. It does not call the models itself. The
hourly main continuation performs the UI exchanges when their supported tools
are available. A running Python process alone does not operate those UIs.
Use at most one new request per UI adviser per continuation, only READY input,
reserved with reserve-ui before sending. Observe the draft and actual send;
capture the assistant response exactly and collect it. Never resubmit an
uncertain send, repeat a completed unchanged review, or bypass quotas/permissions.
Use ChatGPT in the browser, not its native desktop app. A provider limit defers
that adviser while native work continues. Do not open replacement conversations
to work around a limit or purchase upgrades as part of this loop.

Every request has bounded source excerpts and complete source identities. The
advisers have no source-write, build, publication, acceptance or spending role.
The main agent checks the current hashes and verifies each claim against actual
control flow, original evidence and meaningful tests. Valid JSON is not valid
reasoning. Do not apply suggestions by vote or majority agreement.

This continuation received a real ChatGPT response and a real Microsoft Copilot
response, and retained the completed GitHub signed-branch review. See
docs/audits/THREE_ADVISER_REVIEW_20261005.md for accepted limitations and rejected
claims. ChatGPT displayed a usage limit after its reply; no retry or upgrade was
attempted. These services keep their own quotas; no Azure/AWS adapter was invoked.
Bridge14 and pipeline6 tests passed when the third queue was added.

The final product directory is C:/Games/DW; see STORAGE_LAYOUT.md. Advice and
development evidence stay in the checkout/archive, not in the installed game.

## Observed connection

GitHub Copilot desktop has a local hourly automation named
**DW3 - Revision del pipeline nativo**. It reuses the current checkout of
`D:/DW3-GitHub-Publish-20261004`, with Auto / Balance, and reads the absolute
shared inbox `C:/Fate Soldiers 3/artifacts/copilot_bridge/inbox.json`.
It handles at most one new request and writes only its named JSON reply.
It does not create a new full checkout each hour, modify source, build or push.

Its first real run completed in51 seconds and returned three presentation
findings. The collector verified schema, request identity and current source
hashes. This demonstrates a working exchange, not correctness of the advice.

Microsoft Copilot personal was also exercised through supported Windows
Computer Use. A separate mathematical branch review was submitted and its
visible JSON response preserved and validated in
`artifacts/microsoft_copilot_bridge`. No personal-Copilot API or Azure credit
connection was configured. That transport requires an available desktop and
Computer Use at the time of each request; it is driven by the main assistant's
continuation, not by the GitHub scheduler.

Copilot usage belongs to its own quota. Azure/AWS authorization and their existing
cost ledger remain separate and unchanged. No purchase or extra paid API was
used to connect these queues.

## Deterministic local exchange

`tools/copilot_bridge.py` exports only named source excerpts. A request ID binds
the objective, excerpts and complete source hashes. Unchanged input produces
the same ID. A reply is preserved exactly and checked for valid bounded JSON,
matching request, paths and line references inside the excerpts, and unchanged
source hashes. Unknown, malformed or stale advice is not applied.

```powershell
python tools/copilot_bridge.py enqueue --kind native-presentation
python tools/copilot_bridge.py enqueue --kind signed-branch-emitter
python tools/copilot_bridge.py collect
python tools/copilot_bridge.py status
```

`tools/native_pipeline.py` now synchronizes both adviser queues before and after
each native build/probe cycle and records the result alongside build evidence.
The main hourly continuation also collects advice and reviews it independently.
An unavailable or malformed adviser exchange is recorded without suppressing
independent native work. No reply text is executed, and advice never marks an
acceptance criterion complete.

## Microsoft Copilot UI transport

Use this only for a new READY entry in
`artifacts/microsoft_copilot_bridge/inbox.json`. At most one request per master
continuation. Read the computer-use skill and use its supported window API;
do not use an undocumented app endpoint, credential/session data or a custom
Windows automation helper. If the app/tool is inaccessible, keep working on
native tasks and retain the request. Do not bypass an access denial.

Read the named request and construct a prompt containing only that request and
the inbox reply schema. Ask for JSON only. Reserve the request with
`copilot_bridge.py reserve-ui --bridge artifacts/microsoft_copilot_bridge --request-id ID`
before submission. Confirm actual app, editor focus and message contents, then
send via Computer Use. Never type terminal commands into a Windows app.
An uncertain send remains SUBMITTED_OR_UNCERTAIN and is not retried automatically.

Read the actual assistant response from the observed accessibility text, keeping
it separate from the user's prompt. Save that exact response in the indicated
reply file, preserve failures, and collect using the same bridge argument.
Do not silently rewrite an incorrect response to make it pass validation.
The main agent then checks its claims against source/original evidence/tests.

The first Microsoft reply contains a mathematical error: its third finding says
signed32 low32=0 has no mismatch with signed64 INT64_MIN. BLTZ and BGEZ do differ
there. Keep the raw response; reject that statement while retaining useful test
suggestions. This is why structural validation does not imply semantic acceptance.

## Evidence and next work

`artifacts/copilot_bridge/connection_verification_001.json` records the real
connections; `receipts/` and `raw/` preserve the validated exchanges. Bridge14
and pipeline5 tests pass. The original Copilot renderer audit is retained in
`docs/audits/COPILOT_RENDERER_AUDIT.md`, as static advisory material.

The native build now passes the former1B0308 barrier and stops at23CB40 with
inputMATCH; IOMAN31 remains unresolved. Title/battle and all8 acceptance criteria
remain open. Implement and test the reviewed native changes; a running schedule
or a plausible model answer is not game completion.

The main hourly continuation now includes the Microsoft UI transport. Collection
rechecks live source hashes even for an earlier receipt; stale unsent requests
are excluded from READY. Interrupted raw preservation is resumable, corrupted
raw files are retained and rejected, and response reads are bounded to512KiB.
See docs/audits/COPILOT_REVIEW_20261005.md for the independent semantic review.
Latest bridge/runner verification: adviser_integration_003 (14+5 tests).

Native update: cycles003/004 pass23CB40/IOMAN31/1A7014 and stop at19A6C4
with MODLOAD7/15 unresolved. No new adviser response. See NATIVE_REPAIR_20261005.md.
