# Agent Reach for native-port research

The user requested [Agent Reach](https://github.com/Panniantong/agent-reach).
Version 1.5.0 is installed from commit
`a19a171fa980a0785849596492e0af4db800c82f` in ignored `out/agent-reach/`.
The upstream skill and MIT license remain unchanged under
`.agents/skills/agent-reach/`; read `SKILL_en.md` with this project scope.
`third_party/agent-reach.json` records provenance and skill hashes. Python
constraints and the mcporter npm lock retain observed dependency versions.
This adds public-source research, not model agents or compute credits.

## Project use

From the active checkout:

```powershell
python tools/agent_reach_research.py verify
python tools/agent_reach_research.py github-code 'LinkLibraryEntries repo:ps2dev/ps2sdk' --output artifacts/research/example-github-001
python tools/agent_reach_research.py read https://raw.githubusercontent.com/ps2dev/ps2sdk/ac92a9f657d2e531dd8f060250b07f2a5ac6dea5/iop/system/loadcore/include/loadcore.h --output artifacts/research/example-web-001
python tools/agent_reach_research.py doctor --output artifacts/research/example-doctor-001
```

Choose a new output directory for each deliberate attempt. Readers preserve
stdout/stderr bytes, process outcome and hashes; timeouts are not retried. An
authentication failure retains a sanitized UNAVAILABLE record. CAPTURED means
the process returned zero: inspect contents, source version and relevant
definitions before accepting a finding. Empty results, truncated pages,
navigation text and remote error messages are not useful source evidence.
The launcher never consumes an answer as code or changes the game.

GitHub uses portable gh and an existing GH_TOKEN/GITHUB_TOKEN or Git Credential
Manager credential for github.com, supplied only in the child environment.
No login or global authentication change is attempted. Keep queries and URLs
public and free of credentials: they are part of the evidence record. Never
send original assets, dumps, personal data or private cost journals.

Research an identified barrier, then record the pinned URL, retrieved content
identity, relevant function and comparison against the selected retail binary.
Reuse unchanged saved sources. Feed only relevant excerpts into a new bounded
adviser task under ADVISER_POOL.md; advisers and pages remain untrusted inputs.
Do not resubmit old/uncertain model requests for new tooling.

## Observed capabilities and limits

On 2026-10-05 UTC:

- Agent Reach imports and runs in its local virtual environment. pip check
  reports no broken requirements. No global Python/PATH/home settings changed.
- GitHub CLI 2.102.0 performed a real search yielding five PS2SDK source paths.
  A later narrower search returned an empty array, preserved as such.
- Agent Reach WebChannel through Jina retrieved the actual LOADCORE header.
  GitHub's HTML view of larger MODLOAD returned partial code; the pinned raw
  URL yielded the worker, semaphore/event and argc/argv code.
- mcporter 0.14.2 discovers the Exa schema. Its Windows npm shim failed; the
  direct entry works via `node out/agent-reach/node/node_modules/mcporter/dist/cli.js`
  with explicit `--config config/research_mcporter.json`. No editor MCP imports.
- One Exa request returned `ai.exa/rateLimited: true` despite exit zero.
  No search results were obtained. Do not retry automatically or add a paid key.
  The observed schema requires `query` and `objective`, unlike the upstream
  quick example. Installation does not establish a working search service.
- Upstream doctor checks global PATH, missing some portable installations.
  Its web status is a static assertion. It is not proof of target content or
  all advertised platforms. Other channels remain unvalidated for this project.

Raw attempts: `artifacts/agent_reach_20261005_001`. Public report:
`evidence/agent_reach_20261005.json`. No Azure/AWS model dispatch or spending-limit
change was made for this installation.

## Scope and maintenance

Project preservation, autonomy, provider limits and actual tool permissions
override upstream defaults. Keep installation/evidence in the ignored local
directories above; do not relocate them into global home to satisfy upstream's
workspace rule. Do not configure unrelated accounts, browser cookie readers,
extensions or platform packages merely because they are listed. Use supported
Computer Use tools for browser interaction; Agent Reach cannot expand their
permissions. Prefer a dedicated connector/skill when it already covers a task.
Review and pin upgrades deliberately; no automatic update checks or installs.

Native continuations read AGENTS.md and this file. Use research to resolve a
measured uncertainty; do not make redundant calls on every heartbeat. The hourly
GitHub adviser remains advisory only. No game acceptance criterion is closed.

## Reproduce and verify

The skill is already installed and available for automatic discovery on the
next turn in this checkout. It was read explicitly during installation.
To reconstruct the local Python environment, unpack
`https://codeload.github.com/Panniantong/agent-reach/zip/a19a171fa980a0785849596492e0af4db800c82f`,
verify its SHA-256 from the manifest, and place its contents at
`out/agent-reach/source`. Then:

```powershell
python -m venv out/agent-reach/.venv
out/agent-reach/.venv/Scripts/python.exe -m pip install -c third_party/agent-reach-python-constraints.txt ./out/agent-reach/source
out/agent-reach/.venv/Scripts/python.exe -m pip check
python tools/agent_reach_research.py verify
python -m unittest discover -s tests -p test_agent_reach_research.py -v
```

The manifest pins the official GitHub CLI archive and hash; unpack into
`out/agent-reach/github`. For optional mcporter, copy the npm lock into
`out/agent-reach/node/package-lock.json`, use a package.json with exact
`mcporter: 0.14.2`, and run `npm ci --ignore-scripts` there with compatible Node
(observed 24.21.0). This does not restore Exa quota. Binaries, source archives
and virtual environments are not in Git. CI checks vendored files and failure
handling without invoking research providers.
