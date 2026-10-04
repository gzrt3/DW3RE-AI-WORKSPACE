import os
import re
import sys

def main():
    if len(sys.argv) < 2:
        print("Usage: split_monster_function.py <file>")
        return
        
    filepath = sys.argv[1]
    out_dir = os.path.dirname(filepath)
    
    if not os.path.exists(filepath):
        print("File already split or not found.")
        return
        
    base_name = os.path.basename(filepath).replace('.cpp', '')
    func_name = base_name.split('_0x')[0] if '_0x' in base_name else base_name
    
    # We shouldn't split it twice.
    if base_name.endswith('_master') or 'part' in base_name:
        return
        
    print(f"Reading {base_name}...")
    with open(filepath, "r", encoding="utf-8") as f:
        lines = f.readlines()
        
    print(f"Total lines: {len(lines)}")
    CHUNK_SIZE = 500
    
    header_lines = []
    cases = []
    labels_code = []
    
    in_code = False
    in_switch = False
    
    case_re = re.compile(r'^\s*case\s+(0x[0-9a-fA-F]+u):\s*goto\s+(label_[0-9a-fA-F]+);')
    label_re = re.compile(r'^(label_[0-9a-fA-F]+):')
    
    for idx, line in enumerate(lines):
        if "switch (ctx->pc)" in line:
            in_switch = True
            
        if not in_code and not in_switch:
            if f"void {func_name}" not in line and "PS_LOG_ENTRY" not in line and "{" not in line:
                header_lines.append(line)
        elif in_switch:
            match = case_re.match(line)
            if match:
                cases.append((match.group(1), match.group(2)))
            elif "default:" in line or "}" in line:
                if "}" in line:
                    in_switch = False
                    in_code = True
            continue
        else:
            labels_code.append(line)

    if not cases:
        print("No switch cases found, might not be a monster function or already split.")
        return

    print(f"Parsed {len(cases)} cases and {len(labels_code)} lines of code.")
    
    chunks = []
    current_chunk = []
    current_chunk_cases = []
    current_chunk_labels = []
    chunk_index = 1
    current_case_count = 0
    
    for line in labels_code:
        match = label_re.match(line)
        if match:
            lbl = match.group(1)
            if current_case_count >= CHUNK_SIZE:
                chunks.append({
                    "id": chunk_index,
                    "code": current_chunk,
                    "labels": current_chunk_labels,
                    "start_case": current_chunk_cases[0] if current_chunk_cases else None,
                    "end_case": None
                })
                chunk_index += 1
                current_chunk = []
                current_chunk_cases = []
                current_chunk_labels = []
                current_case_count = 0
                
            current_chunk_labels.append(lbl)
            
            addr_hex = "0x" + lbl.replace("label_", "")
            current_chunk_cases.append(addr_hex)
            current_case_count += 1
            
        current_chunk.append(line)
        
    if current_chunk:
        chunks.append({
            "id": chunk_index,
            "code": current_chunk,
            "labels": current_chunk_labels,
            "start_case": current_chunk_cases[0] if current_chunk_cases else None,
            "end_case": None
        })
        
    print(f"Split into {len(chunks)} chunks.")
    
    master_path = os.path.join(out_dir, f"{base_name}_master.cpp")
    with open(master_path, "w", encoding="utf-8") as f:
        for line in header_lines:
            f.write(line)
            
        for c in chunks:
            f.write(f"void {func_name}_part{c['id']}(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime);\n")
            
        f.write(f"\nvoid {base_name}(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {{\n")
        f.write('    #ifdef PS2_FUNCTION_LOG_TRACKER\n')
        f.write(f'    PS_LOG_ENTRY("{func_name}");\n')
        f.write('    #endif\n')
        
        f.write("    while (true) {\n")
        
        for c in chunks:
            min_addr = c['start_case']
            max_addr = c['current_chunk_cases'][-1] if 'current_chunk_cases' in c else c['code']
            # Actually we just check start and end addr
            # Let's find end_addr properly
            end_addr = c['start_case']
            for line in c['code']:
                match = label_re.match(line)
                if match:
                    end_addr = "0x" + match.group(1).replace("label_", "")
                    
            f.write(f"        if (ctx->pc >= {min_addr}u && ctx->pc <= {end_addr}u) {{\n")
            f.write(f"            {func_name}_part{c['id']}(rdram, ctx, runtime);\n")
            f.write("            continue;\n")
            f.write("        }\n")
            
        f.write("        break;\n")
        f.write("    }\n")
        f.write("}\n")
        
    for c in chunks:
        chunk_path = os.path.join(out_dir, f"{func_name}_part{c['id']}.cpp")
        with open(chunk_path, "w", encoding="utf-8") as out:
            for line in header_lines:
                out.write(line)
                
            out.write(f"\nvoid {func_name}_part{c['id']}(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {{\n")
            out.write("    switch (ctx->pc) {\n")
            
            for lbl in c['labels']:
                addr = "0x" + lbl.replace("label_", "")
                out.write(f"        case {addr}u: goto {lbl};\n")
                
            out.write("        default: return;\n")
            out.write("    }\n\n")
            
            goto_re = re.compile(r'goto\s+(label_[0-9a-fA-F]+)\s*;')
            chunk_labels = set(c['labels'])
            
            for line in c['code']:
                if "throw std::runtime_error(\"Unhandled" in line:
                    line = "// " + line + " /* MITIGATED */\n"
                    
                def replacer(match):
                    target_label = match.group(1)
                    if target_label not in chunk_labels:
                        addr = "0x" + target_label.replace("label_", "")
                        return f"{{ ctx->pc = {addr}; return; }}"
                    return match.group(0)
                
                new_line = goto_re.sub(replacer, line)
                out.write(new_line)
                
            if c['id'] < len(chunks):
                next_addr = chunks[c['id']]['start_case']
                out.write(f"    ctx->pc = {next_addr}u;\n")
                out.write("    return;\n")
                
            out.write("}\n")
            
    # Fix double brace for last chunk
    last_chunk_path = os.path.join(out_dir, f"{func_name}_part{chunks[-1]['id']}.cpp")
    with open(last_chunk_path, "r", encoding="utf-8") as f:
        l = f.readlines()
    with open(last_chunk_path, "w", encoding="utf-8") as f:
        if l[-1].strip() == '}':
            l = l[:-1]
        f.writelines(l)
            
    print(f"Chunks generated for {base_name}.")
    
    bak_path = filepath + ".bak"
    if os.path.exists(bak_path):
        os.remove(bak_path)
    os.rename(filepath, bak_path)

if __name__ == "__main__":
    main()
