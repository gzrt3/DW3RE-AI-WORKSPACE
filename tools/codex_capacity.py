"""Official app-server READ operations only. No inference, login or reset.

Never persist raw RPC replies, notifications, stderr or credential-bearing data.
Availability is a timestamped hint; model listing is not inference certification.
"""
import json
import queue
import shutil
import subprocess
import threading
import time


def sanitize(result, models):
    windows = []
    bucket = result.get('rateLimitsByLimitId', {}).get('codex') or result.get('rateLimits') or {}
    for name in ('primary', 'secondary'):
        w = bucket.get(name)
        if isinstance(w, dict) and isinstance(w.get('usedPercent'), (int, float)):
            windows.append({'window': name, 'used_percent': w['usedPercent'],
                            'reset_hint': w.get('resetsAt') if isinstance(w.get('resetsAt'), int) else None})
    blocked = any(w['used_percent'] >= 100 for w in windows) or bool(bucket.get('rateLimitReachedType'))
    names = []
    for m in models.get('data', []):
        name = m.get('model') or m.get('id')
        if isinstance(name, str) and len(name) <= 80 and not m.get('hidden'):
            names.append(name)
    astra = next((n for n in names if n in ('gpt-6-astra', 'gpt-6.0-astra')), None)
    resets = [w['reset_hint'] for w in windows if w['used_percent'] >= 100 and w['reset_hint']]
    return {'state': 'CODEX_COOLDOWN' if blocked else 'CODEX_AVAILABLE' if windows else 'CODEX_UNKNOWN',
            'windows': windows, 'retry_hint': max(resets) if resets else None,
            'astra_listed': astra, 'model_access_verified': False,
            'session_model': 'NOT_EXPOSED', 'observed_at': time.time(),
            'source': 'official app-server account/rateLimits/read and model/list',
            'inference_calls': 0}


def observe(timeout=20):
    executable=shutil.which('codex.exe')
    if not executable:return sanitize({}, {})
    proc = subprocess.Popen([executable,'app-server','--stdio'],
                            stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.DEVNULL,
                            creationflags=getattr(subprocess, 'CREATE_NO_WINDOW', 0))
    replies = queue.Queue()
    def reader():
        while True:
            line = proc.stdout.readline(262145)
            if not line: break
            if len(line) > 262144: break
            try:
                value = json.loads(line)
                if 'id' in value: replies.put(value)
            except (ValueError, TypeError): pass
    thread = threading.Thread(target=reader, daemon=True)
    thread.start()
    deadline = time.monotonic()+timeout
    def send(value):
        proc.stdin.write((json.dumps(value)+'\n').encode())
        proc.stdin.flush()
    def call(method, ident, params=None):
        send({'method': method, 'id': ident, 'params': params or {}})
        while time.monotonic() < deadline:
            reply = replies.get(timeout=max(.01, deadline-time.monotonic()))
            if reply.get('id') == ident:
                if 'error' in reply: return {}
                return reply.get('result', {})
        return {}
    try:
        call('initialize', 1, {'clientInfo': {'name': 'fate-supervisor', 'title': 'Fate supervisor', 'version': '1.0'}})
        send({'method': 'initialized'})
        limits = call('account/rateLimits/read', 2)
        models = call('model/list', 3, {'limit': 100})
        return sanitize(limits, models)
    except (OSError, queue.Empty, ValueError):
        return sanitize({}, {})
    finally:
        # Closing stdin requests shutdown; never terminate unrelated processes.
        proc.stdin.close()
        try: proc.wait(timeout=3)
        except subprocess.TimeoutExpired:
            proc.terminate()
            proc.wait(timeout=3)


if __name__ == '__main__': print(json.dumps(observe()))
