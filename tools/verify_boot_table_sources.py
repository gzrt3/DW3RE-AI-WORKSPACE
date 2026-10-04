"""Pin every decoded instruction in the existing boot-table translations.

Opcode identity checks translation provenance, not instruction semantics or
retail runtime parity. Outputs are exclusive and never replace old evidence.
"""
import argparse
from pathlib import Path
import re
import struct
import host_snapshot as hs
import pcsx2_capture as pc


def run(output, sources=None):
    pc.identity()
    blob = pc.ELF.read_bytes()
    phoff = struct.unpack_from('<I', blob, 28)[0]
    stride, count = struct.unpack_from('<HH', blob, 42)
    loads = [struct.unpack_from('<8I', blob, phoff+i*stride) for i in range(count)]
    files = ['FUN_001adbb0_0x1adbb0.cpp', 'FUN_001adb48_0x1adb48.cpp',
             'FUN_001adb58_0x1adb58.cpp', 'FUN_001adba0_0x1adba0.cpp',
             'entry_001adc70_0x1adc70.cpp']
    if sources:
        files=sources
    if any(Path(name).name!=name or not name.endswith('.cpp') for name in files):
        raise ValueError('Source must be a filename inside src/recomp')
    verified = {}
    for name in files:
        path = hs.h.ROOT/'src/recomp'/name
        text = path.read_text(encoding='utf-8')
        rows = []
        for addr, opcode in re.findall(r'// 0x([\da-fA-F]+): 0x([\da-fA-F]+)', text):
            address, expected = int(addr,16), int(opcode,16)
            segments = [s for s in loads if s[0]==1 and s[2]<=address and address+4<=s[2]+s[4]]
            if len(segments)!=1:
                raise ValueError('Opcode outside unique file-backed ELF segment')
            s=segments[0]
            offset=s[1]+address-s[2]
            actual=struct.unpack_from('<I',blob,offset)[0]
            if actual!=expected:
                raise ValueError(f'Original opcode mismatch at {address:08x}')
            rows.append(dict(pc=f'0x{address:08x}',opcode=f'0x{actual:08x}',elf_offset=hex(offset)))
        if not rows:
            raise ValueError('Source has no decoded instruction evidence')
        verified[name]=dict(sha256=hs.c.sha(path),opcodes=rows)
    pc.write_new(Path(output),dict(status='ORIGINAL_OPCODE_IDENTITY_VERIFIED',
        elf_sha256=pc.r.ELF_SHA256,sources=verified,
        scope='Decoded instruction identities only; runtime semantics and retail parity remain unverified'))
    print(sum(len(s['opcodes']) for s in verified.values()),'opcode identities verified')


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output',type=Path,required=True)
    parser.add_argument('--source',action='append')
    args=parser.parse_args()
    run(args.output,args.source)
