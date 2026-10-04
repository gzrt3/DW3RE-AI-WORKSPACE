$vcvars = "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"

$OriginalPath = [Environment]::GetEnvironmentVariable("PATH", "User")
$CleanPath = ($env:PATH -replace '"', '' -split ';' | Where-Object { $_ -notmatch 'Google\\Cloud' }) -join ';'
$env:PATH = $CleanPath

$output = cmd /c "call `"$vcvars`" > NUL 2>&1 && set"

foreach ($line in $output) {
    if ($line -match "^([^=]+)=(.*)$") {
        $name = $matches[1]
        $value = $matches[2]
        Set-Item -Force -Path "Env:\$name" -Value $value
    }
}

cmake -B build_ninja -G "Ninja" -DCMAKE_BUILD_TYPE=Release
cmake --build build_ninja --target fate_game
