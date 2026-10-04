"""Compare ordered, hashed checkpoint captures without resynchronizing execution.

Checkpoints can be instructions, basic blocks or function/HLE boundaries. A
boundary mismatch locates an interval, not an instruction inside that interval.
Unknown state stays unknown. No guest state is changed by this tool.
"""
import argparse
import json
from pathlib import Path
import re
import sys

import retail_compare as legacy

HEX32 = re.compile(r'0x[0-9a-f]{8}')
SHA256 = re.compile(r'[0-9a-f]{64}')


def strict_json(text):
    def pairs(items):
        result = {}
        for key, value in items:
            if key in result:
                raise ValueError('duplicate JSON key')
            result[key] = value
        return result
    def constant(_):
        raise ValueError('non-finite JSON number')
    return json.loads(text, object_pairs_hook=pairs, parse_constant=constant)


def read_json(path):
    return strict_json(Path(path).read_text(encoding='utf-8-sig'))


def verified(root, name, hashes):
    path = legacy.child(Path(root), name)
    expected = hashes.get(name)
    if not isinstance(expected, str) or not SHA256.fullmatch(expected):
        raise ValueError('missing or invalid evidence hash')
    if legacy.hash_file(path) != expected:
        raise ValueError('evidence hash mismatch: ' + name)
    return path


def flatten(state):
    result = legacy.registers(state)
    for key in ('branch', 'delay_slot'):
        if result[key] is not None and type(result[key]) is not bool:
            raise ValueError('branch/delay state must be boolean or null')

    def words(prefix, value, count):
        if not isinstance(value, list) or len(value) != count:
            raise ValueError('invalid bank length: ' + prefix)
        for i, word in enumerate(value):
            scalar(f'{prefix}[{i}]', word)

    def scalar(key, word):
        if not isinstance(word, str) or not HEX32.fullmatch(word):
            raise ValueError('bank values require exact 32-bit hex: ' + key)
        result[key] = word

    fpu = state.get('fpu')
    if fpu is None:
        result['fpu'] = None
    else:
        words('fpu.f', fpu['f'], 32)
        for key in ('acc', 'fcr31'):
            scalar('fpu.' + key, fpu[key])
    vu0 = state.get('vu0')
    if vu0 is None:
        result['vu0'] = None
    else:
        if len(vu0['vf']) != 32:
            raise ValueError('VU0 needs 32 vector registers')
        for i, vector in enumerate(vu0['vf']):
            words(f'vu0.vf[{i}]', vector, 4)
        words('vu0.vi', vu0['vi'], 16)
        words('vu0.acc', vu0['acc'], 4)
        for key in ('q', 'p', 'i', 'status', 'mac', 'clip'):
            scalar('vu0.' + key, vu0[key])
    # These banks are not collected by the current adapters. Never infer them.
    result['vu1'] = None
    return result


def load_capture(path, origin):
    path = Path(path).resolve()
    meta = read_json(path)
    if meta.get('schema_version') != 1 or meta.get('origin') != origin:
        raise ValueError('wrong checkpoint schema/origin')
    if not SHA256.fullmatch(meta.get('elf_sha256', '')) or not meta.get('session'):
        raise ValueError('ELF identity and capture session required')
    if not meta.get('scope') or not meta.get('checkpoints'):
        raise ValueError('scope and nonempty checkpoints required')
    hashes = meta['files']
    evidence_root = Path(meta.get('evidence_root', path.parent)).resolve()
    for name in hashes:
        verified(evidence_root, name, hashes)
    events = []
    hits = {}
    for index, checkpoint in enumerate(meta['checkpoints']):
        if checkpoint['sequence'] != index or type(checkpoint['sequence']) is not int:
            raise ValueError('nonconsecutive checkpoint sequence')
        state = read_json(verified(evidence_root, checkpoint['registers'], hashes))
        flat = flatten(state)
        pc = flat['pc']
        if not pc:
            raise ValueError('checkpoint PC must be observed')
        hits[pc] = hits.get(pc, 0) + 1
        if type(checkpoint['hit']) is not int or checkpoint['hit'] != hits[pc]:
            raise ValueError('wrong PC occurrence')
        memory = []
        end = 0
        for region in sorted(checkpoint.get('memory', []), key=lambda x: x['base']):
            base, length = region['base'], region['length']
            if (type(base) is not int or type(length) is not int or
                    not 0 <= base < base + length <= 0x02000000 or base < end):
                raise ValueError('invalid or overlapping EE memory range')
            file = verified(evidence_root, region['file'], hashes)
            if file.stat().st_size != length:
                raise ValueError('memory size mismatch')
            memory.append(dict(base=base, length=length, path=file))
            end = base + length
        events.append(dict(sequence=index, pc=pc, hit=checkpoint['hit'],
                           label=checkpoint.get('label', str(index)), state=flat, memory=memory))
    return dict(metadata=meta, events=events)


def memory_difference(a, b):
    """First differing byte, reading at most one 64 KiB chunk per side."""
    with a.open('rb') as left, b.open('rb') as right:
        offset = 0
        while True:
            x, y = left.read(65536), right.read(65536)
            if x != y:
                for i, (u, v) in enumerate(zip(x, y)):
                    if u != v:
                        return dict(offset=offset+i, retail=f'0x{u:02x}', host=f'0x{v:02x}')
                raise ValueError('memory length changed during comparison')
            if not x:
                return None
            offset += len(x)


def compare(retail, host):
    if retail['metadata']['elf_sha256'] != host['metadata']['elf_sha256']:
        raise ValueError('different ELF binaries cannot be compared')
    rows = []
    first = None
    first_new = None
    previous_equal = set()
    previous_identity = None
    sequence_error = None
    for index in range(max(len(retail['events']), len(host['events']))):
        if index >= min(len(retail['events']), len(host['events'])):
            sequence_error = dict(sequence=index, reason='CHECKPOINT_COUNT_MISMATCH')
            break
        a, b = retail['events'][index], host['events'][index]
        if (a['pc'], a['hit']) != (b['pc'], b['hit']):
            sequence_error = dict(sequence=index, reason='PC_OR_OCCURRENCE_MISMATCH',
                                  retail=[a['pc'], a['hit']], host=[b['pc'], b['hit']])
            break
        equal, unknown, differences, new = [], [], [], []
        for field in sorted(set(a['state']) | set(b['state'])):
            x, y = a['state'].get(field), b['state'].get(field)
            if x is None or y is None:
                unknown.append(field)
            elif type(x) is type(y) and x == y:
                equal.append(field)
            else:
                difference = dict(field=field, retail=x, host=y)
                differences.append(difference)
                if field in previous_equal:
                    new.append(difference)
        am = {(x['base'], x['length']): x for x in a['memory']}
        bm = {(x['base'], x['length']): x for x in b['memory']}
        if not am and not bm:
            unknown.append('memory')
        for key in sorted(set(am) | set(bm)):
            field = f'memory[0x{key[0]:08x},0x{key[0]+key[1]:08x})'
            if key not in am or key not in bm:
                unknown.append(field)
                continue
            diff = memory_difference(am[key]['path'], bm[key]['path'])
            if diff:
                difference = dict(field=field, address=f'0x{key[0]+diff["offset"]:08x}',
                                  retail=diff['retail'], host=diff['host'])
                differences.append(difference)
                if field in previous_equal:
                    new.append(difference)
            else:
                equal.append(field)
        identity = dict(sequence=index, pc=a['pc'], hit=a['hit'])
        if differences and first is None:
            first = dict(**identity, differences=differences,
                         classification='INITIAL_STATE_DIFFERENCE' if index == 0 else 'CHECKPOINT_DIFFERENCE')
        if new and first_new is None:
            first_new = dict(**identity, previous_checkpoint=previous_identity,
                             differences=new, attribution='Interval only; inputs, kernel clobbers and unobserved state may explain differences.')
        rows.append(dict(**identity, label=a['label'], equal_fields=equal,
                         differences=differences, newly_different_fields=new, unobserved_fields=unknown))
        previous_equal = set(equal)
        previous_identity = identity
    incomplete = any(row['unobserved_fields'] for row in rows)
    status = ('TRACE_SEQUENCE_MISMATCH' if sequence_error else 'DIVERGENCE_OBSERVED' if first
              else 'INCOMPLETE_OBSERVATIONS' if incomplete else 'MATCHED_OBSERVED_CHECKPOINTS')
    return dict(status=status, first_difference=first, first_new_difference=first_new,
                sequence_error=sequence_error, checkpoints=rows,
                claim='Ordered checkpoint observations only. No full-game equivalence or instruction attribution between checkpoints.',
                BOOT_CHAIN_STATUS='STOPPED_NOT_CLOSED', INTERACTIVE_MAIN_LOOP='NOT_DEMONSTRATED')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--retail', type=Path, required=True)
    parser.add_argument('--host', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    try:
        result = compare(load_capture(args.retail, 'PCSX2'), load_capture(args.host, 'HOST'))
        with args.output.open('x', encoding='utf-8') as stream:
            json.dump(result, stream, indent=2)
        print(result['status'])
        return 0 if result['status'] == 'MATCHED_OBSERVED_CHECKPOINTS' else 2
    except (OSError, ValueError, KeyError, TypeError) as error:
        print(json.dumps(dict(status='INVALID_EVIDENCE', error=str(error))))
        return 1


if __name__ == '__main__':
    sys.exit(main())
