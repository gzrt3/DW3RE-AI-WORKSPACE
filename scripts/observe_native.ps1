[CmdletBinding()]
param(
    [string]$BuildRoot = 'D:/DW3-Publication-Build',
    [string]$DumpRoot = 'C:/DW3/sources/dumps/dw3xl_ps2',
    [string]$Elf = 'C:/DW3/sources/dumps/dw3xl_ps2/SLUS_206.17',
    [string]$IopRoot = 'C:/Fate Soldiers 3/data/iop',
    [ValidateSet('on','off')][string]$VSync = 'off',
    [ValidateRange(1,280)][int]$Seconds = 120
)
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path -Parent $PSScriptRoot
$stamp = (Get-Date).ToUniversalTime().ToString('yyyyMMddTHHmmssfffZ')
$output = Join-Path $projectRoot "artifacts/live-observation/$stamp"
$exe = Join-Path $BuildRoot 'game/bin/Release/fate_game.exe'
Write-Output 'Abriendo la salida real del GS. Una ventana sin imagen no acredita el arranque.'
& python (Join-Path $projectRoot 'tools/native_boot_probe.py') --exe $exe --dump-root $DumpRoot `
    --elf $Elf --iop-root $IopRoot --output $output --live-seconds $Seconds --vsync $VSync --timeout ($Seconds + 20)
exit $LASTEXITCODE
