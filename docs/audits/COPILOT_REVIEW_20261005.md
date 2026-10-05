# Independent review of the connected Copilot advisers

Both real exchanges were collected with matching request and source hashes.
Their raw replies remain unchanged. Schema validation alone does not accept
their conclusions or apply any code.

GitHub Copilot's native presentation review identifies two confirmed source
risks: `main.cpp` invokes only the EE scheduler, while `PS2Runtime::run()` resets
the prepared IOP/kernel/register state; `UploadFrame` uses function-static
presentation state shared by successive runtime instances. Its third finding
correctly describes the magenta fallback and suppressed same-tick retry, but
the relevance of that timing to actual gameplay remains unverified.

Microsoft Copilot's signed-width review provides useful branch test cases.
Its third finding incorrectly states that signed64 `0x8000000000000000` and
signed32 low32 zero have no mismatch. For the former, BLTZ takes the branch and
BGEZ does not; for the latter, both decisions reverse. BLEZ and BGTZ agree for
this particular pair. Reject the incorrect sentence without modifying the raw
reply. The independent arithmetic table is in the local semantic-review record.

These are review and test recommendations. No presentation fix has been
applied, and no title screen or battle has been observed. The broad signed
branch emitter change is local and still requires its own build and behavioral
validation before publication; the reviewed recovered continuation already has
focused Debug/Release contracts.

The bridge now rechecks source hashes on every collection, excludes stale
pending requests from READY, preserves earlier receipts, resumes after a raw
reply was saved, refuses corrupted preserved output, and bounds response reads.
Fourteen bridge tests and five runner tests validate these cases and failure
isolation. They do not establish game parity.

Local evidence: `artifacts/native_pipeline_20261004/adviser_integration_003`.
Native cycle002 builds successfully, then stops at `0x0023CB40`, with original
input integrity MATCH and unresolved IOMAN31 version0x104. All eight game
acceptance criteria remain open.
