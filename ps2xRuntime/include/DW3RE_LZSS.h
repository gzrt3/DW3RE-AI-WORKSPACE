#pragma once

#include <cstdint>
#include <vector>
#include <cstddef>

class DW3RE_LZSS {
public:
    // Checks if the buffer starts with a valid DW3XL LZSS header
    static bool IsCompressed(const uint8_t* src, size_t src_size);

    // Decompresses the native DW3XL LZSS buffer into out_data
    // Returns true on success, false on truncation or corruption
    static bool Decompress(const uint8_t* src, size_t src_size, std::vector<uint8_t>& out_data);
};
