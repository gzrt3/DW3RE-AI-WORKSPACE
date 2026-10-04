"""Read-only comparison of normalized captures backed by hashed original files.

This validates the supplied evidence format, not the authenticity of its author.
No emulator launch, inferred register values, code execution or dump modification.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import sys

ELF_SHA256 = 'd26695fa7769cabbddbd89168924279cd1035eeb0bdd3744aec95257f7cfa731'
SPECIAL = {'pc':8, 'HI':16, 'LO':16, 'HI1':16, 'LO1':16, 'SA':8,
           'Status':8, 'Cause':8, 'EPC':8}


def hash_file(path):
    with path.open('rb') as f:
        return hashlib.file_digest(f,'sha256').hexdigest()


def child(root, name):
    p = (root/name).resolve()
    if not p.is_relative_to(root.resolve()):
        raise ValueError('evidence path escapes capture root')
    return p


def registers(value):
    if not isinstance(value,dict) or not isinstance(value.get('absent'),dict):
        raise ValueError('registers require explicit absent reasons')
    gpr=value.get('gpr')
    if not isinstance(gpr,list) or len(gpr)!=32:
        raise ValueError('exactly 32 GPRs required')
    fields=dict(SPECIAL)
    flat={k:value.get(k) for k in SPECIAL}
    for i,r in enumerate(gpr):
        if set(r)!= {'low64','high64'}: raise ValueError('GPR halves required')
        for half in ('low64','high64'):
            key=f'r{i}.{half}'; flat[key]=r[half]; fields[key]=16
    for key,width in fields.items():
        v=flat[key]
        if v is None:
            if not value['absent'].get(key): raise ValueError('unknown value without absent reason')
        elif not isinstance(v,str) or not re.fullmatch('0x[0-9a-f]{'+str(width)+'}',v):
            raise ValueError('invalid register hex width')
    for key in ('branch','delay_slot'):
        if key not in value: raise ValueError('branch/delay must be explicit, possibly null')
        flat[key]=value[key]
        if value[key] is None and not value['absent'].get(key):
            raise ValueError('unknown branch/delay without reason')
    return flat


def load_capture(root, origin):
    root=Path(root).resolve()
    meta=json.loads((root/'manifest.json').read_text(encoding='utf-8'))
    if meta['origin']!=origin or meta['elf_sha256']!=ELF_SHA256:
        raise ValueError('origin or ELF identity mismatch')
    if origin=='PCSX2' and not all(meta.get(k) for k in ('pcsx2_version','exe_sha256','boot_method')):
        raise ValueError('PCSX2 provenance missing')
    files=meta['files']
    for original in meta.get('originals',[]):
        if hash_file(Path(original['path']))!=original['sha256']:
            raise ValueError('original evidence hash mismatch')
    for name,expected in files.items():
        if hash_file(child(root,name))!=expected: raise ValueError('evidence hash mismatch')
    def read(name):
        if name not in files: raise ValueError('unhashed evidence')
        return json.loads(child(root,name).read_text(encoding='utf-8'))
    snapshots={}
    for label,pc,hit in [('A','0x00100008',1),('B','0x00100018',2)]:
        s=read(f'snapshot_{label}/registers.json')
        if s.get('pc')!=pc or s.get('hit')!=hit: raise ValueError('wrong snapshot PC/hit')
        snapshots[label]=registers(s)
    if 'trace.jsonl' not in files: raise ValueError('unhashed trace')
    trace=[json.loads(x) for x in child(root,'trace.jsonl').read_text().splitlines()]
    if len(trace)!=11: raise ValueError('trace must contain 11 instructions')
    for i,row in enumerate(trace):
        if row.get('pc')!=f'0x{0x100008+i*4:08x}' or not re.fullmatch('0x[0-9a-f]{8}',row.get('opcode','')):
            raise ValueError('trace PC/opcode malformed')
        for key in ('before','after','branch_taken','delay_slot'):
            if key not in row: raise ValueError('trace fields must be explicit, possibly null')
        if row['before'] is not None: registers(row['before'])
        if row['after'] is not None: registers(row['after'])
    memory={}
    for m in meta.get('memory',[]):
        if m['file'] not in files or m['snapshot'] not in ('A','B'):
            raise ValueError('unhashed or unassigned memory')
        data=child(root,m['file']).read_bytes()
        if len(data)!=m['length'] or not 0<=m['base']<m['base']+m['length']<=0x02000000:
            raise ValueError('invalid EE RAM range')
        key=(m['snapshot'],m['base'],m['length'])
        if key in memory: raise ValueError('duplicate memory range')
        memory[key]=data
    return {'metadata':meta,'snapshots':snapshots,'trace':trace,'memory':memory}


def compare(retail, host):
    unknown=[]; last=None; first=None
    def observe(where,a,b):
        nonlocal first,last
        if a is None or b is None:
            unknown.append(where); return
        if first is None and type(a)==type(b) and a==b:
            last=where
        elif first is None:
            first={'observation':where,'retail':a,'host':b,'last_matching_observation':last,
                   'subsystem':None,'earlier_unobserved_fields':list(unknown)}
    def state(where,a,b):
        for k in a: observe(where+'.'+k,a[k],b[k])
    def memory(label):
        keys=sorted(set(retail['memory'])|set(host['memory']))
        for key in keys:
            if key[0]!=label: continue
            a,b=retail['memory'].get(key),host['memory'].get(key)
            where=f'{label}.memory[0x{key[1]:08x},0x{key[1]+key[2]:08x})'
            if a is None or b is None: unknown.append(where); continue
            offset=next((i for i,(x,y) in enumerate(zip(a,b)) if x!=y),None)
            if offset is not None: observe(f'{label}.memory@0x{key[1]+offset:08x}',a[offset],b[offset])
        if not any(k[0]==label for k in keys): unknown.append(label+'.memory')
    state('A',retail['snapshots']['A'],host['snapshots']['A']); memory('A')
    for i,(a,b) in enumerate(zip(retail['trace'],host['trace'])):
        where=f'trace[{i}]@{a["pc"]}'
        for k in ('pc','opcode','before','branch_taken','delay_slot','after'):
            if k in ('before','after') and a[k] is not None and b[k] is not None:
                state(where+'.'+k,registers(a[k]),registers(b[k]))
            else: observe(where+'.'+k,a[k],b[k])
    state('B',retail['snapshots']['B'],host['snapshots']['B']); memory('B')
    return {'status':'FIRST_DIVERGENCE_IDENTIFIED' if first else 'NO_DIVERGENCE_IN_OBSERVED_FIELDS',
            'first_verifiable_divergence':first,'unobserved_fields':unknown,
            'claim':'Only supplied observed prefix; no complete equivalence or runtime closure.',
            'BOOT_CHAIN_STATUS':'STOPPED_NOT_CLOSED','INTERACTIVE_MAIN_LOOP':'NOT_DEMONSTRATED'}


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--retail',required=True,type=Path); p.add_argument('--host',required=True,type=Path)
    p.add_argument('--output',required=True,type=Path); a=p.parse_args()
    try:
        r=compare(load_capture(a.retail,'PCSX2'),load_capture(a.host,'HOST'))
        with a.output.open('x',encoding='utf-8') as f: json.dump(r,f,indent=2)
        print(r['status']); return 0
    except (OSError,ValueError,KeyError,TypeError) as e:
        print(json.dumps({'status':'INVALID_OR_MISSING_EVIDENCE','error_type':type(e).__name__})); return 1


if __name__=='__main__': sys.exit(main())
