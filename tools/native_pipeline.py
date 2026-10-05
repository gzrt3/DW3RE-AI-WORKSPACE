"""One native build/probe cycle with a concrete evidence packet for the next repair.

The coding agent consumes pending-work.json, reviews source changes and repeats
the cycle. This runner does not apply model output, reset budgets, or equate a
process result with finished gameplay. It supersedes the old capture-only queue
for native development while preserving that queue and its evidence.
"""
import argparse
import datetime as dt
import hashlib
import json
import re
import subprocess
from pathlib import Path

import native_boot_probe as probe
import copilot_bridge
from hybrid_supervisor import process_lock, process_identity

ROOT=Path(__file__).resolve().parents[1]


def classify(result, stderr):
    missing=re.findall(r'\[guest-branch:missing-target\][^\n]*?target=(0x[0-9a-fA-F]+)',stderr)
    imports=re.findall(r'unhandled import ([\w]+):(\d+) version=(0x[0-9a-fA-F]+) pc=(0x[0-9a-fA-F]+)',stderr)
    work=[]
    if result.get('input_integrity')!='MATCH':
        return {'state':'INPUT_INTEGRITY_BLOCKED','work':[],'game_complete':False}
    if missing:
        work.append({'kind':'recover_original_continuation','pc':int(missing[-1],16),
                     'requires':['identified ELF words','register/delay-slot contracts','native replay']})
    for library,ordinal,version,pc in dict.fromkeys(imports):
        work.append({'kind':'implement_versioned_iop_import','library':library,'ordinal':int(ordinal),
                     'version':int(version,16),'pc':int(pc,16),
                     'requires':['matching original export table','shared subsystem ownership','original module replay']})
    if not work:
        work.append({'kind':'inspect_native_observation','status':result.get('status'),
                     'requires':['bounded state/trace diagnosis','title/battle observation when reached']})
    return {'state':'REPAIR_REQUIRED','work':work,'game_complete':False}


def write(path,value):
    with path.open('x',encoding='utf-8') as f: json.dump(value,f,indent=2)


def sync_advisers(output, phase):
    """Synchronize advice only; unavailable advisers never suppress native work."""
    report = {}
    providers = {
        'github_copilot': (ROOT/'artifacts/copilot_bridge', ('native-presentation', 'signed-branch-emitter')),
        'microsoft_copilot_ui': (ROOT/'artifacts/microsoft_copilot_bridge', ('signed-width-oracle',)),
    }
    for provider, (exchange, kinds) in providers.items():
        try:
            received = copilot_bridge.collect(exchange, ROOT)
            requests = [copilot_bridge.enqueue(kind, exchange, ROOT) for kind in kinds]
            report[provider] = {'state': 'SYNCHRONIZED', 'request_ids': requests,
                                'receipts': received, 'code_applied': False,
                                'model_invoked_by_runner': False}
        except (OSError, ValueError, KeyError, TypeError) as error:
            report[provider] = {'state': 'BRIDGE_REVIEW_REQUIRED', 'error_type': type(error).__name__,
                                'code_applied': False, 'model_invoked_by_runner': False}
    write(output/f'advisers-{phase}.json', report)
    return report


def run(args):
    output=args.output.resolve()
    if output.exists(): raise ValueError('Use a new evidence output for each cycle')
    if not (args.build_dir/'CMakeCache.txt').is_file(): raise ValueError('Configure the native build first')
    output.mkdir(parents=True)
    command=['cmake','--build',str(args.build_dir.resolve()),'--target','fate_game',
             '--config',args.configuration,'--parallel',str(args.parallel),'--',
             '/p:UseMultiToolTask=true',f'/p:CL_MPCount={args.parallel}','/p:EnforceProcessCountAcrossBuilds=true']
    with process_lock(args.build_dir/'.native-pipeline-owner'):
        sync_advisers(output, 'before-build')
        with (output/'build.log').open('xb') as log:
            child=subprocess.Popen(command,stdout=log,stderr=subprocess.STDOUT)
            write(output/'build-launch.json',{'command':command,'pid':child.pid,
                  'process_identity':process_identity(child.pid),'started_utc':dt.datetime.now(dt.timezone.utc).isoformat()})
            code=child.wait()
        build={'exit_code':code,'log_sha256':hashlib.sha256((output/'build.log').read_bytes()).hexdigest()}
        write(output/'build-result.json',build)
        if code:
            packet={'state':'BUILD_REPAIR_REQUIRED','work':[{'kind':'repair_build','evidence':'build.log'}],
                    'game_complete':False}
        else:
            result=probe.run(args.exe,args.dump_root,args.elf,output/'native',args.timeout,args.iop_root)
            packet=classify(result,(output/'native/stderr.bin').read_bytes().decode('utf-8','replace'))
            packet['native_result']='native/result.json'
        packet['build_result']='build-result.json'
        sync_advisers(output, 'after-cycle')
        packet['acceptance_scope']='All original game acceptance criteria remain independent; no completion inference from this cycle.'
        write(output/'pending-work.json',packet)
        print(json.dumps({'state':packet['state'],'packet':str(output/'pending-work.json'),'game_complete':False}))
        return 0 if code==0 else 1


def main():
    p=argparse.ArgumentParser(description=__doc__)
    for name in ('build-dir','exe','dump-root','elf','iop-root','output'):
        p.add_argument('--'+name,type=Path,required=True)
    p.add_argument('--configuration',choices=['Debug','Release'],default='Release')
    p.add_argument('--parallel',type=int,choices=range(1,17),default=4)
    p.add_argument('--timeout',type=probe.timeout_value,default=10)
    a=p.parse_args()
    return run(a)


if __name__=='__main__': raise SystemExit(main())
