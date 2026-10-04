import sys
import re
from collections import defaultdict

def main():
    if len(sys.argv) < 2:
        print("Usage: python analyze_lnk.py <build_log.txt>")
        return

    log_path = sys.argv[1]
    
    # Regex to capture LNK2019 and LNK2001
    # MSVC Format: error LNK2019: unresolved external symbol "symbol_name" referenced in function "func_name"
    err_pattern = re.compile(r"error LNK(?:2019|2001):.*?unresolved external symbol \"?([^\"]+)\"?")
    
    missing_symbols = defaultdict(int)
    
    with open(log_path, 'r', encoding='utf-8', errors='ignore') as f:
        for line in f:
            match = err_pattern.search(line)
            if match:
                symbol = match.group(1)
                missing_symbols[symbol] += 1
                
    categories = {
        "CDVD / File I/O": ["sceCd", "sceOpen", "sceClose", "sceRead", "sceLseek"],
        "Pad / Input": ["scePad"],
        "SPU2 / Audio": ["sceSd"],
        "Memory / Cache": ["FlushCache", "sceSif"],
        "Graphics / GS": ["sceGs", "sceDma"]
    }
    
    categorized = defaultdict(list)
    uncategorized = []
    
    for sym, count in sorted(missing_symbols.items(), key=lambda x: x[1], reverse=True):
        found = False
        for cat, prefixes in categories.items():
            if any(p in sym for p in prefixes):
                categorized[cat].append((sym, count))
                found = True
                break
        if not found:
            uncategorized.append((sym, count))
            
    print("=== LINKER TRIAGE REPORT ===")
    print(f"Total Unique Missing Symbols: {len(missing_symbols)}\n")
    
    for cat, items in categorized.items():
        if items:
            print(f"--- {cat} ---")
            for sym, count in items:
                print(f"  {sym} ({count} occurrences)")
            print()
            
    if uncategorized:
        print("--- Uncategorized / Others ---")
        for sym, count in uncategorized[:50]: # Show top 50
            print(f"  {sym} ({count} occurrences)")
        if len(uncategorized) > 50:
            print(f"  ... and {len(uncategorized) - 50} more.")

if __name__ == "__main__":
    main()
