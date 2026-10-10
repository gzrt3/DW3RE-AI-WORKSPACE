"""Bounded local replay with explicit paths and hash-bound comparison evidence."""
import argparse
import hashlib
import json
import shutil
import subprocess
import time
from pathlib import Path
from validate_capture import inspect_file


def main():
    p = argparse.ArgumentParser()
    p.add_argument('--build', required=True, type=Path)
    p.add_argument('--pcsx2', required=True, type=Path)
    p.add_argument('--dependencies', required=True, type=Path)
    p.add_argument('--capture', required=True, type=Path)
    p.add_argument('--output', required=True, type=Path)
    p.add_argument('--reference', action='store_true')
    p.add_argument('--renderer', choices=('vulkan', 'dx11', 'dx12', 'sw'), default='vulkan')
    p.add_argument('--draw-start', type=int, default=0)
    p.add_argument('--draw-count', type=int, default=0)
    p.add_argument('--save-alpha', action='store_true')
    args = p.parse_args()
    if args.renderer == 'sw' and not args.reference:
        p.error('Software renderer is the official reference, not a hardware bridge')
    if args.draw_start < 0 or not 0 <= args.draw_count <= 64 or (args.draw_count and not args.reference):
        p.error('Draw diagnostics require an official reference and a window of 1..64 draws')
    if args.save_alpha and not args.draw_count:
        p.error('Alpha capture requires bounded draw diagnostics')
    capture = inspect_file(args.capture)
    args.output.mkdir(parents=True, exist_ok=False)
    if args.reference:
        binary = args.output / 'bin'
        binary.mkdir()
        original = (args.build / 'Release/dw3_gs_diagnostic.exe' if args.draw_count
                    else args.build / 'pcsx2-gsrunner/Release/pcsx2-gsrunner.exe')
        exe = binary / original.name
        shutil.copy2(original, exe)
        for dll in (args.dependencies / 'deps/bin').glob('*.dll'):
            shutil.copy2(dll, binary / dll.name)
        shutil.copytree(args.pcsx2 / 'bin/resources', binary / 'resources')
        (binary / 'portable.ini').write_text('', encoding='utf-8')
        ini = args.output / 'reference.ini'
        settings = '[EmuCore/GS]\nScreenshotSize=1\naccurate_blending_unit=5\nOsdPerformancePos=0\nOsdMessagesPos=0\nLoadTextureReplacements=false\nSkipDuplicateFrames=false\n'
        if args.draw_count:
            hw, sw = args.output/'draws_hw', args.output/'draws_sw'
            hw.mkdir(); sw.mkdir()
            settings += ('DumpGSData=true\nSaveRT=true\nSaveTexture=true\nSaveDepth=true\nSaveInfo=true\nSaveHWConfig=true\n'
                         f'SaveDrawStart={args.draw_start}\nSaveDrawCount={args.draw_count}\n'
                         f'HWDumpDirectory={hw.resolve().as_posix()}\nSWDumpDirectory={sw.resolve().as_posix()}\n')
            if args.save_alpha:
                settings += 'SaveAlpha=true\n'
        ini.write_text(settings, encoding='utf-8')
        command = [str(exe.resolve()), '-renderer', args.renderer, '-upscale', '1', '-loop', '2',
                   '-ini', str(ini.resolve()), '-dumpdir', str((args.output / 'frames').resolve()),
                   '-noshadercache', str(args.capture.resolve())]
    else:
        exe = args.build / 'Release/dw3_gs_probe.exe'
        renderer = {'vulkan': 0, 'dx11': 11, 'dx12': 12}[args.renderer]
        command = [str(exe.resolve()), str((args.pcsx2 / 'bin/resources').resolve()),
                   str((args.output / 'render').resolve()), str(renderer), str(args.capture.resolve()), '2']
    started = time.monotonic()
    timed_out = False
    with (args.output / 'stdout.log').open('xb') as stdout, (args.output / 'stderr.log').open('xb') as stderr:
        child = subprocess.Popen(command, cwd=exe.parent, stdout=stdout, stderr=stderr)
        try:
            code = child.wait(timeout=60)
        except subprocess.TimeoutExpired:
            timed_out = True
            child.kill()
            code = child.wait(timeout=10)
    result = {'schema': 1, 'role': 'reference' if args.reference else 'direct',
              'renderer': args.renderer, 'loops': 2, 'upscale': 1, 'blending_accuracy': 'maximum', 'capture': capture,
              'exit_code': code, 'timed_out': timed_out, 'seconds': time.monotonic() - started,
              'executable_sha256': hashlib.sha256(exe.read_bytes()).hexdigest()}
    if args.reference:
        result['configuration_sha256'] = hashlib.sha256(ini.read_bytes()).hexdigest()
        result['reference_variant'] = 'derived_snapshot_diagnostic' if args.draw_count else 'unmodified_gsrunner'
    result['draw_diagnostic'] = {'start': args.draw_start, 'count': args.draw_count,
                                 'final_image_invariance': 'NOT_CHECKED'}
    if args.save_alpha:
        result['draw_diagnostic']['alpha_capture'] = True
    if args.draw_count:
        result['diagnostic_files'] = {str(path.relative_to(args.output)): {'bytes': path.stat().st_size,
            'sha256': hashlib.sha256(path.read_bytes()).hexdigest()}
            for directory in (hw, sw) for path in directory.rglob('*') if path.is_file()}
    if not args.reference:
        result['bridge_dll_sha256'] = hashlib.sha256((exe.parent / 'dw3_gs_bridge.dll').read_bytes()).hexdigest()
        for line in (args.output / 'stdout.log').read_text(encoding='utf-8', errors='replace').splitlines():
            if line.startswith('modern_gs_replay='):
                result['replay'] = dict(part.split('=', 1) for part in line.split() if '=' in part)
    result['log_hashes'] = {name: hashlib.sha256((args.output / name).read_bytes()).hexdigest()
                            for name in ('stdout.log', 'stderr.log')}
    image_directory = args.output / ('frames' if args.reference else 'render')
    extension = '*.png' if args.reference else '*.ppm'
    result['images'] = {path.name: hashlib.sha256(path.read_bytes()).hexdigest()
                        for path in image_directory.glob(extension)}
    (args.output / 'result.json').write_text(json.dumps(result, indent=2), encoding='utf-8')
    print(json.dumps(result))
    return 1 if code or timed_out else 0


if __name__ == '__main__':
    raise SystemExit(main())
