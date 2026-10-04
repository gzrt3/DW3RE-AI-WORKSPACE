"""Build and run the VFS hook contract without compiling or launching the game.

Fixtures are synthetic extracted files under an exclusive evidence directory.
The results certify only these file identity/range contracts, not retail CDVD
timing, original padding, HLE dispatch, merged content, or game parity.
"""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys


ROOT = Path(__file__).resolve().parents[1]
CASES = (
    "xl_is_not_base", "distinct_archive_identity", "no_invented_idx_bin",
    "missing_asset", "exact_and_offset_read", "before_first_extent", "after_extent",
    "cross_extent", "unbacked_final_sector", "count_overflow", "offset_overflow",
    "shrunk_file", "removed_file", "reinitialize_clears_previous_mount", "zero_sectors",
)


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def command(args, log, timeout):
    result = subprocess.run(args, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                            timeout=timeout,
                            creationflags=getattr(subprocess, "CREATE_NO_WINDOW", 0))
    log.write_text(result.stdout.decode("utf-8", errors="replace"), encoding="utf-8")
    return result.returncode


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--implementation", type=Path,
                        default=ROOT / "src/vfs/vfs_hook.cpp")
    parser.add_argument("--configs", nargs="+", choices=("Debug", "Release"),
                        default=("Debug", "Release"))
    args = parser.parse_args()
    output = args.output.resolve()
    output.mkdir(parents=True, exist_ok=False)
    implementation = args.implementation.resolve()
    contract = ROOT / "tests/integration/vfs_hook_contract.cpp"
    header = ROOT / "include/fate/vfs/vfs_hook.hpp"
    project = output / "project"
    project.mkdir()
    runtime = (ROOT / "tools/PS2Recomp").as_posix()
    (project / "CMakeLists.txt").write_text(f'''cmake_minimum_required(VERSION 3.24)
project(vfs_hook_contract LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_executable(vfs_hook_contract "{contract.as_posix()}" "{implementation.as_posix()}")
target_include_directories(vfs_hook_contract PRIVATE "{ROOT.as_posix()}/include")
target_include_directories(vfs_hook_contract SYSTEM PRIVATE
    "{runtime}/ps2xRuntime/include" "{runtime}/ps2xIOP/include"
    "{runtime}/ps2xRuntime/src/lib/Kernel")
if(MSVC)
    target_compile_options(vfs_hook_contract PRIVATE /W4 /WX /permissive- /EHsc /utf-8 /wd4324)
endif()
''', encoding="utf-8")
    summary = {
        "scope": "SYNTHETIC_EXTRACTED_FILE_CONTRACT_ONLY",
        "source": {str(p): digest(p) for p in (implementation, header, contract, Path(__file__))},
        "configurations": {},
    }
    configure = command(["cmake", "-S", str(project), "-B", str(output / "build"),
                         "-G", "Visual Studio 17 2022", "-A", "x64"],
                        output / "configure.log", 180)
    summary["configure_exit"] = configure
    if configure:
        summary["status"] = "BUILD_FAILED"
    else:
        for config in args.configs:
            current = {"tests": {}}
            summary["configurations"][config] = current
            current["build_exit"] = command(
                ["cmake", "--build", str(output / "build"), "--target", "vfs_hook_contract",
                 "--config", config, "--parallel", "2"], output / f"build_{config}.log", 180)
            if current["build_exit"]:
                continue
            executable = output / "build" / config / "vfs_hook_contract.exe"
            current["executable_sha256"] = digest(executable)
            fixture_parent = output / f"fixtures_{config}"
            fixture_parent.mkdir()
            for case in CASES:
                current["tests"][case] = command(
                    [str(executable), case, str(fixture_parent / case)],
                    output / f"{config}_{case}.log", 20)
            current["passed"] = sum(code == 0 for code in current["tests"].values())
            current["total"] = len(CASES)
        summary["status"] = "PASS" if all(
            c["build_exit"] == 0 and c.get("passed") == len(CASES)
            for c in summary["configurations"].values()) else "FAIL"
    (output / "summary.json").write_text(json.dumps(summary, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"status": summary["status"], "summary": str(output / "summary.json"),
                      "results": {name: {k: value.get(k) for k in ("build_exit", "passed", "total")}
                                  for name, value in summary["configurations"].items()}}, indent=2))
    return 0 if summary["status"] == "PASS" else 2


if __name__ == "__main__":
    sys.exit(main())
