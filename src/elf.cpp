#include <limits>
#include <stdexcept>
#include <algorithm>

#include "fate/elf.hpp"

namespace fate::elf {
namespace {

template <typename T>
[[nodiscard]] T read_little_endian(std::span<const std::byte> bytes, std::size_t offset) {
    if (offset > bytes.size() || sizeof(T) > bytes.size() - offset) {
        throw std::runtime_error("ELF field extends beyond the input file");
    }
    std::uint64_t value{};
    for (std::size_t index = 0; index < sizeof(T); ++index) {
        value |= static_cast<std::uint64_t>(std::to_integer<unsigned int>(bytes[offset + index])) << (index * 8U);
    }
    return static_cast<T>(value);
}

void validate_table(
    std::size_t file_size,
    std::uint32_t offset,
    std::uint16_t entry_size,
    std::uint32_t count,
    std::uint16_t minimum_entry_size) {
    if (count == 0) {
        return;
    }
    if (entry_size < minimum_entry_size ||
        static_cast<std::uint64_t>(offset) + static_cast<std::uint64_t>(entry_size) * count > file_size) {
        throw std::runtime_error("ELF table is malformed or extends beyond the input file");
    }
}

}

Image Image::parse(std::span<const std::byte> bytes) {
    if (bytes.size() < 52 ||
        std::to_integer<unsigned int>(bytes[0]) != 0x7fU ||
        std::to_integer<unsigned int>(bytes[1]) != static_cast<unsigned int>('E') ||
        std::to_integer<unsigned int>(bytes[2]) != static_cast<unsigned int>('L') ||
        std::to_integer<unsigned int>(bytes[3]) != static_cast<unsigned int>('F')) {
        throw std::runtime_error("Input does not contain a complete ELF32 header");
    }
    if (std::to_integer<unsigned int>(bytes[4]) != 1U ||
        std::to_integer<unsigned int>(bytes[5]) != 1U) {
        throw std::runtime_error("Expected ELF32 little-endian input");
    }

    const std::uint16_t machine = read_little_endian<std::uint16_t>(bytes, 18);
    if (machine != 8U) {
        throw std::runtime_error("Expected MIPS ELF (e_machine=8)");
    }

    const std::uint32_t program_offset = read_little_endian<std::uint32_t>(bytes, 28);
    const std::uint32_t section_offset = read_little_endian<std::uint32_t>(bytes, 32);
    const std::uint16_t program_entry_size = read_little_endian<std::uint16_t>(bytes, 42);
    const std::uint16_t program_count = read_little_endian<std::uint16_t>(bytes, 44);
    const std::uint16_t section_entry_size = read_little_endian<std::uint16_t>(bytes, 46);
    const std::uint16_t section_count_field = read_little_endian<std::uint16_t>(bytes, 48);
    const std::uint16_t section_name_index_field = read_little_endian<std::uint16_t>(bytes, 50);
    if (program_count > 4096U) {
        throw std::runtime_error("ELF has an unreasonable number of program headers");
    }

    Image image;
    image.entry_point_ = read_little_endian<std::uint32_t>(bytes, 24);
    image.machine_ = machine;
    image.flags_ = read_little_endian<std::uint32_t>(bytes, 36);
    validate_table(bytes.size(), program_offset, program_entry_size, program_count, 32);

    image.program_headers_.reserve(program_count);
    for (std::uint32_t index = 0; index < program_count; ++index) {
        const std::size_t offset = static_cast<std::size_t>(program_offset) +
            static_cast<std::size_t>(index) * program_entry_size;
        image.program_headers_.push_back(ProgramHeader{
            read_little_endian<std::uint32_t>(bytes, offset),
            read_little_endian<std::uint32_t>(bytes, offset + 4),
            read_little_endian<std::uint32_t>(bytes, offset + 8),
            read_little_endian<std::uint32_t>(bytes, offset + 12),
            read_little_endian<std::uint32_t>(bytes, offset + 16),
            read_little_endian<std::uint32_t>(bytes, offset + 20),
            read_little_endian<std::uint32_t>(bytes, offset + 24),
            read_little_endian<std::uint32_t>(bytes, offset + 28)});
    }

    std::uint32_t section_count = section_count_field;
    std::uint32_t section_name_index = section_name_index_field;
    if (section_offset != 0 && section_entry_size >= 40U) {
        const SectionHeader section_zero{
            read_little_endian<std::uint32_t>(bytes, section_offset),
            {},
            read_little_endian<std::uint32_t>(bytes, section_offset + 4),
            read_little_endian<std::uint32_t>(bytes, section_offset + 8),
            read_little_endian<std::uint32_t>(bytes, section_offset + 12),
            read_little_endian<std::uint32_t>(bytes, section_offset + 16),
            read_little_endian<std::uint32_t>(bytes, section_offset + 20),
            read_little_endian<std::uint32_t>(bytes, section_offset + 24),
            read_little_endian<std::uint32_t>(bytes, section_offset + 28),
            read_little_endian<std::uint32_t>(bytes, section_offset + 32),
            read_little_endian<std::uint32_t>(bytes, section_offset + 36)};
        if (section_count == 0U) {
            section_count = section_zero.size;
        }
        if (section_name_index == 0xffffU) {
            section_name_index = section_zero.link;
        }
        if (section_count > 65536U) {
            throw std::runtime_error("ELF has an unreasonable number of section headers");
        }
        validate_table(bytes.size(), section_offset, section_entry_size, section_count, 40);
        image.section_headers_.reserve(section_count);
        for (std::uint32_t index = 0; index < section_count; ++index) {
            const std::size_t offset = static_cast<std::size_t>(section_offset) +
                static_cast<std::size_t>(index) * section_entry_size;
            image.section_headers_.push_back(SectionHeader{
                read_little_endian<std::uint32_t>(bytes, offset),
                {},
                read_little_endian<std::uint32_t>(bytes, offset + 4),
                read_little_endian<std::uint32_t>(bytes, offset + 8),
                read_little_endian<std::uint32_t>(bytes, offset + 12),
                read_little_endian<std::uint32_t>(bytes, offset + 16),
                read_little_endian<std::uint32_t>(bytes, offset + 20),
                read_little_endian<std::uint32_t>(bytes, offset + 24),
                read_little_endian<std::uint32_t>(bytes, offset + 28),
                read_little_endian<std::uint32_t>(bytes, offset + 32),
                read_little_endian<std::uint32_t>(bytes, offset + 36)});
        }
        if (section_name_index >= section_count && section_name_index != 0U) {
            throw std::runtime_error("ELF section-name table index is out of range");
        }
        if (section_name_index != 0U) {
            const SectionHeader& string_table = image.section_headers_[section_name_index];
            if (string_table.type != 3U || string_table.offset > bytes.size() ||
                string_table.size > bytes.size() - string_table.offset) {
                throw std::runtime_error("ELF section-name string table is malformed");
            }
            const auto names = bytes.subspan(string_table.offset, string_table.size);
            for (SectionHeader& section : image.section_headers_) {
                if (section.name_offset >= names.size()) {
                    if (section.name_offset != 0U) {
                        throw std::runtime_error("ELF section name offset is out of range");
                    }
                    continue;
                }
                std::size_t end = section.name_offset;
                while (end < names.size() && std::to_integer<unsigned int>(names[end]) != 0U) {
                    ++end;
                }
                if (end == names.size()) {
                    throw std::runtime_error("ELF section name is not null-terminated");
                }
                section.name.reserve(end - section.name_offset);
                for (std::size_t index = section.name_offset; index < end; ++index) {
                    section.name.push_back(static_cast<char>(std::to_integer<unsigned int>(names[index])));
                }
            }
        }
    }

    return image;
}

std::uint32_t Image::entry_point() const noexcept { return entry_point_; }
std::uint16_t Image::machine() const noexcept { return machine_; }
std::uint32_t Image::flags() const noexcept { return flags_; }
const std::vector<ProgramHeader>& Image::program_headers() const noexcept { return program_headers_; }
const std::vector<SectionHeader>& Image::section_headers() const noexcept { return section_headers_; }

std::uint64_t Image::virtual_to_file_offset(
    std::uint32_t virtual_address,
    std::uint32_t byte_count) const {
    const ProgramHeader* match = nullptr;
    for (const ProgramHeader& program : program_headers_) {
        if (program.type != 1U || virtual_address < program.virtual_address) {
            continue;
        }
        const std::uint64_t relative = static_cast<std::uint64_t>(virtual_address) - program.virtual_address;
        if (relative + byte_count > program.file_size) {
            continue;
        }
        if (match != nullptr) {
            throw std::runtime_error("Virtual address maps through multiple PT_LOAD segments");
        }
        match = &program;
    }
    if (match == nullptr) {
        throw std::runtime_error("Virtual address is not backed by file bytes in a PT_LOAD segment");
    }
    return static_cast<std::uint64_t>(match->offset) +
        (static_cast<std::uint64_t>(virtual_address) - match->virtual_address);
}

void Image::load_segments(std::span<const std::byte> file, std::span<std::byte> memory) const {
    struct LoadSegment {
        const ProgramHeader* header;
        std::uint32_t physical_address;
    };

    std::vector<LoadSegment> load_segments;
    for (const ProgramHeader& program : program_headers_) {
        if (program.type != 1U) {
            continue;
        }
        if (program.file_size > program.memory_size) {
            throw std::runtime_error("ELF PT_LOAD filesz exceeds memsz");
        }

        const std::uint32_t physical_address = program.virtual_address & 0x1fffffffu;
        const std::uint64_t file_end = static_cast<std::uint64_t>(program.offset) + program.file_size;
        const std::uint64_t memory_end = static_cast<std::uint64_t>(physical_address) + program.memory_size;
        if (file_end > file.size()) {
            throw std::runtime_error("ELF PT_LOAD file range extends beyond the input file");
        }
        if (memory_end > memory.size()) {
            throw std::runtime_error("ELF PT_LOAD memory range extends beyond guest RDRAM");
        }
        load_segments.push_back(LoadSegment{&program, physical_address});
    }

    // Validate every segment before changing guest memory, so malformed later
    // headers cannot leave a partially loaded image behind.
    for (const LoadSegment& segment : load_segments) {
        const ProgramHeader& program = *segment.header;
        auto destination = memory.subspan(segment.physical_address, program.memory_size);
        std::fill(destination.begin(), destination.end(), std::byte{0});
        std::copy_n(file.begin() + program.offset, program.file_size, destination.begin());
    }
}

}
