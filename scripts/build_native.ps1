[CmdletBinding()]
param(
    [ValidateSet('Debug','Release')][string]$Configuration = 'Release',
    [ValidateRange(1,32)][int]$Parallel = 4,
    [string]$BuildRoot = '',
    [string]$SDL2Source = '',
    [switch]$ConfigureOnly
)
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
if (!$BuildRoot) { $BuildRoot = Join-Path $projectRoot 'out/native' }
$BuildRoot = [IO.Path]::GetFullPath($BuildRoot)
$runtimeBuild = Join-Path $BuildRoot 'runtime'
$sdlBuild = Join-Path $BuildRoot 'sdl-build'
$sdlInstall = Join-Path $BuildRoot 'sdl-install'
$gameBuild = Join-Path $BuildRoot 'game'
function Invoke-BuildTool([string]$Program, [string[]]$ToolArguments) {
    & $Program @ToolArguments
    if ($LASTEXITCODE -ne 0) { throw "$Program failed with exit code $LASTEXITCODE" }
}
if (!$SDL2Source) {
    $SDL2Source = Join-Path $BuildRoot 'SDL'
    if (!(Test-Path -LiteralPath (Join-Path $SDL2Source 'CMakeLists.txt'))) {
        Invoke-BuildTool git @('clone','--depth','1','--branch','release-2.30.11',
            'https://github.com/libsdl-org/SDL.git',$SDL2Source)
    }
}
Invoke-BuildTool cmake @('-S',$SDL2Source,'-B',$sdlBuild,'-G','Visual Studio 17 2022',
    '-A','x64',"-DCMAKE_INSTALL_PREFIX=$sdlInstall",'-DSDL_TEST=OFF','-DSDL_TESTS=OFF',
    '-DSDL_SHARED=ON','-DSDL_STATIC=OFF')
if (!$ConfigureOnly) {
    Invoke-BuildTool cmake @('--build',$sdlBuild,'--config',$Configuration,'--parallel',"$Parallel")
    Invoke-BuildTool cmake @('--install',$sdlBuild,'--config',$Configuration)
}
Invoke-BuildTool cmake @('-S',(Join-Path $projectRoot 'tools/PS2Recomp'),'-B',$runtimeBuild,
    '-G','Visual Studio 17 2022','-A','x64','-DPS2X_BUILD_RECOMP=OFF',
    '-DPS2X_BUILD_ANALYZER=OFF','-DPS2X_BUILD_STUDIO=OFF','-DPS2X_BUILD_TEST=OFF',
    '-DPS2X_BUILD_RUNTIME=ON','-DPS2X_ENABLE_DEBUG_UI=OFF','-DPS2X_ENABLE_SCCACHE=OFF')
if (!$ConfigureOnly) {
    Invoke-BuildTool cmake @('--build',$runtimeBuild,'--target','ps2_runtime',
        '--config',$Configuration,'--parallel',"$Parallel")
}
if ($ConfigureOnly -and !(Test-Path -LiteralPath $sdlInstall)) {
    Write-Output 'Dependency configuration complete. Run without ConfigureOnly to build/install SDL and configure the game.'
    return
}
Invoke-BuildTool cmake @('-S',$projectRoot,'-B',$gameBuild,'-G','Visual Studio 17 2022',
    '-A','x64',"-DCMAKE_PREFIX_PATH=$sdlInstall","-DFATE_RUNTIME_BUILD_DIR=$runtimeBuild")
if (!$ConfigureOnly) {
    Invoke-BuildTool cmake @('--build',$gameBuild,'--target','fate_game',
        '--config',$Configuration,'--parallel',"$Parallel",'--',
        '/p:UseMultiToolTask=true',"/p:CL_MPCount=$Parallel",'/p:EnforceProcessCountAcrossBuilds=true')
    $sdlName = if ($Configuration -eq 'Debug') { 'SDL2d.dll' } else { 'SDL2.dll' }
    $sdlDll = Join-Path $sdlInstall ("bin/" + $sdlName)
    if (!(Test-Path -LiteralPath $sdlDll)) { throw "SDL runtime missing: $sdlDll" }
    Copy-Item -LiteralPath $sdlDll -Destination (Join-Path $gameBuild "bin/$Configuration/$sdlName")
    Write-Output (Join-Path $gameBuild "bin/$Configuration/fate_game.exe")
}
