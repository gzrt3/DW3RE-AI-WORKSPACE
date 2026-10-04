$c = Get-Content 'C:\Fate Soldiers 3\CMakeLists.txt' -Raw
$c = $c -replace 'include \r\n', "include `r`n    src/recomp `r`n"
Set-Content -Path 'C:\Fate Soldiers 3\CMakeLists.txt' -Value $c -NoNewline
