"""Package committed public files only, with deterministic entries and hashes."""
import argparse
import hashlib
import io
import json
from pathlib import Path
import subprocess
import zipfile
from check_public_tree import forbidden

ROOT = Path(__file__).resolve().parents[1]


def git(*args):
    return subprocess.check_output(['git','-C',str(ROOT),*args])


def package(output):
    output = output.resolve()
    if output.exists() or output.is_relative_to(ROOT):
        raise ValueError('choose_new_output_outside_checkout')
    if git('status','--porcelain').strip():
        raise ValueError('commit_public_changes_before_packaging')
    names = sorted(name for name in git('ls-files','-z').decode().split('\0') if name)
    if any(forbidden(name) for name in names):
        raise ValueError('private_path_in_public_tree')
    commit = git('rev-parse','HEAD').decode().strip()
    files = []
    # Package canonical commit bytes rather than platform-dependent CRLF checkouts.
    with zipfile.ZipFile(io.BytesIO(git('archive','--format=zip','HEAD'))) as committed:
        for name in names:
            info = committed.getinfo(name)
            if (info.external_attr >> 16) & 0o170000 == 0o120000:
                raise ValueError('unsupported_archive_member')
            data = committed.read(name)
            files.append((name, data, hashlib.sha256(data).hexdigest()))
    manifest = {'schema':1,'commit':commit,'package_kind':'DEVELOPMENT_SOURCE_AND_DATA_SETUP',
                'playable':False,'mixjoy_resolved':False,
                'files':[{'path':name,'bytes':len(data),'sha256':sha} for name,data,sha in files]}
    output.parent.mkdir(parents=True, exist_ok=True)
    with zipfile.ZipFile(output,'x',compression=zipfile.ZIP_DEFLATED,compresslevel=9) as archive:
        for name,data,_ in files:
            info = zipfile.ZipInfo('DW3-Development/'+name, date_time=(2026,10,10,0,0,0))
            info.create_system = 3
            info.compress_type = zipfile.ZIP_DEFLATED
            info.external_attr = 0o100644 << 16
            archive.writestr(info,data)
        info = zipfile.ZipInfo('DW3-Development/PACKAGE_MANIFEST.json',date_time=(2026,10,10,0,0,0))
        info.create_system = 3
        info.compress_type = zipfile.ZIP_DEFLATED
        info.external_attr = 0o100644 << 16
        archive.writestr(info,json.dumps(manifest,indent=2)+'\n')
    with zipfile.ZipFile(output) as archive:
        if archive.testzip() is not None:
            raise ValueError('archive_crc_failure')
        for row in manifest['files']:
            if hashlib.sha256(archive.read('DW3-Development/'+row['path'])).hexdigest()!=row['sha256']:
                raise ValueError('archive_hash_failure')
    result = {'commit':commit,'files':len(files),'archive_bytes':output.stat().st_size,
              'sha256':hashlib.sha256(output.read_bytes()).hexdigest(),'playable':False,'mixjoy_resolved':False}
    with output.with_suffix('.json').open('x',encoding='utf-8') as target:
        json.dump(result,target,indent=2)
    print(json.dumps(result))


if __name__ == '__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output',type=Path,required=True)
    package(parser.parse_args().output)
