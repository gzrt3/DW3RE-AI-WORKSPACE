"""Build a bounded host probe and compare six checkpoints from one retail boot.

Uses existing paused PCSX2 captures. It never steps the emulator, imports retail
state into the host, or runs beyond the first game-call target. Output is exclusive.
"""
import argparse
import json
from pathlib import Path
import sys

import entry_provenance_host as host_probe
import host_snapshot as hs
import lockstep_compare as lc
import pcsx2_capture as pc

SITES = [('entry', 0x100008), ('pre_syscall60', 0x100064),
         ('post_syscall60', 0x100068), ('pre_syscall61', 0x100080),
         ('post_syscall61', 0x100084), ('first_game_call', 0x1ad6e8)]


def write(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open('x', encoding='utf-8') as stream:
        json.dump(value, stream, indent=2)


def capture_manifest(output, origin, session, entries, source_files):
    root = hs.h.ROOT.resolve()
    files = {}
    def add(path):
        path = Path(path).resolve()
        name = path.relative_to(root).as_posix()
        files[name] = lc.legacy.hash_file(path)
        return name
    for path in source_files:
        add(path)
    checkpoints = []
    hits = {}
    for index, (label, state_path, memory_path) in enumerate(entries):
        state = lc.read_json(state_path)
        lc.flatten(state)
        hits[state['pc']] = hits.get(state['pc'], 0) + 1
        checkpoints.append(dict(sequence=index, label=label, hit=hits[state['pc']],
                                registers=add(state_path), memory=[dict(base=0, length=0x2000000, file=add(memory_path))]))
    manifest = dict(schema_version=1, origin=origin, session=session,
                    elf_sha256=lc.legacy.ELF_SHA256, evidence_root=str(root),
                    scope='Six ordered entry/HLE checkpoints, stopping before first game function executes; unobserved instructions between checkpoints.',
                    files=files, checkpoints=checkpoints)
    write(output, manifest)
    return lc.load_capture(output, origin)


def export_retail(boot, output):
    boot = Path(boot).resolve()
    launch_path = boot/'launch.json'
    launch = lc.read_json(launch_path)
    if launch.get('elf_sha256') != lc.legacy.ELF_SHA256 or launch.get('exe_sha256') != pc.EXE_HASH:
        raise ValueError('retail launch identity mismatch')
    launch_hash = lc.legacy.hash_file(launch_path)
    entries, sources = [], [launch_path]
    for index, (label, address) in enumerate(SITES):
        if index == 0:
            metadata_path = boot/'raw/point_00.json'
            meta = lc.read_json(metadata_path)
            original = lc.verified(boot/'raw', meta['savestate'], {meta['savestate']:meta['sha256']})
            if not meta.get('paused') or meta.get('pc') != f'0x{address:08x}':
                raise ValueError('entry capture is not paused at expected PC')
            # Old entry captures predate launch hashes. Pin both originals and
            # launch, and retain that provenance limitation in the output.
            registers, memory = pc.decode(original)
            state_path = output.parent/'retail_entry_registers.json'
            memory_path = output.parent/'retail_entry_memory.bin'
            write(state_path, registers)
            with memory_path.open('xb') as stream:
                stream.write(memory)
        else:
            directory = boot/'landmarks'/label
            metadata_path = directory/'manifest.json'
            meta = lc.read_json(metadata_path)
            if (meta.get('launch_sha256') != launch_hash or meta.get('status') != 'MATCH'
                    or not meta.get('paused')):
                raise ValueError('mixed boot, rejected or running retail landmark')
            for name in meta['files']:
                lc.verified(directory, name, meta['files'])
            original = directory/'original.p2s'
            state_path, memory_path = directory/'registers.json', directory/'eeMemory.bin'
            registers, memory = pc.decode(original)
            if registers != lc.read_json(state_path) or memory != memory_path.read_bytes():
                raise ValueError('decoded retail state does not match original')
        if (meta.get('elf_sha256') != lc.legacy.ELF_SHA256 or meta.get('exe_sha256') != pc.EXE_HASH
                or registers['pc'] != f'0x{address:08x}'):
            raise ValueError('retail checkpoint identity or PC mismatch')
        sources.extend([metadata_path, original])
        entries.append((label, state_path, memory_path))
    return capture_manifest(output, 'PCSX2', launch_hash, entries, sources)


def export_host(work, config, output):
    result_path = work/'result.json'
    provenance_path = work/'provenance.json'
    result, provenance = lc.read_json(result_path), lc.read_json(provenance_path)
    if provenance.get('elf_sha256') != lc.legacy.ELF_SHA256:
        raise ValueError('host ELF provenance missing')
    if provenance.get('landmarks') != [hex(address) for _, address in SITES]:
        raise ValueError('host capture does not cover requested checkpoints')
    sources = [result_path, provenance_path]
    for name in provenance['sources']:
        sources.append(lc.verified(work/'source', name, provenance['sources']))
    entries = []
    for index, (label, address) in enumerate(SITES):
        name = f'raw_{config}/point_{index}.json'
        state_path = lc.verified(work, name, result['files'])
        memory_path = lc.verified(work, f'raw_{config}/memory_{index}.bin', result['files'])
        if lc.read_json(state_path)['pc'] != f'0x{address:08x}':
            raise ValueError('host checkpoint PC mismatch')
        entries.append((label, state_path, memory_path))
    return capture_manifest(output, 'HOST', lc.legacy.hash_file(provenance_path)+'/'+config, entries, sources)


def boundary_results(comparison):
    result = {}
    by_label = {row['label']: row for row in comparison['checkpoints']}
    for syscall, before, after, inputs in (
            ('SetupThread', 'pre_syscall60', 'post_syscall60', (4,5,6,7,8)),
            ('SetupHeap', 'pre_syscall61', 'post_syscall61', (4,5))):
        a, b = by_label.get(before), by_label.get(after)
        keys = [f'r{i}.low64' for i in inputs]
        inputs_equal = a is not None and all(key in a['equal_fields'] for key in keys)
        output_equal = b is not None and 'r2.low64' in b['equal_fields']
        output_diff = next((x for x in b['differences'] if x['field']=='r2.low64'), None) if b else None
        result[syscall] = dict(argument_registers_match=inputs_equal, v0_matches=output_equal,
                              v0_difference=output_diff,
                              claim='Observed argument/return comparison only; hidden kernel state and memory side effects remain in the full checkpoint report.')
    return result


def run(retail_boot, output, host_work=None):
    output = Path(output).resolve()
    output.mkdir(parents=True, exist_ok=False)
    # Validate saved reference evidence before spending time on a host build.
    retail = export_retail(retail_boot, output/'retail.json')
    if host_work is None:
        host_work = output/'host'
        host_probe.run(host_work, first_call=True)
    host_work = Path(host_work).resolve()
    comparisons = {}
    hosts = {}
    for config in ('Debug', 'Release'):
        hosts[config] = export_host(host_work, config, output/f'host_{config}.json')
        report = lc.compare(retail, hosts[config])
        report['system_call_boundaries'] = boundary_results(report)
        write(output/f'comparison_{config}.json', report)
        comparisons[config] = dict(status=report['status'], system_call_boundaries=report['system_call_boundaries'])
    host_agreement = lc.compare(hosts['Debug'], hosts['Release'])
    write(output/'debug_release.json', host_agreement)
    summary = dict(comparisons=comparisons, debug_release_status=host_agreement['status'],
                   retail_boot=str(Path(retail_boot).resolve()), host_work=str(host_work),
                   BOOT_CHAIN_STATUS='STOPPED_NOT_CLOSED', INTERACTIVE_MAIN_LOOP='NOT_DEMONSTRATED')
    write(output/'summary.json', summary)
    return summary


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--retail-boot', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--host-work', type=Path, help='Reuse an existing six-checkpoint capture after hash validation.')
    args = parser.parse_args()
    try:
        result = run(args.retail_boot, args.output, args.host_work)
        print(json.dumps(result, indent=2))
        return 0 if all(x['status']=='MATCHED_OBSERVED_CHECKPOINTS' for x in result['comparisons'].values()) else 2
    except (OSError, ValueError, KeyError, TypeError) as error:
        print(json.dumps(dict(status='VERIFICATION_FAILED', error=str(error))))
        return 1


if __name__ == '__main__':
    sys.exit(main())
