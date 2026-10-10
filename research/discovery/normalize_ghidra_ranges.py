"""Lossless body-range metadata for the recompiler's contiguous-function input."""
import argparse
import csv
import json
from pathlib import Path

def normalize(functions):
    chunks={};entries=set()
    for function in functions:
        entry=function['start'];entries.add(entry)
        if not any(r['start']<=entry<r['end'] for r in function['ranges']):
            raise ValueError('entry_outside_body')
        for index,r in enumerate(function['ranges']):
            start,end=r['start'],r['end']
            if start%4 or end%4 or end<=start:raise ValueError('unaligned_or_empty_body')
            key=(start,end)
            row=chunks.setdefault(key,{'name':f'FUN_{start:08x}','start':start,'end':end,
                'ranges':[{'start':start,'end':end}],'original_owners':[]})
            row['original_owners'].append({'entry':entry,'name':function['name'],'range_index':index})
    ordered=sorted(chunks.values(),key=lambda r:(r['start'],r['end']))
    for left,right in zip(ordered,ordered[1:]):
        if left['end']>right['start']:raise ValueError('conflicting_body_ranges')
    return ordered,sorted(entries)

def main():
    p=argparse.ArgumentParser();p.add_argument('input',type=Path);p.add_argument('output',type=Path)
    args=p.parse_args();functions=json.loads(args.input.read_text())
    chunks,entries=normalize(functions)
    args.output.mkdir(exist_ok=False)
    with (args.output/'chunks.json').open('x') as out:json.dump(chunks,out,indent=2)
    with (args.output/'original_entries.json').open('x') as out:json.dump(entries,out,indent=2)
    with (args.output/'functions.csv').open('x',newline='') as out:
        writer=csv.writer(out);writer.writerow(['name','start','end','size'])
        for c in chunks:writer.writerow([c['name'],f'0x{c["start"]:x}',f'0x{c["end"]:x}',c['end']-c['start']])
    print('original_functions='+str(len(functions)))
    print('contiguous_chunks='+str(len(chunks)))
    print('original_entries='+str(len(entries)))
    print('entries_inside_chunks='+str(sum(e not in {c['start'] for c in chunks} for e in entries)))
    print('overlapping_chunks=0')

if __name__=='__main__':main()
