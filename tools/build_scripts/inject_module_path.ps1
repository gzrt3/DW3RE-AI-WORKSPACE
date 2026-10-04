$path = 'C:\Fate Soldiers 3\CMakeLists.txt'
$c = Get-Content $path -Raw
$insert = "`nlist(APPEND CMAKE_MODULE_PATH `"`${CMAKE_SOURCE_DIR}/cmake`")`n"
$c = $c -replace '(set\(CMAKE_CXX_EXTENSIONS OFF\))', ('$1' + $insert)
Set-Content -NoNewline -Path $path -Value $c
Write-Host "Done"
