"""Derive a GPL GSRunner diagnostic that retains final snapshots during draw dumps."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess

p=argparse.ArgumentParser()
p.add_argument('source',type=Path)
p.add_argument('output',type=Path)
a=p.parse_args()
pin='fd9d310ccbb6b8b62c976da8886a3c8fd3a10ff3'
if subprocess.check_output(['git','-C',str(a.source),'rev-parse','HEAD'],text=True).strip()!=pin:
    raise SystemExit('PCSX2 revision mismatch')
original=subprocess.check_output(['git','-C',str(a.source),'show',pin+':pcsx2-gsrunner/Main.cpp'])
data=original.decode('utf-8')
needle='\t\t// Disable saving frames with SaveSnapshotToMemory()\n\t\t// Instead we save more "raw" snapshots when using -dump.\n\t\ts_output_prefix = "";'
if data.count(needle)!=1:
    raise SystemExit('Diagnostic snapshot patch anchor mismatch')
data=data.replace(needle,'\t\t// Keep final snapshots alongside bounded draw diagnostics.\n\t\t// Pixel invariance must be checked against the unmodified GSRunner.')
a.output.parent.mkdir(parents=True,exist_ok=True)
a.output.write_text(data,encoding='utf-8')
manifest={'source_commit':pin,'license':'GPL-3.0-or-later',
          'original_main_sha256':hashlib.sha256(original).hexdigest(),
          'derived_main_sha256':hashlib.sha256(a.output.read_bytes()).hexdigest(),
          'change':'Retain snapshot prefix when draw dumping is enabled',
          'hardware_semantics_changed':False,'pixel_invariance':'NOT_RUN'}
a.output.with_suffix('.json').write_text(json.dumps(manifest,indent=2),encoding='utf-8')
