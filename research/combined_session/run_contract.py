"""Run a contract in a new evidence directory, retaining previous fixtures."""
import argparse
from datetime import datetime, timezone
import hashlib
import json
from pathlib import Path
import subprocess
import uuid

p=argparse.ArgumentParser()
p.add_argument('--executable',type=Path,required=True)
p.add_argument('--evidence',type=Path,required=True)
p.add_argument('--scenario')
a=p.parse_args()
out=a.evidence/(datetime.now(timezone.utc).strftime('%Y%m%dT%H%M%S')+'_'+uuid.uuid4().hex)
out.mkdir(parents=True,exist_ok=False)
command=[str(a.executable),str(out/'fixture')]
if a.scenario:command.append(a.scenario)
with (out/'stdout.log').open('xb') as stdout,(out/'stderr.log').open('xb') as stderr:
    result=subprocess.run(command,stdout=stdout,stderr=stderr,timeout=60)
record={'exit_code':result.returncode,'scenario':a.scenario,
        'executable_sha256':hashlib.sha256(a.executable.read_bytes()).hexdigest(),
        'outputs':{name:hashlib.sha256((out/name).read_bytes()).hexdigest()
                   for name in ('stdout.log','stderr.log')}}
with (out/'result.json').open('x',encoding='utf-8') as stream:json.dump(record,stream,indent=2)
print(json.dumps(record))
raise SystemExit(result.returncode)
