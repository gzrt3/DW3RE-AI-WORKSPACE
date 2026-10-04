#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <span>
#include <sstream>
#include <string>
#include <vector>
#include "fate/elf.hpp"

namespace {
std::string to_hex(std::span<const std::byte> bytes) {
    std::ostringstream oss;
    oss << std::hex << std::uppercase << std::setfill('0');
    for (std::size_t i = 0; i < bytes.size(); ++i) {
        if (i > 0) oss << ' ';
        oss << std::setw(2) << static_cast<unsigned>(std::to_integer<uint8_t>(bytes[i]));
    }
    return oss.str();
}

std::string hex_u32(uint32_t val) {
    std::ostringstream oss;
    oss << "0x" << std::hex << std::uppercase << std::setfill('0') << std::setw(8) << val;
    return oss.str();
}
} // namespace

int main(int argc, char* argv[]) {
    std::vector<std::filesystem::path> elf_paths;
    if (argc >= 2) {
        for (int i = 1; i < argc; ++i) {
            elf_paths.emplace_back(argv[i]);
        }
    } else {
        elf_paths = {
            "C:/DW3/sources/dumps/dw3_ps2/SLUS_202.77",
            "C:/DW3/sources/dumps/dw3xl_ps2/SLUS_206.17",
            "C:/DW3/sources/dumps/ssm2_jp_ps2/SLPM_650.53"
        };
    }

    try {
        std::filesystem::create_directories("C:/Fate Soldiers 3/artifacts");
        std::ofstream out("C:/Fate Soldiers 3/artifacts/elf_inspection_report.json");
        out << "{\n  \"executables\": [\n";

        for (std::size_t idx = 0; idx < elf_paths.size(); ++idx) {
            const auto& elf_path = elf_paths[idx];
            std::ifstream file(elf_path, std::ios::binary | std::ios::ate);
            if (!file) throw std::runtime_error("Could not open file: " + elf_path.string());

            std::streamsize size = file.tellg();
            file.seekg(0, std::ios::beg);
            std::vector<std::byte> buffer(static_cast<std::size_t>(size));
            file.read(reinterpret_cast<char*>(buffer.data()), size);

            auto image = fate::elf::Image::parse(std::span<const std::byte>(buffer));

            if (idx > 0) out << ",\n";
            out << "    {\n";
            out << "      \"file\": \"" << elf_path.filename().string() << "\",\n";

            const uint32_t start_addr = 0x00253B80;
            const uint32_t end_addr = 0x002548DC;
            const uint32_t stride = 15;

            uint64_t table_start_offset = image.virtual_to_file_offset(start_addr, stride);
            out << "      \"officer_window_start_vaddr\": \"" << hex_u32(start_addr) << "\",\n";
            out << "      \"officer_window_start_file_offset\": " << table_start_offset << ",\n";
            out << "      \"sample_records_15b\": [\n";

            const std::vector<std::pair<const char*, uint32_t>> sample_officers = {
                {"Zhao Yun (ID 0)", 0x00253B80},
                {"Guan Yu (ID 1)", 0x00253B8F},
                {"Zhang Fei (ID 2)", 0x00253B9E},
                {"Lu Bu (ID 12)", 0x00253C34},
                {"Nu Wa (ID 40)", 0x00253DD8},
                {"Cheng Yi (ID 41)", 0x00253E14},
                {"Fan Neng (ID 170 - Unused)", 0x0025461B},
                {"Zhang Cheng (ID 214)", end_addr}
            };

            for (std::size_t s = 0; s < sample_officers.size(); ++s) {
                const auto& [label, addr] = sample_officers[s];
                uint64_t off = image.virtual_to_file_offset(addr, stride);
                auto slice = std::span<const std::byte>(buffer.data() + off, stride);
                if (s > 0) out << ",\n";
                out << "        {\"label\": \"" << label << "\", \"vaddr\": \"" << hex_u32(addr)
                    << "\", \"file_offset\": " << off << ", \"bytes_hex\": \"" << to_hex(slice) << "\"}";
            }
            out << "\n      ],\n";

            out << "      \"fast_import_addresses\": [\n";
            const std::vector<uint32_t> patch_addrs = {0x0023F5D8, 0x0023F5E0, 0x0023F848, 0x0023FA08};
            for (std::size_t p = 0; p < patch_addrs.size(); ++p) {
                uint32_t addr = patch_addrs[p];
                uint64_t off = image.virtual_to_file_offset(addr, 4);
                uint32_t word = 0;
                for (int b = 0; b < 4; ++b) {
                    word |= (static_cast<uint32_t>(std::to_integer<uint8_t>(buffer[off + b])) << (8 * b));
                }
                if (p > 0) out << ",\n";
                out << "        {\"vaddr\": \"" << hex_u32(addr) << "\", \"file_offset\": " << off
                    << ", \"word_hex\": \"" << hex_u32(word) << "\", \"word_dec\": " << word << "}";
            }
            out << "\n      ]\n    }";
        }

        out << "\n  ]\n}\n";
        std::cout << "Inspection completed for " << elf_paths.size() << " ELF files.\n";
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
