# Phase B Implementation Plan

## Goal
Perform a complete forensic extraction of the DW3 ELF and DW4H PE executables using only the tools that are already installed on the system:
- `objdump`
- `strings`
- `dumpbin`
- `python`
- `ghidra` (supplementary)
- `Get-FileHash`

The output will be raw text files and structured JSON files, plus a markdown summary, all placed under the existing Phase B artifact directories.

## Open Questions
> [!IMPORTANT]
> No critical open questions at this time. All required paths and tools are known.

## Proposed Changes
---
### 1. PowerShell script `run_phaseB_forge.ps1`
Create a new script that will:
1. Verify tool paths exist (objdump, strings, dumpbin, python, ghidra).
2. Run the following commands and capture **raw** output files under the appropriate directories:
   - **DW3 (ELF)**
     - `objdump --info` → `HEADERS.raw.txt`
     - `objdump --version` → `HEADERS.raw.txt` (append)
     - `objdump -f "<DW3_COPY>"` → `HEADERS.raw.txt`
     - `objdump -h "<DW3_COPY>"` → `SECTIONS.raw.txt`
     - `objdump -x "<DW3_COPY>"` → `HEADERS.raw.txt` (append)
     - `objdump -r "<DW3_COPY>"` → `RELOCATIONS.raw.txt`
     - `objdump -t "<DW3_COPY>"` → `SYMBOLS.raw.txt`
     - `objdump -d "<DW3_COPY>"` → `DISASSEMBLY.raw.txt`
     - `objdump -D "<DW3_COPY>"` → `DISASSEMBLY.raw.txt` (append)
     - `strings -a -t x "<DW3_COPY>"` → `STRINGS_ASCII.raw.txt`
     - `strings -a -el -t x "<DW3_COPY>"` → `STRINGS_UTF16.raw.txt`
   - **DW4H (PE)**
     - `dumpbin /HEADERS "<DW4H_COPY>"` → `HEADERS.raw.txt`
     - `dumpbin /SECTION:ALL "<DW4H_COPY>"` → `SECTIONS.raw.txt`
     - `dumpbin /IMPORTS "<DW4H_COPY>"` → `IMPORTS.raw.txt`
     - `dumpbin /EXPORTS "<DW4H_COPY>"` → `EXPORTS.raw.txt`
     - `dumpbin /RELOCATIONS "<DW4H_COPY>"` → `RELOCATIONS.raw.txt`
     - `dumpbin /TLS "<DW4H_COPY>"` → `TLS.raw.txt`
     - `objdump -f "<DW4H_COPY>"` → `HEADERS.raw.txt` (append)
     - `objdump -h "<DW4H_COPY>"` → `SECTIONS.raw.txt` (append)
     - `objdump -x "<DW4H_COPY>"` → `HEADERS.raw.txt` (append)
     - `objdump -p "<DW4H_COPY>"` → `SYMBOLS.raw.txt`
     - `objdump -d "<DW4H_COPY>"` → `DISASSEMBLY.raw.txt`
     - `objdump -D "<DW4H_COPY>"` → `DISASSEMBLY.raw.txt` (append)
     - `strings -a -t x "<DW4H_COPY>"` → `STRINGS_ASCII.raw.txt`
     - `strings -a -el -t x "<DW4H_COPY>"` → `STRINGS_UTF16.raw.txt`
3. After raw files are generated, invoke a **PowerShell parsing function** that reads each raw file, extracts the relevant fields, and builds a single JSON object per executable with the following structure (example):
```json
{
  "headers": {"content": "<raw>", "status": "OK"},
  "sections": {"content": "<raw>", "status": "OK"},
  "imports": {"content": "<raw>", "status": "OK"},
  "exports": {"content": "<raw>", "status": "OK"},
  "relocations": {"content": "<raw>", "status": "OK"},
  "tls": {"content": "<raw>", "status": "OK"},
  "symbols": {"content": "<raw>", "status": "OK"},
  "disassembly": {"content": "<raw>", "status": "OK"},
  "strings_ascii": {"content": "<raw>", "status": "OK"},
  "strings_utf16": {"content": "<raw>", "status": "OK"},
  "function_candidates": [{"address":"0x...","type":"CALL"}],
  "hashes": {
    "executable": "<sha256>",
    "artifacts": {"HEADERS.raw.txt":"<sha256>", ...}
  }
}
```
   - If any field cannot be parsed (e.g., objdump does not understand MIPS), set `"status": "UNKNOWN"` and keep the raw text.
4. Write the JSON to `EXECUTABLE_FORENSICS.json` and a human‑readable markdown summary to `EXECUTABLE_FORENSICS.md` (include tables of each component, indicate `[UNKNOWN]` where appropriate, and list any **function candidates** identified by objdump for DW4H).
5. Compute SHA‑256 hashes for the forensic copies and **all** generated raw and JSON/MD files using `Get-FileHash`.
6. Log every command’s exit code; if a command fails, write its error output to a `.log` file beside the raw output and mark the corresponding JSON field as `"status": "FAILED"`.
7. Do **not** modify any original binaries or the source installations.
8. Do **not** install any new software.
9. If Ghidra is available, optionally run the existing `DW4H_StartupEvidence.py` script on the DW4H copy, capture its output, and add it to the JSON under a `ghidra` key. Any Ghidra failure must be recorded but must not abort the overall Phase B run.

## Verification Plan
- After the script finishes, read back each `*.raw.txt` and the JSON to ensure the files exist and are non‑empty where expected.
- Verify that every hash entry matches the actual file hash (computed again with `Get-FileHash`).
- Ensure the markdown file lists all components with correct status tags.
- Run a quick sanity check: `Select-String -Pattern "MIPS" -Path *.raw.txt` to confirm whether objdump recognized the ELF architecture; if not, set `OBJDUMP_DW3_ARCHITECTURE_SUPPORT = BLOCKED` in the final status.

---
**User Review Required**
- Approve the creation of `run_phaseB_forge.ps1` and the outlined file layout.
- Confirm that the JSON schema above meets your expectations.

*If you need any adjustments, please let me know before I execute the plan.*
