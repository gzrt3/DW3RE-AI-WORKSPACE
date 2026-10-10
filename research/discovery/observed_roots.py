"""Hash-bound discovery additions. Private inputs stay local; outputs are metadata.

Generation is a candidate operation, never semantic acceptance. This intentionally
does not convert unmapped static JAL targets or executable-segment padding to code.
"""
import argparse
import csv
import hashlib
import json
from pathlib import Path
import re
import struct
import tomllib
from normalize_ghidra_ranges import normalize
from elf_metadata import elf_words


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def verify_pins(expected, inputs):
    if set(expected)!=set(inputs) or any(expected[k]!=v['sha256'] for k,v in inputs.items()):
        raise ValueError('input_identity_mismatch')


def boundary(text, start):
    rows=[]
    for row in re.finditer(r'CB:instruction=([0-9a-fA-F]+),bytes=(\d+),stores=(\d+),terminal=(true|false),delay_depth=(\d+)',text):
        rows.append((int(row[1],16),int(row[2]),int(row[3]),row[4]=='true',int(row[5])))
    if 'CB:report_complete=true' not in text or 'CB:owner_at_entry=NONE' not in text:
        raise ValueError('incomplete_or_owned_boundary')
    if not rows or rows[0][0]!=start or len(rows)>64:
        raise ValueError('boundary_start_or_size')
    if any(pc!=start+4*i or size!=4 for i,(pc,size,*_) in enumerate(rows)):
        raise ValueError('noncontiguous_boundary')
    terminals=[i for i,row in enumerate(rows) if row[3]]
    if len(terminals)!=1 or terminals[0]!=len(rows)-2 or rows[-2][4]!=1:
        raise ValueError('unsupported_terminal_boundary')
    if any(row[4] for row in rows[:-2]) or rows[-1][4] or rows[-1][3]:
        raise ValueError('nested_delay_or_control_flow')
    if 'outside_flows:0' not in text:
        raise ValueError('external_flow_requires_review')
    return rows,start+4*len(rows)


def observe(log):
    events=[]
    for line in log.splitlines():
        if 'missing-target' not in line or 'IndirectCall' not in line:
            continue
        fields={k:int(v,16) for k,v in re.findall(r'\b(source|target|pc|ra|sp|gp)=(0x[0-9a-fA-F]+)',line)}
        if all(k in fields for k in ('source','target','pc','ra')):
            if fields['target']!=fields['pc'] or fields['source']+8!=fields['ra']:
                raise ValueError('inconsistent_call_event')
            events.append(fields)
    if not events:
        raise ValueError('no_observed_indirect_call')
    return events


def prepare(elf, ranges, log, report, config, output, pins):
    if output.exists():
        raise ValueError('output_exists')
    expected=json.loads(pins.read_text())
    inputs={key:{'path':str(path),'sha256':sha(path)} for key,path in
            [('elf',elf),('ranges',ranges),('observed_log',log),('boundary_report',report),('base_config',config)]}
    verify_pins(expected,inputs)
    functions=json.loads(ranges.read_text())
    words,executable=elf_words(elf)
    known={pc for f in functions for r in f['ranges'] for pc in range(r['start'],r['end'],4)}
    events=observe(log.read_bytes().decode('utf-8',errors='replace'))
    starts={event['target'] for event in events}
    if len(starts)!=1:
        raise ValueError('each_root_requires_independent_boundary_report')
    start=starts.pop()
    rows,end=boundary(report.read_text(),start)
    if any(pc not in executable or pc in known for pc, *_ in rows):
        raise ValueError('root_unmapped_or_overlapping')
    # Independent decoder guard: only the simple straight-line leaf currently
    # reviewed by the Ghidra report. Other callbacks require another CFG gate.
    for pc,_,stores,terminal,delay in rows:
        w=words[pc];op=w>>26
        is_return=op==0 and (w&63)==8 and ((w>>21)&31)==31
        if terminal!=is_return or delay!=int(is_return) or stores!=int(op==43):
            raise ValueError('decoder_disagreement')
        if op not in (9,43) and not is_return and w!=0:
            raise ValueError('unsupported_leaf_instruction')
    addition={'name':f'FUN_{start:08x}','start':start,'end':end,
              'ranges':[{'start':start,'end':end}]}
    chunks,entries=normalize(functions+[addition])
    base=tomllib.loads(config.read_text())['general']
    hints=sorted({*base.get('entry_points',[]),*(f'0x{e:08X}' for e in entries)})
    root={'entry':f'0x{start:08X}','end_exclusive':f'0x{end:08X}',
          'words':len(rows),'stores':sum(r[2] for r in rows),
          'original_range_sha256':hashlib.sha256(b''.join(struct.pack('<I',words[r[0]]) for r in rows)).hexdigest(),
          'observations':[{k:f'0x{v:08X}' for k,v in e.items()} for e in events],
          'boundary':'GHIDRA_AND_ELF_LEAF_AGREE','reference_effects':'NOT_CAPTURED',
          'semantic_parity':'NOT_RUN'}
    output.mkdir(parents=True,exist_ok=False)
    (output/'chunks.json').write_text(json.dumps(chunks,indent=2))
    (output/'original_entries.json').write_text(json.dumps(entries,indent=2))
    with (output/'functions.csv').open('w',newline='') as stream:
        writer=csv.writer(stream);writer.writerow(['name','start','end','size'])
        for c in chunks:writer.writerow([c['name'],hex(c['start']),hex(c['end']),c['end']-c['start']])
    # TOML contains metadata only; preserve original producer switches.
    base.update(input=elf.as_posix(),ghidra_output=(output/'functions.csv').as_posix(),
                output=(output/'generated').as_posix(),entry_points=hints)
    def literal(v):
        if isinstance(v,bool):return str(v).lower()
        if isinstance(v,int):return str(v)
        if isinstance(v,list):return '['+', '.join(literal(x) for x in v)+']'
        return json.dumps(v)
    (output/'config.toml').write_text('[general]\n'+'\n'.join(k+' = '+literal(v) for k,v in base.items())+'\n')
    manifest={'schema':1,'inputs':inputs,'roots':[root],
              'original_functions':len(functions),'contiguous_chunks':len(chunks),
              'original_map_modified':False,'historical_baselines_modified':False,
              'producer_registration':'REGENERATE_WITH_CORPUS','promotion':'BLOCKED_PENDING_EFFECTS_AND_SOURCE_BUILD'}
    (output/'manifest.json').write_text(json.dumps(manifest,indent=2))
    print(json.dumps({'roots_added':1,'original_functions':len(functions),
                      'chunks':len(chunks),'root':root,'promotion':manifest['promotion']}))
    return manifest


def main():
    p=argparse.ArgumentParser()
    for key in ('elf','ranges','log','report','config','output','pins'):p.add_argument('--'+key,type=Path,required=True)
    a=p.parse_args();prepare(a.elf,a.ranges,a.log,a.report,a.config,a.output,a.pins)

if __name__=='__main__':main()
