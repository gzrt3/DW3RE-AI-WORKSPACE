# Anti-slop in this native port

The user requested [miqdadbadjuber/anti-slop](https://github.com/miqdadbadjuber/anti-slop)
for ongoing development. The project installs the core and code-comment skill
from commit `388cbe3b6c37d5175b9f460015bb092ef9e34894`, version 3.2.20, under
`.agents/skills/`. MIT notices and byte identities are retained in
`third_party/antislop.json`. The upstream files are unchanged.

Anti-slop is an agent rulebook for UI, writing and comments. It contains no
runtime bug detector, PS2 semantic checker or automatic repair engine. Passing
its integrity check says that the reviewed files are present, not that the
game works. Native builds, original instruction comparisons, focused contracts
and the eight end-to-end acceptance criteria remain necessary.

## Project scope and explicit adaptations

Apply the relevant rules during development. This project default implements
the user's request to integrate it into autonomous work; it does not claim the
user selected an upstream mode or change any global settings. The upstream
install wizard and mode questions do not add confirmations to work the user
already authorized. Do not download updates automatically.

- Preserve the original DW3/XL interface, videos, assets, timing and navigation.
  That is the existing design direction. Web templates, mobile layouts, palette
  limits, typography bans and liveliness dials do not justify redesigning it.
- For a new host interface or status page, use real project facts, working
  controls, clear error/empty states and observed visual checks. Never replace
  an unimplemented game screen with an invented title image.
- Apply comment hygiene to new or touched handwritten comments. Keep technical
  provenance, instruction addresses, version history needed to explain ABI
  differences, concurrency constraints and license notices, even over two lines.
  Do not bulk-rewrite the translated corpus or historical documents for style.
- The comment skill itself authorizes comment edits only. Behavior repairs
  continue under the user's native-port objective and require their own evidence.
  R-33's web-patching restriction does not prohibit validated static translation
  or the established source-generation tools.
- Record unsupported behavior explicitly. Do not add successful dummy returns,
  remove failing tests, suppress errors, invent observations or treat adviser
  agreement as proof. Preserve failed runs and raw adviser responses.
- A delivery report may contain PASS, FAIL, NOT RUN and NOT APPLICABLE with scope
  and evidence. Report incomplete work honestly. The upstream instruction never
  to ship a FAIL report cannot suppress the project's required failure history.

These adaptations follow the user's original-fidelity, preservation and autonomy
instructions. Upstream guidance remains useful within those boundaries.

## Use in the existing pipeline

Codex reads the appended block in `AGENTS.md`; GitHub Copilot reads
`.github/copilot-instructions.md`. Both point here and to the installed skills.
For the next genuinely new adviser task, the owning agent includes the compact
review guidance below in its bounded objective before exporting. Do not rewrite
immutable queued requests or resubmit completed/uncertain requests merely to
apply a style policy. Personal Copilot and browser ChatGPT still require their
documented supported UI transport. This installation does not call models,
change quotas or connect subscriptions to cloud budgets.

> Review only the provided evidence. Identify a concrete defect or state the
> uncertainty; name a test that could distinguish the two. Preserve guest ABI,
> original visuals and provenance. Do not propose dummy success, invented data,
> cosmetic rewrites of translated code or claim gameplay parity. Keep the
> existing bounded JSON reply schema; advice never applies itself.

Run `python tools/verify_antislop.py` to check the pinned installation offline.
The existing GitHub Tooling contracts workflow runs it and the selected local
tooling/queue regressions on pushes and pull requests. Native tests remain in
their own MSVC/CMake workflow; retail data never enters GitHub Actions.

Updating requires inspecting a new upstream revision, updating the pin and
hashes intentionally, reviewing scope conflicts and rerunning verification.
