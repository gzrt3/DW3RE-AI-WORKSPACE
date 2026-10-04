#include <algorithm>
#include <array>
#include <chrono>
#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <span>
#include <stdexcept>
#include <string>
#include <vector>

#include "fate/elf.hpp"
#include "fate/formats/linkdata.hpp"
#include "fate/formats/tim2.hpp"
#include "fate/provenance.hpp"

namespace {

void require(bool condition, const std::string& message) {
    if (!condition) {
        throw std::runtime_error(message);
    }
}

template <typename T>
void put_le(std::vector<std::byte>& bytes, std::size_t offset, T value) {
    for (std::size_t index = 0; index < sizeof(T); ++index) {
        bytes[offset + index] = static_cast<std::byte>((value >> (index * 8U)) & 0xffU);
    }
}

[[nodiscard]] std::vector<std::byte> make_elf() {
    std::vector<std::byte> bytes(0x300);
    bytes[0] = std::byte{0x7f};
    bytes[1] = std::byte{'E'};
    bytes[2] = std::byte{'L'};
    bytes[3] = std::byte{'F'};
    bytes[4] = std::byte{1};
    bytes[5] = std::byte{1};
    bytes[6] = std::byte{1};
    put_le<std::uint16_t>(bytes, 16, 2);
    put_le<std::uint16_t>(bytes, 18, 8);
    put_le<std::uint32_t>(bytes, 24, 0x00100008);
    put_le<std::uint32_t>(bytes, 28, 52);
    put_le<std::uint16_t>(bytes, 40, 52);
    put_le<std::uint16_t>(bytes, 42, 32);
    put_le<std::uint16_t>(bytes, 44, 1);
    put_le<std::uint32_t>(bytes, 32, 0x220);
    put_le<std::uint16_t>(bytes, 46, 40);
    put_le<std::uint16_t>(bytes, 48, 2);
    put_le<std::uint16_t>(bytes, 50, 1);

    put_le<std::uint32_t>(bytes, 52, 1);
    put_le<std::uint32_t>(bytes, 56, 0x100);
    put_le<std::uint32_t>(bytes, 60, 0x00100000);
    put_le<std::uint32_t>(bytes, 68, 0x100);
    put_le<std::uint32_t>(bytes, 72, 0x100);
    put_le<std::uint32_t>(bytes, 76, 5);
    put_le<std::uint32_t>(bytes, 80, 0x100);

    put_le<std::uint32_t>(bytes, 0x248, 1);
    put_le<std::uint32_t>(bytes, 0x24c, 3);
    put_le<std::uint32_t>(bytes, 0x258, 0x280);
    put_le<std::uint32_t>(bytes, 0x25c, 11);
    put_le<std::uint32_t>(bytes, 0x268, 1);
    const std::array<char, 11> section_names{'\0', '.', 's', 'h', 's', 't', 'r', 't', 'a', 'b', '\0'};
    for (std::size_t index = 0; index < section_names.size(); ++index) {
        bytes[0x280 + index] = static_cast<std::byte>(section_names[index]);
    }

    put_le<std::uint32_t>(bytes, 0x120, 0);
    put_le<std::uint32_t>(bytes, 0x124, 1);
    put_le<std::uint32_t>(bytes, 0x128, 16);
    put_le<std::uint32_t>(bytes, 0x12c, 0);
    put_le<std::uint32_t>(bytes, 0x130, 1);
    put_le<std::uint32_t>(bytes, 0x134, 1);
    put_le<std::uint32_t>(bytes, 0x138, 2048);
    put_le<std::uint32_t>(bytes, 0x13c, 0);
    return bytes;
}

[[nodiscard]] std::vector<std::byte> make_tim2() {
    std::vector<std::byte> bytes(16 + 48 + 16);
    bytes[0] = std::byte{'T'};
    bytes[1] = std::byte{'I'};
    bytes[2] = std::byte{'M'};
    bytes[3] = std::byte{'2'};
    bytes[4] = std::byte{4};
    put_le<std::uint16_t>(bytes, 6, 1);
    put_le<std::uint32_t>(bytes, 16, 64);
    put_le<std::uint32_t>(bytes, 20, 0);
    put_le<std::uint32_t>(bytes, 24, 16);
    put_le<std::uint16_t>(bytes, 28, 48);
    bytes[35] = std::byte{5};
    put_le<std::uint16_t>(bytes, 36, 8);
    put_le<std::uint16_t>(bytes, 38, 2);
    return bytes;
}

[[nodiscard]] std::vector<std::byte> make_tim2_fixture(
    std::uint16_t width,
    std::uint16_t height,
    std::uint8_t image_type,
    std::uint32_t image_size,
    std::uint32_t clut_size,
    std::uint16_t clut_colors,
    std::uint64_t gs_tex0);

template <typename Function>
void require_throw(Function&& function, const std::string& message) {
    bool threw = false;
    try {
        function();
    } catch (const std::exception&) {
        threw = true;
    }
    require(threw, message);
}

void test_elf_and_linkdata() {
    auto bytes = make_elf();
    const auto image = fate::elf::Image::parse(bytes);
    require(image.entry_point() == 0x00100008, "ELF entry point mismatch");
    require(image.machine() == 8, "ELF machine mismatch");
    require(image.section_headers().size() == 2, "ELF section count mismatch");
    require(image.section_headers()[1].name == ".shstrtab", "ELF section name mismatch");
    require(image.virtual_to_file_offset(0x00100020, 32) == 0x120, "VA translation mismatch");
    require_throw([&] { static_cast<void>(image.virtual_to_file_offset(0x001000ff, 2)); },
                  "VA beyond PT_LOAD file bytes should fail");

    const auto index = fate::formats::linkdata::Index::parse(bytes, image, 0x00100020, 2, 4096);
    require(index.table_file_offset() == 0x120, "Descriptor table file offset mismatch");
    require(index.descriptors().size() == 2, "Descriptor count mismatch");
    require(index.descriptors()[1].byte_offset() == 2048, "Sector offset conversion mismatch");

    put_le<std::uint32_t>(bytes, 0x124, 2);
    require_throw(
        [&] {
            const auto changed = fate::elf::Image::parse(bytes);
            static_cast<void>(fate::formats::linkdata::Index::parse(bytes, changed, 0x00100020, 2, 4096));
        },
        "Invalid sector count should fail");
}

void test_tim2() {
    auto bytes = make_tim2();
    const auto header = fate::formats::tim2::parse(bytes);
    require(header.file.version == 4, "TIM2 version mismatch");
    require(header.file.image_count == 1, "TIM2 image count mismatch");
    require(header.picture.declared_extent() == bytes.size(), "TIM2 declared extent mismatch");
    require(std::string(header.picture.pixel_format_name()) == "PSMT8", "TIM2 format mismatch");
    require_throw(
        [&] {
            bytes[0] = std::byte{'X'};
            static_cast<void>(fate::formats::tim2::parse(bytes));
        },
        "Invalid TIM2 magic should fail");
}

void test_linkdata_taxonomy() {
    using fate::formats::linkdata::ResourceFamily;
    std::vector<std::byte> zero_payload(64);
    require(fate::formats::linkdata::analyze_payload(zero_payload, false, false).family ==
        ResourceFamily::zero_or_empty, "Zero payload taxonomy mismatch");

    std::vector<std::byte> structured(64);
    structured[0] = std::byte{'P'};
    structured[1] = std::byte{'S'};
    structured[2] = std::byte{'2'};
    structured[3] = std::byte{' '};
    require(fate::formats::linkdata::analyze_payload(structured, false, false).family ==
        ResourceFamily::structured_binary, "Known signature taxonomy mismatch");

    std::vector<std::byte> compressed(64);
    for (std::size_t index = 0; index < compressed.size(); ++index) {
        compressed[index] = static_cast<std::byte>(index);
    }
    require(fate::formats::linkdata::analyze_payload(compressed, false, false).family ==
        ResourceFamily::compressed_candidate, "High-entropy unknown taxonomy mismatch");

    std::vector<std::byte> offset_table(48);
    put_le<std::uint32_t>(offset_table, 0, 2);
    put_le<std::uint32_t>(offset_table, 4, 16);
    put_le<std::uint32_t>(offset_table, 8, 32);
    put_le<std::uint32_t>(offset_table, 12, 48);
    const auto table_result = fate::formats::linkdata::analyze_payload(offset_table, false, false);
    require(table_result.family == ResourceFamily::subarchive_offset_table &&
        table_result.offset_table.detected && table_result.offset_table.alignment == 16,
        "Partitioning offset table taxonomy mismatch");

    auto embedded_image = make_tim2_fixture(16, 16, 5, 256, 1024, 256, 1ULL << 34U);
    std::vector<std::byte> subarchive(16U + embedded_image.size());
    subarchive[0] = std::byte{'A'};
    subarchive[1] = std::byte{'R'};
    subarchive[2] = std::byte{'C'};
    subarchive[3] = std::byte{'1'};
    std::copy(embedded_image.begin(), embedded_image.end(), subarchive.begin() + 16);
    const auto nested_result = fate::formats::linkdata::analyze_payload(subarchive, false, false);
    require(nested_result.family == ResourceFamily::subarchive_offset_table &&
        nested_result.valid_nested_tim2_count == 1,
        "Nested TIM2 subarchive taxonomy mismatch");

    std::vector<std::byte> geometry_subarchive(24);
    geometry_subarchive[0] = std::byte{'A'};
    geometry_subarchive[1] = std::byte{'R'};
    geometry_subarchive[2] = std::byte{'C'};
    geometry_subarchive[3] = std::byte{'2'};
    geometry_subarchive[16] = std::byte{'g'};
    geometry_subarchive[17] = std::byte{'b'};
    geometry_subarchive[18] = std::byte{'2'};
    geometry_subarchive[19] = std::byte{0};
    const auto geometry_result = fate::formats::linkdata::analyze_payload(geometry_subarchive, false, false);
    require(geometry_result.family == ResourceFamily::subarchive_offset_table &&
        geometry_result.nested_geometry_signature_count == 1,
        "Nested geometry subarchive taxonomy mismatch");

    const auto top_tim2 = fate::formats::linkdata::analyze_payload(embedded_image, true, false);
    require(top_tim2.family == ResourceFamily::tim2_single, "TIM2_SINGLE taxonomy mismatch");
    require(fate::formats::linkdata::family_name(ResourceFamily::tim2_sector_array) == "TIM2_SECTOR_ARRAY",
        "TIM2_SECTOR_ARRAY family name mismatch");
    constexpr std::size_t sector_stride = 2048;
    std::vector<std::byte> tim2_sector_array(sector_stride * 2U);
    std::copy(embedded_image.begin(), embedded_image.end(), tim2_sector_array.begin());
    std::copy(embedded_image.begin(), embedded_image.end(), tim2_sector_array.begin() + sector_stride);
    const auto sector_result = fate::formats::linkdata::analyze_payload(tim2_sector_array, true, true);
    require(sector_result.family == ResourceFamily::tim2_sector_array,
        "TIM2_SECTOR_ARRAY taxonomy mismatch");
}

    [[nodiscard]] std::vector<std::byte> make_tim2_fixture(
        std::uint16_t width,
        std::uint16_t height,
        std::uint8_t image_type,
        std::uint32_t image_size,
        std::uint32_t clut_size,
        std::uint16_t clut_colors,
        std::uint64_t gs_tex0) {
        const std::size_t declared_size = 48U + image_size + clut_size;
        std::vector<std::byte> bytes(16U + declared_size);
        bytes[0] = std::byte{'T'};
        bytes[1] = std::byte{'I'};
        bytes[2] = std::byte{'M'};
        bytes[3] = std::byte{'2'};
        bytes[4] = std::byte{4};
        put_le<std::uint16_t>(bytes, 6, 1);
        put_le<std::uint32_t>(bytes, 16, static_cast<std::uint32_t>(declared_size));
        put_le<std::uint32_t>(bytes, 20, clut_size);
        put_le<std::uint32_t>(bytes, 24, image_size);
        put_le<std::uint16_t>(bytes, 28, 48);
        put_le<std::uint16_t>(bytes, 30, clut_colors);
        bytes[33] = std::byte{1};
        bytes[34] = std::byte{3};
        bytes[35] = static_cast<std::byte>(image_type);
        put_le<std::uint16_t>(bytes, 36, width);
        put_le<std::uint16_t>(bytes, 38, height);
        put_le<std::uint64_t>(bytes, 40, gs_tex0);
        return bytes;
    }

    void set_rgba_palette_color(std::vector<std::byte>& bytes, std::size_t entry,
                                std::uint32_t image_size,
                                std::uint8_t red, std::uint8_t green, std::uint8_t blue,
                                std::uint8_t alpha) {
        const std::size_t offset = 16U + 48U + image_size + entry * 4U;
        bytes[offset] = static_cast<std::byte>(red);
        bytes[offset + 1U] = static_cast<std::byte>(green);
        bytes[offset + 2U] = static_cast<std::byte>(blue);
        bytes[offset + 3U] = static_cast<std::byte>(alpha);
    }

void test_sha256() {
    const auto nonce = std::chrono::steady_clock::now().time_since_epoch().count();
    const auto path = std::filesystem::temp_directory_path() /
        ("fate_sha256_fixture_" + std::to_string(nonce) + ".bin");
    {
        std::ofstream output(path, std::ios::binary);
        output << "abc";
    }
    try {
        const auto actual = fate::provenance::fingerprint(path);
        require(actual.file_size == 3, "SHA fixture size mismatch");
        require(actual.sha256 == "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad",
                "SHA-256 known-answer mismatch");
        const auto prefix = fate::provenance::fingerprint(path, 2);
        require(prefix.hashed_bytes == 2, "SHA prefix length mismatch");
        require(prefix.sha256 == "fb8e20fc2e4c3f248c60c39bd652f3c1347298bb977b8b4d5903b85055620603",
            "SHA-256 prefix known-answer mismatch");
        fate::provenance::verify_file(path, 3, actual.sha256);
        require_throw([&] { fate::provenance::verify_file(path, 4, actual.sha256); },
                      "Incorrect expected size should fail");
        require_throw([&] { static_cast<void>(fate::provenance::fingerprint(path, 4)); },
                  "Prefix beyond file size should fail");
    } catch (...) {
        std::error_code ignored;
        std::filesystem::remove(path, ignored);
        throw;
    }
    std::filesystem::remove(path);
}

}

void test_tim2_pixels_and_sector_frames();

int main() {
    try {
        test_elf_and_linkdata();
        test_tim2();
        test_linkdata_taxonomy();
        test_tim2_pixels_and_sector_frames();
        test_sha256();
        std::cout << "fate_core_tests: all synthetic checks passed\n";
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "fate_core_tests: " << error.what() << '\n';
        return 1;
    }
}

    void test_tim2_pixels_and_sector_frames() {
        require(fate::formats::tim2::scale_gs_alpha(0x00) == 0x00, "GS alpha zero mismatch");
        require(fate::formats::tim2::scale_gs_alpha(0x40) == 0x80, "GS alpha midpoint mismatch");
        require(fate::formats::tim2::scale_gs_alpha(0x80) == 0xff, "GS alpha opaque mismatch");
        require(fate::formats::tim2::csm1_psmt8_palette_index(7) == 7, "CSM1 lower palette range mismatch");
        require(fate::formats::tim2::csm1_psmt8_palette_index(8) == 16, "CSM1 first exchange mismatch");
        require(fate::formats::tim2::csm1_psmt8_palette_index(15) == 23, "CSM1 exchange end mismatch");
        require(fate::formats::tim2::csm1_psmt8_palette_index(16) == 8, "CSM1 second range mismatch");
        require(fate::formats::tim2::csm1_psmt8_palette_index(24) == 24, "CSM1 upper range mismatch");

        constexpr std::uint64_t texture_alpha = 1ULL << 34U;
        constexpr std::uint64_t psmt8_format = 0x13ULL << 20U;
        auto psmt8 = make_tim2_fixture(16, 16, 5, 256, 1024, 256, texture_alpha | psmt8_format);
        psmt8[64] = std::byte{8};
        set_rgba_palette_color(psmt8, 16, 256, 0x21, 0x42, 0x63, 0x80);
        const auto decoded8 = fate::formats::tim2::decode_rgba8888(psmt8);
        require(decoded8.width == 16 && decoded8.height == 16, "PSMT8 dimensions mismatch");
        require(decoded8.rgba[0] == 0x21 && decoded8.rgba[1] == 0x42 && decoded8.rgba[2] == 0x63,
            "PSMT8 CSM1 palette lookup mismatch");
        require(decoded8.rgba[3] == 0xff && decoded8.raw_alpha[0] == 0x80,
            "PSMT8 alpha scaling/raw preservation mismatch");

        constexpr std::uint64_t psmt4_format = 0x14ULL << 20U;
        auto psmt4 = make_tim2_fixture(32, 16, 4, 256, 64, 16, texture_alpha | psmt4_format);
        psmt4[64] = std::byte{3};
        set_rgba_palette_color(psmt4, 3, 256, 0x11, 0x22, 0x33, 0x80);
        const auto decoded4 = fate::formats::tim2::decode_rgba8888(psmt4);
        require(decoded4.rgba[0] == 0x11 && decoded4.rgba[1] == 0x22 && decoded4.rgba[2] == 0x33,
            "PSMT4 palette lookup mismatch");
        require(decoded4.rgba[3] == 0xff && decoded4.raw_alpha[0] == 0x80,
            "PSMT4 alpha scaling/raw preservation mismatch");

        constexpr std::uint64_t psmt4_clut16 = 2ULL << 51U;
        auto psmt4_16 = make_tim2_fixture(32, 16, 4, 256, 32, 16,
            texture_alpha | psmt4_format | psmt4_clut16);
        psmt4_16[64] = std::byte{2};
        put_le<std::uint16_t>(psmt4_16, 16U + 48U + 256U + 4U, 0xfc00U);
        const auto decoded4_16 = fate::formats::tim2::decode_rgba8888(psmt4_16);
        require(decoded4_16.rgba[0] == 0 && decoded4_16.rgba[1] == 0 && decoded4_16.rgba[2] == 255 &&
            decoded4_16.rgba[3] == 255, "PSMT4 PSMCT16 CLUT mismatch");

        constexpr std::uint64_t psmt8_clut16 = 2ULL << 51U;
        auto psmt8_16 = make_tim2_fixture(16, 16, 5, 256, 512, 256,
            texture_alpha | psmt8_format | psmt8_clut16);
        psmt8_16[64] = std::byte{8};
        put_le<std::uint16_t>(psmt8_16, 16U + 48U + 256U + 16U * 2U, 0x83e0U);
        const auto decoded8_16 = fate::formats::tim2::decode_rgba8888(psmt8_16);
        require(decoded8_16.rgba[0] == 0 && decoded8_16.rgba[1] == 255 && decoded8_16.rgba[2] == 0 &&
            decoded8_16.rgba[3] == 255, "PSMT8 PSMCT16 CSM1 CLUT mismatch");

        constexpr std::uint64_t psmct32_tbw1 = 1ULL << 14U;
        auto direct32 = make_tim2_fixture(64, 32, 0, 8192, 0, 0, texture_alpha | psmct32_tbw1);
        direct32[64] = std::byte{0x31};
        direct32[65] = std::byte{0x52};
        direct32[66] = std::byte{0x73};
        direct32[67] = std::byte{0x40};
        const auto decoded32 = fate::formats::tim2::decode_rgba8888(direct32);
        require(decoded32.rgba[0] == 0x31 && decoded32.rgba[1] == 0x52 && decoded32.rgba[2] == 0x73,
            "PSMCT32 direct color mismatch");
        require(decoded32.rgba[3] == 0x80 && decoded32.raw_alpha[0] == 0x40,
            "PSMCT32 alpha scaling/raw preservation mismatch");

        constexpr std::uint64_t psmct32_rgb_only = 1ULL << 14U;
        auto rgb_only32 = make_tim2_fixture(64, 32, 0, 8192, 0, 0, psmct32_rgb_only);
        rgb_only32[64] = std::byte{0x31};
        rgb_only32[65] = std::byte{0x52};
        rgb_only32[66] = std::byte{0x73};
        rgb_only32[67] = std::byte{0x40};
        const auto decoded_rgb_only = fate::formats::tim2::decode_rgba8888(rgb_only32);
        require(decoded_rgb_only.rgba[3] == 0xff && decoded_rgb_only.raw_alpha[0] == 0x40,
            "TCC RGB must output opaque RGBA while preserving stored alpha");

        auto direct24 = make_tim2_fixture(64, 32, 1, 8192, 0, 0, psmct32_tbw1);
        direct24[64] = std::byte{0x12};
        direct24[65] = std::byte{0x34};
        direct24[66] = std::byte{0x56};
        direct24[67] = std::byte{0x01};
        const auto decoded24 = fate::formats::tim2::decode_rgba8888(direct24);
        require(decoded24.rgba[0] == 0x12 && decoded24.rgba[1] == 0x34 && decoded24.rgba[2] == 0x56 &&
            decoded24.rgba[3] == 0xff && decoded24.raw_alpha[0] == 0x80,
            "PSMCT24 forced opaque alpha mismatch");

        auto direct16 = make_tim2_fixture(64, 64, 2, 8192, 0, 0, psmct32_tbw1);
        put_le<std::uint16_t>(direct16, 64, 0x83e0U);
        const auto decoded16 = fate::formats::tim2::decode_rgba8888(direct16);
        require(decoded16.rgba[0] == 0 && decoded16.rgba[1] == 255 && decoded16.rgba[2] == 0 &&
            decoded16.rgba[3] == 255, "PSMCT16 direct color mismatch");

        std::vector<std::byte> sector_array(4096);
        std::copy(psmt8.begin(), psmt8.end(), sector_array.begin());
        std::copy(psmt8.begin(), psmt8.end(), sector_array.begin() + 2048);
        const auto sequence = fate::formats::tim2::discover_sector_frames(sector_array);
        require(sequence.sector_array && sequence.frame_stride == 2048 && sequence.frames.size() == 2,
            "TIM2 sector-array discovery mismatch");
        const auto second = fate::formats::tim2::decode_rgba8888(
        std::span<const std::byte>(sector_array).subspan(sequence.frames[1].resource_offset));
        require(second.rgba[0] == 0x21 && second.raw_alpha[0] == 0x80,
            "TIM2 frame_index decode mismatch");
    }