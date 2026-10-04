import os
import glob
import re

d = r'C:\Fate Soldiers 3\src\recomp'
files = glob.glob(os.path.join(d, '*.cpp'))
monster_files = []
for f in files:
    sz = os.path.getsize(f)
    if sz > 5 * 1024 * 1024 or 'part' in f or 'master' in f:
        monster_files.append(f"    \"src/recomp/{os.path.basename(f)}\"")

cmake_injection = "set(MONSTER_FILES\n" + "\n".join(monster_files) + """
)
set_source_files_properties(${MONSTER_FILES} PROPERTIES 
    SKIP_UNITY_BUILD_INCLUSION ON
    COMPILE_FLAGS "/Od /bigobj"
)
"""

cmake_path = r'C:\Fate Soldiers 3\CMakeLists.txt'
with open(cmake_path, 'r', encoding='utf-8') as f:
    content = f.read()

# Insert after GLOB_RECURSE
if 'set(MONSTER_FILES' not in content:
    content = content.replace(
        'file(GLOB_RECURSE RECOMP_SOURCES "src/recomp/*.cpp")',
        'file(GLOB_RECURSE RECOMP_SOURCES "src/recomp/*.cpp")\n\n' + cmake_injection
    )
    with open(cmake_path, 'w', encoding='utf-8', newline='') as f:
        f.write(content)
    print("Injected monster file exclusions into CMakeLists.txt (threshold 5MB)")
else:
    print("Monster files already excluded")
