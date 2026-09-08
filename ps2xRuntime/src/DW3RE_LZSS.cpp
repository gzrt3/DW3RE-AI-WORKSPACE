#include "DW3RE_LZSS.h"
#include <cstring>

struct WindowConfig {
    uint32_t win_size;
    uint32_t offset_mask;
    uint32_t offset_shift;
};

static const WindowConfig g_configs[4] = {
    { 1024, 0x3FF,  10 },
    { 2048, 0x7FF,  11 },
    { 4096, 0xFFF,  12 },
    { 8192, 0x1FFF, 13 }
};

bool DW3RE_LZSS::IsCompressed(const uint8_t* src, size_t src_size) {
    if (src == nullptr || src_size < 32) return false;
    uint32_t c_type = *(reinterpret_cast<const uint32_t*>(src + 0));
    uint32_t uncomp_sz = *(reinterpret_cast<const uint32_t*>(src + 4));
    uint32_t match_off = *(reinterpret_cast<const uint32_t*>(src + 8));
    uint32_t lit_off = *(reinterpret_cast<const uint32_t*>(src + 12));

    if (c_type > 3) return false;
    if (uncomp_sz <= 0x100 || uncomp_sz > 0x4000000) return false;
    if (match_off <= 16 || match_off >= lit_off || lit_off >= src_size) return false;

    uint64_t ctrl0 = *(reinterpret_cast<const uint64_t*>(src + 16));
    if (ctrl0 == 0 || ctrl0 == 0xFFFFFFFFFFFFFFFFULL) return false;

    return true;
}

bool DW3RE_LZSS::Decompress(const uint8_t* src, size_t src_size, std::vector<uint8_t>& out_data) {
    if (src == nullptr || src_size < 16) return false;

    uint32_t c_type = *(reinterpret_cast<const uint32_t*>(src + 0));
    uint32_t uncomp_sz = *(reinterpret_cast<const uint32_t*>(src + 4));
    uint32_t match_off = *(reinterpret_cast<const uint32_t*>(src + 8));
    uint32_t lit_off = *(reinterpret_cast<const uint32_t*>(src + 12));

    if (c_type > 3) return false;
    if (uncomp_sz == 0 || uncomp_sz > 0x10000000) return false;

    const WindowConfig& cfg = g_configs[c_type];
    out_data.clear();
    out_data.reserve(uncomp_sz);

    size_t bit_ptr = 16;
    size_t match_ptr = match_off & ~3ULL;
    size_t lit_ptr = lit_off & ~3ULL;

    uint64_t t1 = 0;
    uint64_t curr_word = 0;

    while (out_data.size() < uncomp_sz) {
        t1 >>= 1;
        if (t1 == 0) {
            if (bit_ptr + 8 > src_size) break;
            curr_word = *(reinterpret_cast<const uint64_t*>(src + bit_ptr));
            bit_ptr += 8;
            t1 = 0x8000000000000000ULL;
        }

        bool is_lit = (curr_word & t1) != 0;
        if (is_lit) {
            if (lit_ptr >= src_size) break;
            out_data.push_back(src[lit_ptr]);
            lit_ptr++;
        } else {
            if (match_ptr + 2 > src_size) break;
            uint16_t token = *(reinterpret_cast<const uint16_t*>(src + match_ptr));
            match_ptr += 2;

            uint32_t offset_val = token & cfg.offset_mask;
            if (offset_val == 0) break; // End token / invalid
            uint32_t length_val = (token >> cfg.offset_shift) + 3;

            size_t t3 = out_data.size();
            size_t a0_rem = t3 & cfg.offset_mask;
            int64_t src_pos = 0;
            if (a0_rem < offset_val) {
                src_pos = static_cast<int64_t>(t3 & ~static_cast<size_t>(cfg.offset_mask)) - cfg.win_size + offset_val - 1;
            } else {
                src_pos = static_cast<int64_t>(t3 & ~static_cast<size_t>(cfg.offset_mask)) + offset_val - 1;
            }

            for (uint32_t i = 0; i < length_val; ++i) {
                if (out_data.size() >= uncomp_sz) break;
                if (src_pos >= 0 && static_cast<size_t>(src_pos) < out_data.size()) {
                    out_data.push_back(out_data[src_pos]);
                } else {
                    out_data.push_back(0);
                }
                src_pos++;
            }
        }
    }

    return (out_data.size() == uncomp_sz);
}
