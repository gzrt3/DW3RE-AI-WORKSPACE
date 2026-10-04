param([Parameter(Mandatory=$true)][string]$Build)
$ErrorActionPreference = 'Stop'
$resolvedBuild = (Resolve-Path -LiteralPath $Build).Path
$projectOut = Split-Path -Parent $resolvedBuild
$target = Join-Path $projectOut 'runtime_junction_target'
$link = Join-Path $resolvedBuild 'runtime_escape'
New-Item -ItemType Directory -Path $target -Force | Out-Null
Set-Content -LiteralPath (Join-Path $target 'outside.bin') -Value 'outside fixture' -NoNewline
if (Test-Path -LiteralPath $link) {
    $item = Get-Item -LiteralPath $link
    if ($item.LinkType -ne 'Junction' -or $item.Target -ne $target) { throw 'Unexpected existing junction fixture' }
} else {
    New-Item -ItemType Junction -Path $link -Target $target | Out-Null
}
