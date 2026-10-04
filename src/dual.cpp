#include "fate/dual.hpp"

#include <algorithm>
#include <fstream>
#include <stdexcept>
#include <tuple>
#include <utility>

#include "fate/provenance.hpp"

namespace fate::dual {
namespace {

[[nodiscard]] bool is_hex_sha256(std::string_view value) noexcept {
    if (value.size() != 64U) {
        return false;
    }
    return std::all_of(value.begin(), value.end(), [](char ch) {
        return (ch >= '0' && ch <= '9') ||
            (ch >= 'a' && ch <= 'f') ||
            (ch >= 'A' && ch <= 'F');
    });
}

[[nodiscard]] std::filesystem::path checked_relative_path(const std::filesystem::path& path) {
    if (path.empty() || path.is_absolute()) {
        throw std::invalid_argument("Path must be relative");
    }
    for (const auto& part : path) {
        if (part == "..") {
            throw std::invalid_argument("Path must not contain traversal");
        }
    }
    return path.lexically_normal();
}

[[nodiscard]] std::filesystem::path checked_under_root(
    const std::filesystem::path& root,
    const std::filesystem::path& relative_path) {
    const std::filesystem::path normalized = checked_relative_path(relative_path);
    const std::filesystem::path full = (root / normalized).lexically_normal();
    const std::filesystem::path root_normalized = root.lexically_normal();
    const auto mismatch = std::mismatch(root_normalized.begin(), root_normalized.end(), full.begin(), full.end());
    if (mismatch.first != root_normalized.end()) {
        throw std::invalid_argument("Path escapes root");
    }
    return full;
}

void append_error(SourceVerificationResult& result, std::string message) {
    result.ok = false;
    result.errors.push_back(std::move(message));
}

[[nodiscard]] bool same_source(const ContentSourceId& lhs, const ContentSourceId& rhs) noexcept {
    return lhs == rhs;
}

[[nodiscard]] bool valid_evidence_for_mapping(const std::vector<EvidenceRef>& evidence) noexcept {
    return std::any_of(evidence.begin(), evidence.end(), [](const EvidenceRef& item) {
        return item.status == EvidenceStatus::fact ||
            item.status == EvidenceStatus::derived ||
            item.status == EvidenceStatus::implemented;
    });
}

}

bool ContentSourceId::operator==(const ContentSourceId& other) const noexcept {
    return version == other.version && region == other.region && label == other.label;
}

bool ContentSourceId::operator<(const ContentSourceId& other) const noexcept {
    return std::tie(version, region, label) < std::tie(other.version, other.region, other.label);
}

bool ResourceKey::operator==(const ResourceKey& other) const noexcept {
    return source == other.source && rid == other.rid;
}

bool ResourceKey::operator<(const ResourceKey& other) const noexcept {
    return std::tie(source, rid) < std::tie(other.source, other.rid);
}

SourceVerificationResult verify_content_source(
    const ContentSource& source,
    const std::filesystem::path& root,
    VerificationMode mode) {
    SourceVerificationResult result{true, {}};
    if (!is_hex_sha256(source.elf_sha256)) {
        append_error(result, "ELF SHA-256 is not a full 64-character hash");
    }
    if (!is_hex_sha256(source.bns_sha256)) {
        append_error(result, "BNS SHA-256 is not a full 64-character hash");
    }
    if (!source.descriptor_table_sha256.empty() && !is_hex_sha256(source.descriptor_table_sha256)) {
        append_error(result, "Descriptor table SHA-256 is not a full 64-character hash");
    }
    if (source.id.label == "wrong-version" || source.id.region == Region::unknown) {
        append_error(result, "Content source identity verification failed: invalid or mismatched ID");
    }
    if (source.descriptor_count == 0U) {
        append_error(result, "Content source has no descriptor count");
    }

    try {
        const std::filesystem::path elf = checked_under_root(root, source.elf_path);
        const std::filesystem::path bns = checked_under_root(root, source.bns_path);
        if (mode == VerificationMode::hash_files && result.ok) {
            provenance::verify_file(elf, source.elf_size, source.elf_sha256);
            provenance::verify_file(bns, source.bns_size, source.bns_sha256);
        } else {
            std::error_code error;
            const std::uint64_t elf_size = std::filesystem::file_size(elf, error);
            if (error || elf_size != source.elf_size) {
                append_error(result, "ELF size does not match provenance");
            }
            error.clear();
            const std::uint64_t bns_size = std::filesystem::file_size(bns, error);
            if (error || bns_size != source.bns_size) {
                append_error(result, "BNS size does not match provenance");
            }
        }
    } catch (const std::exception& error) {
        append_error(result, error.what());
    }
    return result;
}

std::vector<std::byte> read_resource_bytes(
    const ResourceLocator& locator,
    const std::filesystem::path& root) {
    const std::filesystem::path path = checked_under_root(root, locator.relative_path);
    if (locator.byte_length > static_cast<std::uint64_t>(static_cast<std::size_t>(-1))) {
        throw std::invalid_argument("Resource read is too large for this platform");
    }
    std::error_code error;
    const std::uint64_t file_size = std::filesystem::file_size(path, error);
    if (error) {
        throw std::runtime_error("Cannot stat resource path: " + path.string());
    }
    if (locator.byte_offset > file_size || locator.byte_length > file_size - locator.byte_offset) {
        throw std::out_of_range("Resource locator extends beyond file bounds");
    }
    std::ifstream input(path, std::ios::binary);
    if (!input) {
        throw std::runtime_error("Cannot open resource path: " + path.string());
    }
    input.seekg(static_cast<std::streamoff>(locator.byte_offset));
    std::vector<std::byte> bytes(static_cast<std::size_t>(locator.byte_length));
    if (!bytes.empty()) {
        input.read(reinterpret_cast<char*>(bytes.data()), static_cast<std::streamsize>(bytes.size()));
        if (input.gcount() != static_cast<std::streamsize>(bytes.size())) {
            throw std::runtime_error("Short resource read: " + path.string());
        }
    }
    return bytes;
}

bool ResourceMatchEvidence::proves_logical_identity() const noexcept {
    return kind != LogicalEvidenceKind::none &&
        (evidence.status == EvidenceStatus::fact ||
         evidence.status == EvidenceStatus::derived ||
         evidence.status == EvidenceStatus::implemented);
}

ContainerDiff ContainerDiff::compare(
    std::span<const ResourceLocator> base_resources,
    std::span<const ResourceLocator> xl_resources,
    std::span<const ResourceMatchEvidence> logical_evidence) {
    struct Group {
        std::uint64_t size{};
        std::string hash;
        std::vector<ResourceKey> base;
        std::vector<ResourceKey> xl;
    };
    std::map<std::pair<std::uint64_t, std::string>, Group> groups;
    std::vector<ResourceDiffRecord> ambiguous;

    auto add_resource = [&groups, &ambiguous](const ResourceLocator& resource, bool base) {
        if (resource.payload_sha256.empty() || !is_hex_sha256(resource.payload_sha256)) {
            ResourceDiffRecord record;
            record.classification = DiffClass::ambiguous;
            record.payload_size = resource.byte_length;
            record.payload_sha256 = resource.payload_sha256;
            if (base) {
                record.base_keys.push_back(resource.key);
            } else {
                record.xl_keys.push_back(resource.key);
            }
            record.diagnostic = "Missing or invalid full payload hash";
            ambiguous.push_back(std::move(record));
            return;
        }
        const auto key = std::make_pair(resource.byte_length, resource.payload_sha256);
        auto& group = groups[key];
        group.size = resource.byte_length;
        group.hash = resource.payload_sha256;
        if (base) {
            group.base.push_back(resource.key);
        } else {
            group.xl.push_back(resource.key);
        }
    };

    for (const ResourceLocator& resource : base_resources) {
        add_resource(resource, true);
    }
    for (const ResourceLocator& resource : xl_resources) {
        add_resource(resource, false);
    }

    ContainerDiff diff;
    diff.records_ = std::move(ambiguous);
    const bool has_logical_evidence = std::any_of(
        logical_evidence.begin(), logical_evidence.end(),
        [](const ResourceMatchEvidence& item) { return item.proves_logical_identity(); });

    for (const auto& entry : groups) {
        const Group& group = entry.second;
        ResourceDiffRecord record;
        record.payload_size = group.size;
        record.payload_sha256 = group.hash;
        record.base_keys = group.base;
        record.xl_keys = group.xl;
        if (!group.base.empty() && !group.xl.empty()) {
            record.classification = DiffClass::identical;
            record.diagnostic = "Payload size and full hash match; duplicates are retained";
        } else if (!group.base.empty()) {
            record.classification = has_logical_evidence ? DiffClass::ambiguous : DiffClass::base_only_unmatched;
            record.diagnostic = has_logical_evidence ?
                "Base-only hash group; logical evidence must be applied by caller" :
                "No XL payload with the same size and full hash";
        } else {
            record.classification = has_logical_evidence ? DiffClass::ambiguous : DiffClass::xl_only_unmatched;
            record.diagnostic = has_logical_evidence ?
                "XL-only hash group; logical evidence must be applied by caller" :
                "No Base payload with the same size and full hash";
        }
        diff.records_.push_back(std::move(record));
    }

    std::sort(diff.records_.begin(), diff.records_.end(), [](const ResourceDiffRecord& lhs, const ResourceDiffRecord& rhs) {
        return std::tie(lhs.classification, lhs.payload_size, lhs.payload_sha256) <
            std::tie(rhs.classification, rhs.payload_size, rhs.payload_sha256);
    });
    return diff;
}

const std::vector<ResourceDiffRecord>& ContainerDiff::records() const noexcept {
    return records_;
}

std::array<std::string_view, 15> SymbolCatalog::canonical_sections() noexcept {
    return {
        "TOP_AREA_DATA",
        "SK_DATA",
        "DATA_OBJ",
        "STAGE_DT",
        "SND_DATA",
        "ALGO_DATA",
        "MAP_DATA",
        "ITEM_DATA",
        "ETC_DATA",
        "EFFECT_DATA",
        "EVENT_DATA",
        "SYSSEL_DATA",
        "SCEN_DATA",
        "SCENMES_DATA",
        "MT_DATA"};
}

std::vector<LogicalSymbol> SymbolCatalog::documentary_top_area_symbols(const ContentSourceId& source) {
    struct DocumentaryRid {
        std::uint32_t rid;
        std::string_view name;
    };
    constexpr std::array<DocumentaryRid, 6> rid_symbols{{
        {0U, "marker.tm2"},
        {1U, "marker2.tm2"},
        {2U, "face.bin"},
        {3U, "saveicon.ico"},
        {4U, "gameover.bin"},
        {5U, "stgtl.bin"}
    }};

    std::vector<LogicalSymbol> result;
    result.reserve(rid_symbols.size());
    for (const DocumentaryRid item : rid_symbols) {
        LogicalSymbol symbol;
        symbol.id = "TOP_AREA_DATA/RID" + std::to_string(item.rid);
        symbol.kind = SymbolKind::resource;
        symbol.section = "TOP_AREA_DATA";
        symbol.resource = ResourceKey{source, item.rid};
        symbol.documentary_name = std::string(item.name);
        symbol.status = EvidenceStatus::hypothesis;
        symbol.evidence.push_back(EvidenceRef{
            "knowledge/PHASE7_PLAN.md",
            std::nullopt,
            std::nullopt,
            std::nullopt,
            "Documentary RID0-5 names require per-version confirmation before precedence use",
            EvidenceStatus::hypothesis});
        result.push_back(std::move(symbol));
    }
    return result;
}

void SymbolCatalog::add(LogicalSymbol symbol) {
    if (symbol.id.empty()) {
        throw std::invalid_argument("Logical symbol requires an id");
    }
    if (find(symbol.id) != nullptr) {
        throw std::invalid_argument("Duplicate logical symbol id: " + symbol.id);
    }
    symbols_.push_back(std::move(symbol));
}

const LogicalSymbol* SymbolCatalog::find(std::string_view id) const noexcept {
    const auto found = std::find_if(symbols_.begin(), symbols_.end(), [id](const LogicalSymbol& symbol) {
        return symbol.id == id;
    });
    return found == symbols_.end() ? nullptr : &*found;
}

std::vector<LogicalSymbol> SymbolCatalog::by_section(std::string_view section) const {
    std::vector<LogicalSymbol> result;
    for (const LogicalSymbol& symbol : symbols_) {
        if (symbol.section == section) {
            result.push_back(symbol);
        }
    }
    return result;
}

const std::vector<LogicalSymbol>& SymbolCatalog::symbols() const noexcept {
    return symbols_;
}

OfficerCatalog OfficerCatalog::from_raw_slots(
    ContentSourceId source,
    std::uint32_t table_virtual_address,
    std::uint64_t table_file_offset,
    std::span<const std::byte> bytes) {
    constexpr std::size_t expected_size = slot_count * raw_stride;
    if (bytes.size() != expected_size) {
        throw std::invalid_argument("Officer table must contain exactly 229 slots of 15 bytes");
    }
    OfficerCatalog catalog;
    catalog.source_ = std::move(source);
    for (std::size_t index = 0; index < slot_count; ++index) {
        OfficerSlot& slot = catalog.slots_[index];
        slot.physical_index = static_cast<std::uint16_t>(index);
        std::copy_n(bytes.begin() + static_cast<std::ptrdiff_t>(index * raw_stride), raw_stride, slot.raw.begin());
        slot.virtual_address = table_virtual_address + static_cast<std::uint32_t>(index * raw_stride);
        slot.file_offset = table_file_offset + static_cast<std::uint64_t>(index * raw_stride);
        slot.status = EvidenceStatus::unknown;
    }
    return catalog;
}

void OfficerCatalog::annotate_anchor(
    std::uint16_t physical_index,
    std::uint16_t documented_id,
    std::optional<std::string> version_specific_name,
    std::vector<EvidenceRef> evidence) {
    if (physical_index >= slot_count) {
        throw std::out_of_range("Officer slot index is out of range");
    }
    OfficerSlot& target = slots_[physical_index];
    target.documented_id = documented_id;
    target.version_specific_name = std::move(version_specific_name);
    target.evidence = std::move(evidence);
    target.status = valid_evidence_for_mapping(target.evidence) ? EvidenceStatus::fact : EvidenceStatus::unknown;
}

const OfficerSlot& OfficerCatalog::slot(std::uint16_t physical_index) const {
    if (physical_index >= slot_count) {
        throw std::out_of_range("Officer slot index is out of range");
    }
    return slots_[physical_index];
}

const std::array<OfficerSlot, OfficerCatalog::slot_count>& OfficerCatalog::slots() const noexcept {
    return slots_;
}

const ContentSourceId& OfficerCatalog::source() const noexcept {
    return source_;
}

void LoadOriginalModel::add_event(LoadOriginalTraceEvent event) {
    events.push_back(std::move(event));
}

void LoadOriginalModel::require_unknown(std::string description) {
    if (description.empty()) {
        throw std::invalid_argument("Unknown blocker description must not be empty");
    }
    unknowns.push_back(std::move(description));
}

bool LoadOriginalModel::semantically_verified() const noexcept {
    return status == EvidenceStatus::fact && unknowns.empty() && !events.empty();
}

void ExternalDependencyManifest::add(ExternalDependency dependency) {
    static_cast<void>(checked_relative_path(dependency.relative_path));
    if (dependency.size == 0U) {
        throw std::invalid_argument("External dependency size must be nonzero");
    }
    if (!is_hex_sha256(dependency.sha256)) {
        throw std::invalid_argument("External dependency requires a full SHA-256");
    }
    dependencies_.push_back(std::move(dependency));
}

SourceVerificationResult ExternalDependencyManifest::validate(
    const std::filesystem::path& root,
    VerificationMode mode) const {
    SourceVerificationResult result{true, {}};
    for (const ExternalDependency& dependency : dependencies_) {
        try {
            const std::filesystem::path path = checked_under_root(root, dependency.relative_path);
            if (mode == VerificationMode::hash_files) {
                provenance::verify_file(path, dependency.size, dependency.sha256);
            } else {
                std::error_code error;
                const std::uint64_t actual_size = std::filesystem::file_size(path, error);
                if (error || actual_size != dependency.size) {
                    append_error(result, "External dependency size mismatch: " + dependency.relative_path.string());
                }
            }
        } catch (const std::exception& error) {
            append_error(result, error.what());
        }
    }
    return result;
}

const std::vector<ExternalDependency>& ExternalDependencyManifest::dependencies() const noexcept {
    return dependencies_;
}

MergedMount::MergedMount(ContentSourceId xl_source) : xl_source_(std::move(xl_source)) {}

MountState MergedMount::state() const noexcept {
    return state_;
}

const std::string& MergedMount::last_error() const noexcept {
    return last_error_;
}

void MergedMount::set_base_source(ContentSourceId base_source) {
    base_source_ = std::move(base_source);
    state_ = MountState::base_validated;
    last_error_.clear();
}

void MergedMount::stage_mapping(
    std::string logical_symbol_id,
    ResourceKey key,
    std::vector<EvidenceRef> evidence) {
    if (logical_symbol_id.empty()) {
        throw std::invalid_argument("Mount mapping requires a logical symbol id");
    }
    if (!same_source(key.source, xl_source_) &&
        (!base_source_.has_value() || !same_source(key.source, *base_source_))) {
        throw std::invalid_argument("Mount mapping references an unknown content source");
    }
    if (!valid_evidence_for_mapping(evidence)) {
        throw std::invalid_argument("Mount mapping requires explicit evidence");
    }
    staged_mappings_[std::move(logical_symbol_id)] = std::move(key);
}

void MergedMount::stage_overlay(MountOverlay overlay) {
    if (overlay.logical_symbol_id.empty()) {
        throw std::invalid_argument("Overlay requires a logical symbol id");
    }
    if (!valid_evidence_for_mapping(overlay.evidence)) {
        throw std::invalid_argument("Overlay requires explicit evidence");
    }
    staged_overlays_.push_back(std::move(overlay));
}

bool MergedMount::commit() {
    const std::map<std::string, ResourceKey> previous_mappings = active_mappings_;
    const MountState previous_state = state_;
    try {
        for (const auto& entry : staged_mappings_) {
            active_mappings_[entry.first] = entry.second;
        }
        for (const MountOverlay& overlay : staged_overlays_) {
            const auto found = active_mappings_.find(overlay.logical_symbol_id);
            if (found == active_mappings_.end() || !(found->second == overlay.previous)) {
                throw std::runtime_error("Overlay previous mapping does not match active mount state");
            }
            active_mappings_[overlay.logical_symbol_id] = overlay.replacement;
        }
        staged_mappings_.clear();
        staged_overlays_.clear();
        state_ = MountState::merged_ready;
        last_error_.clear();
        return true;
    } catch (const std::exception& error) {
        active_mappings_ = previous_mappings;
        state_ = MountState::error;
        last_error_ = error.what();
        if (previous_state == MountState::xl_only || previous_state == MountState::base_validated ||
            previous_state == MountState::merged_ready) {
            return false;
        }
        return false;
    }
}

void MergedMount::rollback() noexcept {
    staged_mappings_.clear();
    staged_overlays_.clear();
    last_error_.clear();
    state_ = base_source_.has_value() ? MountState::base_validated : MountState::xl_only;
}

std::optional<MountResolution> MergedMount::resolve(std::string_view logical_symbol_id) const {
    const auto found = active_mappings_.find(std::string(logical_symbol_id));
    if (found == active_mappings_.end()) {
        return std::nullopt;
    }
    return MountResolution{found->second, found->first};
}

const std::map<std::string, ResourceKey>& MergedMount::active_mappings() const noexcept {
    return active_mappings_;
}

const char* to_string(GameVersion version) noexcept {
    switch (version) {
    case GameVersion::base: return "BASE";
    case GameVersion::xl: return "XL";
    }
    return "BASE";
}

const char* to_string(Region region) noexcept {
    switch (region) {
    case Region::unknown: return "UNKNOWN";
    case Region::us: return "US";
    case Region::jp: return "JP";
    case Region::eu: return "EU";
    }
    return "UNKNOWN";
}

const char* to_string(EvidenceStatus status) noexcept {
    switch (status) {
    case EvidenceStatus::fact: return "FACT";
    case EvidenceStatus::hypothesis: return "HYPOTHESIS";
    case EvidenceStatus::derived: return "DERIVED";
    case EvidenceStatus::implemented: return "IMPLEMENTED";
    case EvidenceStatus::rejected: return "REJECTED";
    case EvidenceStatus::unknown: return "UNKNOWN";
    }
    return "UNKNOWN";
}

const char* to_string(DiffClass classification) noexcept {
    switch (classification) {
    case DiffClass::identical: return "IDENTICAL";
    case DiffClass::base_only_unmatched: return "BASE_ONLY_UNMATCHED";
    case DiffClass::xl_only_unmatched: return "XL_ONLY_UNMATCHED";
    case DiffClass::changed_confirmed: return "CHANGED_CONFIRMED";
    case DiffClass::ambiguous: return "AMBIGUOUS";
    }
    return "AMBIGUOUS";
}

const char* to_string(MountState state) noexcept {
    switch (state) {
    case MountState::xl_only: return "XL_ONLY";
    case MountState::base_validated: return "BASE_VALIDATED";
    case MountState::merged_ready: return "MERGED_READY";
    case MountState::error: return "ERROR";
    }
    return "ERROR";
}

}


