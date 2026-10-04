#pragma once
#include "fate/runtime.hpp"
namespace fate::runtime {
// Imports the pinned Phase 7 evidence schema; validates every RID and range.
[[nodiscard]] RuntimeSourceRegistry load_precomputed(const std::filesystem::path& evidence,
    const std::filesystem::path& root, Trust trust = Trust::precomputed_attestation);
[[nodiscard]] SourceId game_id(std::string_view game);
[[nodiscard]] Mappings numeric_mappings(const RuntimeSourceRegistry& registry);
[[nodiscard]] std::string json_string(std::string_view input);
void atomic_write(const std::filesystem::path& path, std::span<const std::byte> bytes);
void atomic_write(const std::filesystem::path& path, std::string_view text);
}
