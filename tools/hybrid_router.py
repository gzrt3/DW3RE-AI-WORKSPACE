"""Bounded proposal-only workers. No model output is executed or applied.

Standard library only. Evidence is append-only; CLI operations hold one lock.
Secrets are read only from named environment variables or official CLI tokens.
"""
from __future__ import annotations

import argparse
import contextlib
import datetime as dt
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import sys
import tempfile
import threading
import time
import urllib.error
import urllib.request
import uuid

ROOT = Path(__file__).resolve().parents[1]
POLICY = ROOT / 'tools/hybrid_policy.json'
EVIDENCE = ROOT / 'artifacts/hybrid_bootstrap/events'
PROVIDERS = ('ollama', 'gemini', 'azure', 'openai', 'aws')
SECRET_NAMES = ('GEMINI_API_KEY', 'OPENAI_API_KEY', 'AZURE_OPENAI_API_KEY',
                'AWS_ACCESS_KEY_ID', 'AWS_SECRET_ACCESS_KEY', 'AWS_SESSION_TOKEN')
RUNTIME_SECRETS = set()
STATES = {'AVAILABLE', 'TEMPORARILY_UNAVAILABLE', 'AUTH_FAILED',
          'QUOTA_EXHAUSTED', 'RATE_LIMITED', 'UNSUPPORTED', 'FAILED'}


def now():
    return dt.datetime.now(dt.timezone.utc).isoformat()


def digest(value):
    return hashlib.sha256(json.dumps(value, sort_keys=True, ensure_ascii=True,
                                     separators=(',', ':')).encode()).hexdigest()


def clean(text):
    text = str(text)
    for name in SECRET_NAMES:
        value = os.getenv(name)
        if value:
            text = text.replace(value, '[REDACTED]')
    for value in tuple(RUNTIME_SECRETS):
        text = text.replace(value, '[REDACTED]')
    text = re.sub(r'(?i)authorization\s*[:=]\s*[^\r\n]+', '[REDACTED]', text)
    text = re.sub(r'(?i)(bearer\s+|(?:api[_-]?key)\s*[:=]\s*)[^\s,;]+',
                  '[REDACTED]', text)
    return re.sub(r'\b(?:sk-[A-Za-z0-9_-]{12,}|AIza[A-Za-z0-9_-]{20,})', '[REDACTED]', text)


class Failure(Exception):
    def __init__(self, state, code):
        super().__init__(code)
        self.state, self.code = state, code


def classify(message, status=None):
    """Raw diagnostics stay in memory; persist only a controlled classification."""
    s = message.lower()
    if 'verif' in s and 'account' in s:
        return Failure('TEMPORARILY_UNAVAILABLE', 'ACCOUNT_VERIFICATION')
    if 'permissionerror' in s or 'permission denied' in s or 'access is denied' in s:
        return Failure('TEMPORARILY_UNAVAILABLE', 'LOCAL_PERMISSION_DENIED')
    if any(x in s for x in ('insufficient_quota', 'billing', 'quota exceeded', 'resource_exhausted', 'credit balance')):
        return Failure('QUOTA_EXHAUSTED', 'BILLING_OR_QUOTA')
    if status == 429 or 'throttl' in s or 'rate limit' in s:
        return Failure('RATE_LIMITED', 'RATE_LIMIT')
    if any(x in s for x in ('end of life', 'end-of-life', 'eol', 'model is retired')):
        return Failure('UNSUPPORTED', 'MODEL_EOL')
    if status in (401, 403) or any(x in s for x in ('accessdenied', 'unauthorized', 'az login', 'expiredtoken', 'credentials')):
        return Failure('AUTH_FAILED', 'AUTH_OR_PERMISSION')
    if status in (400, 404) or 'validationexception' in s:
        return Failure('UNSUPPORTED', 'MODEL_OR_REQUEST_UNSUPPORTED')
    if status and status >= 500:
        return Failure('TEMPORARILY_UNAVAILABLE', 'SERVICE_ERROR')
    return Failure('FAILED', 'PROVIDER_ERROR')


def classify_aws_cli(message):
    """Persist only a stable AWS error class; never retain CLI stderr."""
    text=message.lower()
    if 'expiredtoken' in text or ('session' in text and 'expired' in text):
        return Failure('AUTH_FAILED','AWS_SESSION_EXPIRED')
    if 'accessdeniedexception' in text or 'access denied' in text:
        return Failure('AUTH_FAILED','AWS_ACCESS_DENIED')
    if 'throttlingexception' in text or 'too many requests' in text:
        return Failure('RATE_LIMITED','AWS_THROTTLED')
    if 'validationexception' in text or 'malformed input' in text:
        return Failure('UNSUPPORTED','AWS_REQUEST_INVALID')
    if 'resourcenotfoundexception' in text:
        return Failure('UNSUPPORTED','AWS_MODEL_OR_PROFILE_NOT_FOUND')
    if 'serviceunavailable' in text or 'internalserverexception' in text:
        return Failure('TEMPORARILY_UNAVAILABLE','AWS_SERVICE_ERROR')
    return classify(message)


class Deadline:
    def __init__(self, seconds):
        self.end = time.monotonic() + seconds

    def left(self):
        remaining = self.end - time.monotonic()
        if remaining <= 0:
            raise Failure('TEMPORARILY_UNAVAILABLE', 'TIMEOUT')
        return remaining


class NoRedirect(urllib.request.HTTPRedirectHandler):
    def redirect_request(self, req, fp, code, msg, headers, newurl):
        raise Failure('FAILED', 'REDIRECT_REFUSED')


def http(url, body, headers, deadline):
    request = urllib.request.Request(url, data=None if body is None else json.dumps(body).encode(),
                                     headers={'Content-Type': 'application/json', **headers})
    try:
        with urllib.request.build_opener(NoRedirect).open(request, timeout=deadline.left()) as response:
            raw = response.read(1048577)
            if len(raw) > 1048576:
                raise Failure('FAILED', 'RESPONSE_TOO_LARGE')
            return json.loads(raw)
    except urllib.error.HTTPError as exc:
        failure = classify(exc.read(16384).decode('utf-8', errors='replace'), exc.code)
        failure.http_status = exc.code
        raise failure from None
    except urllib.error.URLError as exc:
        if isinstance(exc.reason, PermissionError):
            raise Failure('TEMPORARILY_UNAVAILABLE', 'NETWORK_PERMISSION_DENIED') from None
        raise Failure('TEMPORARILY_UNAVAILABLE', 'NETWORK_OR_TIMEOUT') from None
    except (TimeoutError, ConnectionError):
        raise Failure('TEMPORARILY_UNAVAILABLE', 'NETWORK_OR_TIMEOUT') from None


def cli(args, deadline):
    executable = shutil.which(args[0])
    if not executable:
        raise Failure('UNSUPPORTED', 'CLI_NOT_INSTALLED')
    # Arguments are master-owned fixed options, never worker output. No shell=True.
    env = dict(os.environ, AWS_MAX_ATTEMPTS='1', AWS_PAGER='', AZURE_CORE_COLLECT_TELEMETRY='no')
    try:
        result = subprocess.run([executable, *args[1:]], capture_output=True, text=True,
                                timeout=deadline.left(), env=env, encoding='utf-8', errors='replace')
    except subprocess.TimeoutExpired:
        raise Failure('TEMPORARILY_UNAVAILABLE', 'CLI_TIMEOUT') from None
    if result.returncode:
        raise classify_aws_cli(result.stderr) if args[0]=='aws' else classify(result.stderr)
    return json.loads(result.stdout)


def key(name):
    value = os.getenv(name)
    if not value:
        raise Failure('AUTH_FAILED', 'MISSING_ENV_CREDENTIAL')
    return value


def invoke(provider, model, prompt, timeout, maximum, json_output=False):
    """Return text, observed raw usage, completed, resolved model. No tools granted."""
    if provider == 'openai' or (provider == 'aws' and model and
            ('openai.' in model or 'claude-3-haiku' in model)):
        raise Failure('UNSUPPORTED', 'PROVIDER_OR_MODEL_DISABLED_BY_USER')
    deadline = Deadline(timeout)
    if provider == 'ollama':
        http('http://localhost:11434/api/tags', None, {}, deadline)
        r = http('http://localhost:11434/api/generate', {
            'model': model, 'prompt': prompt, 'stream': False,
            **({'format': 'json'} if json_output else {}),
            'options': {'num_predict': maximum, 'temperature': 0}}, {}, deadline)
        return r.get('response', ''), {k: r[k] for k in ('prompt_eval_count', 'eval_count') if k in r}, r.get('done') is True and r.get('done_reason') != 'length', model
    if provider == 'gemini':
        r = http('https://generativelanguage.googleapis.com/v1beta/models/' + model + ':generateContent', {
            'contents': [{'parts': [{'text': prompt}]}],
            'generationConfig': {'maxOutputTokens': maximum, 'temperature': 0,
                                 **({'responseMimeType': 'application/json'} if json_output else {}),
                                 'thinkingConfig': {'thinkingBudget': 0}}},
            {'x-goog-api-key': key('GEMINI_API_KEY')}, deadline)
        candidates = r.get('candidates', [])
        c = candidates[0] if candidates else {}
        return ''.join(p.get('text', '') for p in c.get('content', {}).get('parts', [])), r.get('usageMetadata', {}), c.get('finishReason') == 'STOP', model
    if provider == 'azure':
        # Only an official CLI access token is used; never retrieve resource keys.
        token = cli(['az', 'account', 'get-access-token', '--resource',
                     'https://cognitiveservices.azure.com/', '--output', 'json'], deadline)['accessToken']
        RUNTIME_SECRETS.add(token)
        endpoint = os.getenv('AZURE_OPENAI_ENDPOINT', '').rstrip('/')
        if not endpoint.startswith('https://') or '@' in endpoint or '?' in endpoint:
            raise Failure('FAILED', 'INVALID_AZURE_ENDPOINT')
        r = http(endpoint + '/openai/v1/chat/completions', {
            'model': model, 'messages': [{'role': 'user', 'content': prompt}],
            **({'response_format': {'type': 'json_object'}} if json_output else {}),
            'max_tokens': maximum, 'temperature': 0}, {'Authorization': 'Bearer ' + token}, deadline)
        c = r.get('choices', [{}])[0]
        return c.get('message', {}).get('content', ''), r.get('usage', {}), c.get('finish_reason') == 'stop', model
    if provider == 'openai':
        headers = {'Authorization': 'Bearer ' + key('OPENAI_API_KEY')}
        if not model:
            available = {m['id'] for m in http('https://api.openai.com/v1/models', None, headers, deadline)['data']}
            model = next((m for m in ('gpt-4.1-nano', 'gpt-4o-mini', 'gpt-4.1-mini') if m in available), None)
            if not model:
                raise Failure('UNSUPPORTED', 'NO_ALLOWED_SMALL_MODEL')
        try:
            r = http('https://api.openai.com/v1/responses', {'model': model, 'input': prompt,
                     'max_output_tokens': maximum, 'store': False}, headers, deadline)
        except Failure as exc:
            exc.model = model
            raise
        text = ''.join(c.get('text', '') for item in r.get('output', [])
                       for c in item.get('content', []) if c.get('type') == 'output_text')
        return text, r.get('usage', {}), r.get('status') == 'completed', model
    if provider == 'aws':
        payload = {'modelId': model, 'messages': [{'role': 'user', 'content': [{'text': prompt}]}],
                   'inferenceConfig': {'maxTokens': maximum, 'temperature': 0}}
        if json_output:
            payload['system'] = [{'text': 'Return only one valid JSON object. Do not use Markdown fences or commentary.'}]
        # File contains only bounded job input, no credentials. Avoid Windows JSON quoting.
        with tempfile.TemporaryDirectory(prefix='hybrid-bedrock-') as directory:
            path = Path(directory) / 'request.json'
            path.write_text(json.dumps(payload), encoding='utf-8')
            r = cli(['aws', 'bedrock-runtime', 'converse', '--region',
                     os.getenv('AWS_REGION', os.getenv('AWS_DEFAULT_REGION', 'us-east-1')),
                     '--cli-input-json', 'file://' + str(path), '--output', 'json',
                     '--no-cli-pager', '--cli-connect-timeout', '5',
                     '--cli-read-timeout', str(max(1, int(deadline.left())))], deadline)
        return ''.join(c.get('text', '') for c in r.get('output', {}).get('message', {}).get('content', [])), r.get('usage', {}), r.get('stopReason') == 'end_turn', model
    raise Failure('UNSUPPORTED', 'UNKNOWN_PROVIDER')


class Journal:
    def __init__(self, path=EVIDENCE):
        self.path = Path(path)
        self.path.mkdir(parents=True, exist_ok=True)
        self.mutex = threading.RLock()

    @contextlib.contextmanager
    def lock(self):
        path = self.path / '.lock'
        try:
            handle = path.open('x')
        except FileExistsError:
            raise Failure('FAILED', 'JOURNAL_LOCKED_INSPECT_OWNER') from None
        try:
            with handle:
                handle.write(str(os.getpid()))
            yield
        finally:
            path.unlink()

    def events(self):
        with self.mutex:
            return self._events()

    def _events(self):
        events = []
        for path in sorted(self.path.glob('*.json')):
            event = json.loads(path.read_text(encoding='utf-8'))
            payload = {k: v for k, v in event.items() if k != 'event_sha256'}
            if event.get('event_sha256') != digest(payload):
                raise Failure('FAILED', 'EVIDENCE_HASH_MISMATCH')
            events.append(event)
        return events

    def append(self, value):
        with self.mutex:
            return self._append(value)

    def _append(self, value):
        value = dict(value, timestamp=now(), event_id=uuid.uuid4().hex)
        def redact(item):
            if isinstance(item, str):
                return clean(item)
            if isinstance(item, dict):
                return {k: redact(v) for k, v in item.items()}
            if isinstance(item, list):
                return [redact(v) for v in item]
            return item
        value = redact(value)
        value['event_sha256'] = digest(value)
        path = self.path / (dt.datetime.now(dt.timezone.utc).strftime('%Y%m%dT%H%M%S%f') + '-' + value['event_id'] + '.json')
        # Readers never observe a partial reservation/result. A successful
        # append is durable BEFORE the caller enters a paid adapter.
        staged = path.with_suffix('.tmp')
        with staged.open('x', encoding='utf-8') as stream:
            json.dump(value, stream, indent=2)
            stream.flush()
            os.fsync(stream.fileno())
        os.link(staged, path)  # exclusive publish, never overwrite evidence
        staged.unlink()
        return value


def token_counts(provider, usage):
    names = {'ollama': ('prompt_eval_count', 'eval_count'), 'gemini': ('promptTokenCount', 'candidatesTokenCount'),
             'azure': ('prompt_tokens', 'completion_tokens'), 'openai': ('input_tokens', 'output_tokens'),
             'aws': ('inputTokens', 'outputTokens')}
    a, b = names[provider]
    return usage.get(a), usage.get(b)


class Router:
    def __init__(self, journal, policy=None, adapter=invoke):
        self.journal = journal
        self.policy = policy or json.loads(POLICY.read_text(encoding='utf-8'))
        self.adapter = adapter

    def authorize_window(self, window_id, providers, calls):
        """Explicit human grant, additive to the SAME ledger; never a reset."""
        if not re.fullmatch(r'[A-Za-z0-9_-]{1,80}', window_id) or not 1 <= calls <= 10 or not providers or any(p not in ('gemini', 'azure', 'aws') for p in providers):
            raise Failure('FAILED', 'INVALID_HUMAN_BUDGET_WINDOW')
        grant = {'kind': 'human_budget_window', 'window_id': window_id,
                 'providers': sorted(set(providers)), 'calls_per_provider': calls,
                 'pricing_unknown': True, 'billed_usd': None}
        old = [e for e in self.journal.events() if e['kind'] == 'human_budget_window' and e['window_id'] == window_id]
        if old:
            if any(old[0].get(k) != v for k, v in grant.items()):
                raise Failure('FAILED', 'BUDGET_WINDOW_ID_CONFLICT')
            return old[0]
        return self.journal.append(grant)

    def remaining_calls(self, provider):
        if provider == 'ollama':
            return None
        events = self.journal.events()
        grants = sum(e['calls_per_provider'] for e in events if e['kind'] == 'human_budget_window' and provider in e['providers'])
        spent = sum(e['kind'] == 'reservation' and e['provider'] == provider for e in events)
        return max(0, self.policy['unknown_cost_call_limit_per_provider'] + grants - spent)

    def reserve(self, job_id, provider, model, prompt, maximum):
        events = self.journal.events()
        reservations = [e for e in events if e['kind'] == 'reservation' and e['provider'] == provider]
        price = self.policy['prices_per_million_tokens'].get(provider + '/' + str(model))
        upper = None
        if provider != 'ollama':
            # The additive call ledger and USD ceiling are independent hard
            # limits. AWS is fail-closed until a rate for this exact model is
            # explicitly configured; token usage alone cannot enforce dollars.
            if provider == 'aws' and self.remaining_calls(provider) == 0:
                raise Failure('QUOTA_EXHAUSTED', 'AWS_CALL_COUNT_CAP')
            if provider == 'aws' and not price:
                raise Failure('QUOTA_EXHAUSTED', 'AWS_USD_PRICE_REQUIRED')
            if price:
                if any(not isinstance(price.get(k), (int, float)) or price[k] < 0 for k in ('input', 'output')):
                    raise Failure('FAILED', 'INVALID_PRICE')
                # Conservative byte count plus protocol allowance; reservation never refunded.
                upper = ((len(prompt.encode()) + 4096) * price['input'] + maximum * price['output']) / 1e6
                if any(e['reserved_usd'] is None for e in reservations):
                    raise Failure('QUOTA_EXHAUSTED', 'UNKNOWN_PRIOR_COST_REQUIRES_RECONCILIATION')
                cap=(self.policy.get('aws_spending_ceiling_usd',self.policy['usd_caps']['aws'])
                     if provider=='aws' else self.policy['usd_caps'][provider])
                if sum(e['reserved_usd'] for e in reservations) + upper > cap:
                    raise Failure('QUOTA_EXHAUSTED', 'LOCAL_BUDGET_CAP')
            elif self.remaining_calls(provider) == 0:
                raise Failure('QUOTA_EXHAUSTED', 'UNKNOWN_COST_CALL_CAP')
        self.journal.append({'kind': 'reservation', 'job_id': job_id, 'provider': provider,
                             'model': model, 'reserved_usd': upper, 'billed_usd': None})
        return price

    def attempt(self, job, provider, model):
        started = time.monotonic()
        result = {'kind': 'attempt', 'job_id': digest(job), 'provider': provider, 'model': model,
                  'started_at': now(), 'timeout': job['timeout'], 'maximum_output': job['maximum_output'],
                  'success': False, 'response': '', 'usage': {}, 'cost_calculated_usd': None,
                  'billed_usd': None, 'review': 'NOT_APPLICABLE', 'error': None, 'adapter_attempted': False}
        try:
            if provider in self.policy.get('disabled_providers', []) or (provider == 'aws' and
                    any(x in str(model) for x in ('openai.', 'claude-3-haiku'))):
                raise Failure('UNSUPPORTED', 'PROVIDER_OR_MODEL_DISABLED_BY_USER')
            with self.journal.mutex:
                price = self.reserve(result['job_id'], provider, model, job['prompt'], job['maximum_output'])
            result['adapter_attempted'] = True  # Prerequisite failure may precede HTTP inference.
            text, usage, completed, actual_model = self.adapter(provider, model, job['prompt'], job['timeout'], job['maximum_output'])
            if not isinstance(usage, dict):
                raise Failure('FAILED', 'INVALID_PROVIDER_USAGE')
            result.update(model=actual_model, usage=usage)
            if not isinstance(text, str) or len(text.encode()) > 65536:
                raise Failure('FAILED', 'INVALID_OR_OVERSIZED_RESPONSE')
            result['response'] = clean(text)
            a, b = token_counts(provider, usage)
            if price and a is not None and b is not None:
                result['cost_calculated_usd'] = (a * price['input'] + b * price['output']) / 1e6
            if not completed or not text.strip():
                raise Failure('FAILED', 'INCOMPLETE_OR_EMPTY_RESPONSE')
            result.update(success=True, state='AVAILABLE', review='PENDING_SEMANTIC_REVIEW')
        except Failure as exc:
            local_aws_budget_errors={'AWS_CALL_COUNT_CAP','AWS_USD_PRICE_REQUIRED',
                'UNKNOWN_PRIOR_COST_REQUIRES_RECONCILIATION','LOCAL_BUDGET_CAP'}
            if provider=='aws' and exc.code in local_aws_budget_errors:
                # This is our local spending/accounting guard, not an AWS
                # service quota or model-access response.
                result.update(state='FAILED',failure_origin='LOCAL_POLICY',error=exc.code)
            else:
                result.update(state=exc.state, error=exc.code)
            result['model']=getattr(exc,'model',result['model'])
            if hasattr(exc, 'http_status'):
                result['http_status'] = exc.http_status
        except PermissionError:
            result.update(state='TEMPORARILY_UNAVAILABLE', error='LOCAL_PERMISSION_DENIED')
        except (OSError, ValueError, KeyError, TypeError, IndexError, AttributeError) as exc:
            result.update(state='FAILED', error='ADAPTER_' + type(exc).__name__)
        result['ended_at'] = now()
        result['latency_seconds'] = round(time.monotonic() - started, 3)
        return self.journal.append(result)

    def model(self, provider):
        names = {'ollama': 'OLLAMA_MODEL', 'gemini': 'GEMINI_MODEL',
                 'azure': 'AZURE_OPENAI_DEPLOYMENT', 'aws': 'BEDROCK_MODEL_ID'}
        return os.getenv(names.get(provider, ''), self.policy['models'][provider])

    def aws_role_model(self, role):
        """Resolve an explicit Nova task role; never infer escalation from failure alone."""
        if role not in ('NOVA_2_LITE','NOVA_PRO'):
            raise Failure('FAILED','UNKNOWN_AWS_MODEL_ROLE')
        env_name='BEDROCK_'+role+'_MODEL'
        return os.getenv(env_name,self.policy['aws_role_models'][role])

    def job(self, prompt, tier='LOCAL', timeout=30, maximum=64):
        if tier not in self.policy['routes'] or not isinstance(prompt, str) or not prompt.strip():
            raise Failure('FAILED', 'INVALID_JOB')
        if clean(prompt) != prompt:
            raise Failure('FAILED', 'SECRET_LIKE_PROMPT_REJECTED')
        if not 1 <= timeout <= self.policy['max_timeout_seconds'] or not 16 <= maximum <= self.policy['max_output_tokens'] or len(prompt.encode()) > self.policy['max_prompt_bytes']:
            raise Failure('FAILED', 'JOB_LIMIT_EXCEEDED')
        return {'prompt': prompt, 'tier': tier, 'timeout': timeout, 'maximum_output': maximum,
                'policy_sha256': digest(self.policy)}

    def route(self, job):
        job_id = digest(job)
        history = self.journal.events()
        if any(e.get('job_id') == job_id and e['kind'] == 'job' for e in history):
            raise Failure('FAILED', 'DUPLICATE_JOB_NO_AUTORETRY')
        self.journal.append({'kind': 'job', 'job_id': job_id, 'job': job})
        health = {}
        for e in history:
            if e['kind'] == 'attempt':
                health[e['provider']] = e
        attempts = []
        for provider, model in self.policy['routes'][job['tier']]:
            if provider in self.policy.get('disabled_providers', []):
                continue
            previous = health.get(provider)
            if provider in ('aws', 'openai') and (not previous or previous['state'] != 'AVAILABLE'):
                self.journal.append({'kind': 'skip', 'job_id': job_id, 'provider': provider,
                                     'reason': 'LIVE_PROBE_REQUIRED', 'state': previous['state'] if previous else 'TEMPORARILY_UNAVAILABLE'})
                continue
            if previous and previous['state'] in ('AUTH_FAILED', 'QUOTA_EXHAUSTED', 'RATE_LIMITED', 'TEMPORARILY_UNAVAILABLE', 'UNSUPPORTED'):
                self.journal.append({'kind': 'skip', 'job_id': job_id, 'provider': provider, 'reason': previous['state']})
                continue
            if len(attempts) >= min(self.policy['max_attempts'], self.policy['max_escalations'] + 1):
                break
            model = model or previous['model']
            result = self.attempt(job, provider, model)
            attempts.append(result)
            health[provider] = result
            if result['success']:
                return result
        raise Failure('FAILED', 'NO_APPROPRIATE_WORKER_SUCCEEDED')

    def probe(self, provider, recheck_reason=None):
        events = self.journal.events()
        previous = [e for e in events if e['kind'] == 'probe_started' and e['provider'] == provider]
        prior_adapter_calls = [e for e in events if e['kind'] == 'attempt' and e.get('provider') == provider
                               and e.get('adapter_attempted', True)]
        job = self.job('Reply with exactly HYBRID_OK and nothing else.', maximum=32)
        if previous or prior_adapter_calls:
            if not recheck_reason or not recheck_reason.strip():
                raise Failure('FAILED', 'PROBE_ALREADY_ATTEMPTED_NO_AUTORETRY')
            attempts = {e['event_id']: e for e in events if e['kind'] == 'attempt'}
            verdicts = [e for e in events if e['kind'] == 'probe_verdict' and e['provider'] == provider]
            starts = sorted(previous, key=lambda e: e['timestamp'])
            # Any real adapter invocation is relevant, not only older probe
            # commands: avoid immediately probing again after a worker call.
            # Missing flags are legacy evidence and are treated conservatively.
            protected_times = [e['timestamp'] for e in attempts.values()
                               if e.get('provider') == provider and e.get('adapter_attempted', True)]
            for index, started in enumerate(starts):
                attempt = None
                if started.get('job_id'):
                    attempt = next((e for e in attempts.values()
                                    if e.get('job_id') == started['job_id'] and e.get('provider') == provider), None)
                else:
                    # Legacy events predate probe_id/job_id. Match their verdict
                    # only inside this serialized probe's time interval.
                    next_time = starts[index + 1]['timestamp'] if index + 1 < len(starts) else None
                    verdict = next((e for e in verdicts if e['timestamp'] >= started['timestamp']
                                    and (next_time is None or e['timestamp'] < next_time)), None)
                    if verdict:
                        attempt = attempts.get(verdict.get('attempt_id'))
                if attempt is None:
                    # A crash after probe_started may have interrupted a live
                    # request before its result was journaled. Fail closed.
                    protected_times.append(started['timestamp'])
            latest = max(protected_times, default=None)
            elapsed = (dt.datetime.now(dt.timezone.utc) - dt.datetime.fromisoformat(latest)).total_seconds() if latest else None
            if elapsed is not None and elapsed < 86400:
                raise Failure('TEMPORARILY_UNAVAILABLE', 'PROBE_COOLDOWN_24H')
        probe_id = uuid.uuid4().hex
        model = self.model(provider)
        self.journal.append({'kind': 'probe_started', 'provider': provider, 'probe_id': probe_id,
                             'job_id': digest(job), 'model': model, 'recheck_reason': recheck_reason})
        result = self.attempt(job, provider, model)
        verdict = result['success'] and result['response'].strip() == 'HYBRID_OK'
        self.journal.append({'kind': 'probe_verdict', 'provider': provider, 'attempt_id': result['event_id'],
                             'probe_id': probe_id, 'job_id': result['job_id'],
                             'adapter_attempted': result['adapter_attempted'],
                             'verdict': 'PASS' if verdict else result['state'] if not result['success'] else 'FAIL'})
        return result

    def review(self, attempt_id, accepted, reviewer, evidence):
        events = self.journal.events()
        result = next((e for e in events if e['event_id'] == attempt_id and e['kind'] == 'attempt'), None)
        if not result or not result['success'] or not reviewer.strip() or not evidence.strip():
            raise Failure('FAILED', 'INVALID_REVIEW')
        if any(e['kind'] == 'review' and e['attempt_id'] == attempt_id for e in events):
            raise Failure('FAILED', 'ALREADY_REVIEWED')
        return self.journal.append({'kind': 'review', 'job_id': result['job_id'], 'attempt_id': attempt_id,
                                    'attempt_sha256': result['event_sha256'], 'reviewer': reviewer,
                                    'evidence': evidence, 'review': 'ACCEPTED' if accepted else 'REJECTED'})


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest='command', required=True)
    p = sub.add_parser('probe')
    p.add_argument('provider', choices=(*PROVIDERS, 'all'))
    p.add_argument('--recheck-reason', help='Explicit master recheck after 24h; consumes existing budget')
    p = sub.add_parser('run')
    p.add_argument('--prompt', required=True)
    p.add_argument('--tier', default='LOCAL')
    p.add_argument('--timeout', type=int, default=30)
    p.add_argument('--max-output', type=int, default=64)
    sub.add_parser('e2e')
    sub.add_parser('status')
    p = sub.add_parser('review')
    p.add_argument('--attempt-id', required=True)
    p.add_argument('--reviewer', required=True)
    p.add_argument('--evidence', required=True)
    p.add_argument('--verdict', choices=('ACCEPTED', 'REJECTED'), required=True)
    args = parser.parse_args()
    journal = Journal()
    router = Router(journal)
    try:
        with journal.lock():
            if args.command == 'probe':
                failed = False
                for provider in PROVIDERS if args.provider == 'all' else (args.provider,):
                    result = router.probe(provider, args.recheck_reason)
                    print(json.dumps(result))
                    failed |= not result['success'] or result['response'].strip() != 'HYBRID_OK'
                return 1 if failed else 0
            if args.command == 'run':
                print(json.dumps(router.route(router.job(args.prompt, args.tier, args.timeout, args.max_output))))
            elif args.command == 'e2e':
                job = router.job('Sort these integers ascending: 9, -2, 4, 0. Reply only with a JSON array.', maximum=64)
                result = router.route(job)
                try:
                    answer = json.loads(result['response'])
                    accepted = answer == sorted([9, -2, 4, 0]) and all(type(x) is int for x in answer)
                except (ValueError, TypeError):
                    accepted = False
                review = router.review(result['event_id'], accepted, 'master/deterministic-fixture-v1',
                                       'Independent exact JSON comparison against Python sorted([9,-2,4,0]); no generated code executed.')
                print(json.dumps({'result': result, 'review': review}))
                return 0 if accepted else 1
            elif args.command == 'review':
                print(json.dumps(router.review(args.attempt_id, args.verdict == 'ACCEPTED', args.reviewer, args.evidence)))
            elif args.command == 'status':
                print(json.dumps([e for e in journal.events() if e['kind'] in ('probe_verdict', 'review')], indent=2))
        return 0
    except Failure as exc:
        print(json.dumps({'state': exc.state, 'error': exc.code}))
        return 1
    except (OSError, ValueError) as exc:
        print(json.dumps({'state': 'FAILED', 'error': type(exc).__name__}))
        return 1


if __name__ == '__main__':
    sys.exit(main())
