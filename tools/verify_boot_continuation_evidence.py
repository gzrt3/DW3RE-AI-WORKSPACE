"""Pin original XL opcodes and the bounded before/after host observations."""
import argparse
import json
from pathlib import Path
import struct

import host_snapshot as hs
import pcsx2_capture as pc


def run(before, after, output):
    pc.identity()
    blob=pc.ELF.read_bytes()
    phoff=struct.unpack_from('<I',blob,28)[0]
    stride,count=struct.unpack_from('<HH',blob,42)
    loads=[struct.unpack_from('<8I',blob,phoff+i*stride) for i in range(count)]
    expected={0x1a4828:0x03e00008,0x1a482c:0,
        0x1ad4e4:0x3c030028,0x1ad4e8:0x27a40020,0x1ad4ec:0x0c069208,
        0x1ad4f0:0xac626288,0x1ad4f4:0x3c030028,0x1ad4f8:0xdfbf0040,
        0x1ad4fc:0xac62628c,0x1ad500:0x03e00008,0x1ad504:0x27bd0050,
        0x1ad6f8:0x0c06b576}
    opcodes=[]
    for address,value in expected.items():
        matches=[s for s in loads if s[0]==1 and s[2]<=address and address+4<=s[2]+s[4]]
        if len(matches)!=1:raise ValueError('Ambiguous or absent original opcode')
        s=matches[0];offset=s[1]+address-s[2]
        observed=struct.unpack_from('<I',blob,offset)[0]
        if observed!=value:raise ValueError('Original opcode mismatch')
        opcodes.append({'pc':hex(address),'elf_offset':hex(offset),'opcode':f'0x{observed:08x}'})
    observations={}
    for label,folder,expected_pc in [('before',before,0x1a4828),('after',after,0x1ad5d8)]:
        folder=Path(folder).resolve()
        summary=json.loads((folder/'summary.json').read_text())
        configs={}
        for config in ('Debug','Release'):
            raw=folder/f'raw_{config}'
            for name,digest in summary[config]['files'].items():
                if hs.c.sha(raw/name)!=digest:raise ValueError('Observation changed')
            regs=json.loads((raw/'point_0.json').read_text())
            ram=(raw/'memory_A.bin').read_bytes()
            if len(ram)!=0x2000000 or int(regs['pc'],16)!=expected_pc:raise ValueError('Unexpected stop')
            for address,opcode in expected.items():
                if struct.unpack_from('<I',ram,address)[0]!=opcode:raise ValueError('Observed code differs from original')
            ids=struct.unpack_from('<2I',ram,0x286288)
            if label=='after' and ids!=(1,2):raise ValueError('First semaphore init did not complete as observed')
            configs[config]={'pc':regs['pc'],'sp':regs['gpr'][29], 'semaphore_ids':ids,
                'register_sha256':hs.c.sha(raw/'point_0.json'),'memory_sha256':hs.c.sha(raw/'memory_A.bin')}
        if configs['Debug']!=configs['Release']:raise ValueError('Debug/Release observation differs')
        observations[label]={'path':str(folder),'summary_sha256':hs.c.sha(folder/'summary.json'),'observed':configs}
    contracts={}
    for config in ('Debug','Release'):
        log=Path(after)/f'contract_{config}.log'
        if 'Boot continuation contracts passed' not in log.read_text():raise ValueError('Contract missing')
        contracts[config]={'path':str(log.resolve()),'sha256':hs.c.sha(log)}
    report={'elf_sha256':pc.r.ELF_SHA256,'opcodes':opcodes,'observations':observations,
        'contracts':contracts,'implementation_sha256':hs.c.sha(hs.h.ROOT/'src/boot_continuations.cpp'),
        'scope':'Original opcode identity and bounded host execution only. No retail trace beyond first call; not full boot or parity.',
        'BOOT_CHAIN_STATUS':'STOPPED_NOT_CLOSED','GAME_PARITY':'NOT_COMPLETE'}
    pc.write_new(Path(output),report)
    print(json.dumps({'status':'EVIDENCE_VALIDATED','report':str(Path(output).resolve())}))


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--before',type=Path,required=True)
    parser.add_argument('--after',type=Path,required=True)
    parser.add_argument('--output',type=Path,required=True)
    args=parser.parse_args()
    run(args.before,args.after,args.output)
