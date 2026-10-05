"""Run the project's local Agent Reach readers and retain each attempt separately."""

import argparse
from datetime import datetime, timezone
import hashlib
import json
import os
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
INSTALL = ROOT / "out/agent-reach"


def verify_files(root=ROOT):
    manifest = json.loads((root / "third_party/agent-reach.json").read_text(encoding="utf-8"))
    failures = []
    for item in manifest["files"]:
        path = root / item["path"]
        if not path.is_file() or hashlib.sha256(path.read_bytes()).hexdigest() != item["sha256"]:
            failures.append(item["path"])
    return {"result": "FAIL" if failures else "PASS", "files": len(manifest["files"]),
            "failures": failures, "scope": "vendored skill bytes, not live connectivity"}


def github_environment():
    env = os.environ.copy()
    env.update(GH_PROMPT_DISABLED="1", GH_NO_UPDATE_NOTIFIER="1", GIT_TERMINAL_PROMPT="0",
               GCM_INTERACTIVE="Never")
    if not (env.get("GH_TOKEN") or env.get("GITHUB_TOKEN")):
        credential = subprocess.run(
            ["git", "credential", "fill"], input=b"protocol=https\nhost=github.com\n\n",
            stdout=subprocess.PIPE, stderr=subprocess.PIPE, env=env, timeout=15,
        )
        fields = dict(line.split("=", 1) for line in credential.stdout.decode("utf-8").splitlines()
                      if "=" in line)
        if credential.returncode != 0 or not fields.get("password"):
            raise RuntimeError("No existing GitHub credential available; no login attempted")
        env["GH_TOKEN"] = fields["password"]
    return env


def run_capture(command, output, env, timeout=60):
    output.mkdir(parents=True, exist_ok=False)
    result = {"started_utc": datetime.now(timezone.utc).isoformat(), "command": command,
              "status": "FAILED", "returncode": None, "retries": 0}
    stdout, stderr = b"", b""
    try:
        completed = subprocess.run(command, stdout=subprocess.PIPE, stderr=subprocess.PIPE,
                                   env=env, timeout=timeout, cwd=ROOT)
        stdout, stderr = completed.stdout, completed.stderr
        result.update(returncode=completed.returncode,
                      status="CAPTURED" if completed.returncode == 0 else "FAILED")
    except subprocess.TimeoutExpired as exc:
        stdout, stderr = exc.stdout or b"", exc.stderr or b""
        result["status"] = "TIMEOUT"
    except OSError as exc:
        result["error_type"] = type(exc).__name__
    # A misbehaving CLI must not turn the evidence log into a credential store.
    redacted = False
    for key in ("GH_TOKEN", "GITHUB_TOKEN"):
        if env.get(key):
            token = env[key].encode("utf-8")
            redacted |= token in stdout or token in stderr
            stdout, stderr = stdout.replace(token, b"[REDACTED]"), stderr.replace(token, b"[REDACTED]")
    result["credentials_redacted"] = redacted
    result["scope"] = "process output only; inspect content before relying on a source"
    for name, data in (("stdout", stdout), ("stderr", stderr)):
        (output / f"{name}.bin").write_bytes(data)
        result[name] = {"bytes": len(data), "sha256": hashlib.sha256(data).hexdigest()}
    (output / "result.json").write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    return result


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    actions = parser.add_subparsers(dest="action", required=True)
    actions.add_parser("verify", help="Offline integrity check of the installed skill")
    doctor = actions.add_parser("doctor", help="Upstream diagnostic; not a live content guarantee")
    read = actions.add_parser("read", help="Read a public URL through Agent Reach / Jina")
    read.add_argument("url")
    search = actions.add_parser("github-code", help="Search GitHub using existing authentication")
    search.add_argument("query")
    search.add_argument("--limit", type=int, choices=range(1, 21), default=5)
    for action in (doctor, read, search):
        action.add_argument("--output", type=Path, required=True, help="A new evidence directory")
    args = parser.parse_args(argv)
    if args.action == "verify":
        result = verify_files()
        print(json.dumps(result))
        return 0 if result["result"] == "PASS" else 1
    if args.output.exists():
        parser.error("Output already exists; preserve the previous attempt and choose a new directory")
    env = os.environ.copy()
    env["PYTHONUTF8"] = "1"
    if args.action == "doctor":
        command = [str(INSTALL / ".venv/Scripts/agent-reach.exe"), "doctor", "--json"]
    elif args.action == "read":
        command = [str(INSTALL / ".venv/Scripts/python.exe"), "-X", "utf8", "-c",
                   "import sys; from agent_reach.channels.web import WebChannel; "
                   "sys.stdout.buffer.write(WebChannel().read(sys.argv[1]).encode('utf-8'))", args.url]
    else:
        try:
            env = github_environment()
        except (RuntimeError, subprocess.TimeoutExpired, OSError) as exc:
            result = {"status": "UNAVAILABLE", "reason": type(exc).__name__, "retries": 0,
                      "started_utc": datetime.now(timezone.utc).isoformat(),
                      "detail": "Existing GitHub authentication unavailable; no login or retry"}
            args.output.mkdir(parents=True, exist_ok=False)
            (args.output / "result.json").write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
            print(json.dumps(result))
            return 1
        command = [str(INSTALL / "github/bin/gh.exe"), "search", "code", args.query,
                   "--limit", str(args.limit), "--json", "path,repository,url"]
    result = run_capture(command, args.output.resolve(), env)
    print(json.dumps(result))
    return 0 if result["status"] == "CAPTURED" else 1


if __name__ == "__main__":
    sys.exit(main())
