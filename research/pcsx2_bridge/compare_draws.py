"""Compare hash-bound GS draw diagnostics on a proven logical rectangle.

The pinned SW SaveBMP starts at (0,0); HW Save downloads its whole target.
Only 1x C_32 targets whose backing base equals FRAME.Block are comparable.
Final screenshots remain full-size and must be invariant before draw analysis.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import subprocess
from PIL import Image

PIN='fd9d310ccbb6b8b62c976da8886a3c8fd3a10ff3'
PLANE=re.compile(r'^(\d+)_f(\d+)_rt([01])_([0-9a-f]+)_(?:\(([0-9a-f]+)\)_)?(.+)\.png$')

def sha(path):return hashlib.sha256(path.read_bytes()).hexdigest()

def compare_plane(hw,sw,hw_name,sw_name,context_equal,channels='RGB'):
    h,s=PLANE.fullmatch(hw_name),PLANE.fullmatch(sw_name)
    if not (context_equal and h and s and h.groups()[:4]==s.groups()[:4] and h[6]==s[6]=='C_32'
            and h[5]==h[4] and s[5] is None and hw.width>=sw.width and hw.height>=sw.height):
        raise ValueError('Unproven draw coordinate identity')
    if channels not in ('RGB','RGBA') or (channels=='RGBA' and (hw.mode!='RGBA' or sw.mode!='RGBA')):
        raise ValueError('Captured RGBA images required; synthesized alpha is not evidence')
    a,b=hw.convert(channels),sw.convert(channels)
    maximum=[0]*len(channels);changed=0;first=None
    for y in range(b.height):
        for x in range(b.width):
            errors=[abs(left-right) for left,right in zip(a.getpixel((x,y)),b.getpixel((x,y)))]
            maximum=[max(old,new) for old,new in zip(maximum,errors)]
            if any(errors):
                changed+=1
                if first is None:first=[x,y]
    return {'status':'EQUAL' if first is None else 'DIFFERENT','different_pixels':changed,
            'first_different_pixel':first,'maximum_'+channels.lower()+'_error':maximum,
            'logical_rectangle':[0,0,b.width,b.height],'hw_dimensions':a.size,'sw_dimensions':b.size}

def read_run(folder):
    run=json.loads((folder/'result.json').read_text(encoding='utf-8'))
    if (run.get('schema')!=1 or run.get('role')!='reference' or run.get('exit_code')!=0
            or run.get('timed_out') is not False or run.get('loops')!=2 or run.get('upscale')!=1
            or run.get('blending_accuracy')!='maximum'):
        raise ValueError('Successful pinned reference metadata required')
    return run

def verified_image(folder,run,path,diagnostic=False):
    digest=(run.get('diagnostic_files',{}).get(str(path.relative_to(folder)),{}).get('sha256')
            if diagnostic else run.get('images',{}).get(path.name))
    if digest!=sha(path):raise ValueError('Image disagrees with manifest')
    return Image.open(path)

def captured_rgba(folder,run,path):
    alpha_path=path.with_name(path.stem+'_alpha.png')
    if not alpha_path.is_file():raise ValueError('Missing captured alpha sidecar')
    with verified_image(folder,run,path,True) as rgb, verified_image(folder,run,alpha_path,True) as alpha:
        if rgb.mode!='RGB' or alpha.mode!='L' or rgb.size!=alpha.size:
            raise ValueError('Unproven RGB/alpha sidecar identity')
        return Image.merge('RGBA',(*rgb.split(),alpha))

def invariant(candidate,candidate_run,baseline,baseline_run):
    if (candidate_run['renderer']!=baseline_run['renderer'] or candidate_run['capture']!=baseline_run['capture']):
        raise ValueError('Invariant comparison identity mismatch')
    rows=[]
    for n in range(1,5):
        paths=[list((folder/'frames').glob(f'*_frame{n:05}.png')) for folder in (candidate,baseline)]
        if any(len(p)!=1 for p in paths):raise ValueError('Missing invariant field')
        a=verified_image(candidate,candidate_run,paths[0][0]).convert('RGBA')
        b=verified_image(baseline,baseline_run,paths[1][0]).convert('RGBA')
        same=a.size==b.size and a.tobytes()==b.tobytes()
        rows.append({'field':n-1,'pixel_equal':same,'candidate_sha256':sha(paths[0][0]),'baseline_sha256':sha(paths[1][0])})
    if not all(row['pixel_equal'] for row in rows):raise ValueError('Diagnostic changed final pixels')
    return rows

def main():
    p=argparse.ArgumentParser()
    for name in ('hw','sw','hw_baseline','sw_baseline','pcsx2','output'):p.add_argument('--'+name.replace('_','-'),required=True,type=Path)
    p.add_argument('--channels',choices=('RGB','RGBA'),default='RGB')
    a=p.parse_args()
    if subprocess.check_output(['git','-C',str(a.pcsx2),'rev-parse','HEAD'],text=True).strip()!=PIN:
        raise ValueError('PCSX2 coordinate proof revision mismatch')
    hr,sr,hb,sb=[read_run(folder) for folder in (a.hw,a.sw,a.hw_baseline,a.sw_baseline)]
    if hr['renderer'] not in ('vulkan','dx11','dx12') or sr['renderer']!='sw' or hr['capture']!=sr['capture']:
        raise ValueError('Hardware/software capture identity mismatch')
    if hr.get('draw_diagnostic')!=sr.get('draw_diagnostic') or not 1<=hr.get('draw_diagnostic',{}).get('count',0)<=64:
        raise ValueError('Draw windows disagree')
    if a.channels=='RGBA' and hr['draw_diagnostic'].get('alpha_capture') is not True:
        raise ValueError('Hash-bound alpha capture metadata required')
    proof_paths=['pcsx2/GS/GSLocalMemory.cpp','pcsx2/GS/GSLocalMemory.h',
                 'pcsx2/GS/Renderers/Common/GSTexture.cpp','pcsx2/GS/Renderers/SW/GSRendererSW.cpp','pcsx2/GS/GSPng.cpp']
    # Verify each coordinate proof source is the pinned public source, not a local edit.
    for name in proof_paths:
        original=subprocess.check_output(['git','-C',str(a.pcsx2),'show',PIN+':'+name])
        local=(a.pcsx2/name).read_bytes().replace(b'\r\n',b'\n')
        if local!=original.replace(b'\r\n',b'\n'):raise ValueError('Coordinate proof source changed')
    report={'schema':1,'capture_sha256':hr['capture']['sha256'],'pcsx2_commit':PIN,
            'coordinate_proof_sources':{name:sha(a.pcsx2/name) for name in proof_paths},
            'final_invariance':{'hw':invariant(a.hw,hr,a.hw_baseline,hb),'sw':invariant(a.sw,sr,a.sw_baseline,sb)},
            'final_images_cropped_or_resized':False,'tolerance':'pixel-exact','draws':[],'cause':'UNKNOWN'}
    report.update(compared_channels=a.channels,alpha_validation=('CAPTURED_SEPARATE_ALPHA_PLANES' if a.channels=='RGBA' else 'NOT_VALIDATED_IN_RGB_MODE'))
    report['comparison_domain']='RAW_CAPTURED_PLANES'
    report['alpha_representation_equivalence']='UNPROVEN' if a.channels=='RGBA' else 'NOT_COMPARED'
    hd,sd=a.hw/'draws_hw',a.sw/'draws_sw'
    for hc in sorted(hd.glob('*_context.txt')):
        number=int(hc.name.split('_')[0]);sc=sd/hc.name
        equal=sc.exists() and sha(hc)==sha(sc)
        for path,run,folder in ((hc,hr,a.hw),(sc,sr,a.sw)):
            if not path.exists() or run['diagnostic_files'].get(str(path.relative_to(folder)),{}).get('sha256')!=sha(path):
                raise ValueError('Context identity disagrees with manifest')
        row={'draw':number,'context_identity_equal':equal,'planes':[]}
        for phase in ('rt0','rt1'):
            hp=list(hd.glob(f'{number:05}_f*_{phase}_*.png'));sp=list(sd.glob(f'{number:05}_f*_{phase}_*.png'))
            hp=[p for p in hp if not p.name.endswith('_alpha.png')];sp=[p for p in sp if not p.name.endswith('_alpha.png')]
            if len(hp)!=1 or len(sp)!=1:
                row['planes'].append({'phase':phase,'status':'MISSING_OR_AMBIGUOUS'});continue
            hi=(captured_rgba(a.hw,hr,hp[0]) if a.channels=='RGBA' else verified_image(a.hw,hr,hp[0],True))
            si=(captured_rgba(a.sw,sr,sp[0]) if a.channels=='RGBA' else verified_image(a.sw,sr,sp[0],True))
            try:result=compare_plane(hi,si,hp[0].name,sp[0].name,equal,channels=a.channels)
            except ValueError:result={'status':'NOT_COMPARABLE'}
            row['planes'].append(dict(result,phase=phase))
        report['draws'].append(row)
    report['first_observed_difference']=next(({'draw':row['draw'],'phase':plane['phase']}
        for row in report['draws'] for plane in row['planes'] if plane['status']=='DIFFERENT'),None)
    with a.output.open('x',encoding='utf-8') as stream:json.dump(report,stream,indent=2)
    print(json.dumps({'first_observed_difference':report['first_observed_difference'],
                      'comparable_draws':len(report['draws']),'cause':'UNKNOWN'}))

if __name__=='__main__':main()
