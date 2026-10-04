#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace fate::formats::tm3 {

inline constexpr std::uint32_t kMagicTm3 = 0x20336D74U; // "tm3 "

struct Header {
    std::uint32_t magic{};
    std::uint32_t primary_width{};
    std::uint32_t primary_height{};
    std::uint32_t primary_qwc{};
    std::uint32_t secondary_count{};
    std::uint32_t secondary_width{};
    std::uint32_t secondary_height{};
    std::uint32_t secondary_stride_qwc{};
};

struct SubPalette {
    std::array<std::uint32_t, 256> colors_rgba8888{};
};

struct SecondaryBank {
    std::uint32_t bank_index{};
    std::uint32_t width{};
    std::uint32_t height{};
    std::vector<SubPalette> subpalettes;
};

struct ModelTm3Slot {
    std::uint64_t tex0_template{};
    std::uint32_t primary_buffer_offset{};
    std::uint16_t primary_qwc{};
    std::uint16_t secondary_count{};
    std::array<std::uint32_t, 18> secondary_bank_offsets{};
    std::array<std::uint32_t, 18> secondary_q1{};
};

struct Tm3View {
    Header header{};
    // Zero‑copy span referencing the original byte buffer for indexed pixels.
    std::span<const std::uint8_t> indexed_pixels;
    std::vector<SecondaryBank> banks;
    ModelTm3Slot slot;
};

struct RgbaImage {
    std::uint32_t width{};
    std::uint32_t height{};
    // Packed as 0xAABBGGRR, matching decode_rgba().
    std::vector<std::uint32_t> pixels;
};

[[nodiscard]] Header parse_header(std::span<const std::byte> bytes);
[[nodiscard]] Tm3View parse_tm3(std::span<const std::byte> bytes);
[[nodiscard]] SubPalette get_subpalette(const Tm3View& tm3, std::size_t bank_index, std::uint32_t cbp_offset);
[[nodiscard]] std::vector<std::uint32_t> decode_rgba(const Tm3View& tm3, std::size_t bank_index, std::uint32_t cbp_offset);
[[nodiscard]] RgbaImage import_bmp(std::span<const std::byte> bytes);
[[nodiscard]] std::vector<std::byte> export_bmp(const RgbaImage& image);

} // namespace fate::formats::tm3
