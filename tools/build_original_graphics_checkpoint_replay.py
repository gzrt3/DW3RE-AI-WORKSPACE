"""Build the isolated original-checkpoint replay target without rebuilding shared libraries."""
import argparse
from datetime import datetime, timezone
import json
from pathlib import Path
import subprocess
import sys

import original_graphics_checkpoint_replay as replay


def libraries(root, configuration):
    paths = [root / f'ps2xRuntime/{configuration}/ps2_runtime.lib',
             root / f'ps2xIOP/{configuration}/ps2_iop.lib',
             root / f'_deps/raylib-build/raylib/{configuration}/raylib.lib']
    paths.extend(root / f'ThirdParty/ffmpeg-prefix/src/ffmpeg_external/bin/{name}.lib'
                 for name in ('avcodec', 'avformat', 'avutil', 'swresample', 'swscale'))
    return [replay.identity(path) for path in paths]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--build-root', type=Path, required=True)
    parser.add_argument('--runtime-build', type=Path, required=True)
    parser.add_argument('--configuration', choices=('Debug', 'Release'), required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    args.output.mkdir(parents=True, exist_ok=False)
    sources_before = replay.source_identities()
    sources_before.append(replay.identity(Path(__file__)))
    library_before = libraries(args.runtime_build, args.configuration)
    commands = [
        ['cmake', '-S', str(replay.ROOT / 'tests/original_checkpoint_replay'), '-B', str(args.build_root.resolve()),
         '-G', 'Visual Studio 17 2022', '-A', 'x64', f'-DFATE_RUNTIME_BUILD_DIR={args.runtime_build.resolve()}'],
        ['cmake', '--build', str(args.build_root.resolve()), '--target', 'original_graphics_checkpoint_replay',
         '--config', args.configuration, '--parallel', '2'],
    ]
    results = []
    for index, command in enumerate(commands):
        completed = subprocess.run(command, cwd=replay.ROOT, capture_output=True, check=False)
        log = args.output / f'command-{index:02d}.log'
        with log.open('xb') as stream:
            stream.write(completed.stdout)
            stream.write(completed.stderr)
        results.append({'command': command, 'exit_code': completed.returncode, 'log': replay.identity(log)})
        print(completed.stdout.decode('utf-8', errors='replace'))
        print(completed.stderr.decode('utf-8', errors='replace'), file=sys.stderr)
        if completed.returncode:
            break
    sources_after = replay.source_identities()
    sources_after.append(replay.identity(Path(__file__)))
    library_after = libraries(args.runtime_build, args.configuration)
    binary = args.build_root / f'bin/{args.configuration}/original_graphics_checkpoint_replay.exe'
    success = (len(results) == len(commands) and all(item['exit_code'] == 0 for item in results)
               and sources_before == sources_after and library_before == library_after)
    manifest = {'configuration': args.configuration, 'finished_utc': datetime.now(timezone.utc).isoformat(),
                'source_before': sources_before, 'source_after': sources_after,
                'library_before': library_before, 'library_after': library_after,
                'commands': results, 'success': success,
                'provenance_limit': 'Shared runtime libraries were read-only and fingerprinted; this is not a clean shared-runtime build.'}
    if len(results) == len(commands) and all(item['exit_code'] == 0 for item in results):
        manifest['binary'] = replay.identity(binary)
    replay.save_new(args.output / 'build-manifest.json', manifest)
    return 0 if success else 1


if __name__ == '__main__':
    raise SystemExit(main())
