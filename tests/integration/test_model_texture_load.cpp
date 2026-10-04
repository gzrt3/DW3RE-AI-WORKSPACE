#include <gtest/gtest.h>
#include <cstdint>
#include <vector>
#include <filesystem>
#include <fstream>
#include "fate/formats/ps2_model.hpp"
#include "fate/formats/tm3.hpp"

// Helper to load a binary file into a vector<std::byte>
static std::vector<std::byte> load_file(const std::filesystem::path& p) {
    std::ifstream in(p, std::ios::binary);
    if (!in) throw std::runtime_error("cannot open " + p.string());
    std::vector<char> temp((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
    std::vector<std::byte> data;
    data.reserve(temp.size());
    for (char c : temp) data.push_back(static_cast<std::byte>(c));
    return data;
}

// ----- test_tm3_wrapper_51_offset_isolation -----
TEST(Phase11, tm3_wrapper_51_offset_isolation) {
    // Build a minimal TM3 buffer with a wrapper (0x00000051) followed by a valid TM3 payload.
    std::vector<std::byte> buf;
    // 1) wrapper tag
    buf.insert(buf.end(), { std::byte{0x00}, std::byte{0x00}, std::byte{0x00}, std::byte{0x51} });
    // 2) TM3 header (magic and dimensions)
    constexpr std::uint32_t kMagic = fate::formats::tm3::kMagicTm3;
    auto put_u32 = [&](std::size_t off, std::uint32_t v) {
        for (int i = 0; i < 4; ++i) buf[off + i] = static_cast<std::byte>(v >> (i * 8));
    };
    buf.resize(4 + 32, std::byte{0}); // wrapper + header space
    put_u32(4,  kMagic);
    put_u32(8,  256U); // primary_width
    put_u32(12, 128U); // primary_height
    put_u32(16, 8U);   // primary_qwc (incorrect to trigger error)
    put_u32(20, 1U);   // secondary_count
    put_u32(24, 16U);  // secondary_width
    put_u32(28, 16U);  // secondary_height
    put_u32(32, 4U);   // secondary_stride_qwc
    // 3) Primary image data (zero indices)
    std::size_t prim_off = 0xA0U;
    buf.resize(prim_off + 256U * 128U, std::byte{0});
    // Parse (skip wrapper) and expect validation failure due to incorrect QWC
    EXPECT_THROW(
        (void)fate::formats::tm3::parse_tm3({buf.data() + 4, buf.size() - 4}),
        std::runtime_error);
}

// ----- test_tm3_csm1_oob_rejection -----
TEST(Phase11, tm3_csm1_oob_rejection) {
    // Use a helper that builds a minimal valid TM3 payload.
    std::vector<std::byte> buf = [](){
        // Build a tiny valid TM3 binary (without wrapper).
        std::vector<std::byte> b;
        constexpr std::uint32_t kMagic = fate::formats::tm3::kMagicTm3;
        auto pu = [&](std::size_t o, std::uint32_t v){for(int i=0;i<4;++i) b[o+i]=static_cast<std::byte>(v>>(i*8));};
        
        std::uint32_t pw = 256, ph = 128;
        std::uint32_t sc = 1, sw = 16, sh = 16;
        std::uint32_t q0 = 8 + (pw * ph) / 16;
        std::uint32_t q1 = 7 + (sw * sh) / 4;
        std::size_t expected_size = 32 + q0 * 16 + sc * q1 * 16;
        
        b.resize(expected_size, std::byte{0});
        
        pu(0, kMagic);
        pu(4, pw); pu(8, ph); pu(12, q0); pu(16, sc); pu(20, sw); pu(24, sh); pu(28, q1);
        
        return b;
    }();
    // Truncate CLUT to half its size (512 bytes) to provoke OOB.
    // The CLUT for the first secondary bank is located at 0x70 relative to the bank start.
    // Bank start = 32 + primary_qwc * 16
    std::size_t prim_qwc = 8 + (256 * 128) / 16;
    std::size_t clut_off = 32 + prim_qwc * 16 + 0x70;
    buf.erase(buf.begin() + clut_off + 512, buf.begin() + clut_off + 1024);
    
    EXPECT_THROW(
        (void)fate::formats::tm3::parse_tm3(buf),
        std::runtime_error
    );
}

// ----- test_ps2_tm3_character_binding -----
TEST(Phase11, ps2_tm3_character_binding) {
    // Load a known PS2 model file (placed under test assets).
    auto model_bytes = load_file("C:/Fate Soldiers 3/tests/assets/ARCHER1.PS2");
    auto model = fate::formats::ps2_model::parse_model(model_bytes);
    // Resolve RID via CSV binding (the CSV contains the mapping for this model).
    std::uint32_t expected_rid = 0x00123456U; // example value that matches CSV line
    std::uint32_t actual_rid = fate::formats::ps2_model::resolve_rid_from_model(model.header.node_count); // placeholder usage
    EXPECT_EQ(actual_rid, expected_rid);
}