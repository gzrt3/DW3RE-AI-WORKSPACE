"""Refresh the visible milestone bar from the project's reviewed progress record."""
import argparse
from datetime import datetime, timezone, timedelta
import html
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DEFAULT_OUTPUT = ROOT / 'out' / 'dw3-project-progress.html'


def render(output=DEFAULT_OUTPUT):
    data = json.loads((ROOT/'docs/progress.json').read_text(encoding='utf-8'))
    if len(data['phases']) != 4 or len(data['acceptance']) != 8:
        raise ValueError('Review completion criteria before changing progress denominators')
    for path in data['evidence']:
        if not (ROOT/path).is_file():
            raise ValueError('Missing progress evidence: '+path)
    phases = sum(item['verified'] is True for item in data['phases'])
    completed = sum(item['verified'] is True for item in data['acceptance'])
    current = next((i for i,item in enumerate(data['phases']) if not item['verified']), 3)
    template = (ROOT/'docs/progress-template.html').read_text(encoding='utf-8')
    data['updated'] = datetime.now(timezone(timedelta(hours=-7))).strftime('%d/%m/%Y %H:%M · Sonora')
    fields = {
        'UPDATED': html.escape(data['updated']), 'FINAL_DONE': str(completed),
        'FINAL_WIDTH': str(completed/8*100), 'PHASE_DONE': str(phases),
        'PHASE_WIDTH': str(phases/4*100), 'CURRENT': html.escape(data['phases'][current]['detail']),
        'COVERAGE': '\n'.join('<li>'+html.escape(item['name'])+' · '+('Verificado' if item['verified'] else 'Pendiente')+'</li>' for item in data['acceptance']),
        'DATA': json.dumps(data, ensure_ascii=False).replace('<','\\u003c')
    }
    for i, name in enumerate(('Heap', 'Arranque', 'Título y menús', 'Batalla + DW3/XL')):
        state = ' · Verificado' if data['phases'][i]['verified'] else ' · En curso' if i == current else ''
        fields[f'PHASE_{i}'] = html.escape(f'{i+1} · {name}{state}')
        fields[f'SELECT_{i}'] = str(i == current).lower()
    for name, value in fields.items():
        template = template.replace('{{'+name+'}}', value)
    output = Path(output)
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(template, encoding='utf-8')
    print(output)


if __name__ == '__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output',type=Path,default=DEFAULT_OUTPUT)
    render(parser.parse_args().output)
