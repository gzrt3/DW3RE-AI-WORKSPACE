"""Check the exact bounded native result; arbitrary errors are not passing tests."""
from pathlib import Path
import json
import subprocess
import sys

exe, directory = sys.argv[1:]
out = Path(directory)
process = subprocess.run([exe, 'C:/DW3/sources/dumps/dw3xl_ps2/SLUS_206.17', str(out)],
                         capture_output=True, text=True, timeout=15)
assert process.returncode == 23, (process.returncode, process.stdout, process.stderr)
result = json.loads((out / 'divergence.json').read_text())
initial = json.loads((out / 'initial.json').read_text())
trace = [json.loads(line) for line in (out / 'trace.jsonl').read_text().splitlines()]
native_stack = json.loads((out / 'native_stack.json').read_text())
assert initial['entry'] == '0x00100008'
assert initial['ram_size'] == 33554432
assert result['category'] == 'ABI_RUNTIME_LIFETIME'
assert result['instructions_compared'] == 11
assert result['method'] == 'eeCheckpointDue'
assert not result['runtime_call_executed'] and not result['patched_past_divergence']
state = result['state']
assert state['pc'] == '0x00100018' and state['branch_pc'] == '0x0010002c'
registers = {v['index']: int(v['low'], 16) for v in state['gpr128']}
assert registers[1] == 1 and registers[2] == 0x2d0590 and registers[3] == 0x1ff7000
assert registers[29] == 0x80000 and registers[28] == 0 and registers[31] == 0
assert all(int(v['high'], 16) == 0 for v in state['gpr128'])
assert not state['in_delay_slot']
assert [v['instruction_pc'] for v in trace if v['event'] == 'before_instruction'] == [
    f'0x{pc:08x}' for pc in range(0x100008, 0x100034, 4)]
assert trace[-1]['event'] == 'runtime_lifetime_barrier'
assert trace[-1]['candidate_matches_baseline_raw_buffer']
assert len((out / 'stack_initial.bin').read_bytes()) == 64
assert initial['host_pointer_bits'] == 64 and not initial['runtime_object_constructed']
assert 0 < len(native_stack['frames']) <= 16
assert all(int(frame['address'], 16) != 0 for frame in native_stack['frames'])
print('Verified exact retail prefix and fail-closed ABI stop; full runtime remains unverified.')
