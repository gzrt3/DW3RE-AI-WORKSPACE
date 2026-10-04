#pragma once

#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace fate::elf {

struct ProgramHeader {
    std::uint32_t type{};
    std::uint32_t offset{};
    std::uint32_t virtual_address{};
    std::uint32_t physical_address{};
    std::uint32_t file_size{};
    std::uint32_t memory_size{};
    std::uint32_t flags{};
    std::uint32_t alignment{};
};

struct SectionHeader {
    std::uint32_t name_offset{};
    std::string name;
    std::uint32_t type{};
    std::uint32_t flags{};
    std::uint32_t address{};
    std::uint32_t offset{};
    std::uint32_t size{};
    std::uint32_t link{};
    std::uint32_t info{};
    std::uint32_t alignment{};
    std::uint32_t entry_size{};
};

class Image {
public:
    [[nodiscard]] static Image parse(std::span<const std::byte> bytes);

    [[nodiscard]] std::uint32_t entry_point() const noexcept;
    [[nodiscard]] std::uint16_t machine() const noexcept;
    [[nodiscard]] std::uint32_t flags() const noexcept;
    [[nodiscard]] const std::vector<ProgramHeader>& program_headers() const noexcept;
    [[nodiscard]] const std::vector<SectionHeader>& section_headers() const noexcept;
    [[nodiscard]] std::uint64_t virtual_to_file_offset(
        std::uint32_t virtual_address,
        std::uint32_t byte_count = 1) const;
    void load_segments(std::span<const std::byte> file, std::span<std::byte> memory) const;

private:
    std::uint32_t entry_point_{};
    std::uint16_t machine_{};
    std::uint32_t flags_{};
    std::vector<ProgramHeader> program_headers_;
    std::vector<SectionHeader> section_headers_;
};

}
