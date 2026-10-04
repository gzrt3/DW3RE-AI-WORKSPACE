#include "fate/elf.hpp"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <iostream>
#include <stdexcept>
#include <vector>

namespace {

void put_u16(std::vector<std::byte>& bytes, std::size_t offset, std::uint16_t value) {
    bytes.at(offset) = static_cast<std::byte>(value & 0xffu);
    bytes.at(offset + 1u) = static_cast<std::byte>((value >> 8u) & 0xffu);
}

void put_u32(std::vector<std::byte>& bytes, std::size_t offset, std::uint32_t value) {
    for (std::size_t index = 0; index < 4u; ++index) {
        bytes.at(offset + index) = static_cast<std::byte>((value >> (index * 8u)) & 0xffu);
    }
}

std::vector<std::byte> make_two_segment_elf() {
    std::vector<std::byte> bytes(124u, std::byte{0});
    bytes[0] = std::byte{0x7f};
    bytes[1] = std::byte{'E'};
    bytes[2] = std::byte{'L'};
    bytes[3] = std::byte{'F'};
    bytes[4] = std::byte{1}; // ELF32
    bytes[5] = std::byte{1}; // little-endian
    bytes[6] = std::byte{1};
    put_u16(bytes, 16u, 2u);
    put_u16(bytes, 18u, 8u); // MIPS
    put_u32(bytes, 20u, 1u);
    put_u32(bytes, 24u, 0x00100008u);
    put_u32(bytes, 28u, 52u);
    put_u16(bytes, 40u, 52u);
    put_u16(bytes, 42u, 32u);
    put_u16(bytes, 44u, 2u);
    put_u16(bytes, 46u, 40u);

    const auto put_program = [&bytes](std::size_t offset, std::uint32_t file_offset,
                                      std::uint32_t virtual_address, std::uint32_t file_size,
                                      std::uint32_t memory_size) {
        put_u32(bytes, offset, 1u); // PT_LOAD
        put_u32(bytes, offset + 4u, file_offset);
        put_u32(bytes, offset + 8u, virtual_address);
        put_u32(bytes, offset + 12u, virtual_address);
        put_u32(bytes, offset + 16u, file_size);
        put_u32(bytes, offset + 20u, memory_size);
        put_u32(bytes, offset + 24u, 5u);
        put_u32(bytes, offset + 28u, 4u);
    };
    put_program(52u, 116u, 0x00001000u, 4u, 8u);
    put_program(84u, 120u, 0x0020fff8u, 4u, 16u);
    bytes[116] = std::byte{0x11};
    bytes[117] = std::byte{0x22};
    bytes[118] = std::byte{0x33};
    bytes[119] = std::byte{0x44};
    bytes[120] = std::byte{0xaa};
    bytes[121] = std::byte{0xbb};
    bytes[122] = std::byte{0xcc};
    bytes[123] = std::byte{0xdd};
    return bytes;
}

bool throws_on_load(const fate::elf::Image& image, const std::vector<std::byte>& file,
                    std::vector<std::byte>& memory) {
    try {
        image.load_segments(file, memory);
        return false;
    } catch (const std::runtime_error&) {
        return true;
    }
}

}

int main() {
    try {
        auto file = make_two_segment_elf();
        const fate::elf::Image image = fate::elf::Image::parse(file);
        std::vector<std::byte> memory(0x00210000u, std::byte{0x5a});
        if (!throws_on_load(image, file, memory) || memory[0x1000u] != std::byte{0x5a}) {
            throw std::runtime_error("out-of-range segment was accepted or caused a partial load");
        }

        put_u32(file, 84u + 8u, 0x00200000u);
        put_u32(file, 84u + 12u, 0x00200000u);
        const fate::elf::Image valid_image = fate::elf::Image::parse(file);
        valid_image.load_segments(file, memory);
        if (memory[0x1000u] != std::byte{0x11} || memory[0x1003u] != std::byte{0x44} ||
            memory[0x1004u] != std::byte{0} || memory[0x1007u] != std::byte{0} ||
            memory[0x200000u] != std::byte{0xaa} || memory[0x200004u] != std::byte{0}) {
            throw std::runtime_error("PT_LOAD copy or BSS zero-fill did not match the ELF contract");
        }

        auto truncated_file = file;
        truncated_file.pop_back();
        const fate::elf::Image truncated_image = fate::elf::Image::parse(truncated_file);
        if (!throws_on_load(truncated_image, truncated_file, memory)) {
            throw std::runtime_error("truncated PT_LOAD file range was accepted");
        }

        std::cout << "elf_loader_contract=PASS copy=BSS_zero_fill bounds=reject_before_write\n";
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "elf_loader_contract=FAIL reason=" << error.what() << '\n';
        return 1;
    }
}
