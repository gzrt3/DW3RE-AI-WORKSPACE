"""Preconditions for the documented four-field, second-pass comparison."""


def validate_runs(reference, bridge):
    for run, role in ((reference, 'reference'), (bridge, 'direct')):
        if run.get('schema') != 1 or run.get('role') != role or run.get('exit_code') != 0 or run.get('timed_out') is not False:
            raise ValueError('Successful hash-bound run metadata required')
        if run.get('loops') != 2 or run.get('upscale') != 1:
            raise ValueError('Expected two passes at original resolution')
        capture = run.get('capture', {})
        if (capture.get('schema') != 1 or capture.get('vsync_events') != 4
                or capture.get('last_event_kind') != 1 or capture.get('packet_csr_field_mismatches') != 0):
            raise ValueError('Capture does not satisfy four-field temporal pairing')
        digest = capture.get('sha256', '')
        if len(digest) != 64 or any(c not in '0123456789abcdef' for c in digest):
            raise ValueError('Capture SHA-256 required')
    if reference['capture'] != bridge['capture']:
        raise ValueError('Reference and bridge capture identities disagree')
    replay = bridge.get('replay', {})
    if any(replay.get(k) != v for k, v in {'loops': '2', 'vsync_events': '4', 'last_event_kind': '1',
            'packet_csr_field_mismatches': '0', 'missing_snapshots': '0', 'presented_fields_last_loop': '4'}.items()):
        raise ValueError('Direct replay does not satisfy comparison preconditions')
