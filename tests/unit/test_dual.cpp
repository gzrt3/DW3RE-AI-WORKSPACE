#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <iterator>
#include <optional>
#include <set>
#include <span>
#include <sstream>
#include <stdexcept>
#include <string>
#include <string_view>
#include <vector>

#include "fate/dual.hpp"
#include "fate/elf.hpp"
#include "fate/provenance.hpp"

namespace {

using fate::dual::ContentSourceId;
using fate::dual::GameVersion;
using fate::dual::Region;

void require(const bool condition, const std::string& message) {
    if (!condition) {
        throw std::runtime_error(message);
    }
}

template <typename Function>
void require_throw(Function&& function, const std::string& message) {
    bool threw = false;
    try {
        function();
    } catch (const std::exception&) {
        threw = true;
    }
    require(threw, message);
}

struct Fixture {
    std::filesystem::path root;

    explicit Fixture(const std::string_view name)
        : root(std::filesystem::current_path() / ("phase7_dual_" + std::string(name))) {
        std::error_code error;
        std::filesystem::remove_all(root, error);
        std::filesystem::create_directories(root);
    }

    ~Fixture() {
        std::error_code error;
        std::filesystem::remove_all(root, error);
    }

    void write(const std::string& name, std::span<const std::byte> bytes) const {
        const auto path = root / name;
        std::ofstream output(path, std::ios::binary);
        require(static_cast<bool>(output), "cannot create fixture: " + path.string());
        output.write(reinterpret_cast<const char*>(bytes.data()),
            static_cast<std::streamsize>(bytes.size()));
        require(static_cast<bool>(output), "cannot write fixture: " + path.string());
    }

    void write_fill(const std::string& name, const std::size_t size, const std::byte value) const {
        std::vector<std::byte> bytes(size, value);
        write(name, bytes);
    }
};

ContentSourceId source_id(const GameVersion version, const Region region, const std::string& label) {
    return ContentSourceId{version, region, label};
}

fate::dual::ContentSource make_source(
    const Fixture& fixture,
    const ContentSourceId& id,
    const std::string& elf_name,
    const std::string& bns_name) {
    const auto elf_path = fixture.root / elf_name;
    const auto bns_path = fixture.root / bns_name;
    const auto elf = fate::provenance::fingerprint(elf_path);
    const auto bns = fate::provenance::fingerprint(bns_path);
    fate::dual::ContentSource source;
    source.id = id;
    source.elf_path = elf_name;
    source.bns_path = bns_name;
    source.elf_size = elf.file_size;
    source.bns_size = bns.file_size;
    source.elf_sha256 = elf.sha256;
    source.bns_sha256 = bns.sha256;
    source.descriptor_count = 1U;
    return source;
}

fate::dual::ResourceLocator locator(
    const ContentSourceId& source,
    const std::string& file,
    const std::uint64_t offset,
    const std::uint64_t length,
    const std::filesystem::path& root) {
    const auto fingerprint = fate::provenance::fingerprint(root / file);
    fate::dual::ResourceLocator result;
    result.key = fate::dual::ResourceKey{source, static_cast<std::uint32_t>(offset)};
    result.relative_path = file;
    result.byte_offset = offset;
    result.byte_length = length;
    result.payload_sha256 = fingerprint.sha256;
    return result;
}

void test_phase7_diff_exact_payload() {
    Fixture fixture("diff");
    const std::vector<std::byte> first{std::byte{1}, std::byte{2}, std::byte{3}, std::byte{4}};
    const std::vector<std::byte> second{std::byte{8}, std::byte{7}, std::byte{6}};
    const std::vector<std::byte> padded{std::byte{1}, std::byte{2}, std::byte{3}, std::byte{4}, std::byte{0}};
    fixture.write("base.bin", first);
    fixture.write("xl.bin", std::vector<std::byte>{std::byte{0}, std::byte{0}, std::byte{8}, std::byte{7}, std::byte{6}, std::byte{0}});

    const auto base_id = source_id(GameVersion::base, Region::us, "base");
    const auto xl_id = source_id(GameVersion::xl, Region::us, "xl");
    const std::array base_resources{
        locator(base_id, "base.bin", 0, first.size(), fixture.root)};
    const std::array xl_resources{
        locator(xl_id, "base.bin", 0, first.size(), fixture.root),
        locator(xl_id, "xl.bin", 2, second.size(), fixture.root)};
    const auto diff = fate::dual::ContainerDiff::compare(base_resources, xl_resources, {});
    require(!diff.records().empty(), "payload differential produced no records");
    const auto identical = std::count_if(diff.records().begin(), diff.records().end(),
        [](const fate::dual::ResourceDiffRecord& record) {
            return record.classification == fate::dual::DiffClass::identical;
        });
    require(identical == 1, "same payload must match despite different source/RID identity");
    require(std::any_of(diff.records().begin(), diff.records().end(),
        [](const fate::dual::ResourceDiffRecord& record) {
            return record.classification == fate::dual::DiffClass::xl_only_unmatched;
        }), "XL-only payload must remain explicitly unmatched");

    fixture.write("padded.bin", padded);
    const auto padded_locator = locator(xl_id, "padded.bin", 0, padded.size(), fixture.root);
    const std::array changed_base{locator(base_id, "base.bin", 0, first.size(), fixture.root)};
    const std::array changed_xl{padded_locator};
    const auto changed = fate::dual::ContainerDiff::compare(changed_base, changed_xl, {});
    require(std::none_of(changed.records().begin(), changed.records().end(),
        [](const fate::dual::ResourceDiffRecord& record) {
            return record.classification == fate::dual::DiffClass::identical;
        }), "padding difference must not be treated as identical payload");
}

void test_phase7_source_identity() {
    Fixture fixture("identity");
    fixture.write_fill("elf.bin", 128, std::byte{0x11});
    fixture.write_fill("bns.bin", 5U * 1024U * 1024U + 17U, std::byte{0x22});
    const auto base_id = source_id(GameVersion::base, Region::us, "base");
    const auto source = make_source(fixture, base_id, "elf.bin", "bns.bin");
    const auto verified = fate::dual::verify_content_source(
        source, fixture.root, fate::dual::VerificationMode::hash_files);
    require(verified.ok, "full fixture identity should verify");

    std::fstream corrupt(fixture.root / "bns.bin", std::ios::in | std::ios::out | std::ios::binary);
    require(static_cast<bool>(corrupt), "cannot reopen identity fixture");
    corrupt.seekp(4U * 1024U * 1024U + 1U);
    corrupt.put('\x7f');
    corrupt.close();
    const auto corrupted = fate::dual::verify_content_source(
        source, fixture.root, fate::dual::VerificationMode::hash_files);
    require(!corrupted.ok, "corruption after the four MiB prefix must be detected");

    auto wrong = source;
    wrong.id = source_id(GameVersion::xl, Region::us, "wrong-version");
    const auto wrong_identity = fate::dual::verify_content_source(
        wrong, fixture.root, fate::dual::VerificationMode::metadata_only);
    require(!wrong_identity.ok, "wrong source identity must be rejected");

    auto out_of_bounds = source;
    out_of_bounds.bns_size += 1U;
    const auto bounds = fate::dual::verify_content_source(
        out_of_bounds, fixture.root, fate::dual::VerificationMode::metadata_only);
    require(!bounds.ok, "metadata size mismatch must fail closed");
}

void test_phase7_symbol_resolution() {
    const auto base_id = source_id(GameVersion::base, Region::us, "base");
    const auto xl_id = source_id(GameVersion::xl, Region::us, "xl");
    fate::dual::SymbolCatalog catalog;
    fate::dual::LogicalSymbol base_symbol;
    base_symbol.id = "TOP_AREA_DATA.marker";
    base_symbol.kind = fate::dual::SymbolKind::resource;
    base_symbol.section = "TOP_AREA_DATA";
    base_symbol.resource = fate::dual::ResourceKey{base_id, 0};
    base_symbol.documentary_name = "marker.tm2";
    base_symbol.status = fate::dual::EvidenceStatus::hypothesis;
    catalog.add(base_symbol);
    auto xl_symbol = base_symbol;
    xl_symbol.resource = fate::dual::ResourceKey{xl_id, 0};
    xl_symbol.id = "TOP_AREA_DATA.marker.xl";
    catalog.add(xl_symbol);
    require(catalog.find("TOP_AREA_DATA.marker") != nullptr, "base symbol not resolvable");
    require(catalog.find("TOP_AREA_DATA.marker")->resource->source == base_id,
        "base and XL symbols must retain source identity");
    require(catalog.by_section("UNKNOWN_SECTION").empty(), "unknown section must not fabricate symbols");
    require(catalog.canonical_sections().size() == 15U, "canonical section count mismatch");
}

void test_phase7_officer_mapping() {
    const auto base_id = source_id(GameVersion::base, Region::us, "base");
    std::vector<std::byte> raw(fate::dual::OfficerCatalog::slot_count * fate::dual::OfficerCatalog::raw_stride);
    for (std::size_t index = 0; index < raw.size(); ++index) {
        raw[index] = static_cast<std::byte>(index & 0xffU);
    }
    const auto catalog = fate::dual::OfficerCatalog::from_raw_slots(base_id, 0x00153C00U, 0x00153C00U, raw);
    require(catalog.slots().size() == fate::dual::OfficerCatalog::slot_count, "officer slot count mismatch");
    require(catalog.slot(228).raw[14] == raw.back(), "last officer raw bytes did not round-trip");
    require(catalog.slot(228).file_offset == 0x00153C00U + 228U * 15U,
        "officer file offset mismatch");

    auto annotated = catalog;
    annotated.annotate_anchor(40, 100, std::string("anchor"), {});
    require(annotated.slot(40).documented_id == std::optional<std::uint16_t>{static_cast<std::uint16_t>(100)},
        "documented officer anchor missing");
    require_throw([&] {
        static_cast<void>(fate::dual::OfficerCatalog::from_raw_slots(
            base_id, 0, 0, std::span<const std::byte>(raw).first(raw.size() - 1U)));
    }, "short officer table must fail closed");
}

void test_phase7_merged_mount() {
    const auto base_id = source_id(GameVersion::base, Region::us, "base");
    const auto xl_id = source_id(GameVersion::xl, Region::us, "xl");
    const std::vector<fate::dual::EvidenceRef> ev{
        {"knowledge/PHASE7_PLAN.md", std::nullopt, 0, 0, "verified mapping", fate::dual::EvidenceStatus::fact}};
    fate::dual::MergedMount mount(xl_id);
    require(mount.state() == fate::dual::MountState::xl_only, "new mount must start XL-only");
    mount.set_base_source(base_id);
    mount.stage_mapping("marker", fate::dual::ResourceKey{base_id, 1}, ev);
    require(mount.commit(), "compatible base mapping should commit");
    require(mount.state() == fate::dual::MountState::merged_ready, "mount should become merged-ready");
    require(mount.resolve("marker")->key.source == base_id, "base mapping source mismatch");

    mount.stage_overlay(fate::dual::MountOverlay{
        "marker", fate::dual::ResourceKey{xl_id, 2}, fate::dual::ResourceKey{base_id, 1}, ev});
    require(mount.commit(), "valid overlay should commit");
    require(mount.resolve("marker")->key.source == xl_id, "overlay source mismatch");

    mount.stage_overlay(fate::dual::MountOverlay{
        "marker", fate::dual::ResourceKey{base_id, 9}, fate::dual::ResourceKey{base_id, 1}, ev});
    require(!mount.commit(), "wrong previous source must reject overlay transaction");
    require(mount.resolve("marker")->key.source == xl_id && mount.resolve("marker")->key.rid == 2,
        "failed overlay must preserve prior mount");
    mount.rollback();
    require(mount.resolve("marker")->key.source == xl_id, "rollback must preserve committed mapping");
}

void test_phase7_external_dependencies() {
    Fixture fixture("external");
    fixture.write_fill("movie.pss", 32, std::byte{0x31});
    const auto id = source_id(GameVersion::base, Region::us, "base");
    const auto fingerprint = fate::provenance::fingerprint(fixture.root / "movie.pss");
    fate::dual::ExternalDependencyManifest manifest;
    manifest.add(fate::dual::ExternalDependency{
        "movie.pss", id, fingerprint.file_size, fingerprint.sha256, {}, {}});
    require(manifest.validate(fixture.root, fate::dual::VerificationMode::hash_files).ok,
        "present external dependency should validate");
    fate::dual::ExternalDependencyManifest missing;
    missing.add(fate::dual::ExternalDependency{
        "missing.pss", id, 1, fingerprint.sha256, {}, {}});
    require(!missing.validate(fixture.root, fate::dual::VerificationMode::metadata_only).ok,
        "missing external dependency must produce a deterministic failure");
}

int test_phase7_load_original_trace_replay() {
    constexpr std::size_t descriptor_count = 2123U;
    constexpr std::uint32_t table_va = 0x002FF850U;
    constexpr std::uint64_t archive_start_lba = 756080U;
    const std::filesystem::path elf_path("C:/DW3/sources/dumps/dw3_ps2/SLUS_202.77");
    const std::filesystem::path iso_path("C:/DW3/sources/Isos/DW3PS2.iso");
    const std::filesystem::path trace_path("tests/fixtures/phase7_load_original_trace_lbas.csv");

    const auto identity = fate::provenance::fingerprint(elf_path);
    require(identity.file_size == 2513712U &&
        identity.sha256 == "b5a2fb3c32ce7468160e3845b64babc4ace0d6cb7650f4d940083c6841c1f5d1",
        "trace replay must use the hash-pinned retail Base ELF");
    require(std::filesystem::file_size(iso_path) == 2262433792ULL,
        "trace replay ISO size does not match indexed retail DW3 image");

    std::ifstream elf_stream(elf_path, std::ios::binary);
    require(static_cast<bool>(elf_stream), "retail Base ELF is unavailable");
    std::vector<char> elf_chars((std::istreambuf_iterator<char>(elf_stream)),
        std::istreambuf_iterator<char>());
    std::vector<std::byte> elf_bytes(elf_chars.size());
    for (std::size_t index = 0; index < elf_chars.size(); ++index) {
        elf_bytes[index] = static_cast<std::byte>(static_cast<unsigned char>(elf_chars[index]));
    }
    const auto image = fate::elf::Image::parse(elf_bytes);
    const auto table_offset = static_cast<std::size_t>(image.virtual_to_file_offset(
        table_va, static_cast<std::uint32_t>(descriptor_count * 16U)));
    require(image.entry_point() == 0x00100008U, "retail Base ELF entry point mismatch");

    const auto read_u32 = [&elf_bytes](const std::size_t offset) {
        if (offset > elf_bytes.size() || 4U > elf_bytes.size() - offset) {
            throw std::runtime_error("ELF descriptor read out of bounds");
        }
        return static_cast<std::uint32_t>(std::to_integer<unsigned int>(elf_bytes[offset])) |
            (static_cast<std::uint32_t>(std::to_integer<unsigned int>(elf_bytes[offset + 1U])) << 8U) |
            (static_cast<std::uint32_t>(std::to_integer<unsigned int>(elf_bytes[offset + 2U])) << 16U) |
            (static_cast<std::uint32_t>(std::to_integer<unsigned int>(elf_bytes[offset + 3U])) << 24U);
    };
    struct Descriptor { std::uint32_t sector; std::uint32_t count; };
    std::vector<Descriptor> descriptors;
    descriptors.reserve(descriptor_count);
    for (std::size_t rid = 0; rid < descriptor_count; ++rid) {
        const std::size_t row = table_offset + rid * 16U;
        descriptors.push_back({read_u32(row), read_u32(row + 4U)});
    }

    std::ifstream trace_stream(trace_path);
    require(static_cast<bool>(trace_stream), "Load Original LBA fixture is unavailable");
    std::vector<std::uint64_t> starts;
    std::vector<std::uint32_t> expected_rids;
    std::string line;
    while (std::getline(trace_stream, line)) {
        if (line.empty() || line.front() == '#' || line.rfind("lba,", 0U) == 0U) { continue; }
        std::istringstream row(line);
        std::string lba_text;
        std::string sector_count_text;
        std::string rid_text;
        require(static_cast<bool>(std::getline(row, lba_text, ',')) &&
            static_cast<bool>(std::getline(row, sector_count_text, ',')) &&
            static_cast<bool>(std::getline(row, rid_text, ',')),
            "invalid LBA fixture row");
        starts.push_back(static_cast<std::uint64_t>(std::stoull(lba_text)));
        require(std::stoul(sector_count_text) == 4U, "trace read size must remain four sectors");
        expected_rids.push_back(static_cast<std::uint32_t>(std::stoul(rid_text)));
    }
    require(starts.size() == 112U && expected_rids.size() == starts.size() &&
        starts.front() == 898717U && starts.back() == 899271U,
        "trace fixture count or endpoints differ from supplied trace summary");

    std::set<std::uint32_t> mapped_rids;
    for (std::size_t read_index = 0; read_index < starts.size(); ++read_index) {
        if (read_index != 0U) {
            const std::uint64_t expected_gap = (read_index % 2U == 1U) ? 4U : 6U;
            require(starts[read_index] - starts[read_index - 1U] == expected_gap,
                "trace LBA increments do not match alternating +4,+6 sequence");
        }
        require(starts[read_index] >= archive_start_lba,
            "trace LBA precedes LINKDATA.BNS extent");
        const std::uint64_t archive_sector = starts[read_index] - archive_start_lba;
        std::set<std::uint32_t> read_rids;
        for (std::uint64_t delta = 0; delta < 4U; ++delta) {
            const std::uint64_t sector = archive_sector + delta;
            std::size_t matches = 0;
            for (std::size_t rid = 0; rid < descriptors.size(); ++rid) {
                const auto& descriptor = descriptors[rid];
                if (descriptor.count != 0U && sector >= descriptor.sector &&
                    sector < static_cast<std::uint64_t>(descriptor.sector) + descriptor.count) {
                    read_rids.insert(static_cast<std::uint32_t>(rid));
                    mapped_rids.insert(static_cast<std::uint32_t>(rid));
                    ++matches;
                }
            }
            require(matches == 1U, "trace sector must resolve to exactly one ELF RID descriptor");
        }
        require(read_rids.size() == 1U && *read_rids.begin() == expected_rids[read_index],
            "trace read does not match its expected retail RID");
    }
    require(mapped_rids.size() == 112U && *mapped_rids.begin() == 1853U &&
        *mapped_rids.rbegin() == 2074U,
        "trace sector-to-RID mapping differs from verified descriptor coverage");

    fate::dual::LoadOriginalModel model;
    model.require_unknown("raw PCSX2 Load Original capture and semantic execution trace were not supplied");
    require(!model.semantically_verified(), "sector mapping must not claim Load Original semantic parity");
    std::cout << "phase7_load_original_trace_replay: 112 user-reported four-sector reads mapped to "
        << mapped_rids.size() << " retail ELF RIDs; raw trace semantics remain UNKNOWN\n";
    return 0;
}

using TestFunction = int (*)();

int run_case(const std::string_view name) {
    if (name == "phase7_diff_exact_payload") { test_phase7_diff_exact_payload(); return 0; }
    if (name == "phase7_source_identity") { test_phase7_source_identity(); return 0; }
    if (name == "phase7_symbol_resolution") { test_phase7_symbol_resolution(); return 0; }
    if (name == "phase7_officer_mapping") { test_phase7_officer_mapping(); return 0; }
    if (name == "phase7_merged_mount") { test_phase7_merged_mount(); return 0; }
    if (name == "phase7_external_dependencies") { test_phase7_external_dependencies(); return 0; }
    if (name == "phase7_load_original_trace_replay") { return test_phase7_load_original_trace_replay(); }
    throw std::runtime_error("unknown selector: " + std::string(name));
}

}

int main(int argc, char** argv) {
    try {
        if (argc == 2) {
            return run_case(argv[1]);
        }
        const std::array selectors{
            "phase7_diff_exact_payload", "phase7_source_identity", "phase7_symbol_resolution",
            "phase7_officer_mapping", "phase7_merged_mount", "phase7_external_dependencies"};
        for (const auto selector : selectors) {
            run_case(selector);
        }
        std::cout << "phase7 dual contract tests: all assertions passed\n";
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "phase7 dual contract tests: " << error.what() << '\n';
        return 1;
    }
}



