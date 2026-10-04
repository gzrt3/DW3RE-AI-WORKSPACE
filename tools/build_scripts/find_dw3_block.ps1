$f = Get-Content "C:\Fate Soldiers 3\CMakeLists.txt"
$idx = -1
for ($i = 0; $i -lt $f.Length; $i++) {
    if ($f[$i] -like "*add_executable*DynastyWarriors3_Native*") { $idx = $i; break }
}
if ($idx -ge 0) {
    $end = [Math]::Min($idx + 10, $f.Length - 1)
    $f[$idx..$end]
} else {
    Write-Host "NOT FOUND"
}
