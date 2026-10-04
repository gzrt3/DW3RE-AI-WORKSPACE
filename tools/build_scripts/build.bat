@echo off
setlocal
rem Strip problematic paths from PATH
set PATH=%PATH: (x86)=%
set PATH=%PATH:Google\Cloud=%
set PATH=%PATH:Windows Kits=%

call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
cmake --build build_ninja --target DynastyWarriors3_Native
endlocal
