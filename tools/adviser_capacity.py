"""Configured compatible app-server READ operations only. No inference, login or reset.

Never persist raw RPC replies, notifications, stderr or credential-bearing data.
Availability is a timestamped hint; model listing is not inference certification.
"""
import json
import os
import queue
import shutil
import subprocess
import threading
import time


def executable():
    configured = os.environ.get('DW3_ADVISER_EXECUTABLE')
    return shutil.which(configured) if configured else None


def sanitize(result, models):
    windows = []
    buckets = result.get('rateLimitsByLimitId') or {}
    selected = os.environ.get('DW3_ADVISER_RATE_LIMIT_ID')
    if selected:
        bucket = buckets.get(selected) or {}
    elif len(buckets) == 1:
        bucket = next(iter(buckets.values()))
    elif buckets:
        bucket = {}
    else:
        bucket = result.get('rateLimits') or {}
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
    return {'state': 'ADVISER_COOLDOWN' if blocked else 'ADVISER_AVAILABLE' if windows else 'ADVISER_UNKNOWN',
            'windows': windows, 'retry_hint': max(resets) if resets else None,
            'astra_listed': astra, 'model_access_verified': False,
            'session_model': 'NOT_EXPOSED', 'observed_at': time.time(),
            'source': 'official app-server account/rateLimits/read and model/list',
            'inference_calls': 0}


def observe(timeout=20):
    command=executable()
    if not command:return sanitize({}, {})
    proc = subprocess.Popen([command,'app-server','--stdio'],
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
