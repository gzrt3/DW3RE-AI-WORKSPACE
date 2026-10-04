#pragma once

#include <cstddef>
#include <cstdint>
#include <array>
#include <span>
#include <vector>

namespace fate::formats::tim2 {

struct FileHeader {
    std::uint8_t version{};
    std::uint8_t alignment_format{};
    std::uint16_t image_count{};
    std::uint64_t reserved{};
};

struct PictureHeader {
    std::uint32_t total_size{};
    std::uint32_t clut_size{};
    std::uint32_t image_size{};
    std::uint16_t header_size{};
    std::uint16_t clut_colors{};
    std::uint8_t picture_format{};
    std::uint8_t mipmap_count{};
    std::uint8_t clut_type{};
    std::uint8_t image_type{};
    std::uint16_t width{};
    std::uint16_t height{};
    std::uint64_t gs_tex0{};
    std::uint64_t gs_tex1{};
    std::uint32_t gs_register_mask{};
    std::uint32_t gs_clut{};

    [[nodiscard]] std::uint64_t declared_extent() const noexcept;
    [[nodiscard]] const char* pixel_format_name() const noexcept;
    [[nodiscard]] std::uint8_t clut_storage_format() const noexcept;
    [[nodiscard]] bool uses_csm1() const noexcept;
    [[nodiscard]] std::uint8_t clut_entry_offset() const noexcept;
    [[nodiscard]] bool uses_texture_alpha() const noexcept;
    [[nodiscard]] std::uint32_t buffer_width() const noexcept;
};

struct Header {
    FileHeader file;
    PictureHeader picture;
};

struct FrameLocation {
    std::uint64_t resource_offset{};
    std::uint64_t picture_extent{};
    std::uint64_t padding_after{};
    Header header;
};

struct FrameSequence {
    bool sector_array{};
    std::uint64_t frame_stride{};
    std::vector<FrameLocation> frames;
};

struct DecodedImage {
    std::uint16_t width{};
    std::uint16_t height{};
    std::vector<std::uint8_t> rgba;
    std::vector<std::uint8_t> raw_alpha;
    std::array<std::uint64_t, 256> raw_alpha_histogram{};
    std::uint8_t raw_alpha_min{};
    std::uint8_t raw_alpha_max{};
    std::uint8_t image_type{};
    std::uint8_t clut_type{};
    std::uint8_t palette_storage_format{};
    std::uint8_t csm1{};
    std::uint8_t clut_entry_offset{};
};

inline constexpr std::uint32_t file_header_size = 16;
inline constexpr std::uint32_t picture_header_size = 48;

[[nodiscard]] Header parse(std::span<const std::byte> bytes);
[[nodiscard]] FrameSequence discover_sector_frames(std::span<const std::byte> payload);
[[nodiscard]] DecodedImage decode_rgba8888(std::span<const std::byte> frame);
[[nodiscard]] std::uint8_t scale_gs_alpha(std::uint8_t raw_alpha) noexcept;
[[nodiscard]] std::uint16_t csm1_psmt8_palette_index(std::uint16_t index) noexcept;

}