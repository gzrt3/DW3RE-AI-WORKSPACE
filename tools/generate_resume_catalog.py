"""Recover unambiguous dispatcher aliases already emitted by static translation.

Only canonical FUN sources with one function and an initial ctx->pc switch are
eligible. Every annotated instruction must match the supplied ELF. Conflicting
owners are excluded. This verifies alias provenance, not translated semantics.
"""
import argparse
import hashlib
import json
import re
import struct
from collections import defaultdict
from pathlib import Path


def elf_words(blob):
    if blob[:7] != b'\x7fELF\x01\x01\x01':
        raise ValueError('Expected ELF32 little endian')
    offset = struct.unpack_from('<I', blob, 28)[0]
    size, count = struct.unpack_from('<HH', blob, 42)
    if size != 32:
        raise ValueError('Unexpected ELF program header size')
    words = {}
    for index in range(count):
        kind, file_offset, address, _, length, _, _, _ = struct.unpack_from('<8I', blob, offset + index * size)
        if kind != 1:
            continue
        if file_offset + length > len(blob):
            raise ValueError('Truncated segment')
        for delta in range(0, length - 3, 4):
            words[address + delta] = struct.unpack_from('<I', blob, file_offset + delta)[0]
    return words


def without_cpp_comments(text):
    # Keep offsets/newlines stable so matches in this view index the original
    # source. Quoted strings/chars are tokens, not places to strip // or /*.
    tokens = r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|//[^\n]*|/\*.*?\*/'
    return re.sub(tokens, lambda match: re.sub(r'[^\n]', ' ', match[0])
                  if match[0].startswith(('//', '/*')) else match[0], text, flags=re.S)


def entry_prefix_is_logging_only(prefix, symbol):
    # function_emitter.cpp emits only this optional diagnostic block before the
    # dispatch switch. Any guest write, call, conditional or other prologue
    # would also execute when entering an alias and must not be replayed.
    logging = (r'\s*(?:#\s*ifdef\s+PS2_FUNCTION_LOG_TRACKER\s*\n\s*'
               r'PS_LOG_ENTRY\(\s*"' + re.escape(symbol) +
               r'"\s*\)\s*;\s*#\s*endif\s*)?\s*')
    return re.fullmatch(logging, prefix) is not None


def label_prefix_is_generated_delay_entry(prefix, address):
    # ControlFlowEmitter::emitResumeFromDelaySlotEntry emits these four lines
    # before the instruction comment for a resumable delay slot. Allow only the
    # exact entry PC and its preceding branch, with no extra executable effects.
    match = re.fullmatch(
        r'\s*if\s*\(ctx->pc\s*==\s*0x([0-9a-fA-F]+)u\)\s*\{\s*'
        r'ctx->pc\s*=\s*0x([0-9a-fA-F]+)u;\s*'
        r'ctx->in_delay_slot\s*=\s*true;\s*'
        r'ctx->branch_pc\s*=\s*0x([0-9a-fA-F]+)u;\s*', prefix)
    return bool(match and int(match[1], 16) == address and int(match[2], 16) == address and
                int(match[3], 16) == (address - 4) & 0xffffffff)


def source_aliases(text, words):
    definitions = list(re.finditer(r'void\s+(\w+)\([^)]*\)\s*\{', text))
    if len(definitions) != 1 or not re.fullmatch(r'FUN_[0-9a-fA-F]{8}_0x[0-9a-fA-F]+', definitions[0][1]):
        return []
    symbol = definitions[0][1]
    body = text[definitions[0].end():]
    code = without_cpp_comments(body)
    switch = re.search(r'switch\s*\(ctx->pc\)\s*\{(.*?)default:\s*break;\s*\}', code, re.S)
    if not switch or not entry_prefix_is_logging_only(code[:switch.start()], symbol):
        return []
    annotations = [(int(pc, 16), int(word, 16)) for pc, word in
                   re.findall(r'//\s*0x([0-9a-fA-F]+):\s*0x([0-9a-fA-F]+)\s', body)]
    if not annotations or any(words.get(pc) != word for pc, word in annotations):
        raise ValueError('Annotated instructions differ from identified ELF: ' + symbol)
    result = []
    for pc, label in re.findall(r'case\s+0x([0-9a-fA-F]+)u?:\s*goto\s+(\w+);', switch[1]):
        address = int(pc, 16)
        label_match = re.search(r'^' + re.escape(label) + r':[ \t]*\r?$', code, re.M)
        if address not in words or not label_match:
            raise ValueError('Unowned resume label in ' + symbol)
        # Require that this exact PC is an instruction annotation in its owner.
        if address not in {item[0] for item in annotations}:
            continue  # Unannotated delay-slot/no-op labels remain unresolved.
        named_address = re.fullmatch(r'label_([0-9a-fA-F]+)', label)
        following = body[label_match.end():]
        instruction = re.search(r'//\s*0x([0-9a-fA-F]+):\s*0x([0-9a-fA-F]+)\s', following)
        prefix = without_cpp_comments(following[:instruction.start()]) if instruction else ''
        if (not named_address or int(named_address[1], 16) != address or not instruction or
                int(instruction[1], 16) != address or
                (prefix.strip() and not label_prefix_is_generated_delay_entry(prefix, address))):
            raise ValueError('Resume label does not enter its exact guest instruction in ' + symbol)
        result.append((address, words[address], symbol))
    return result


def unique_aliases(candidates):
    owners = defaultdict(set)
    for pc, opcode, symbol in candidates:
        owners[pc].add((opcode, symbol))
    return [(pc, *next(iter(values))) for pc, values in sorted(owners.items()) if len(values) == 1], sum(len(v) != 1 for v in owners.values())


def supported_delay(word):
    return word == 0 or word >> 26 == 9 or (word >> 26 == 0 and (word & 63) in (33,37,45) and (word >> 6 & 31) == 0)


def source_tail(text, words):
    end=re.search(r'ctx->pc = 0x([0-9a-fA-F]+)u;\s*}\s*$',text)
    declared=re.search(r'// Address: 0x[0-9a-fA-F]+ - 0x([0-9a-fA-F]+)',text)
    if not end or not declared or int(end[1],16)!=int(declared[1],16):
        return None
    pc=int(end[1],16)
    if words.get(pc)!=0x03e00008 or not supported_delay(words.get(pc+4,0xffffffff)):
        return None
    return (pc,words[pc+4])


def generate(root, elf, output, report):
    blob = elf.read_bytes()
    words = elf_words(blob)
    candidates, sources, tails = [], {}, set()
    for path in sorted((root / 'src/recomp').glob('FUN_*.cpp')):
        data = path.read_bytes()
        text=data.decode('utf-8-sig')
        rows = source_aliases(text, words)
        if rows:
            candidates.extend(rows)
            sources[str(path.relative_to(root))] = hashlib.sha256(data).hexdigest()
            tail=source_tail(text,words)
            if tail:tails.add(tail)
    rows, ambiguous = unique_aliases(candidates)
    code = ['// Generated by tools/generate_resume_catalog.py; do not edit.',
            '#include "fate/resume_catalog.hpp"', '#include "fate/verified_return_tail.hpp"', '#include "ps2_runtime.h"',
            '#include <cstring>', '#include <stdexcept>', '#include <algorithm>', '#include <iterator>']
    for symbol in sorted({row[2] for row in rows}):
        code.append(f'void {symbol}(uint8_t*,R5900Context*,PS2Runtime*);')
    code += ['namespace {', 'struct Alias { uint32_t pc, opcode; PS2Runtime::RecompiledFunction function; };',
             'const Alias aliases[]{']
    code.extend(f'    {{0x{pc:08x}u,0x{opcode:08x}u,{symbol}}},' for pc, opcode, symbol in rows)
    code += ['};','struct Tail {uint32_t pc,delay;};','const Tail tails[]{']
    code.extend(f'    {{0x{pc:08x}u,0x{delay:08x}u}},' for pc,delay in sorted(tails))
    code += ['};','void return_tail(uint8_t* ram,R5900Context* ctx,PS2Runtime*) {',
             '    const auto* row=std::lower_bound(std::begin(tails),std::end(tails),ctx->pc,[](const Tail& a,uint32_t pc){return a.pc<pc;});',
             '    if(row==std::end(tails)||row->pc!=ctx->pc) throw std::runtime_error("Unknown original return tail");',
             '    uint32_t pair[2];std::memcpy(pair,ram+row->pc,8);',
             '    if(pair[0]!=0x03e00008u||pair[1]!=row->delay) throw std::runtime_error("Modified original return tail");',
             '    fate::recomp::execute_register_return(*ctx,row->delay);','}',
             '}', 'size_t fate::recomp::register_generated_resumes(PS2Runtime& runtime) {',
             '    auto* ram=runtime.memory().getRDRAM();',
             '    if(!ram) throw std::runtime_error("Resume aliases need loaded RAM");',
             '    for(const auto& row:aliases) {',
             '        uint32_t actual=0; std::memcpy(&actual,ram+row.pc,4);',
             '        if(actual!=row.opcode) throw std::runtime_error("Resume opcode differs from original ELF");',
             '    }','    for(const auto& row:tails) {',
             '        uint32_t pair[2];std::memcpy(pair,ram+row.pc,8);',
             '        if(pair[0]!=0x03e00008u||pair[1]!=row.delay) throw std::runtime_error("Return tail differs from original ELF");',
             '    }', '    size_t installed=0;',
             '    for(const auto& row:aliases) {',
             '        if(runtime.hasFunction(row.pc)) continue;',
             '        if(!runtime.registerFunction(row.pc,row.function)) throw std::runtime_error("Resume alias registration failed");',
             '        ++installed;', '    }',
             '    for(const auto& row:tails) {',
             '        if(runtime.hasFunction(row.pc)) continue;',
             '        if(!runtime.registerFunction(row.pc,return_tail)) throw std::runtime_error("Return tail registration failed");',
             '        ++installed;', '    }', '    return installed;', '}']
    output.write_text('\n'.join(code) + '\n', encoding='utf-8')
    report.write_text(json.dumps({'elf_sha256':hashlib.sha256(blob).hexdigest(),
        'aliases':len(rows),'return_tails':len(tails),'ambiguous_excluded':ambiguous,'source_sha256':sources,
        'generated_sha256':hashlib.sha256(output.read_bytes()).hexdigest(),
        'scope':'Original resume labels and verified JR RA with NOP/ADDIU/ADDU/OR/DADDU delays; no full semantic parity claim.'},indent=2)+'\n')
    print(json.dumps({'aliases':len(rows),'return_tails':len(tails),'ambiguous_excluded':ambiguous}))


if __name__ == '__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--elf',type=Path,required=True)
    parser.add_argument('--output',type=Path,required=True)
    parser.add_argument('--report',type=Path,required=True)
    args=parser.parse_args()
    generate(Path(__file__).resolve().parents[1],args.elf,args.output,args.report)
