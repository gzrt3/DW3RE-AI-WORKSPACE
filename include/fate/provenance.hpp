#pragma once

#include <cstdint>
#include <filesystem>
#include <optional>
#include <string>

namespace fate::provenance {

struct Fingerprint {
    std::uint64_t file_size{};
    std::uint64_t hashed_bytes{};
    std::string sha256;
};

[[nodiscard]] Fingerprint fingerprint(
    const std::filesystem::path& path,
    std::optional<std::uint64_t> prefix_bytes = std::nullopt);

void verify_file(
    const std::filesystem::path& path,
    std::uint64_t expected_size,
    const std::string& expected_sha256,
    std::optional<std::uint64_t> prefix_bytes = std::nullopt);

}