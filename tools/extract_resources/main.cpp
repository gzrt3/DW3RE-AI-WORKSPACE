#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <optional>
#include <set>
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

struct Arguments {
    std::string game;
    std::uint32_t resource_id{};
    std::string frame_expression = "all";
    std::string image_format = "tga";
    bool write_raw{};
    std::filesystem::path dump_root = "C:/DW3/sources/dumps";
    std::filesystem::path output_dir = "artifacts/extracted_samples";
};

[[nodiscard]] std::string escape_json(std::string_view value) {
    std::ostringstream output;
    for (const char character : value) {
        switch (character) {
        case '"': output << "\\\""; break;
        case '\\': output << "\\\\"; break;
        case '\n': output << "\\n"; break;
        case '\r': output << "\\r"; break;
        case '\t': output << "\\t"; break;
        default:
            if (static_cast<unsigned char>(character) < 0x20U) output << '?';
            else output << character;
        }
    }
    return output.str();
}

[[nodiscard]] std::uint32_t parse_u32(std::string_view value, std::string_view option) {
    std::size_t consumed{};
    const unsigned long parsed = std::stoul(std::string(value), &consumed, 10);
    if (consumed != value.size() || parsed > std::numeric_limits<std::uint32_t>::max()) {
        throw std::invalid_argument("Invalid numeric value for " + std::string(option));
    }
    return static_cast<std::uint32_t>(parsed);
}

[[nodiscard]] Arguments parse_arguments(int argc, char** argv) {
    Arguments result;
    bool have_game = false;
    bool have_resource = false;
    for (int index = 1; index < argc; ++index) {
        const std::string_view option(argv[index]);
        if (option == "--raw") {
            result.write_raw = true;
            continue;
        }
        if (index + 1 >= argc) throw std::invalid_argument("Option requires a value: " + std::string(option));
        const std::string_view value(argv[++index]);
        if (option == "--game") {
            result.game = value;
            have_game = true;
        } else if (option == "--resource") {
            result.resource_id = parse_u32(value, option);
            have_resource = true;
        } else if (option == "--frames") {
            result.frame_expression = value;
        } else if (option == "--format") {
            result.image_format = value;
        } else if (option == "--dump-root") {
            result.dump_root = value;
        } else if (option == "--output-dir") {
            result.output_dir = value;
        } else {
            throw std::invalid_argument("Unknown option: " + std::string(option));
        }
    }
    if (!have_game || !have_resource || (result.game != "dw3" && result.game != "dw3xl")) {
        throw std::invalid_argument("Required: --game dw3|dw3xl --resource ID");
    }
    if (result.image_format != "tga") throw std::invalid_argument("Only --format tga is currently supported");
    return result;
}

[[nodiscard]] std::vector<std::byte> read_file(const std::filesystem::path& path) {
    const std::uint64_t size = std::filesystem::file_size(path);
    if (size > static_cast<std::uint64_t>(std::numeric_limits<std::size_t>::max()) ||
        size > static_cast<std::uint64_t>(std::numeric_limits<std::streamsize>::max())) {
        throw std::runtime_error("File too large to read: " + path.string());
    }
    std::vector<std::byte> bytes(static_cast<std::size_t>(size));
    std::ifstream input(path, std::ios::binary);
    if (!input) throw std::runtime_error("Cannot open file: " + path.string());
    input.read(reinterpret_cast<char*>(bytes.data()), static_cast<std::streamsize>(bytes.size()));
    if (input.gcount() != static_cast<std::streamsize>(bytes.size())) {
        throw std::runtime_error("Truncated file read: " + path.string());
    }
    return bytes;
}

void write_u16(std::ostream& output, std::uint16_t value) {
    output.put(static_cast<char>(value & 0xffU));
    output.put(static_cast<char>((value >> 8U) & 0xffU));
}

void write_tga(const std::filesystem::path& path, const fate::formats::tim2::DecodedImage& image) {
    if (image.width == 0U || image.height == 0U ||
        image.rgba.size() != static_cast<std::size_t>(image.width) * image.height * 4U) {
        throw std::runtime_error("Decoded image has invalid TGA dimensions or byte count");
    }
    std::ofstream output(path, std::ios::binary | std::ios::trunc);
    if (!output) throw std::runtime_error("Cannot create image: " + path.string());
    constexpr std::array<std::uint8_t, 8> prefix{0, 0, 2, 0, 0, 0, 0, 0};
    for (const std::uint8_t byte : prefix) output.put(static_cast<char>(byte));
    write_u16(output, 0);
    write_u16(output, 0);
    write_u16(output, image.width);
    write_u16(output, image.height);
    output.put(static_cast<char>(32));
    output.put(static_cast<char>(0x28));
    for (std::size_t index = 0; index < image.rgba.size(); index += 4U) {
        output.put(static_cast<char>(image.rgba[index + 2U]));
        output.put(static_cast<char>(image.rgba[index + 1U]));
        output.put(static_cast<char>(image.rgba[index]));
        output.put(static_cast<char>(image.rgba[index + 3U]));
    }
    output.close();
    if (!output) throw std::runtime_error("Failed writing TGA: " + path.string());
    const std::uint64_t expected_size = 18U + image.rgba.size();
    if (std::filesystem::file_size(path) != expected_size) {
        throw std::runtime_error("TGA output has an invalid byte count");
    }
    std::ifstream verify(path, std::ios::binary);
    std::array<std::uint8_t, 18> header{};
    verify.read(reinterpret_cast<char*>(header.data()), static_cast<std::streamsize>(header.size()));
    if (!verify || header[2] != 2U || header[12] != (image.width & 0xffU) ||
        header[13] != (image.width >> 8U) || header[14] != (image.height & 0xffU) ||
        header[15] != (image.height >> 8U) || header[16] != 32U || header[17] != 0x28U) {
        throw std::runtime_error("TGA output header validation failed");
    }
}

[[nodiscard]] std::set<std::size_t> select_frames(std::string_view expression, std::size_t count) {
    if (count == 0U) throw std::runtime_error("TIM2 frame sequence is empty");
    std::set<std::size_t> selected;
    if (expression == "all") {
        for (std::size_t index = 0; index < count; ++index) selected.insert(index);
        return selected;
    }
    std::size_t begin{};
    while (begin < expression.size()) {
        const std::size_t end = expression.find(',', begin);
        const std::string_view token = expression.substr(begin,
            end == std::string_view::npos ? expression.size() - begin : end - begin);
        if (token == "last") {
            selected.insert(count - 1U);
        } else {
            const std::size_t dash = token.find('-');
            const std::uint32_t first = parse_u32(token.substr(0, dash), "--frames");
            const std::uint32_t last = dash == std::string_view::npos
                ? first : parse_u32(token.substr(dash + 1U), "--frames");
            if (first > last || last >= count) throw std::out_of_range("Requested frame outside resource");
            for (std::uint32_t frame = first; frame <= last; ++frame) selected.insert(frame);
        }
        if (end == std::string_view::npos) break;
        begin = end + 1U;
    }
    return selected;
}

struct FrameOutput {
    std::size_t index{};
    std::string file;
    fate::provenance::Fingerprint fingerprint;
    fate::formats::tim2::DecodedImage decoded;
    fate::formats::tim2::Header header;
    std::uint64_t offset{};
};

void extract(const Arguments& arguments) {
    const auto game_it = std::find_if(games.begin(), games.end(), [&](const GameSpec& game) {
        return game.name == arguments.game;
    });
    if (game_it == games.end()) throw std::invalid_argument("Unknown game selection");
    const GameSpec& game = *game_it;
    const auto game_root = arguments.dump_root / game.dump_directory;
    const auto executable_path = game_root / game.executable;
    const auto archive_path = game_root / game.archive;
    fate::provenance::verify_file(executable_path, game.executable_size, std::string(game.executable_sha256));
    fate::provenance::verify_file(archive_path, game.archive_size,
        std::string(game.archive_prefix_sha256), archive_hash_prefix_size);
    const auto elf_bytes = read_file(executable_path);
    const auto elf_image = fate::elf::Image::parse(elf_bytes);
    fate::formats::linkdata::ArchiveView archive(archive_path);
    const auto index = fate::formats::linkdata::Index::parse(
        elf_bytes, elf_image, game.table_va, game.descriptor_count, archive.size());
    if (arguments.resource_id >= index.descriptors().size()) throw std::out_of_range("Resource ID out of range");

    const auto& descriptor = index.descriptors()[arguments.resource_id];
    const auto payload = archive.read_payload(descriptor);
    const bool actual_tim2 = payload.size() >= 4U &&
        std::to_integer<unsigned int>(payload[0]) == static_cast<unsigned int>('T') &&
        std::to_integer<unsigned int>(payload[1]) == static_cast<unsigned int>('I') &&
        std::to_integer<unsigned int>(payload[2]) == static_cast<unsigned int>('M') &&
        std::to_integer<unsigned int>(payload[3]) == static_cast<unsigned int>('2');
    if (!actual_tim2 && !arguments.write_raw) {
        throw std::runtime_error("Non-TIM2 resources require --raw");
    }
    if (!actual_tim2 && arguments.frame_expression != "all") {
        throw std::invalid_argument("--frames applies only to TIM2 resources");
    }
    const auto sequence = actual_tim2
        ? fate::formats::tim2::discover_sector_frames(payload)
        : fate::formats::tim2::FrameSequence{};
    const auto selected = actual_tim2
        ? select_frames(arguments.frame_expression, sequence.frames.size())
        : std::set<std::size_t>{};
    const std::string stem = game.name.data() + std::string("_rid") + std::to_string(arguments.resource_id);
    std::filesystem::create_directories(arguments.output_dir);

    std::optional<std::string> raw_file;
    std::optional<fate::provenance::Fingerprint> raw_fingerprint;
    if (arguments.write_raw) {
        raw_file = stem + "_payload.bin";
        const auto path = arguments.output_dir / *raw_file;
        std::ofstream output(path, std::ios::binary | std::ios::trunc);
        if (!output) throw std::runtime_error("Cannot create raw payload file");
        output.write(reinterpret_cast<const char*>(payload.data()), static_cast<std::streamsize>(payload.size()));
        output.close();
        raw_fingerprint = fate::provenance::fingerprint(path);
    }

    std::vector<FrameOutput> outputs;
    for (const std::size_t frame_index : selected) {
        const auto& location = sequence.frames[frame_index];
        const auto frame_bytes = std::span<const std::byte>(payload).subspan(
            static_cast<std::size_t>(location.resource_offset), static_cast<std::size_t>(location.picture_extent));
        auto decoded = fate::formats::tim2::decode_rgba8888(frame_bytes);
        std::ostringstream name;
        name << stem << "_frame_" << std::setw(4) << std::setfill('0') << frame_index << ".tga";
        const auto output_path = arguments.output_dir / name.str();
        write_tga(output_path, decoded);
        outputs.push_back(FrameOutput{frame_index, name.str(), fate::provenance::fingerprint(output_path),
            std::move(decoded), location.header, location.resource_offset});
    }

    const auto manifest_path = arguments.output_dir / (stem + "_manifest.json");
    std::ofstream manifest(manifest_path, std::ios::binary | std::ios::trunc);
    if (!manifest) throw std::runtime_error("Cannot create extraction manifest");
    const auto payload_hash = fate::provenance::fingerprint(archive_path, archive_hash_prefix_size);
    manifest << "{\"schema_version\":1,\"game\":\"" << game.name
        << "\",\"resource_id\":" << arguments.resource_id
        << ",\"resource_kind\":\"" << (actual_tim2 ? "TIM2" : "raw-binary") << '"'
        << ",\"source\":{\"executable\":\"" << game.executable
        << "\",\"executable_sha256\":\"" << game.executable_sha256
        << "\",\"archive\":\"" << game.archive
        << "\",\"archive_prefix_sha256\":\"" << payload_hash.sha256
        << "\",\"sector_offset\":" << descriptor.sector_offset
        << ",\"sector_count\":" << descriptor.sector_count
        << ",\"payload_size\":" << descriptor.payload_size
        << ",\"payload_byte_offset\":" << descriptor.byte_offset()
        << "},\"sequence\":{\"sector_array\":" << (sequence.sector_array ? "true" : "false")
        << ",\"frame_count\":" << sequence.frames.size()
        << ",\"stride\":" << sequence.frame_stride << "},\"raw_output\":";
    if (raw_file && raw_fingerprint) {
        manifest << "{\"file\":\"" << *raw_file << "\",\"bytes\":" << raw_fingerprint->file_size
            << ",\"sha256\":\"" << raw_fingerprint->sha256 << "\"}";
    } else {
        manifest << "null";
    }
    manifest << ",\"frames\":[";
    for (std::size_t output_index = 0; output_index < outputs.size(); ++output_index) {
        if (output_index != 0U) manifest << ',';
        const auto& frame = outputs[output_index];
        manifest << "{\"index\":" << frame.index << ",\"resource_offset\":" << frame.offset
            << ",\"file\":\"" << frame.file << "\",\"bytes\":" << frame.fingerprint.file_size
            << ",\"sha256\":\"" << frame.fingerprint.sha256
            << "\",\"width\":" << frame.decoded.width << ",\"height\":" << frame.decoded.height
            << ",\"pixel_format\":\"" << frame.header.picture.pixel_format_name()
            << "\",\"image_type\":" << static_cast<unsigned int>(frame.decoded.image_type)
            << ",\"clut_type\":" << static_cast<unsigned int>(frame.decoded.clut_type)
            << ",\"clut_storage_format\":" << static_cast<unsigned int>(frame.decoded.palette_storage_format)
            << ",\"gs_tex0\":\"0x" << std::hex << std::setw(16) << std::setfill('0')
            << frame.header.picture.gs_tex0 << std::dec << "\",\"buffer_width\":"
            << frame.header.picture.buffer_width() << ",\"clut_size\":" << frame.header.picture.clut_size
            << ",\"image_size\":" << frame.header.picture.image_size
            << ",\"csm1\":" << (frame.decoded.csm1 != 0U ? "true" : "false")
            << ",\"raw_alpha_min\":" << static_cast<unsigned int>(frame.decoded.raw_alpha_min)
            << ",\"raw_alpha_max\":" << static_cast<unsigned int>(frame.decoded.raw_alpha_max)
            << ",\"raw_alpha_histogram\":[";
        bool first_alpha = true;
        for (std::size_t alpha = 0; alpha < frame.decoded.raw_alpha_histogram.size(); ++alpha) {
            const std::uint64_t count = frame.decoded.raw_alpha_histogram[alpha];
            if (count == 0U) continue;
            if (!first_alpha) manifest << ',';
            first_alpha = false;
            manifest << "{\"raw\":" << alpha << ",\"count\":" << count << '}';
        }
        manifest << "]}";
    }
    manifest << "]}\n";
    if (!manifest) throw std::runtime_error("Failed writing extraction manifest");
    std::cout << game.name << " RID" << arguments.resource_id << ": extracted " << outputs.size()
        << " frames -> " << manifest_path.string() << '\n';
}

}

int main(int argc, char** argv) {
    try {
        extract(parse_arguments(argc, argv));
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "extract_resources: " << error.what() << '\n';
        return 1;
    }
}