# Disc data setup

**This imports data. It does not install a playable game. MixJoy is unresolved.**

Use Python 3.12+ on Windows. No administrator access or network connection is
required. The optional desktop front end needs Tkinter, included in the normal
python.org Windows installation.

```powershell
python installer/setup.py
```

Choose your NTSC-U DW3 ISO, Xtreme Legends ISO and a **new** output folder outside
this source checkout. Click **Import both discs** and keep the window open until
it finishes. CLI alternative:

```powershell
python installer/import_discs.py --dw3 "E:/Discs/DW3.iso" --xl "E:/Discs/DW3XL.iso" --output "E:/DW3-local-data"
```

The importer validates ISO9660 structure, BOOT2 identity, required executable and
archive paths, bounds and names. It copies both discs to version-specific roots,
hashes every copied file, rechecks the input ISO hashes and writes a receipt only
after success. Originals remain read-only. Existing output folders are rejected.
Keep the output private; do not commit it. Reserve approximately 6 GB for output.

Only ordinary 2048-byte-sector ISO images are supported. CHD, raw BIN/CUE,
multi-extent files, extended attributes and other regions are rejected. Identity
checks distinguish the two supported editions; they do not replace a canonical
retail-disc hash database. SHA256 records identify the actual user inputs.

On failure, the importer retains partial files for diagnosis and does not write
a successful receipt. Choose a different new destination for a retry. Directory
ownership is assumed local and stable during extraction; this is not protection
against an adversary altering directories concurrently.

Output: `dw3/`, `dw3xl/`, `import_receipt.json`. The current native runtime does
not yet consume this receipt. The resolver integration contract is documented
in [the completion bridge](../docs/COMPLETION_BRIDGE.md).

Verification: `python -B -m unittest discover -s installer -p test_import_discs.py`.
Test fixtures are synthetic, never original game data. See
[the audit](../docs/PROJECT_AUDIT.md) for the real-disc test verdict.
