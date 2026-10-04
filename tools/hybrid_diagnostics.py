"""Bounded diagnostics: no secrets, raw CLI logs, retries, or account changes.

python tools/hybrid_diagnostics.py [--live-ready]
Only --live-ready permits one inference per ready provider in this campaign.
Uses the existing router journal and budget; never resets historical evidence.
"""
import argparse
import importlib.util
import json
import os
from pathlib import Path
import platform
import re
import shutil
import socket
import subprocess
import sys
import urllib.error
import urllib.request

_spec = importlib.util.spec_from_file_location('diagnostic_router', Path(__file__).with_name('hybrid_router.py'))
h = importlib.util.module_from_spec(_spec)
_spec.loader.exec_module(h)

CAMPAIGN = 'connectivity-followup-v1'
URLS = {
    'ollama': 'http://localhost:11434/api/version',
    'gemini': 'https://generativelanguage.googleapis.com/v1beta/models',
    'azure': os.getenv('AZURE_OPENAI_ENDPOINT', 'https://YOUR-AZURE-RESOURCE.openai.azure.com').rstrip('/') + '/openai/v1/models',
    'azure_identity': 'https://login.microsoftonline.com/common/v2.0/.well-known/openid-configuration',
    'openai': 'https://api.openai.com/v1/models',
    'aws': 'https://bedrock-runtime.us-east-1.amazonaws.com/',
}


def error_fields(exc):
    cause = exc.reason if isinstance(exc, urllib.error.URLError) else exc
    return {'error_type': type(cause).__name__, 'errno': getattr(cause, 'errno', None),
            'winerror': getattr(cause, 'winerror', None)}


def safe_cli_diagnostic(stderr):
    """Only controlled flags and the denied filesystem path, never raw stderr."""
    lower = stderr.lower()
    result = {'permission_denied': any(s in lower for s in ('permissionerror', 'permission denied', 'access is denied')),
              'login_required': 'az login' in lower,
              'module_missing': 'modulenotfounderror' in lower}
    match = re.search(r"PermissionError: \[Errno (\d+)\] Permission denied: ['\"]([^\r\n]+)['\"]", stderr)
    if match:
        result['errno'] = int(match.group(1))
        # Only permit Azure configuration paths; no arbitrary error messages.
        path = match.group(2)
        if re.match(r'^[A-Za-z]:[\\/]', path) and '.azure' in path.lower():
            result['denied_path'] = h.clean(path)
    return result


def command_probe(command, version=False):
    try:
        result = subprocess.run(command, capture_output=True, text=True, encoding='utf-8',
                                errors='replace', timeout=15,
                                env=dict(os.environ, AWS_MAX_ATTEMPTS='1', AWS_PAGER='',
                                         AZURE_CORE_COLLECT_TELEMETRY='no'))
    except (OSError, subprocess.TimeoutExpired) as exc:
        return {'command': command, 'success': False, **error_fields(exc)}
    output = {'command': command, 'exit_code': result.returncode, 'success': result.returncode == 0,
              'diagnostic': safe_cli_diagnostic(result.stderr)}
    if version:
        patterns = (r'Python\s+(\d+\.\d+\.\d+)', r'azure-cli\s+(\d+\.\d+\.\d+)',
                    r'aws-cli/(\d+\.\d+\.\d+)', r'ollama version is\s+(\d+\.\d+\.\d+)')
        output['version'] = next((m.group(1) for pattern in patterns
                                  if (m := re.search(pattern, result.stdout + '\n' + result.stderr))), None)
    # get-access-token stdout is intentionally discarded, even on success.
    return output


def executables():
    local = os.getenv('LOCALAPPDATA', '')
    program = os.getenv('ProgramFiles', r'C:\Program Files')
    known = {
        'python': [sys.executable],
        'ollama': [str(Path(local) / 'Programs/Ollama/ollama.exe'), str(Path(program) / 'Ollama/ollama.exe')],
        'az': [str(Path(program) / 'Microsoft SDKs/Azure/CLI2/wbin/az.cmd')],
        'aws': [str(Path(program) / 'Amazon/AWSCLIV2/aws.exe'),
                str(Path(local) / 'Programs/Amazon/AWSCLIV2/aws.exe')],
    }
    results = {}
    for name, candidates in known.items():
        resolved = shutil.which(name)
        entry = {'path_resolution': resolved, 'known_paths': []}
        for path in dict.fromkeys(candidates):
            try:
                os.stat(path)
                check = {'path': path, 'exists': True}
            except OSError as exc:
                check = {'path': path, 'exists': False if isinstance(exc, FileNotFoundError) else None,
                         **error_fields(exc)}
            entry['known_paths'].append(check)
        if resolved:
            entry['version_probe'] = command_probe([resolved, '--version'], version=True)
        else:
            entry['status'] = 'NOT_RESOLVED_IN_THIS_SESSION_NOT_PROOF_OF_HOST_ABSENCE'
        results[name] = entry
    return results


def endpoint_probe(url):
    # urlsplit is pure parsing; no credential-bearing URLs are accepted here.
    from urllib.parse import urlsplit
    parts = urlsplit(url)
    host = parts.hostname
    result = {'url': url, 'method': 'GET' if host == 'localhost' else 'HEAD', 'credentials_sent': False}
    try:
        records = socket.getaddrinfo(host, parts.port or 443, type=socket.SOCK_STREAM)
        result['dns'] = {'success': True, 'address_count': len(records)}
    except OSError as exc:
        result['dns'] = {'success': False, **error_fields(exc)}
        result['transport_reachable'] = False
        return result
    request = urllib.request.Request(url, method=result['method'])
    try:
        with urllib.request.build_opener(h.NoRedirect).open(request, timeout=5) as response:
            result.update(transport_reachable=True, http_status=response.status)
            if host == 'localhost':
                data = json.loads(response.read(4096))
                version = data.get('version', '')
                result['server_version'] = version if re.fullmatch(r'\d+\.\d+\.\d+[\w.+-]*', version) else 'UNRECOGNIZED'
    except urllib.error.HTTPError as exc:
        # Even unauthenticated 401/403/404/405 proves transport, not account access.
        result.update(transport_reachable=True, http_status=exc.code)
        exc.close()
    except (OSError, ValueError, h.Failure) as exc:
        result.update(transport_reachable=False, **error_fields(exc))
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--live-ready', action='store_true')
    args = parser.parse_args()
    journal = h.Journal()
    with journal.lock():
        history = journal.events()
        if args.live_ready and any(e['kind'] == 'diagnostic_campaign_started' and e.get('campaign') == CAMPAIGN for e in history):
            raise h.Failure('FAILED', 'CAMPAIGN_ALREADY_ATTEMPTED_NO_RETRY')
        if args.live_ready:
            journal.append({'kind': 'diagnostic_campaign_started', 'campaign': CAMPAIGN,
                            'authorization': 'User explicitly requested at most one inference per accessible provider in this followup; existing budget unchanged.'})
        report = {'kind': 'connectivity_diagnostics', 'campaign': CAMPAIGN,
                  'python_runtime': {'executable': sys.executable, 'version': platform.python_version()},
                  'environment_presence': {name: bool(os.getenv(name)) for name in (
                      'GEMINI_API_KEY', 'OPENAI_API_KEY', 'AZURE_OPENAI_API_KEY', 'AZURE_CONFIG_DIR',
                      'AWS_PROFILE', 'AWS_REGION', 'AWS_DEFAULT_REGION', 'AWS_ACCESS_KEY_ID',
                      'AWS_SECRET_ACCESS_KEY', 'AWS_SESSION_TOKEN', 'HTTP_PROXY', 'HTTPS_PROXY')},
                  'executables': executables(), 'endpoints': {}}
        for provider, url in URLS.items():
            if provider in h.Router(journal).policy.get('disabled_providers', []):
                continue
            report['endpoints'][provider] = endpoint_probe(url)
        az = report['executables']['az']['path_resolution']
        report['azure_token_prerequisite'] = command_probe([az, 'account', 'get-access-token', '--resource',
                                                          'https://cognitiveservices.azure.com/', '--output', 'json']) if az else {'success': False, 'reason': 'CLI_NOT_RESOLVED'}
        event = journal.append(report)
        print(json.dumps(event, indent=2))
        if args.live_ready:
            router = h.Router(journal)
            for provider in h.PROVIDERS:
                if provider in router.policy.get('disabled_providers', []):
                    continue
                ready = report['endpoints'][provider]['transport_reachable']
                if provider == 'azure':
                    ready &= report['azure_token_prerequisite']['success']
                if provider == 'aws':
                    ready &= bool(report['executables']['aws']['path_resolution'])
                if provider in ('gemini', 'openai'):
                    ready &= report['environment_presence'][provider.upper() + '_API_KEY']
                if not ready:
                    journal.append({'kind': 'diagnostic_live_skipped', 'campaign': CAMPAIGN, 'provider': provider,
                                    'reason': 'LOCAL_PREREQUISITE_BARRIER', 'diagnostic_event_id': event['event_id'],
                                    'account_conclusion': 'NOT_TESTED'})
                    continue
                job = router.job('Reply with exactly HYBRID_OK and nothing else.', maximum=32)
                result = router.attempt(job, provider, router.policy['models'][provider])
                verdict = 'PASS' if result['success'] and result['response'].strip() == 'HYBRID_OK' else 'FAIL'
                journal.append({'kind': 'probe_verdict', 'campaign': CAMPAIGN, 'provider': provider,
                                'attempt_id': result['event_id'], 'verdict': verdict if result['success'] else result['state']})
                print(json.dumps(result))
        return 0


if __name__ == '__main__':
    try:
        sys.exit(main())
    except h.Failure as exc:
        print(json.dumps({'state': exc.state, 'error': exc.code}))
        sys.exit(1)
