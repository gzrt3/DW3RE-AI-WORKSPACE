import os
import re

def main():
    header_path = r"C:\Fate Soldiers 3\src\recomp\ps2_recompiled_functions.h"
    output_cpp = r"C:\Fate Soldiers 3\src\dispatcher.cpp"
    output_hpp = r"C:\Fate Soldiers 3\include\fate\dispatcher.hpp"
    
    # Match void FUN_001000b8_0x1000b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime);
    func_pattern = re.compile(r"void\s+((?:FUN|entry)_.*?_0x([0-9a-fA-F]+))\(")
    
    functions = []
    
    with open(header_path, "r", encoding="utf-8") as f:
        for line in f:
            match = func_pattern.search(line)
            if match:
                func_name = match.group(1)
                addr_hex = match.group(2)
                functions.append((func_name, addr_hex))
                
    # Generate Header
    with open(output_hpp, "w", encoding="utf-8") as f:
        f.write("#pragma once\n")
        f.write("#include <cstdint>\n\n")
        f.write("struct R5900Context;\n")
        f.write("class PS2Runtime;\n\n")
        f.write("namespace fate {\n")
        f.write("namespace dispatch {\n\n")
        f.write("typedef void (*RecompiledFunc)(uint8_t*, R5900Context*, PS2Runtime*);\n\n")
        f.write("void init_dispatcher();\n")
        f.write("RecompiledFunc get_function(uint32_t pc);\n")
        f.write("void execute_indirect_jump(uint32_t target_pc, uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);\n\n")
        f.write("} // namespace dispatch\n")
        f.write("} // namespace fate\n")
        
    # Generate CPP
    with open(output_cpp, "w", encoding="utf-8") as f:
        f.write("#include \"fate/dispatcher.hpp\"\n")
        f.write("#include \"ps2_recompiled_functions.h\"\n")
        f.write("#include <unordered_map>\n")
        f.write("#include <iostream>\n")
        f.write("#include <stdexcept>\n\n")
        f.write("namespace fate {\n")
        f.write("namespace dispatch {\n\n")
        f.write("static std::unordered_map<uint32_t, RecompiledFunc> g_dispatcher;\n\n")
        f.write("void init_dispatcher() {\n")
        
        # We can't generate 7401 unordered_map inserts because it would take forever to compile!
        # Actually, 7400 inserts inside a single function is fast for MSVC compared to templates.
        for func_name, addr_hex in functions:
            f.write(f"    g_dispatcher[0x{addr_hex}] = {func_name};\n")
            
        f.write("}\n\n")
        
        f.write("RecompiledFunc get_function(uint32_t pc) {\n")
        f.write("    auto it = g_dispatcher.find(pc);\n")
        f.write("    if (it != g_dispatcher.end()) return it->second;\n")
        f.write("    return nullptr;\n")
        f.write("}\n\n")
        
        f.write("void execute_indirect_jump(uint32_t target_pc, uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {\n")
        f.write("    RecompiledFunc func = get_function(target_pc);\n")
        f.write("    if (func) {\n")
        f.write("        func(rdram, ctx, runtime);\n")
        f.write("    } else {\n")
        f.write("        std::cerr << \"[Dispatcher] CRITICAL ERROR: Unresolved indirect jump to 0x\" \n")
        f.write("                  << std::hex << target_pc << \"\\n\";\n")
        f.write("        // Do not hard crash yet, we want to allow stubbing\n")
        f.write("        // throw std::runtime_error(\"Unresolved indirect jump\");\n")
        f.write("    }\n")
        f.write("}\n\n")
        
        f.write("} // namespace dispatch\n")
        f.write("} // namespace fate\n")
        
    print(f"Generated dispatcher for {len(functions)} functions.")

if __name__ == "__main__":
    main()
