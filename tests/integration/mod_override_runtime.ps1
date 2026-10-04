param(
    [Parameter(Mandatory = $true)][string]$GameRuntime,
    [Parameter(Mandatory = $true)][string]$ViewerRuntime,
    [Parameter(Mandatory = $true)][string]$Evidence,
    [Parameter(Mandatory = $true)][string]$Work
)

$ErrorActionPreference = 'Stop'

function Set-U16([byte[]]$Buffer, [int]$Offset, [uint16]$Value) {
    $encoded = [BitConverter]::GetBytes($Value)
    [Array]::Copy($encoded, 0, $Buffer, $Offset, 2)
}

function Set-U32([byte[]]$Buffer, [int]$Offset, [uint32]$Value) {
    $encoded = [BitConverter]::GetBytes($Value)
    [Array]::Copy($encoded, 0, $Buffer, $Offset, 4)
}

function Invoke-AndCheck([string]$Executable, [string[]]$Arguments, [string]$Label) {
    $output = (& $Executable @Arguments 2>&1 | Out-String).Trim()
    if ($LASTEXITCODE -ne 0) { throw "$Label failed ($LASTEXITCODE): $output" }
    try { $report = $output | ConvertFrom-Json } catch { throw "$Label did not emit JSON: $output" }
    if ($report.status -ne 'PASS' -or $report.mod_overrides -ne 2) {
        throw "$Label did not load both OBJ/BMP overrides: $output"
    }
}

$modRoot = [IO.Path]::GetFullPath($Work)
$assetRoot = Join-Path $modRoot 'dw3\assets'
New-Item -ItemType Directory -Path $assetRoot -Force | Out-Null

$obj = @'
# Tiny PC replacement mesh fixture
v -1 -1 0
v 1 -1 0
v 0 1 0
vt 0 0
vt 1 0
vt 0.5 1
vn 0 0 1
f 1/1/1 2/2/1 3/3/1
'@
[IO.File]::WriteAllText((Join-Path $assetRoot '207.obj'), $obj, [Text.Encoding]::ASCII)

$bmp = New-Object byte[] 70
$bmp[0] = 0x42
$bmp[1] = 0x4D
Set-U32 $bmp 2 70
Set-U32 $bmp 10 54
Set-U32 $bmp 14 40
Set-U32 $bmp 18 2
Set-U32 $bmp 22 2
Set-U16 $bmp 26 1
Set-U16 $bmp 28 32
Set-U32 $bmp 34 16
[byte[]]$pixels = @(0, 0, 255, 255, 0, 255, 0, 255, 255, 0, 0, 255, 255, 255, 255, 255)
[Array]::Copy($pixels, 0, $bmp, 54, $pixels.Length)
[IO.File]::WriteAllBytes((Join-Path $assetRoot '150.bmp'), $bmp)

Invoke-AndCheck $GameRuntime @('--self-test', '--mods', $modRoot) 'fate_game mod override startup'
Invoke-AndCheck $ViewerRuntime @('--self-test', '--root', 'C:/DW3', '--evidence', $Evidence, '--mods', $modRoot) 'fate_viewport mod override startup'
