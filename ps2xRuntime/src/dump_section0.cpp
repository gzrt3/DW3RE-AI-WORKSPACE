#include "DW3RE_Gen6Provider.h"
#include <iostream>
#include <iomanip>
#include <vector>

void DumpResource(DW3RE_ResourceManager& rm, uint32_t res_id) {
    DW3RE_ResourceBuffer buf;
    if (!rm.Load(DW3RE_Namespace::DW3_BASE, res_id, buf)) {
        std::cerr << "Failed to load resource " << res_id << "\n";
        return;
    }
    
    if (buf.data.size() < 0x1C || *reinterpret_cast<const uint32_t*>(buf.data.data()) != 6) {
        std::cerr << "Invalid header for resource " << res_id << "\n";
        return;
    }
    
    uint32_t numParts = *reinterpret_cast<const uint32_t*>(buf.data.data() + 0x1C);
    std::cout << "Resource " << res_id << " has " << numParts << " parts\n";
    
    // Check Section 5
    uint32_t s5Off = *reinterpret_cast<const uint32_t*>(buf.data.data() + 0x18);
    uint32_t numSecs = *reinterpret_cast<const uint32_t*>(buf.data.data());
    uint32_t s5End = (numSecs > 6) ? *reinterpret_cast<const uint32_t*>(buf.data.data() + 0x1C) : buf.data.size();
    std::cout << "Section 5 offset: 0x" << std::hex << s5Off << " end: 0x" << s5End << std::dec << "\n";
    if (s5End > s5Off && s5Off > 0) {
        const uint8_t* p = buf.data.data() + s5Off;
        size_t rem = s5End - s5Off;
        size_t pos = 0;
        int listIdx = 0;
        while (pos < rem) {
            uint8_t count = p[pos++];
            if (pos + count > rem) break;
            std::cout << "  L" << listIdx << " (" << (int)count << " bones): ";
            for (int i = 0; i < count; i++) {
                std::cout << (int)p[pos + i] << " ";
            }
            std::cout << "\n";
            pos += count;
            listIdx++;
        }
    }
    
    // Dump Section 0 parts
    for (uint32_t p = 0; p < numParts; p++) {
        uint32_t pOff = *reinterpret_cast<const uint32_t*>(buf.data.data() + 0x1C + 4 + p * 4);
        uint32_t pEnd = (p + 1 < numParts) ? *reinterpret_cast<const uint32_t*>(buf.data.data() + 0x1C + 8 + p * 4) : (*reinterpret_cast<const uint32_t*>(buf.data.data() + 8) - 0x1C);
        
        uint32_t size = pEnd - pOff;
        if (size < 32) continue;
        
        std::vector<uint16_t> ops;
        uint32_t c27 = 0, c2e = 0, c2f = 0, c30 = 0, c33 = 0, c3c = 0;
        for (uint32_t o = pOff; o + 2 <= pEnd; o += 32) {
            uint16_t op = *reinterpret_cast<const uint16_t*>(buf.data.data() + 0x1C + o);
            ops.push_back(op);
            if (op == 0x27) c27++;
            else if (op == 0x2e) c2e++;
            else if (op == 0x2f) c2f++;
            else if (op == 0x30) c30++;
            else if (op == 0x33) c33++;
            else if (op == 0x3c) c3c++;
        }
        
        std::cout << "  Part " << p << " size: " << size << " ops: ";
        for (size_t i = 0; i < std::min<size_t>(10, ops.size()); i++) {
            std::cout << std::hex << std::setw(4) << std::setfill('0') << ops[i] << " ";
        }
        std::cout << std::dec << " | 0x27: " << c27 << " 0x2E: " << c2e << " 0x2F: " << c2f << " 0x30: " << c30 << " 0x33: " << c33 << " 0x3C: " << c3c << "\n";
    }
}

int main() {
    DW3RE_ResourceManager rm;
    rm.RegisterProvider(CreateDW3ResourceProvider());
    DumpResource(rm, 1622); // Zhao Yun
    DumpResource(rm, 1626); // Guan Yu
    DumpResource(rm, 1630); // Zhang Fei
    DumpResource(rm, 1670); // Lu Bu
    return 0;
}
