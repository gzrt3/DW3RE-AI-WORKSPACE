#pragma once
#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <span>
#include <vector>

struct R5900Context;
class PS2Runtime;

namespace fate::bootchain {
inline constexpr std::uint32_t ram_size = 32u * 1024u * 1024u;
// Preserve the macro's conditional semantics without a constant-condition warning.
inline int register_index(int index) noexcept { return index; }
struct Segment {
    std::uint32_t physical{};
    std::uint32_t offset{};
    std::uint32_t file_size{};
    std::uint32_t memory_size{};
    std::uint32_t flags{};
};
struct Loaded {
    std::uint32_t entry{};
    std::vector<std::uint8_t> ram;
    std::vector<Segment> segments;
};
[[nodiscard]] Loaded load(std::span<const std::byte> bytes);
int run(const std::filesystem::path& elf_path, const std::filesystem::path& evidence);
int self_test();
void observe(const R5900Context& ctx, std::uint32_t pc, std::uint32_t word);
void require_runtime(const PS2Runtime* candidate,
    const R5900Context& ctx, const char* method);
}
