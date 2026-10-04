#include "fate/formats/tm3.hpp"

#include <algorithm>
#include <bit>
#include <limits>
#include <stdexcept>

namespace fate::formats::tm3 {
namespace {

std::uint32_t read_u32(std::span<const std::byte> bytes, std::size_t off) {
    if (off > bytes.size() || bytes.size() - off < 4U) throw std::runtime_error("TM3_OOB: read_u32");
    return static_cast<std::uint32_t>(bytes[off]) |
           (static_cast<std::uint32_t>(bytes[off + 1]) << 8U) |
           (static_cast<std::uint32_t>(bytes[off + 2]) << 16U) |
           (static_cast<std::uint32_t>(bytes[off + 3]) << 24U);
}

std::uint16_t read_u16(std::span<const std::byte> bytes, std::size_t off) {
    if (off > bytes.size() || bytes.size() - off < 2U) throw std::runtime_error("BMP_OOB: read_u16");
    return static_cast<std::uint16_t>(std::to_integer<unsigned>(bytes[off]) |
        (std::to_integer<unsigned>(bytes[off + 1U]) << 8U));
}

void write_u16(std::vector<std::byte>& bytes, std::size_t off, std::uint16_t value) {
    bytes.at(off) = static_cast<std::byte>(value & 0xFFU);
    bytes.at(off + 1U) = static_cast<std::byte>((value >> 8U) & 0xFFU);
}

void write_u32(std::vector<std::byte>& bytes, std::size_t off, std::uint32_t value) {
    for (std::size_t index = 0; index < 4U; ++index) {
        bytes.at(off + index) = static_cast<std::byte>((value >> (index * 8U)) & 0xFFU);
    }
}

void validate_transfer(std::span<const std::byte> bytes, std::size_t block_off,
                       std::uint32_t qwc, std::uint8_t expected_psm,
                       std::uint8_t expected_dbw, const char* label) {
    const std::size_t size = static_cast<std::size_t>(qwc) * 16U;
    if (block_off > bytes.size() || size > bytes.size() - block_off || size < 0x80U) {
        throw std::runtime_error("TM3_INVALID: truncated VIF1/GIF transfer block");
    }
    const auto direct = 0x50000000U | (qwc - 1U);
    if (read_u32(bytes, block_off + 0x0CU) != direct) {
        throw std::runtime_error("TM3_INVALID: DIRECT QWC mismatch");
    }
    const std::uint32_t tag_low = read_u32(bytes, block_off + 0x10U);
    const std::uint32_t tag_high = read_u32(bytes, block_off + 0x14U);
    const std::uint32_t regs = read_u32(bytes, block_off + 0x18U);
    const std::uint32_t expected_nloop = (expected_psm == 0x13U) ? 5U : 4U;
    if ((tag_low & 0x7FFFU) != expected_nloop ||
        ((tag_high >> 26U) & 0x3U) != 0U ||
        ((tag_high >> 28U) & 0xFU) != 1U || (regs & 0xFFU) != 0xEU) {
        throw std::runtime_error("TM3_INVALID: unexpected GIF PACKED A+D tag");
    }

    const std::size_t bitblt = block_off + ((expected_psm == 0x13U) ? 0x30U : 0x20U);
    const std::uint32_t data = read_u32(bytes, bitblt + 4U);
    const std::uint32_t address = read_u32(bytes, bitblt + 8U);
    const auto actual_psm = static_cast<std::uint8_t>((data >> 24U) & 0x3FU);
    const auto actual_dbw = static_cast<std::uint8_t>((data >> 16U) & 0x3FU);
    constexpr std::uint32_t expected_address = 0x50U;
    if ((address & 0xFFU) != expected_address || actual_psm != expected_psm || actual_dbw != expected_dbw) {
        throw std::runtime_error(std::string("TM3_INVALID: ") + label + " BITBLTBUF PSM/DBW mismatch");
    }
}

} // namespace

Header parse_header(std::span<const std::byte> bytes) {
    if (bytes.size() < 32U) throw std::runtime_error("TM3_INVALID: buffer too small for header");
    Header h{};
    h.magic = read_u32(bytes, 0);
    if (h.magic != kMagicTm3) throw std::runtime_error("TM3_INVALID: bad magic (expected 'tm3 ')");
    h.primary_width = read_u32(bytes, 4);
    h.primary_height = read_u32(bytes, 8);
    h.primary_qwc = read_u32(bytes, 12);
    h.secondary_count = read_u32(bytes, 16);
    h.secondary_width = read_u32(bytes, 20);
    h.secondary_height = read_u32(bytes, 24);
    h.secondary_stride_qwc = read_u32(bytes, 28);

    if (h.primary_width != 256U ||
        (h.primary_height != 128U && h.primary_height != 192U && h.primary_height != 256U && h.primary_height != 384U)) {
        throw std::runtime_error("TM3_INVALID: unexpected primary dimensions");
    }
    if (h.secondary_count != 1U && h.secondary_count != 2U && h.secondary_count != 10U &&
        h.secondary_count != 16U && h.secondary_count != 18U) {
        throw std::runtime_error("TM3_INVALID: unsupported secondary bank count");
    }
    if (!((h.secondary_width == 16U && h.secondary_height == 16U) ||
          (h.secondary_width == 32U && h.secondary_height == 32U))) {
        throw std::runtime_error("TM3_INVALID: unsupported secondary dimensions");
    }
    const std::uint64_t expected_q0 = 8ULL + static_cast<std::uint64_t>(h.primary_width) * h.primary_height / 16ULL;
    const std::uint64_t expected_q1 = 7ULL + static_cast<std::uint64_t>(h.secondary_width) * h.secondary_height / 4ULL;
    if (h.primary_qwc != expected_q0 || h.secondary_stride_qwc != expected_q1) {
        throw std::runtime_error("TM3_INVALID: transfer QWC does not match dimensions");
    }
    const std::uint64_t expected_size = 32ULL + static_cast<std::uint64_t>(h.primary_qwc) * 16ULL +
                                        static_cast<std::uint64_t>(h.secondary_count) * static_cast<std::uint64_t>(h.secondary_stride_qwc) * 16ULL;
    if (bytes.size() != expected_size) {
        throw std::runtime_error("TM3_INVALID: payload size does not match 32 + 16*q0 + C*16*q1");
    }
    return h;
}

Tm3View parse_tm3(std::span<const std::byte> bytes) {
    Tm3View v{};
    v.header = parse_header(bytes);

    const std::size_t prim_img_off = 0xA0U;
    const std::size_t prim_img_size = static_cast<std::size_t>(v.header.primary_width) * static_cast<std::size_t>(v.header.primary_height);
    if (prim_img_off + prim_img_size > bytes.size()) {
        throw std::runtime_error("TM3_OOB: primary image data exceeds buffer");
    }
    validate_transfer(bytes, 0x20U, v.header.primary_qwc, 0x13U, 4U, "primary");
    // Create a zero-copy span over the indexed pixel data
    v.indexed_pixels = std::span<const std::uint8_t>(reinterpret_cast<const std::uint8_t*>(bytes.data() + prim_img_off), prim_img_size);

    v.slot.primary_buffer_offset = 0x20U;
    v.slot.primary_qwc = static_cast<std::uint16_t>(v.header.primary_qwc);
    v.slot.secondary_count = static_cast<std::uint16_t>(v.header.secondary_count);

    v.banks.reserve(v.header.secondary_count);
    for (std::uint32_t j = 0; j < v.header.secondary_count; ++j) {
        const std::size_t b_off = 32U + static_cast<std::size_t>(v.header.primary_qwc) * 16U +
                                  static_cast<std::size_t>(j) * static_cast<std::size_t>(v.header.secondary_stride_qwc) * 16U;
        validate_transfer(bytes, b_off, v.header.secondary_stride_qwc, 0x00U, 1U, "secondary");
        v.slot.secondary_bank_offsets[j] = static_cast<std::uint32_t>(b_off);
        v.slot.secondary_q1[j] = v.header.secondary_stride_qwc;

        SecondaryBank bank{};
        bank.bank_index = j;
        bank.width = v.header.secondary_width;
        bank.height = v.header.secondary_height;

        const std::size_t clut_data_off = b_off + 0x70U;
        const std::size_t num_quadrants = (bank.width == 32U && bank.height == 32U) ? 4U : 1U;
        bank.subpalettes.resize(num_quadrants);

        for (std::size_t q = 0; q < num_quadrants; ++q) {
            const std::uint32_t qx = (q == 1 || q == 3) ? 16U : 0U;
            const std::uint32_t qy = (q == 2 || q == 3) ? 16U : 0U;
            std::array<std::uint32_t, 256> raw256{};
            for (std::uint32_t y = 0; y < 16U; ++y) {
                for (std::uint32_t x = 0; x < 16U; ++x) {
                    const std::size_t p_off = clut_data_off + ((qy + y) * bank.width + (qx + x)) * 4U;
                    const std::uint32_t r = static_cast<std::uint32_t>(bytes[p_off]);
                    const std::uint32_t g = static_cast<std::uint32_t>(bytes[p_off + 1]);
                    const std::uint32_t b = static_cast<std::uint32_t>(bytes[p_off + 2]);
                    const std::uint32_t a = static_cast<std::uint32_t>(bytes[p_off + 3]);
                    raw256[y * 16U + x] = (a << 24U) | (b << 16U) | (g << 8U) | r;
                }
            }
            for (std::uint32_t i = 0; i < 256U; ++i) {
                const std::uint32_t src_idx = (i & 0xE7U) | ((i & 0x10U) >> 1U) | ((i & 0x08U) << 1U);
                const std::uint32_t c = raw256[src_idx];
                const std::uint32_t r = c & 0xFFU;
                const std::uint32_t g = (c >> 8U) & 0xFFU;
                const std::uint32_t b = (c >> 16U) & 0xFFU;
                const std::uint32_t a = (c >> 24U) & 0xFFU;
                const std::uint32_t alpha = std::min(255U, a * 2U);
                bank.subpalettes[q].colors_rgba8888[i] = (alpha << 24U) | (b << 16U) | (g << 8U) | r;
            }
        }
        v.banks.push_back(std::move(bank));
    }
    return v;
}

SubPalette get_subpalette(const Tm3View& tm3, std::size_t bank_index, std::uint32_t cbp_offset) {
    if (bank_index >= tm3.banks.size()) throw std::out_of_range("TM3_OOB: bank_index out of range");
    const auto& b = tm3.banks[bank_index];
    if (cbp_offset != 0U && cbp_offset != 4U && cbp_offset != 8U && cbp_offset != 12U) {
        throw std::invalid_argument("TM3_INVALID: unsupported subpalette CBP offset");
    }
    const std::size_t q = static_cast<std::size_t>(cbp_offset / 4U);
    if (q >= b.subpalettes.size()) throw std::out_of_range("TM3_INVALID: CBP quadrant is not present in this bank");
    return b.subpalettes[q];
}

std::vector<std::uint32_t> decode_rgba(const Tm3View& tm3, std::size_t bank_index, std::uint32_t cbp_offset) {
    const auto pal = get_subpalette(tm3, bank_index, cbp_offset);
    std::vector<std::uint32_t> rgba(tm3.indexed_pixels.size());
    for (std::size_t i = 0; i < tm3.indexed_pixels.size(); ++i) {
        rgba[i] = pal.colors_rgba8888[tm3.indexed_pixels[i]];
    }
    return rgba;
}

RgbaImage import_bmp(std::span<const std::byte> bytes) {
    if (bytes.size() < 54U || bytes[0] != std::byte{'B'} || bytes[1] != std::byte{'M'}) {
        throw std::runtime_error("BMP_INVALID: missing BITMAPINFOHEADER signature");
    }
    const std::uint32_t declared_file_size = read_u32(bytes, 2U);
    const std::uint32_t pixel_offset = read_u32(bytes, 10U);
    const std::uint32_t dib_size = read_u32(bytes, 14U);
    if (dib_size < 40U || static_cast<std::uint64_t>(14U) + dib_size > bytes.size()) {
        throw std::runtime_error("BMP_INVALID: unsupported or truncated DIB header");
    }
    const std::int32_t signed_width = std::bit_cast<std::int32_t>(read_u32(bytes, 18U));
    const std::int32_t signed_height = std::bit_cast<std::int32_t>(read_u32(bytes, 22U));
    const std::uint16_t planes = read_u16(bytes, 26U);
    const std::uint16_t bits_per_pixel = read_u16(bytes, 28U);
    const std::uint32_t compression = read_u32(bytes, 30U);
    if (signed_width <= 0 || signed_height == 0 || signed_height == std::numeric_limits<std::int32_t>::min() ||
        planes != 1U || (bits_per_pixel != 24U && bits_per_pixel != 32U) || compression != 0U) {
        throw std::runtime_error("BMP_INVALID: expected uncompressed 24-bit or 32-bit RGB");
    }
    const auto width = static_cast<std::uint32_t>(signed_width);
    const auto height = static_cast<std::uint32_t>(signed_height < 0 ? -signed_height : signed_height);
    constexpr std::uint64_t max_pixels = 64ULL * 1024ULL * 1024ULL;
    const std::uint64_t pixel_count = static_cast<std::uint64_t>(width) * height;
    if (width > 16384U || height > 16384U || pixel_count > max_pixels) {
        throw std::runtime_error("BMP_INVALID: image dimensions exceed limits");
    }
    const std::uint64_t bytes_per_pixel = bits_per_pixel / 8U;
    const std::uint64_t unaligned_row = static_cast<std::uint64_t>(width) * bytes_per_pixel;
    const std::uint64_t row_stride = (unaligned_row + 3U) & ~3ULL;
    const std::uint64_t pixel_bytes = row_stride * height;
    const std::uint64_t required_end = static_cast<std::uint64_t>(pixel_offset) + pixel_bytes;
    if (pixel_offset < 14U + dib_size || required_end > bytes.size() ||
        (declared_file_size != 0U && (declared_file_size > bytes.size() || declared_file_size < required_end))) {
        throw std::runtime_error("BMP_INVALID: pixel array exceeds file bounds");
    }

    bool all_alpha_zero = bits_per_pixel == 32U;
    if (all_alpha_zero) {
        for (std::uint32_t row = 0; row < height && all_alpha_zero; ++row) {
            const std::uint64_t row_offset = static_cast<std::uint64_t>(pixel_offset) + row * row_stride;
            for (std::uint32_t x = 0; x < width; ++x) {
                if (bytes[static_cast<std::size_t>(row_offset + static_cast<std::uint64_t>(x) * 4U + 3U)] != std::byte{}) {
                    all_alpha_zero = false;
                    break;
                }
            }
        }
    }

    RgbaImage image{width, height, std::vector<std::uint32_t>(static_cast<std::size_t>(pixel_count))};
    for (std::uint32_t y = 0; y < height; ++y) {
        const std::uint32_t stored_y = signed_height > 0 ? height - 1U - y : y;
        const std::uint64_t row_offset = static_cast<std::uint64_t>(pixel_offset) + stored_y * row_stride;
        for (std::uint32_t x = 0; x < width; ++x) {
            const std::uint64_t pixel_offset_in_row = row_offset + static_cast<std::uint64_t>(x) * bytes_per_pixel;
            const std::size_t pixel_at = static_cast<std::size_t>(pixel_offset_in_row);
            const std::uint32_t blue = std::to_integer<std::uint32_t>(bytes[pixel_at]);
            const std::uint32_t green = std::to_integer<std::uint32_t>(bytes[pixel_at + 1U]);
            const std::uint32_t red = std::to_integer<std::uint32_t>(bytes[pixel_at + 2U]);
            const std::uint32_t alpha = bits_per_pixel == 24U || all_alpha_zero
                ? 255U : std::to_integer<std::uint32_t>(bytes[pixel_at + 3U]);
            image.pixels[static_cast<std::size_t>(y) * width + x] =
                (alpha << 24U) | (blue << 16U) | (green << 8U) | red;
        }
    }
    return image;
}

std::vector<std::byte> export_bmp(const RgbaImage& image) {
    constexpr std::uint64_t header_size = 54U;
    constexpr std::uint64_t max_pixels = 64ULL * 1024ULL * 1024ULL;
    const std::uint64_t pixel_count = static_cast<std::uint64_t>(image.width) * image.height;
    if (image.width == 0U || image.height == 0U || pixel_count > max_pixels ||
        image.pixels.size() != pixel_count) {
        throw std::invalid_argument("BMP_INVALID: image dimensions or pixel storage are invalid");
    }
    const std::uint64_t pixel_bytes = pixel_count * 4U;
    const std::uint64_t file_size = header_size + pixel_bytes;
    if (file_size > std::numeric_limits<std::uint32_t>::max()) {
        throw std::invalid_argument("BMP_INVALID: encoded file exceeds BMP size limit");
    }
    std::vector<std::byte> bytes(static_cast<std::size_t>(file_size), std::byte{});
    bytes[0] = std::byte{'B'};
    bytes[1] = std::byte{'M'};
    write_u32(bytes, 2U, static_cast<std::uint32_t>(file_size));
    write_u32(bytes, 10U, static_cast<std::uint32_t>(header_size));
    write_u32(bytes, 14U, 40U);
    write_u32(bytes, 18U, image.width);
    write_u32(bytes, 22U, image.height);
    write_u16(bytes, 26U, 1U);
    write_u16(bytes, 28U, 32U);
    write_u32(bytes, 34U, static_cast<std::uint32_t>(pixel_bytes));
    for (std::uint32_t y = 0; y < image.height; ++y) {
        const std::uint32_t source_y = image.height - 1U - y;
        for (std::uint32_t x = 0; x < image.width; ++x) {
            const std::uint32_t rgba = image.pixels[static_cast<std::size_t>(source_y) * image.width + x];
            const std::size_t target = static_cast<std::size_t>(header_size) +
                (static_cast<std::size_t>(y) * image.width + x) * 4U;
            bytes[target] = static_cast<std::byte>((rgba >> 16U) & 0xFFU);
            bytes[target + 1U] = static_cast<std::byte>((rgba >> 8U) & 0xFFU);
            bytes[target + 2U] = static_cast<std::byte>(rgba & 0xFFU);
            bytes[target + 3U] = static_cast<std::byte>((rgba >> 24U) & 0xFFU);
        }
    }
    return bytes;
}

} // namespace fate::formats::tm3
