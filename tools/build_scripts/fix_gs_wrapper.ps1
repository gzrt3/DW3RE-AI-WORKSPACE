$c = Get-Content 'C:\Fate Soldiers 3\src\gs_wrapper.cpp' -Raw
$c = $c -replace 'GSVertex', 'GSDrawVertex'
Set-Content 'C:\Fate Soldiers 3\src\gs_wrapper.cpp' -Value $c -NoNewline
