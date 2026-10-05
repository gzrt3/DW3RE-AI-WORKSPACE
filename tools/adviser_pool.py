"""Bounded advisers for native development; never execute model replies.

UI submissions use the supported Computer Use tool in the owning continuation.
Bedrock uses the existing private router and its unchanged append-only budget.
Status and collection do not invoke any model or establish game acceptance.
"""
from __future__ import annotations

import argparse
import importlib.util
import json
import os
from pathlib import Path
import shutil
import re

import copilot_bridge as bridge

ROOT = Path(__file__).resolve().parents[1]
PROVIDERS = ('github_copilot', 'microsoft_copilot_ui', 'chatgpt_ui', 'bedrock')


def configuration(root=ROOT, private_root=None, router_path=None):
    path = root / 'artifacts/adviser_pool/config.json'
    config = bridge.read_json(path) if path.is_file() else {}
    if not isinstance(config, dict) or set(config) - {'private_root', 'router_path', 'github_bridge'}:
        raise ValueError('Invalid local pool configuration')
    private = private_root or os.getenv('DW3_PRIVATE_ROOT') or config.get('private_root')
    router = router_path or os.getenv('DW3_HYBRID_ROUTER') or config.get('router_path')
    if private:
        private = Path(private).resolve()
        router = router or private / 'tools/hybrid_router.py'
    return private, Path(router).resolve() if router else None


def exchanges(root=ROOT, private_root=None):
    config_path = root / 'artifacts/adviser_pool/config.json'
    config = bridge.read_json(config_path) if config_path.is_file() else {}
    github = os.getenv('DW3_GITHUB_BRIDGE') or config.get('github_bridge')
    return {
        'github_copilot': Path(github).resolve() if github else root / 'artifacts/copilot_bridge',
        'microsoft_copilot_ui': root / 'artifacts/microsoft_copilot_bridge',
        'chatgpt_ui': root / 'artifacts/chatgpt_bridge',
        'bedrock': root / 'artifacts/bedrock_bridge',
    }


def load_router(path):
    if path is None or not path.is_file():
        raise ValueError('Private router is not configured or available')
    spec = importlib.util.spec_from_file_location('dw3_private_hybrid_router', path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def budget_status(router_path):
    """Read the same accounting source used by dispatch; no parallel ledger."""
    if router_path is None:
        return {'state': 'NOT_CONFIGURED', 'model_invoked': False}
    try:
        module = load_router(router_path)
        if not module.EVIDENCE.is_dir():
            raise ValueError('Existing provider journal is missing')
        router = module.Router(module.Journal())
        if hasattr(router, 'budget_summary'):
            summary = router.budget_summary('aws')
        else:
            events = router.journal.events()
            reservations = [e for e in events if e['kind'] == 'reservation' and e['provider'] == 'aws']
            unknown = sum(e.get('reserved_usd') is None for e in reservations)
            summary = {
                'state': 'RECONCILIATION_REQUIRED' if unknown else 'ACCOUNTED_NOT_SERVICE_VERIFIED',
                'unknown_reservations': unknown,
                'remaining_calls': router.remaining_calls('aws'),
                'ceiling_usd': min(router.policy['usd_caps']['aws'],
                                   router.policy.get('aws_spending_ceiling_usd', float('inf'))),
            }
        return {**summary, 'model_invoked': False, 'service_access_verified_by_this_read': False}
    except Exception as error:
        # Do not disclose raw provider errors, credentials, journal or policy.
        return {'state': 'ACCOUNTING_UNAVAILABLE', 'error_type': type(error).__name__,
                'model_invoked': False, 'service_access_verified_by_this_read': False}


def sync(root=ROOT, private_root=None, router_path=None, enqueue=False):
    private, router_path = configuration(root, private_root, router_path)
    report = {}
    for provider, exchange in exchanges(root, private).items():
        try:
            receipts = bridge.collect(exchange, root)
            requests = []
            if enqueue:
                requests.append(bridge.enqueue('rpc-continuation-review', exchange, root))
            inbox = bridge.read_json(exchange / 'inbox.json')
            report[provider] = {
                'state': 'SYNCHRONIZED', 'request_ids': requests, 'receipts': receipts,
                'ready': sum(item['state'] == 'READY' for item in inbox['requests']),
                'submitted_or_uncertain': sum(item['state'] == 'SUBMITTED_OR_UNCERTAIN' for item in inbox['requests']),
                'model_invoked_by_runner': False, 'code_applied': False,
            }
            if provider == 'github_copilot':
                report[provider]['scheduler_binding_requires_observation'] = True
        except (OSError, ValueError, KeyError, TypeError) as error:
            report[provider] = {'state': 'BRIDGE_REVIEW_REQUIRED', 'error_type': type(error).__name__,
                                'model_invoked_by_runner': False, 'code_applied': False}
    report['bedrock']['accounting'] = budget_status(router_path)
    report['local_tools'] = {
        'state': 'INVENTORY_ONLY', 'available': [name for name in ('powershell', 'pwsh', 'python', 'cmake', 'git', 'aws', 'ollama') if shutil.which(name)],
        'internet': 'Use identified public documentation and pinned source revisions; review before use.',
        'game_complete': False,
    }
    return report


def dispatch_bedrock(identifier, root=ROOT, private_root=None, router_path=None, role='NOVA_PRO'):
    private, path = configuration(root, private_root, router_path)
    exchange = exchanges(root, private)['bedrock']
    module = load_router(path)
    if not module.EVIDENCE.is_dir():
        raise ValueError('Existing provider journal is missing')
    if role not in ('NOVA_2_LITE', 'NOVA_PRO'):
        raise ValueError('Unknown Bedrock role')
    if not re.fullmatch(r'[a-z-]+-[0-9a-f]{24}', identifier):
        raise ValueError('Invalid request ID')
    request = bridge.read_json(exchange / 'requests' / (identifier + '.json'))
    bridge.verify_request(request)
    if any(x['state'] != 'MATCH' for x in bridge.check_sources(request, root).values()):
        raise ValueError('Request sources changed')
    if (exchange / 'replies' / (identifier + '.json')).exists():
        raise ValueError('Reply already exists')
    schema = bridge.refresh(exchange, root)['reply_schema']
    prompt = ('Review this bounded native runtime request. Return one JSON object with at most one concise finding. '
              'No code execution or game-parity claim. Role: ' + role + '\n' +
              bridge.canonical({'request': request, 'reply_schema': schema}).decode())
    journal = module.Journal()
    router = module.Router(journal)
    job = router.job(prompt, tier='CRITICAL', timeout=60, maximum=512)
    model = router.aws_role_model(role)
    # The external journal serializes all cloud users, including old campaigns.
    with journal.lock():
        if any(x['state'] != 'MATCH' for x in bridge.check_sources(request, root).values()):
            raise ValueError('Request sources changed while waiting for journal')
        history = journal.events()
        job_id = module.digest(job)
        if any(e.get('job_id') == job_id for e in history):
            raise ValueError('Existing job; automatic retry refused')
        bridge.write_new(exchange / 'submissions' / (identifier + '.json'), {
            'request_id': identifier, 'request_sha256': request['request_sha256'],
            'state': 'SUBMITTED_OR_UNCERTAIN', 'transport': 'existing-bedrock-router',
            'automatic_retry': False, 'job_id': job_id,
        })
        journal.append({'kind': 'job', 'job_id': job_id, 'job': job})
        result = router.attempt(job, 'aws', model)
        receipt = {'request_id': identifier, 'attempt_id': result['event_id'],
                   'success': result['success'], 'state': result['state'], 'error': result.get('error'),
                   'adapter_attempted': result.get('adapter_attempted', False),
                   'code_applied': False, 'parity_verified': False}
        bridge.write_new(exchange / 'attempts' / (identifier + '.json'), receipt)
        # Preserve even malformed/incomplete responses exactly as returned by
        # the private router; collect validates separately. Never repair JSON.
        if result.get('response'):
            target = exchange / 'replies' / (identifier + '.json')
            target.parent.mkdir(parents=True, exist_ok=True)
            with target.open('xb') as stream:
                stream.write(result['response'].encode('utf-8'))
    bridge.collect(exchange, root)
    return receipt


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--private-root', type=Path)
    p.add_argument('--router', type=Path)
    p.add_argument('action', choices=('collect', 'enqueue', 'dispatch-bedrock'))
    p.add_argument('--request-id')
    p.add_argument('--role', choices=('NOVA_2_LITE', 'NOVA_PRO'), default='NOVA_PRO')
    a = p.parse_args()
    if a.action == 'dispatch-bedrock':
        if not a.request_id:
            p.error('--request-id is required')
        result = dispatch_bedrock(a.request_id, private_root=a.private_root, router_path=a.router, role=a.role)
    else:
        result = sync(private_root=a.private_root, router_path=a.router, enqueue=a.action == 'enqueue')
    print(json.dumps(result, indent=2))


if __name__ == '__main__':
    main()
