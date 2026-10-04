"""Recover only truncated catalogued syscall wrappers with exact ELF patterns."""
import argparse
import json
from pathlib import Path
import re
import struct
import host_snapshot as hs
import pcsx2_capture as pc


def run(output):
    pc.identity()
    output=Path(output).resolve()
    output.mkdir(parents=True,exist_ok=False)
    blob=pc.ELF.read_bytes()
    phoff=struct.unpack_from('<I',blob,28)[0]
    stride,count=struct.unpack_from('<HH',blob,42)
    loads=[struct.unpack_from('<8I',blob,phoff+i*stride) for i in range(count)]
    catalog=(hs.h.ROOT/'src/dispatcher.cpp').read_text()
    installed={int(a,16) for a in re.findall(r'g_dispatcher\[0x([\da-fA-F]+)\]',catalog)}
    rows=[]
    for address,name in re.findall(r'g_dispatcher\[0x([\da-fA-F]+)\] = (\w+);',catalog):
        start=int(address,16)
        segments=[s for s in loads if s[0]==1 and s[2]<=start and start+16<=s[2]+s[4]]
        if len(segments)!=1:continue
        segment=segments[0];offset=segment[1]+start-segment[2]
        words=struct.unpack_from('<4I',blob,offset)
        # addiu v1,zero,signed16; syscall0; jr ra; nop.
        if words[0]&0xffff0000!=0x24030000 or words[1:]!=(12,0x03e00008,0):continue
        if start+8 in installed:continue
        path=hs.h.ROOT/'src/recomp'/f'{name}.cpp'
        text=path.read_text(encoding='utf-8')
        decoded=[(int(a,16),int(w,16)) for a,w in re.findall(r'// 0x([\da-fA-F]+): 0x([\da-fA-F]+)',text)]
        if decoded!=[(start,words[0]),(start+4,12)]:continue
        if 'runtime->handleSyscall' not in text:continue
        rows.append(dict(start=start,return_pc=start+8,words=list(words),elf_offset=offset,
                         source=str(path),source_sha256=hs.c.sha(path)))
    pc.write_new(output/'manifest.json',dict(elf_sha256=pc.r.ELF_SHA256,wrappers=rows,
        scope='Exact file-backed syscall wrapper bytes and truncated catalogued source; no hardware semantic or parity claim'))
    header='#pragma once\n#include <array>\n#include <cstdint>\nnamespace fate::recomp {\nstruct SyscallReturnWords { uint32_t start; uint32_t first; };\n'
    header+=f'inline constexpr std::array<SyscallReturnWords,{len(rows)}> syscall_return_words{{{{\n'
    header+=''.join(f'    {{0x{r["start"]:08x}u,0x{r["words"][0]:08x}u}},\n' for r in rows)
    header+='}};\n}\n'
    (output/'syscall_return_words.hpp').write_text(header,encoding='utf-8')
    print(json.dumps(dict(count=len(rows),measured_return_present=any(r['return_pc']==0x1a4aa8 for r in rows))))


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output',type=Path,required=True)
    run(parser.parse_args().output)
