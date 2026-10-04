#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <optional>
#include <sstream>
#include <stdexcept>
#include <string>
#include <string_view>
#include <vector>

#include "fate/elf.hpp"
#include "fate/formats/linkdata.hpp"
#include "fate/formats/tim2.hpp"
#include "fate/provenance.hpp"

namespace {

constexpr std::uint64_t archive_hash_prefix_size = 4ULL * 1024ULL * 1024ULL;

struct GameSpec {
    std::string_view name;
    std::string_view dump_directory;
    std::string_view executable;
    std::uint64_t executable_size;
    std::string_view executable_sha256;
    std::string_view archive;
    std::uint64_t archive_size;
    std::string_view archive_prefix_sha256;
    std::uint32_t table_va;
    std::uint32_t descriptor_count;
};

constexpr std::array<GameSpec, 2> games{{
    {"dw3", "dw3_ps2", "SLUS_202.77", 2513712,
     "b5a2fb3c32ce7468160e3845b64babc4ace0d6cb7650f4d940083c6841c1f5d1",
     "LINKDATA.BNS", 293441536,
     "8acbcbf12d7cf3419438671fc47c330bf688cd1d6622e7c49467e9e1ddcabcd3",
     0x002ff850, 2123},
    {"dw3xl", "dw3xl_ps2", "SLUS_206.17", 1905272,
     "d26695fa7769cabbddbd89168924279cd1035eeb0bdd3744aec95257f7cfa731",
     "LINKDAT2.BNS", 460529664,
     "67f7d51922b2be55106052c66b30fea8c50fae8639f521fa8fda9970642f13f4",
     0x00290cf0, 3015}
}};

struct ExpectedFrameArray {
    std::string_view game;
    std::uint32_t resource_id;
    std::uint64_t frame_count;
    std::uint64_t stride;
};

constexpr std::array<ExpectedFrameArray, 8> expected_frame_arrays{{
    {"dw3", 4, 41, 288768}, {"dw3", 1562, 26, 22528},
    {"dw3", 1564, 41, 124928}, {"dw3", 1566, 24, 133120},
    {"dw3xl", 4, 43, 288768}, {"dw3xl", 1474, 84, 124928},
    {"dw3xl", 2034, 25, 133120}, {"dw3xl", 2038, 35, 22528}
}};

[[nodiscard]] std::string escape_json(std::string_view value) {
    std::ostringstream output;
    for (const char character : value) {
        switch (character) {
        case '"': output << "\\\""; break;
        case '\\': output << "\\\\"; break;
        case '\b': output << "\\b"; break;
        case '\f': output << "\\f"; break;
        case '\n': output << "\\n"; break;
        case '\r': output << "\\r"; break;
        case '\t': output << "\\t"; break;
        default:
            if (static_cast<unsigned char>(character) < 0x20U) {
                output << "\\u" << std::hex << std::setw(4) << std::setfill('0')
                       << static_cast<unsigned int>(static_cast<unsigned char>(character)) << std::dec;
            } else {
                output << character;
            }
        }
    }
    return output.str();
}

[[nodiscard]] std::vector<std::byte> read_file(const std::filesystem::path& path) {
    const std::uint64_t size = std::filesystem::file_size(path);
    if (size > static_cast<std::uint64_t>(std::numeric_limits<std::size_t>::max()) ||
        size > static_cast<std::uint64_t>(std::numeric_limits<std::streamsize>::max())) {
        throw std::runtime_error("File is too large to read: " + path.string());
    }
    std::vector<std::byte> bytes(static_cast<std::size_t>(size));
    std::ifstream input(path, std::ios::binary);
    if (!input) {
        throw std::runtime_error("Cannot open file: " + path.string());
    }
    input.read(reinterpret_cast<char*>(bytes.data()), static_cast<std::streamsize>(bytes.size()));
    if (input.gcount() != static_cast<std::streamsize>(bytes.size())) {
        throw std::runtime_error("File read was incomplete: " + path.string());
    }
    return bytes;
}

[[nodiscard]] bool starts_with_tim2(std::span<const std::byte> payload) {
    return payload.size() >= 4U &&
        std::to_integer<unsigned int>(payload[0]) == static_cast<unsigned int>('T') &&
        std::to_integer<unsigned int>(payload[1]) == static_cast<unsigned int>('I') &&
        std::to_integer<unsigned int>(payload[2]) == static_cast<unsigned int>('M') &&
        std::to_integer<unsigned int>(payload[3]) == static_cast<unsigned int>('2');
}

void write_taxonomy(std::ostream& output, const fate::formats::linkdata::ResourceTaxonomy& value) {
    output << "{\"family\":\"" << fate::formats::linkdata::family_name(value.family)
           << "\",\"magic4_hex\":\"" << value.first_4_bytes_hex
           << "\",\"magic8_hex\":\"" << value.first_8_bytes_hex
           << "\",\"printable_signature\":\"" << escape_json(value.printable_signature)
           << "\",\"prefix64_hex\":\"" << value.first_64_bytes_hex
           << "\",\"prefix64_entropy_bits\":" << std::setprecision(5) << value.first_64_entropy_bits
           << ",\"zero_bytes\":" << value.zero_bytes
           << ",\"payload_zero\":" << (value.entire_payload_zero ? "true" : "false")
           << ",\"offset_table\":{\"detected\":" << (value.offset_table.detected ? "true" : "false")
           << ",\"header_offset\":" << value.offset_table.header_offset
           << ",\"entry_count\":" << value.offset_table.entry_count
           << ",\"alignment\":" << value.offset_table.alignment << ",\"offsets\":[";
    for (std::size_t index = 0; index < value.offset_table.offsets.size(); ++index) {
        if (index != 0U) output << ',';
        output << value.offset_table.offsets[index];
    }
    output << "]},\"valid_nested_tim2_count\":" << value.valid_nested_tim2_count
           << ",\"nested_geometry_signature_count\":" << value.nested_geometry_signature_count
           << ",\"repeated_signatures\":[";
    for (std::size_t index = 0; index < value.repeated_signatures.size(); ++index) {
        if (index != 0U) output << ',';
        const auto& hit = value.repeated_signatures[index];
        output << "{\"magic_hex\":\"" << hit.magic_hex << "\",\"count\":" << hit.count << ",\"offsets\":[";
        for (std::size_t offset = 0; offset < hit.offsets.size(); ++offset) {
            if (offset != 0U) output << ',';
            output << hit.offsets[offset];
        }
        output << "]}";
    }
    output << "]}";
}

void write_manifest(
    const GameSpec& game,
    const std::filesystem::path& dump_root,
    const std::filesystem::path& output_path) {
    const std::filesystem::path game_root = dump_root / game.dump_directory;
    const std::filesystem::path executable_path = game_root / game.executable;
    const std::filesystem::path archive_path = game_root / game.archive;
    fate::provenance::verify_file(executable_path, game.executable_size, std::string(game.executable_sha256));
    fate::provenance::verify_file(
        archive_path, game.archive_size, std::string(game.archive_prefix_sha256), archive_hash_prefix_size);

    const auto executable_bytes = read_file(executable_path);
    const auto elf_image = fate::elf::Image::parse(executable_bytes);
    if (elf_image.entry_point() != 0x00100008U || elf_image.flags() != 0x20924000U) {
        throw std::runtime_error("Pinned ELF identity fields changed for " + std::string(game.name));
    }
    fate::formats::linkdata::ArchiveView archive(archive_path);
    const auto index = fate::formats::linkdata::Index::parse(
        executable_bytes, elf_image, game.table_va, game.descriptor_count, archive.size());

    std::map<std::string, std::uint64_t> family_counts;
    std::map<std::string, std::uint64_t> magic4_counts;
    std::map<std::string, std::uint64_t> magic8_counts;
    std::array<std::uint64_t, 8> entropy_buckets{};
    std::uint64_t offset_table_resources{};
    std::uint64_t nested_tim2_resources{};
    std::uint64_t nested_geometry_resources{};
    for (const auto family : {fate::formats::linkdata::ResourceFamily::tim2_single,
             fate::formats::linkdata::ResourceFamily::tim2_sector_array,
             fate::formats::linkdata::ResourceFamily::subarchive_offset_table,
             fate::formats::linkdata::ResourceFamily::zero_or_empty,
             fate::formats::linkdata::ResourceFamily::structured_binary,
             fate::formats::linkdata::ResourceFamily::compressed_candidate}) {
        family_counts.emplace(std::string(fate::formats::linkdata::family_name(family)), 0U);
    }
    std::ofstream output(output_path, std::ios::binary | std::ios::trunc);
    if (!output) {
        throw std::runtime_error("Cannot create resource manifest: " + output_path.string());
    }
    output << "{\n\"schema_version\":2,\"game\":\"" << game.name
           << "\",\"provenance\":{\"executable\":\"" << game.executable
           << "\",\"executable_bytes\":" << game.executable_size
           << ",\"executable_sha256\":\"" << game.executable_sha256
           << "\",\"archive\":\"" << game.archive << "\",\"archive_bytes\":" << game.archive_size
           << ",\"archive_sha256_scope\":\"first_4194304_bytes\",\"archive_sha256\":\""
           << game.archive_prefix_sha256 << "\"},\"elf\":{\"machine\":\"MIPS-R5900\",\"entry\":\"0x"
           << std::hex << std::setw(8) << std::setfill('0') << elf_image.entry_point() << std::dec
           << "\",\"e_flags\":\"0x20924000\",\"program_headers\":[";
    bool first_segment = true;
    for (const auto& segment : elf_image.program_headers()) {
        if (segment.type != 1U) continue;
        if (!first_segment) output << ',';
        first_segment = false;
        output << "{\"vaddr\":\"0x" << std::hex << std::setw(8) << std::setfill('0') << segment.virtual_address
               << "\",\"offset\":\"0x" << std::setw(8) << segment.offset << "\",\"filesz\":"
               << std::dec << segment.file_size << ",\"memsz\":" << segment.memory_size
               << ",\"flags\":" << segment.flags << '}';
    }
    output << "],\"section_headers\":[";
    for (std::size_t section_index = 0; section_index < elf_image.section_headers().size(); ++section_index) {
        if (section_index != 0U) output << ',';
        const auto& section = elf_image.section_headers()[section_index];
        output << "{\"name\":\"" << escape_json(section.name) << "\",\"type\":" << section.type
               << ",\"address\":\"0x" << std::hex << std::setw(8) << section.address
               << "\",\"offset\":\"0x" << std::setw(8) << section.offset << "\",\"size\":"
               << std::dec << section.size << ",\"flags\":" << section.flags << '}';
    }
    output << "]},\"resource_table\":{\"virtual_address\":\"0x"
           << std::hex << std::setw(8) << index.table_virtual_address()
           << "\",\"file_offset\":\"0x" << std::setw(8) << index.table_file_offset()
           << "\",\"descriptor_count\":" << std::dec << index.descriptors().size() << "},\"resources\":[";

    for (std::size_t id = 0; id < index.descriptors().size(); ++id) {
        if (id != 0U) output << ',';
        const auto& descriptor = index.descriptors()[id];
        const auto payload = archive.read_payload(descriptor);
        const bool top_level_tim2 = starts_with_tim2(payload);
        const auto frames = top_level_tim2
            ? fate::formats::tim2::discover_sector_frames(payload)
            : fate::formats::tim2::FrameSequence{};
        const auto taxonomy = fate::formats::linkdata::analyze_payload(
            payload, top_level_tim2, frames.sector_array);
        const std::string family(fate::formats::linkdata::family_name(taxonomy.family));
        ++family_counts[family];
        ++magic4_counts[taxonomy.first_4_bytes_hex];
        ++magic8_counts[taxonomy.first_8_bytes_hex];
        const std::size_t entropy_bucket = std::min<std::size_t>(
            static_cast<std::size_t>(taxonomy.first_64_entropy_bits), entropy_buckets.size() - 1U);
        ++entropy_buckets[entropy_bucket];
        if (taxonomy.offset_table.detected) ++offset_table_resources;
        if (!top_level_tim2 && taxonomy.valid_nested_tim2_count > 0U) ++nested_tim2_resources;
        if (taxonomy.nested_geometry_signature_count > 0U) ++nested_geometry_resources;

        output << "{\"id\":" << id << ",\"sector_offset\":" << descriptor.sector_offset
               << ",\"sector_count\":" << descriptor.sector_count << ",\"payload_size\":"
               << descriptor.payload_size << ",\"reserved\":" << descriptor.reserved
               << ",\"byte_offset\":" << descriptor.byte_offset() << ",\"taxonomy\":";
        write_taxonomy(output, taxonomy);
        if (top_level_tim2) {
            const auto header = frames.frames.front().header;
            output << ",\"tim2\":{\"version\":" << static_cast<unsigned int>(header.file.version)
                   << ",\"alignment_format\":" << static_cast<unsigned int>(header.file.alignment_format)
                   << ",\"image_count\":" << header.file.image_count
                   << ",\"pic_total\":" << header.picture.total_size
                   << ",\"picture_extent\":" << header.picture.declared_extent()
                   << ",\"header_size\":" << header.picture.header_size
                   << ",\"clut_size\":" << header.picture.clut_size
                   << ",\"image_size\":" << header.picture.image_size
                   << ",\"width\":" << header.picture.width << ",\"height\":" << header.picture.height
                   << ",\"image_type\":" << static_cast<unsigned int>(header.picture.image_type)
                   << ",\"pixel_format\":\"" << header.picture.pixel_format_name()
                   << "\",\"gs_tex0\":\"0x" << std::hex << std::setw(16) << std::setfill('0')
                   << header.picture.gs_tex0 << "\",\"clut_storage_format\":" << std::dec
                   << static_cast<unsigned int>(header.picture.clut_storage_format())
                   << ",\"csm1\":" << (header.picture.uses_csm1() ? "true" : "false")
                   << ",\"texture_alpha\":" << (header.picture.uses_texture_alpha() ? "true" : "false");
            if (frames.sector_array) {
                const auto expected = std::find_if(expected_frame_arrays.begin(), expected_frame_arrays.end(),
                    [&](const ExpectedFrameArray& value) { return value.game == game.name && value.resource_id == id; });
                if (expected != expected_frame_arrays.end() &&
                    (frames.frames.size() != expected->frame_count || frames.frame_stride != expected->stride ||
                     frames.frame_stride % 2048U != 0U)) {
                    throw std::runtime_error("Pinned sector-array geometry changed for resource " + std::to_string(id));
                }
                output << ",\"frame_sequence\":{\"frame_count\":" << frames.frames.size()
                       << ",\"stride\":" << frames.frame_stride
                       << ",\"sectors_per_frame\":" << frames.frame_stride / 2048U << ",\"frames\":[";
                for (std::size_t frame_index = 0; frame_index < frames.frames.size(); ++frame_index) {
                    if (frame_index != 0U) output << ',';
                    const auto& frame = frames.frames[frame_index];
                    output << "{\"index\":" << frame_index << ",\"offset\":" << frame.resource_offset
                           << ",\"sector\":" << frame.resource_offset / 2048U
                           << ",\"extent\":" << frame.picture_extent
                           << ",\"padding\":" << frame.padding_after << '}';
                }
                output << "]}";
            }
            output << '}';
        }
        output << '}';
    }

    constexpr std::array<std::array<std::uint64_t, 6>, 2> expected_families{{
        {{207, 4, 63, 7, 1842, 0}},
        {{343, 4, 69, 25, 2574, 0}}
    }};
    constexpr std::array<std::string_view, 6> family_names{{
        "TIM2_SINGLE", "TIM2_SECTOR_ARRAY", "SUBARCHIVE_OFFSET_TABLE",
        "ZERO_OR_EMPTY", "STRUCTURED_BINARY", "COMPRESSED_CANDIDATE"
    }};
    const std::size_t game_index = game.name == "dw3" ? 0U : 1U;
    for (std::size_t family_index = 0; family_index < family_names.size(); ++family_index) {
        const auto found = family_counts.find(std::string(family_names[family_index]));
        if (found == family_counts.end() || found->second != expected_families[game_index][family_index]) {
            throw std::runtime_error("Pinned resource family distribution changed for " + std::string(game.name));
        }
    }
    const std::uint64_t expected_nested_tim2 = game.name == "dw3" ? 63U : 69U;
    if (offset_table_resources != 0U || nested_tim2_resources != expected_nested_tim2 ||
        nested_geometry_resources != 0U) {
        throw std::runtime_error("Pinned nested-resource evidence changed for " + std::string(game.name));
    }

    output << "],\"statistics\":{\"resource_count\":" << index.descriptors().size()
           << ",\"family_counts\":{";
    bool first_family = true;
    for (const auto& [name, count] : family_counts) {
        if (!first_family) output << ',';
        first_family = false;
        output << '"' << name << "\":" << count;
    }
        output << "},\"offset_table_resources\":" << offset_table_resources
            << ",\"resources_with_nested_tim2\":" << nested_tim2_resources
            << ",\"resources_with_nested_geometry_signatures\":" << nested_geometry_resources
            << ",\"magic4_counts\":{";
    bool first_magic = true;
    for (const auto& [magic, count] : magic4_counts) {
        if (!first_magic) output << ',';
        first_magic = false;
        output << '"' << magic << "\":" << count;
    }
    output << "},\"magic8_counts\":{";
    bool first_magic8 = true;
    for (const auto& [magic, count] : magic8_counts) {
        if (!first_magic8) output << ',';
        first_magic8 = false;
        output << '"' << magic << "\":" << count;
    }
    output << "},\"first64_entropy_histogram\":{";
    constexpr std::array<std::string_view, 8> entropy_labels{
        "0-1", "1-2", "2-3", "3-4", "4-5", "5-6", "6-7", "7-8"
    };
    for (std::size_t bucket_index = 0; bucket_index < entropy_buckets.size(); ++bucket_index) {
        if (bucket_index != 0U) output << ',';
        output << '"' << entropy_labels[bucket_index] << "\":" << entropy_buckets[bucket_index];
    }
    output << "}}}\n";
    if (!output) throw std::runtime_error("Failed writing manifest: " + output_path.string());
}

struct Arguments {
    std::filesystem::path dump_root = "C:/DW3/sources/dumps";
    std::filesystem::path output_dir = "artifacts";
};

[[nodiscard]] Arguments parse_arguments(int argc, char** argv) {
    Arguments result;
    for (int index = 1; index < argc; ++index) {
        const std::string_view option(argv[index]);
        if ((option == "--dump-root" || option == "--output-dir") && index + 1 >= argc) {
            throw std::invalid_argument("Option requires a path: " + std::string(option));
        }
        if (option == "--dump-root") result.dump_root = argv[++index];
        else if (option == "--output-dir") result.output_dir = argv[++index];
        else throw std::invalid_argument("Unknown option: " + std::string(option));
    }
    return result;
}

}

int main(int argc, char** argv) {
    try {
        const Arguments arguments = parse_arguments(argc, argv);
        std::filesystem::create_directories(arguments.output_dir);
        for (const GameSpec& game : games) {
            const auto output_path = arguments.output_dir / (std::string(game.name) + "_resource_index.json");
            write_manifest(game, arguments.dump_root, output_path);
            std::cout << game.name << ": indexed " << game.descriptor_count << " resources -> "
                      << output_path.string() << '\n';
        }
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "resource_index: " << error.what() << '\n';
        return 1;
    }
}