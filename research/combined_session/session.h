// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once
#include "fate/vfs/extracted.hpp"
#include "fate/vfs/extracted_sectors.hpp"
#include <memory>
#include <optional>

namespace dw3::host {
enum class AssetKind : uint8_t { resource, file };
struct AssetRef {
    fate::dual::GameVersion version{};
    AssetKind kind{};
    uint32_t rid{};
    std::string path;
    uint64_t file_bytes{};
    std::string file_sha256;
    bool operator==(const AssetRef&) const = default;
};
struct ReadHandle {
    std::weak_ptr<const void> mount;
    AssetRef asset;
};
struct SectorHandle {
    std::weak_ptr<const void> mount;
    fate::vfs::ExtractedFileExtent extent;
    uint64_t generation{};
private:
    friend class CombinedSession;
    std::optional<fate::vfs::ExtractedFileExtent> issued_extent_;
};
// Host references only. No guest pointers, LSNs, unlock flags or guest save RAM.
struct ReferenceProfile {
    uint64_t revision{};
    std::string installation;
    std::vector<AssetRef> assets;
};
class CombinedSession {
public:
    CombinedSession()=default;
    CombinedSession(const CombinedSession&)=delete;
    CombinedSession& operator=(const CombinedSession&)=delete;
    void mount(const std::filesystem::path& root,
               std::span<const fate::vfs::ExtractedReleaseSpec> specs);
    [[nodiscard]] bool installed() const noexcept { return bool(mount_); }
    [[nodiscard]] uint64_t generation() const noexcept { return generation_; }
    [[nodiscard]] const std::string& identity() const;
    [[nodiscard]] ReadHandle open(AssetRef asset) const;
    [[nodiscard]] std::vector<std::byte> read(const ReadHandle& handle,
        uint64_t limit=64ULL*1024*1024) const;
    [[nodiscard]] SectorHandle search(fate::dual::GameVersion version,
        std::string_view ps2_name);
    [[nodiscard]] std::vector<std::byte> read_sectors(const SectorHandle& handle,
        uint32_t relative_sector,uint32_t count) const;
    [[nodiscard]] ReferenceProfile restore(const std::filesystem::path& save_root) const;
    [[nodiscard]] ReferenceProfile commit(const std::filesystem::path& save_root,
        std::span<const AssetRef> refs,uint64_t expected_revision) const;
private:
    struct Mount {
        fate::vfs::DualExtractedVfs files;
        fate::vfs::ExtractedSectorView sectors{files};
        std::array<fate::vfs::ExtractedReleaseSpec,2> specs;
        std::filesystem::path root;
        std::array<std::filesystem::path,2> release_roots;
        std::string identity;
    };
    std::shared_ptr<Mount> mount_;
    uint64_t generation_{};
    void verify_save_root(const std::filesystem::path& root) const;
};
// Single-owner session. The profile store additionally serializes processes.
[[nodiscard]] std::string sha256(std::span<const std::byte> bytes);
[[nodiscard]] ReferenceProfile load_profile(const std::filesystem::path& root);
void store_profile(const std::filesystem::path& root,const ReferenceProfile& profile,
                   uint64_t expected_revision);
}
