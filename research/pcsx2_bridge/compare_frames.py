"""Compare four GSRunner loop-2 fields with a direct bridge's second pass.

No resize, crop, temporal search or image substitution is performed. The event
pairing requires a dump ending in VSync, four VSync per pass and matching CSR
fields; check the replay's numeric result first. Inputs remain local.
"""
import argparse
import hashlib
import json
from pathlib import Path
from PIL import Image, ImageChops, ImageStat
from pairing import validate_runs

parser=argparse.ArgumentParser()
parser.add_argument('reference',type=Path)
parser.add_argument('bridge',type=Path)
parser.add_argument('output',type=Path)
parser.add_argument('--reference-run',type=Path,required=True)
parser.add_argument('--bridge-run',type=Path,required=True)
args=parser.parse_args()
reference_run=json.loads(args.reference_run.read_text(encoding='utf-8'))
bridge_run=json.loads(args.bridge_run.read_text(encoding='utf-8'))
validate_runs(reference_run,bridge_run)
result={'fields':[],'pairing':'official loop2 frame00001..4 = direct loop1 field0..3',
        'capture_sha256':bridge_run['capture']['sha256'],
        'reference_renderer':reference_run['renderer'],'bridge_renderer':bridge_run['renderer'],
        'tolerance':'pixel-exact', 'native_gameplay':'UNTESTED'}
for field in range(4):
    matches=list(args.reference.glob(f'*_frame{field+1:05}.png'))
    if len(matches)!=1:raise SystemExit('Exactly one reference image per field required')
    source=matches[0];target=args.bridge/f'loop_1_field_{field}.ppm'
    for path,run in ((source,reference_run),(target,bridge_run)):
        if run.get('images',{}).get(path.name)!=hashlib.sha256(path.read_bytes()).hexdigest():
            raise SystemExit('Image identity disagrees with its replay manifest')
    left=Image.open(source).convert('RGB');right=Image.open(target).convert('RGB')
    row={'field':field,'reference_dimensions':left.size,'bridge_dimensions':right.size,
         'reference_file_sha256':hashlib.sha256(source.read_bytes()).hexdigest(),
         'bridge_file_sha256':hashlib.sha256(target.read_bytes()).hexdigest()}
    row['pixel_equal']=False
    if left.size==right.size:
        difference=ImageChops.difference(left,right)
        row.update(pixel_equal=not difference.getbbox(),mean_absolute_error=ImageStat.Stat(difference).mean,
            max_absolute_error=[high for low,high in difference.getextrema()],
            different_pixels=sum(pixel!=(0,0,0) for pixel in difference.get_flattened_data()))
        row['first_different_pixel']=None
        if not row['pixel_equal']:
            for index,pixel in enumerate(difference.get_flattened_data()):
                if pixel!=(0,0,0):
                    row['first_different_pixel']=[index%left.width,index//left.width]
                    break
    result['fields'].append(row)
result['all_four_pixel_equal']=all(row['pixel_equal'] for row in result['fields'])
with args.output.open('x',encoding='utf-8') as stream:json.dump(result,stream,indent=2)
print(json.dumps(result,indent=2))
raise SystemExit(0 if result['all_four_pixel_equal'] else 1)
