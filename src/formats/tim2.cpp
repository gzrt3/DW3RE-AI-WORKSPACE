#include <algorithm>
#include <array>
#include <limits>
#include <stdexcept>

#include "fate/formats/tim2.hpp"

namespace fate::formats::tim2 {
namespace {

template <typename T>
[[nodiscard]] T read_little_endian(std::span<const std::byte> bytes, std::size_t offset) {
    if (offset > bytes.size() || sizeof(T) > bytes.size() - offset) {
        throw std::runtime_error("TIM2 header is truncated");
    }
    std::uint64_t value{};
    for (std::size_t index = 0; index < sizeof(T); ++index) {
        value |= static_cast<std::uint64_t>(std::to_integer<unsigned int>(bytes[offset + index])) << (index * 8U);
    }
    return static_cast<T>(value);
}

[[nodiscard]] std::uint8_t read_u8(std::span<const std::byte> bytes, std::size_t offset) {
    if (offset >= bytes.size()) {
        throw std::runtime_error("TIM2 pixel data is truncated");
    }
    return std::to_integer<std::uint8_t>(bytes[offset]);
}

[[nodiscard]] std::uint8_t scale_5_to_8(std::uint16_t value) noexcept {
    return static_cast<std::uint8_t>((static_cast<std::uint32_t>(value) * 255U + 15U) / 31U);
}

[[nodiscard]] std::size_t psmt8_byte_offset(std::uint32_t x, std::uint32_t y, std::uint32_t width) {
    const std::uint32_t block = (y & ~15U) * width + (x & ~15U) * 2U;
    const std::uint32_t swap = (((y + 2U) >> 2U) & 1U) * 4U;
    const std::uint32_t position_y = ((((y & ~3U) >> 1U) + (y & 1U)) & 7U);
    const std::uint32_t column = position_y * width * 2U + (((x + swap) & 7U) * 4U);
    const std::uint32_t byte_number = ((y >> 1U) & 1U) + ((x >> 2U) & 2U);
    return static_cast<std::size_t>(block) + column + byte_number;
}

[[nodiscard]] std::size_t psmt4_byte_offset(std::uint32_t x, std::uint32_t y, std::uint32_t width) {
    constexpr std::array<std::array<std::uint8_t, 4>, 8> block_table{{
        {{0, 2, 8, 10}}, {{1, 3, 9, 11}}, {{4, 6, 12, 14}}, {{5, 7, 13, 15}},
        {{16, 18, 24, 26}}, {{17, 19, 25, 27}}, {{20, 22, 28, 30}}, {{21, 23, 29, 31}}
    }};
    constexpr std::array<std::array<std::uint8_t, 8>, 4> column_table{{
        {{0, 1, 4, 5, 16, 17, 20, 21}}, {{2, 3, 6, 7, 18, 19, 22, 23}},
        {{8, 9, 12, 13, 24, 25, 28, 29}}, {{10, 11, 14, 15, 26, 27, 30, 31}}
    }};
    const std::uint32_t pages_per_row = (width + 127U) / 128U;
    const std::uint32_t page = x / 128U + (y / 128U) * pages_per_row;
    const std::uint32_t local_x = x % 128U;
    const std::uint32_t local_y = y % 128U;
    const std::uint32_t block = block_table[local_y / 16U][local_x / 32U];
    const std::uint32_t column = (local_y % 16U) / 4U * 4U + (local_x % 32U) / 8U;
    const std::uint32_t within = column_table[local_y % 4U][local_x % 8U];
    return static_cast<std::size_t>(page) * 8192U + static_cast<std::size_t>(block) * 256U +
        static_cast<std::size_t>(column) * 16U + within / 2U;
}

[[nodiscard]] std::uint8_t psmt4_nibble(std::uint32_t x, std::uint32_t y) {
    constexpr std::array<std::array<std::uint8_t, 8>, 4> column_table{{
        {{0, 1, 4, 5, 16, 17, 20, 21}}, {{2, 3, 6, 7, 18, 19, 22, 23}},
        {{8, 9, 12, 13, 24, 25, 28, 29}}, {{10, 11, 14, 15, 26, 27, 30, 31}}
    }};
    return static_cast<std::uint8_t>(column_table[y % 4U][x % 8U] & 1U);
}

[[nodiscard]] std::size_t psmct32_byte_offset(std::uint32_t x, std::uint32_t y, std::uint32_t width) {
    constexpr std::array<std::array<std::uint8_t, 8>, 4> block_table{{
        {{0, 1, 4, 5, 16, 17, 20, 21}}, {{2, 3, 6, 7, 18, 19, 22, 23}},
        {{8, 9, 12, 13, 24, 25, 28, 29}}, {{10, 11, 14, 15, 26, 27, 30, 31}}
    }};
    constexpr std::array<std::array<std::uint8_t, 8>, 8> column_table{{
        {{0, 1, 4, 5, 16, 17, 20, 21}}, {{2, 3, 6, 7, 18, 19, 22, 23}},
        {{8, 9, 12, 13, 24, 25, 28, 29}}, {{10, 11, 14, 15, 26, 27, 30, 31}},
        {{32, 33, 36, 37, 48, 49, 52, 53}}, {{34, 35, 38, 39, 50, 51, 54, 55}},
        {{40, 41, 44, 45, 56, 57, 60, 61}}, {{42, 43, 46, 47, 58, 59, 62, 63}}
    }};
    const std::uint32_t pages_per_row = (width + 63U) / 64U;
    const std::uint32_t page = x / 64U + (y / 32U) * pages_per_row;
    const std::uint32_t local_x = x % 64U;
    const std::uint32_t local_y = y % 32U;
    const std::uint32_t block = block_table[local_y / 8U][local_x / 8U];
    const std::uint32_t column = column_table[local_y % 8U][local_x % 8U];
    return static_cast<std::size_t>(page) * 8192U + static_cast<std::size_t>(block) * 256U +
        static_cast<std::size_t>(column) * 4U;
}

[[nodiscard]] std::size_t psmct16_byte_offset(std::uint32_t x, std::uint32_t y, std::uint32_t width) {
    constexpr std::array<std::array<std::uint8_t, 4>, 8> block_table{{
        {{0, 2, 8, 10}}, {{1, 3, 9, 11}}, {{4, 6, 12, 14}}, {{5, 7, 13, 15}},
        {{16, 18, 24, 26}}, {{17, 19, 25, 27}}, {{20, 22, 28, 30}}, {{21, 23, 29, 31}}
    }};
    constexpr std::array<std::array<std::uint8_t, 8>, 2> column_table{{
        {{0, 2, 8, 10, 1, 3, 9, 11}}, {{4, 6, 12, 14, 5, 7, 13, 15}}
    }};
    const std::uint32_t pages_per_row = (width + 63U) / 64U;
    const std::uint32_t page = x / 64U + (y / 64U) * pages_per_row;
    const std::uint32_t local_x = x % 64U;
    const std::uint32_t local_y = y % 64U;
    const std::uint32_t block = block_table[local_y / 8U][local_x / 16U];
    const std::uint32_t column = (local_y % 8U) / 2U * 2U + (local_x % 16U) / 8U;
    const std::uint32_t within = column_table[local_y % 2U][local_x % 8U];
    return static_cast<std::size_t>(page) * 8192U + static_cast<std::size_t>(block) * 256U +
        static_cast<std::size_t>(column) * 32U + static_cast<std::size_t>(within) * 2U;
}

struct Rgba {
    std::uint8_t red{};
    std::uint8_t green{};
    std::uint8_t blue{};
    std::uint8_t alpha{};
};

[[nodiscard]] Rgba read_palette_color(
    std::span<const std::byte> frame,
    std::size_t palette_offset,
    std::size_t entry,
    std::uint8_t storage_format) {
    if (storage_format == 0U) {
        const std::size_t offset = palette_offset + entry * 4U;
        return Rgba{read_u8(frame, offset), read_u8(frame, offset + 1U),
            read_u8(frame, offset + 2U), read_u8(frame, offset + 3U)};
    }
    if (storage_format == 2U) {
        const std::uint16_t value = read_little_endian<std::uint16_t>(frame, palette_offset + entry * 2U);
        return Rgba{
            scale_5_to_8(value & 0x1fU), scale_5_to_8((value >> 5U) & 0x1fU),
            scale_5_to_8((value >> 10U) & 0x1fU),
            static_cast<std::uint8_t>((value & 0x8000U) != 0U ? 0x80U : 0U)};
    }
    throw std::runtime_error("Unsupported TIM2 CLUT storage format");
}

void store_pixel(DecodedImage& image, std::size_t index, const Rgba& color,
                 std::uint8_t raw_alpha, bool alpha_enabled) {
    const std::size_t offset = index * 4U;
    image.rgba[offset] = color.red;
    image.rgba[offset + 1U] = color.green;
    image.rgba[offset + 2U] = color.blue;
    image.rgba[offset + 3U] = alpha_enabled ? scale_gs_alpha(raw_alpha) : 0xffU;
    image.raw_alpha[index] = raw_alpha;
    ++image.raw_alpha_histogram[raw_alpha];
    image.raw_alpha_min = std::min(image.raw_alpha_min, raw_alpha);
    image.raw_alpha_max = std::max(image.raw_alpha_max, raw_alpha);
}

}

std::uint64_t PictureHeader::declared_extent() const noexcept {
    return static_cast<std::uint64_t>(file_header_size) + total_size;
}

const char* PictureHeader::pixel_format_name() const noexcept {
    if (image_type == 4U) {
        return "PSMT4";
    }
    if (image_type == 5U) {
        return "PSMT8";
    }
    return "OTHER";
}

std::uint8_t PictureHeader::clut_storage_format() const noexcept {
    return static_cast<std::uint8_t>((gs_tex0 >> 51U) & 0x0fU);
}

bool PictureHeader::uses_csm1() const noexcept {
    return ((gs_tex0 >> 55U) & 1U) == 0U;
}

std::uint8_t PictureHeader::clut_entry_offset() const noexcept {
    return static_cast<std::uint8_t>((gs_tex0 >> 56U) & 0x1fU);
}

bool PictureHeader::uses_texture_alpha() const noexcept {
    return ((gs_tex0 >> 34U) & 1U) != 0U;
}

std::uint32_t PictureHeader::buffer_width() const noexcept {
    const std::uint32_t units = static_cast<std::uint32_t>((gs_tex0 >> 14U) & 0x3fU);
    return units == 0U ? width : units * 64U;
}

Header parse(std::span<const std::byte> bytes) {
    if (bytes.size() < file_header_size + picture_header_size ||
        std::to_integer<unsigned int>(bytes[0]) != static_cast<unsigned int>('T') ||
        std::to_integer<unsigned int>(bytes[1]) != static_cast<unsigned int>('I') ||
        std::to_integer<unsigned int>(bytes[2]) != static_cast<unsigned int>('M') ||
        std::to_integer<unsigned int>(bytes[3]) != static_cast<unsigned int>('2')) {
        throw std::runtime_error("Input does not contain a complete TIM2 header");
    }

    Header header;
    header.file.version = std::to_integer<std::uint8_t>(bytes[4]);
    header.file.alignment_format = std::to_integer<std::uint8_t>(bytes[5]);
    header.file.image_count = read_little_endian<std::uint16_t>(bytes, 6);
    header.file.reserved = read_little_endian<std::uint64_t>(bytes, 8);
    if (header.file.version != 4U || header.file.alignment_format > 1U || header.file.image_count == 0U) {
        throw std::runtime_error("Unsupported or invalid TIM2 file header");
    }

    constexpr std::size_t picture_offset = file_header_size;
    PictureHeader& picture = header.picture;
    picture.total_size = read_little_endian<std::uint32_t>(bytes, picture_offset);
    picture.clut_size = read_little_endian<std::uint32_t>(bytes, picture_offset + 4);
    picture.image_size = read_little_endian<std::uint32_t>(bytes, picture_offset + 8);
    picture.header_size = read_little_endian<std::uint16_t>(bytes, picture_offset + 12);
    picture.clut_colors = read_little_endian<std::uint16_t>(bytes, picture_offset + 14);
    picture.picture_format = std::to_integer<std::uint8_t>(bytes[picture_offset + 16]);
    picture.mipmap_count = std::to_integer<std::uint8_t>(bytes[picture_offset + 17]);
    picture.clut_type = std::to_integer<std::uint8_t>(bytes[picture_offset + 18]);
    picture.image_type = std::to_integer<std::uint8_t>(bytes[picture_offset + 19]);
    picture.width = read_little_endian<std::uint16_t>(bytes, picture_offset + 20);
    picture.height = read_little_endian<std::uint16_t>(bytes, picture_offset + 22);
    picture.gs_tex0 = read_little_endian<std::uint64_t>(bytes, picture_offset + 24);
    picture.gs_tex1 = read_little_endian<std::uint64_t>(bytes, picture_offset + 32);
    picture.gs_register_mask = read_little_endian<std::uint32_t>(bytes, picture_offset + 40);
    picture.gs_clut = read_little_endian<std::uint32_t>(bytes, picture_offset + 44);

    const std::uint64_t minimum_picture_size =
        static_cast<std::uint64_t>(picture.header_size) + picture.clut_size + picture.image_size;
    if (picture.header_size < picture_header_size || minimum_picture_size > picture.total_size) {
        throw std::runtime_error("TIM2 picture sizes are inconsistent or exceed the supplied payload");
    }
    return header;
}

std::uint8_t scale_gs_alpha(std::uint8_t raw_alpha) noexcept {
    const std::uint32_t bounded = std::min<std::uint32_t>(raw_alpha, 0x80U);
    return static_cast<std::uint8_t>((bounded * 255U + 64U) / 128U);
}

std::uint16_t csm1_psmt8_palette_index(std::uint16_t index) noexcept {
    const std::uint16_t position = index & 0x1fU;
    if (position >= 8U && position <= 15U) {
        return static_cast<std::uint16_t>(index + 8U);
    }
    if (position >= 16U && position <= 23U) {
        return static_cast<std::uint16_t>(index - 8U);
    }
    return index;
}

FrameSequence discover_sector_frames(std::span<const std::byte> payload) {
    const Header first = parse(payload);
    if (first.picture.declared_extent() > payload.size()) {
        throw std::runtime_error("TIM2 picture exceeds resource payload");
    }
    FrameSequence single;
    single.frame_stride = first.picture.declared_extent();
    single.frames.push_back(FrameLocation{0, first.picture.declared_extent(), 0, first});
    if (first.file.image_count != 1U || payload.size() <= first.picture.declared_extent()) {
        return single;
    }

    for (std::size_t candidate_offset = static_cast<std::size_t>(first.picture.declared_extent());
         candidate_offset + file_header_size + picture_header_size <= payload.size();
         ++candidate_offset) {
        if (std::to_integer<unsigned int>(payload[candidate_offset]) != static_cast<unsigned int>('T') ||
            std::to_integer<unsigned int>(payload[candidate_offset + 1U]) != static_cast<unsigned int>('I') ||
            std::to_integer<unsigned int>(payload[candidate_offset + 2U]) != static_cast<unsigned int>('M') ||
            std::to_integer<unsigned int>(payload[candidate_offset + 3U]) != static_cast<unsigned int>('2')) {
            continue;
        }
        Header candidate;
        try {
            candidate = parse(payload.subspan(candidate_offset));
        } catch (const std::exception&) {
            continue;
        }
        const std::uint64_t stride = candidate_offset;
        if (stride <= first.picture.declared_extent() || stride % 2048U != 0U ||
            payload.size() % stride != 0U || candidate.file.image_count != 1U ||
            candidate.picture.total_size != first.picture.total_size ||
            candidate.picture.clut_size != first.picture.clut_size ||
            candidate.picture.image_size != first.picture.image_size ||
            candidate.picture.width != first.picture.width ||
            candidate.picture.height != first.picture.height ||
            candidate.picture.image_type != first.picture.image_type) {
            continue;
        }
        const std::uint64_t frame_count = payload.size() / stride;
        if (frame_count < 2U || frame_count > 4096U) {
            continue;
        }

        FrameSequence sequence;
        sequence.sector_array = true;
        sequence.frame_stride = stride;
        sequence.frames.reserve(static_cast<std::size_t>(frame_count));
        bool valid = true;
        for (std::uint64_t frame_index = 0; frame_index < frame_count; ++frame_index) {
            const std::uint64_t frame_offset = frame_index * stride;
            Header header;
            try {
                header = parse(payload.subspan(static_cast<std::size_t>(frame_offset)));
            } catch (const std::exception&) {
                valid = false;
                break;
            }
            const std::uint64_t extent = header.picture.declared_extent();
            if (extent > stride || header.file.image_count != 1U ||
                header.picture.total_size != first.picture.total_size ||
                header.picture.width != first.picture.width || header.picture.height != first.picture.height ||
                header.picture.image_type != first.picture.image_type) {
                valid = false;
                break;
            }
            const std::uint64_t padding_size = stride - extent;
            const std::size_t padding_offset = static_cast<std::size_t>(frame_offset + extent);
            for (std::size_t byte = 0; byte < padding_size; ++byte) {
                if (payload[padding_offset + byte] != std::byte{0}) {
                    valid = false;
                    break;
                }
            }
            if (!valid) {
                break;
            }
            sequence.frames.push_back(FrameLocation{frame_offset, extent, padding_size, header});
        }
        if (valid && sequence.frames.size() == frame_count) {
            return sequence;
        }
    }
    return single;
}

DecodedImage decode_rgba8888(std::span<const std::byte> frame) {
    const Header header = parse(frame);
    const PictureHeader& picture = header.picture;
    const std::uint32_t width = picture.width;
    const std::uint32_t height = picture.height;
    if (width == 0U || height == 0U || picture.declared_extent() > frame.size()) {
        throw std::runtime_error("TIM2 frame dimensions or extent are invalid");
    }
    const std::uint64_t pixel_count = static_cast<std::uint64_t>(width) * height;
    if (pixel_count > std::numeric_limits<std::size_t>::max() / 4U) {
        throw std::runtime_error("TIM2 image dimensions exceed host memory limits");
    }
    const std::size_t image_offset = file_header_size + picture.header_size;
    if (image_offset > frame.size() || picture.image_size > frame.size() - image_offset) {
        throw std::runtime_error("TIM2 pixel data exceeds frame bounds");
    }
    const auto image_bytes = frame.subspan(image_offset, picture.image_size);

    DecodedImage image;
    image.width = picture.width;
    image.height = picture.height;
    image.image_type = picture.image_type;
    image.clut_type = picture.clut_type;
    image.palette_storage_format = picture.clut_storage_format();
    image.csm1 = picture.uses_csm1() ? 1U : 0U;
    image.clut_entry_offset = picture.clut_entry_offset();
    image.rgba.resize(static_cast<std::size_t>(pixel_count) * 4U);
    image.raw_alpha.resize(static_cast<std::size_t>(pixel_count));
    image.raw_alpha_min = 0xffU;

    const std::uint32_t buffer_width = picture.buffer_width();
    if (buffer_width < width) {
        throw std::runtime_error("GS buffer width is smaller than TIM2 image width");
    }
    const std::uint64_t palette_offset64 = static_cast<std::uint64_t>(image_offset) + picture.image_size;
    if (palette_offset64 > frame.size()) {
        throw std::runtime_error("TIM2 CLUT offset exceeds frame bounds");
    }
    const std::size_t palette_offset = static_cast<std::size_t>(palette_offset64);

    if (picture.image_type == 4U || picture.image_type == 5U) {
        const bool indexed4 = picture.image_type == 4U;
        const std::uint8_t storage_format = picture.clut_storage_format();
        const std::size_t bytes_per_entry = storage_format == 0U ? 4U : 2U;
        if (storage_format != 0U && storage_format != 2U) {
            throw std::runtime_error("TIM2 uses an unsupported indexed-image CLUT format");
        }
        const std::size_t palette_entries = picture.clut_size / bytes_per_entry;
        const std::size_t required_entries = indexed4 ? 16U : 256U;
        if (!picture.uses_csm1() && picture.clut_entry_offset() != 0U) {
            throw std::runtime_error("TIM2 CSM2 requires a zero CLUT entry offset");
        }
        const std::size_t palette_base = picture.uses_csm1()
            ? static_cast<std::size_t>(picture.clut_entry_offset()) * 16U
            : 0U;
        if (picture.clut_size > frame.size() - palette_offset ||
            palette_entries < palette_base + required_entries || picture.clut_colors < required_entries) {
            throw std::runtime_error("TIM2 CLUT does not contain the palette required by the image");
        }
        std::vector<Rgba> palette(required_entries);
        for (std::size_t index = 0; index < required_entries; ++index) {
            palette[index] = read_palette_color(frame, palette_offset, palette_base + index, storage_format);
        }
        for (std::uint32_t y = 0; y < height; ++y) {
            for (std::uint32_t x = 0; x < width; ++x) {
                std::size_t palette_index{};
                if (indexed4) {
                    const std::size_t source = psmt4_byte_offset(x, y, buffer_width);
                    if (source >= image_bytes.size()) {
                        throw std::runtime_error("PSMT4 swizzled pixel lies outside image data");
                    }
                    const std::uint8_t packed = std::to_integer<std::uint8_t>(image_bytes[source]);
                    const std::uint8_t nibble = psmt4_nibble(x, y);
                    const std::uint8_t pixel_index = nibble == 0U
                        ? static_cast<std::uint8_t>(packed & 0x0fU)
                        : static_cast<std::uint8_t>(packed >> 4U);
                    palette_index = pixel_index;
                } else {
                    const std::size_t source = psmt8_byte_offset(x, y, buffer_width);
                    if (source >= image_bytes.size()) {
                        throw std::runtime_error("PSMT8 swizzled pixel lies outside image data");
                    }
                    palette_index = std::to_integer<std::uint8_t>(image_bytes[source]);
                    if (picture.uses_csm1()) {
                        palette_index = csm1_psmt8_palette_index(static_cast<std::uint16_t>(palette_index));
                    }
                }
                const Rgba& color = palette[palette_index];
                store_pixel(image, static_cast<std::size_t>(y) * width + x, color,
                    color.alpha, picture.uses_texture_alpha());
            }
        }
        return image;
    }

    if (picture.image_type != 0U && picture.image_type != 1U && picture.image_type != 2U) {
        throw std::runtime_error("TIM2 direct-color image format is unsupported");
    }
    const bool is_32_bit = picture.image_type == 0U || picture.image_type == 1U;
    const std::size_t bytes_per_pixel = is_32_bit ? 4U : 2U;
    for (std::uint32_t y = 0; y < height; ++y) {
        for (std::uint32_t x = 0; x < width; ++x) {
            const std::size_t source = is_32_bit
                ? psmct32_byte_offset(x, y, buffer_width)
                : psmct16_byte_offset(x, y, buffer_width);
            if (source > image_bytes.size() || bytes_per_pixel > image_bytes.size() - source) {
                throw std::runtime_error("Swizzled direct-color pixel lies outside image data");
            }
            Rgba color;
            if (is_32_bit) {
                color.red = std::to_integer<std::uint8_t>(image_bytes[source]);
                color.green = std::to_integer<std::uint8_t>(image_bytes[source + 1U]);
                color.blue = std::to_integer<std::uint8_t>(image_bytes[source + 2U]);
                color.alpha = picture.image_type == 1U
                    ? 0x80U
                    : std::to_integer<std::uint8_t>(image_bytes[source + 3U]);
            } else {
                const std::uint16_t value = read_little_endian<std::uint16_t>(image_bytes, source);
                color.red = scale_5_to_8(value & 0x1fU);
                color.green = scale_5_to_8((value >> 5U) & 0x1fU);
                color.blue = scale_5_to_8((value >> 10U) & 0x1fU);
                color.alpha = (value & 0x8000U) != 0U ? 0x80U : 0U;
            }
            store_pixel(image, static_cast<std::size_t>(y) * width + x, color,
                color.alpha, picture.image_type != 1U && picture.uses_texture_alpha());
        }
    }
    return image;
}

}