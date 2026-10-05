"""Read one real XInput snapshot without sending input or vibration."""
import argparse
import ctypes
from datetime import datetime, timezone
import json
import os
from pathlib import Path
import sys


class Gamepad(ctypes.Structure):
    _fields_ = [
        ('buttons', ctypes.c_uint16),
        ('left_trigger', ctypes.c_uint8), ('right_trigger', ctypes.c_uint8),
        ('left_x', ctypes.c_int16), ('left_y', ctypes.c_int16),
        ('right_x', ctypes.c_int16), ('right_y', ctypes.c_int16),
    ]


class State(ctypes.Structure):
    _fields_ = [('packet', ctypes.c_uint32), ('gamepad', Gamepad)]


def probe():
    if sys.platform != 'win32':
        raise RuntimeError('XInput probe requires Windows.')
    if ctypes.sizeof(Gamepad) != 12 or ctypes.sizeof(State) != 16:
        raise RuntimeError('Unexpected XINPUT_STATE structure layout.')
    dll_path = Path(os.environ['SystemRoot']) / 'System32' / 'XInput1_4.dll'
    dll = ctypes.WinDLL(str(dll_path))
    get_state = dll.XInputGetState
    get_state.argtypes = [ctypes.c_uint32, ctypes.POINTER(State)]
    get_state.restype = ctypes.c_uint32
    controllers = []
    for index in range(4):
        state = State()
        result = int(get_state(index, ctypes.byref(state)))
        row = {'index': index, 'result': result,
               'status': 'CONNECTED' if result == 0 else
                         'DISCONNECTED' if result == 1167 else 'ERROR'}
        # The structure contents are unspecified after an error.
        if result == 0:
            row['packet'] = int(state.packet)
            row['gamepad'] = {name: int(getattr(state.gamepad, name))
                              for name, _ in Gamepad._fields_}
        controllers.append(row)
    return {'checked_utc': datetime.now(timezone.utc).isoformat(),
            'api': 'XInput 1.4 / XInputGetState', 'samples_per_index': 1,
            'controllers': controllers, 'game_integration_verified': False,
            'scope': 'Read-only host API snapshot; no input injection, rumble, or game execution.'}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output', type=Path, help='New evidence file; existing files are never overwritten.')
    args = parser.parse_args()
    report = probe()
    text = json.dumps(report, indent=2) + '\n'
    if args.output:
        args.output.parent.mkdir(parents=True, exist_ok=True)
        with args.output.open('x', encoding='utf-8') as out:
            out.write(text)
    print(text, end='')
    return 1 if any(row['status'] == 'ERROR' for row in report['controllers']) else 0


if __name__ == '__main__':
    raise SystemExit(main())
