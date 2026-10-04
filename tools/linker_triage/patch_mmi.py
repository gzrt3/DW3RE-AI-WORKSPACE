import os
import re
import sys

def main():
    target_dir = r"C:\Fate Soldiers 3\src\recomp"
    
    # Regex to match throw std::runtime_error("Unhandled MMI... / Unhandled COP0... / Unhandled SPECIAL... / Unhandled FPU..."
    pattern = re.compile(r'^\s*throw\s+std::runtime_error\("Unhandled\s+(MMI|COP0|SPECIAL|FPU)[^"]+"\);\s*$', re.MULTILINE)
    
    count_files = 0
    count_replacements = 0
    
    for filename in os.listdir(target_dir):
        if not filename.endswith(".cpp"): continue
            
        filepath = os.path.join(target_dir, filename)
        
        with open(filepath, "r", encoding="utf-8", errors="ignore") as f:
            content = f.read()
            
        if "throw std::runtime_error(\"Unhandled" in content:
            # We replace throw with a debug log or just a silent comment
            # To avoid including iostream in every file, we just comment it out.
            # But the user asked for a "fallback silenciado/no bloqueante (stub seguro o logging condicional)"
            # A comment is the ultimate silent stub.
            new_content, subs = pattern.subn(r'// \g<0> /* MITIGATED MMI/COP0 */', content)
            
            if subs > 0:
                with open(filepath, "w", encoding="utf-8") as f:
                    f.write(new_content)
                count_files += 1
                count_replacements += subs
                
    print(f"Patched {count_replacements} unhandled exceptions across {count_files} files.")

if __name__ == "__main__":
    main()
