#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <map>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace fate::dual {

enum class GameVersion {
    base,
    xl
};

enum class Region {
    unknown,
    us,
    jp,
    eu
};

enum class EvidenceStatus {
    fact,
    hypothesis,
    derived,
    implemented,
    rejected,
    unknown
};

enum class DiffClass {
    identical,
    base_only_unmatched,
    xl_only_unmatched,
    changed_confirmed,
    ambiguous
};

enum class LogicalEvidenceKind {
    none,
    documented_symbol,
    binary_xref,
    trace,
    curated_manifest
};

enum class MountState {
    xl_only,
    base_validated,
    merged_ready,
    error
};

struct EvidenceRef {
    std::string path;
    std::optional<std::string> sha256;
    std::optional<std::uint64_t> offset;
    std::optional<std::uint32_t> virtual_address;
    std::string note;
    EvidenceStatus status{EvidenceStatus::unknown};
};

struct ContentSourceId {
    GameVersion version{GameVersion::base};
    Region region{Region::unknown};
    std::string label;

    [[nodiscard]] bool operator==(const ContentSourceId& other) const noexcept;
    [[nodiscard]] bool operator<(const ContentSourceId& other) const noexcept;
};

struct ContentSource {
    ContentSourceId id;
    std::filesystem::path elf_path;
    std::filesystem::path bns_path;
    std::uint64_t elf_size{};
    std::uint64_t bns_size{};
    std::string elf_sha256;
    std::string bns_sha256;
    std::uint32_t descriptor_count{};
    std::uint32_t descriptor_table_virtual_address{};
    std::string descriptor_table_sha256;
    std::vector<EvidenceRef> evidence;
};

struct SourceVerificationResult {
    bool ok{};
    std::vector<std::string> errors;
};

enum class VerificationMode {
    metadata_only,
    hash_files
};

[[nodiscard]] SourceVerificationResult verify_content_source(
    const ContentSource& source,
    const std::filesystem::path& root,
    VerificationMode mode);

struct ResourceKey {
    ContentSourceId source;
    std::uint32_t rid{};

    [[nodiscard]] bool operator==(const ResourceKey& other) const noexcept;
    [[nodiscard]] bool operator<(const ResourceKey& other) const noexcept;
};

struct ResourceLocator {
    ResourceKey key;
    std::filesystem::path relative_path;
    std::uint64_t byte_offset{};
    std::uint64_t byte_length{};
    std::string payload_sha256;
    std::vector<EvidenceRef> evidence;
};

[[nodiscard]] std::vector<std::byte> read_resource_bytes(
    const ResourceLocator& locator,
    const std::filesystem::path& root);

struct ResourceMatchEvidence {
    LogicalEvidenceKind kind{LogicalEvidenceKind::none};
    EvidenceRef evidence;
    std::string explanation;

    [[nodiscard]] bool proves_logical_identity() const noexcept;
};

struct ResourceDiffRecord {
    DiffClass classification{DiffClass::ambiguous};
    std::vector<ResourceKey> base_keys;
    std::vector<ResourceKey> xl_keys;
    std::uint64_t payload_size{};
    std::string payload_sha256;
    std::vector<ResourceMatchEvidence> logical_evidence;
    std::string diagnostic;
};

class ContainerDiff {
public:
    [[nodiscard]] static ContainerDiff compare(
        std::span<const ResourceLocator> base_resources,
        std::span<const ResourceLocator> xl_resources,
        std::span<const ResourceMatchEvidence> logical_evidence);

    [[nodiscard]] const std::vector<ResourceDiffRecord>& records() const noexcept;

private:
    std::vector<ResourceDiffRecord> records_;
};

enum class SymbolKind {
    section,
    resource,
    officer_slot,
    external_dependency,
    load_original_state
};

struct LogicalSymbol {
    std::string id;
    SymbolKind kind{SymbolKind::resource};
    std::string section;
    std::optional<ResourceKey> resource;
    std::string documentary_name;
    EvidenceStatus status{EvidenceStatus::unknown};
    std::vector<EvidenceRef> evidence;
};

class SymbolCatalog {
public:
    [[nodiscard]] static std::array<std::string_view, 15> canonical_sections() noexcept;
    [[nodiscard]] static std::vector<LogicalSymbol> documentary_top_area_symbols(const ContentSourceId& source);

    void add(LogicalSymbol symbol);
    [[nodiscard]] const LogicalSymbol* find(std::string_view id) const noexcept;
    [[nodiscard]] std::vector<LogicalSymbol> by_section(std::string_view section) const;
    [[nodiscard]] const std::vector<LogicalSymbol>& symbols() const noexcept;

private:
    std::vector<LogicalSymbol> symbols_;
};

struct OfficerSlot {
    std::uint16_t physical_index{};
    std::array<std::byte, 15> raw{};
    std::optional<std::uint16_t> documented_id;
    std::optional<std::string> version_specific_name;
    std::uint32_t virtual_address{};
    std::uint64_t file_offset{};
    EvidenceStatus status{EvidenceStatus::unknown};
    std::vector<EvidenceRef> evidence;
};

class OfficerCatalog {
public:
    static constexpr std::size_t slot_count = 229;
    static constexpr std::size_t raw_stride = 15;
    static constexpr std::size_t documented_anchor_count = 9;

    [[nodiscard]] static OfficerCatalog from_raw_slots(
        ContentSourceId source,
        std::uint32_t table_virtual_address,
        std::uint64_t table_file_offset,
        std::span<const std::byte> bytes);

    void annotate_anchor(
        std::uint16_t physical_index,
        std::uint16_t documented_id,
        std::optional<std::string> version_specific_name,
        std::vector<EvidenceRef> evidence);

    [[nodiscard]] const OfficerSlot& slot(std::uint16_t physical_index) const;
    [[nodiscard]] const std::array<OfficerSlot, slot_count>& slots() const noexcept;
    [[nodiscard]] const ContentSourceId& source() const noexcept;

private:
    ContentSourceId source_;
    std::array<OfficerSlot, slot_count> slots_{};
};

struct LoadOriginalTraceEvent {
    std::uint32_t virtual_address{};
    std::uint64_t file_offset{};
    std::string operation;
    std::string observed_value;
    EvidenceRef evidence;
};

struct LoadOriginalModel {
    EvidenceStatus status{EvidenceStatus::unknown};
    std::vector<LoadOriginalTraceEvent> events;
    std::vector<std::string> unknowns;

    void add_event(LoadOriginalTraceEvent event);
    void require_unknown(std::string description);
    [[nodiscard]] bool semantically_verified() const noexcept;
};

struct ExternalDependency {
    std::filesystem::path relative_path;
    ContentSourceId source;
    std::uint64_t size{};
    std::string sha256;
    std::vector<ResourceKey> observed_consumers;
    std::vector<EvidenceRef> evidence;
};

class ExternalDependencyManifest {
public:
    void add(ExternalDependency dependency);
    [[nodiscard]] SourceVerificationResult validate(
        const std::filesystem::path& root,
        VerificationMode mode) const;
    [[nodiscard]] const std::vector<ExternalDependency>& dependencies() const noexcept;

private:
    std::vector<ExternalDependency> dependencies_;
};

struct MountOverlay {
    std::string logical_symbol_id;
    ResourceKey replacement;
    ResourceKey previous;
    std::vector<EvidenceRef> evidence;
};

struct MountResolution {
    ResourceKey key;
    std::string logical_symbol_id;
};

class MergedMount {
public:
    explicit MergedMount(ContentSourceId xl_source);

    [[nodiscard]] MountState state() const noexcept;
    [[nodiscard]] const std::string& last_error() const noexcept;

    void set_base_source(ContentSourceId base_source);
    void stage_mapping(std::string logical_symbol_id, ResourceKey key, std::vector<EvidenceRef> evidence);
    void stage_overlay(MountOverlay overlay);
    bool commit();
    void rollback() noexcept;

    [[nodiscard]] std::optional<MountResolution> resolve(std::string_view logical_symbol_id) const;
    [[nodiscard]] const std::map<std::string, ResourceKey>& active_mappings() const noexcept;

private:
    ContentSourceId xl_source_;
    std::optional<ContentSourceId> base_source_;
    MountState state_{MountState::xl_only};
    std::string last_error_;
    std::map<std::string, ResourceKey> active_mappings_;
    std::map<std::string, ResourceKey> staged_mappings_;
    std::vector<MountOverlay> staged_overlays_;
};

[[nodiscard]] const char* to_string(GameVersion version) noexcept;
[[nodiscard]] const char* to_string(Region region) noexcept;
[[nodiscard]] const char* to_string(EvidenceStatus status) noexcept;
[[nodiscard]] const char* to_string(DiffClass classification) noexcept;
[[nodiscard]] const char* to_string(MountState state) noexcept;

}
