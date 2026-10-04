$c = Get-Content 'C:\Fate Soldiers 3\CMakeLists.txt' -Raw
$c = $c -replace '/W4 /WX ', '/W4 /WX- '
Set-Content -Path 'C:\Fate Soldiers 3\CMakeLists.txt' -Value $c -NoNewline

$g = Get-Content 'C:\Fate Soldiers 3\src\gs_wrapper.h' -Raw
$g = $g -replace 'struct GSVertex', 'struct GSDrawVertex'
$g = $g -replace 'std::vector<GSVertex>', 'std::vector<GSDrawVertex>'
Set-Content -Path 'C:\Fate Soldiers 3\src\gs_wrapper.h' -Value $g -NoNewline

$p = Get-Content 'C:\Fate Soldiers 3\include\fate\input\pad_bridge.hpp' -Raw
$p = $p -replace 'void hle_scePadInit', 'extern "C" void hle_scePadInit'
$p = $p -replace 'void hle_scePadPortOpen', 'extern "C" void hle_scePadPortOpen'
$p = $p -replace 'void hle_scePadRead', 'extern "C" void hle_scePadRead'
Set-Content -Path 'C:\Fate Soldiers 3\include\fate\input\pad_bridge.hpp' -Value $p -NoNewline

$s = Get-Content 'C:\Fate Soldiers 3\include\fate\audio\spu_bridge.hpp' -Raw
$s = $s -replace 'void hle_sceSdRemote', 'extern "C" void hle_sceSdRemote'
$s = $s -replace 'void hle_sceSdInit', 'extern "C" void hle_sceSdInit'
$s = $s -replace 'void hle_sceSdSetParam', 'extern "C" void hle_sceSdSetParam'
$s = $s -replace 'void hle_sceSdBlockTrans', 'extern "C" void hle_sceSdBlockTrans'
Set-Content -Path 'C:\Fate Soldiers 3\include\fate\audio\spu_bridge.hpp' -Value $s -NoNewline
