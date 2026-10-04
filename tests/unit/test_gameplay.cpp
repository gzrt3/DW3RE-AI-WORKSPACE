#include "fate/gameplay.hpp"
#include "fate/vfs.hpp"

#include <array>
#include <chrono>
#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

namespace {

void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}

void put_both16(std::vector<std::byte>& bytes, std::size_t offset, std::uint16_t value) {
    bytes[offset] = static_cast<std::byte>(value & 0xFFU);
    bytes[offset + 1U] = static_cast<std::byte>((value >> 8U) & 0xFFU);
    bytes[offset + 2U] = static_cast<std::byte>((value >> 8U) & 0xFFU);
    bytes[offset + 3U] = static_cast<std::byte>(value & 0xFFU);
}

void put_both32(std::vector<std::byte>& bytes, std::size_t offset, std::uint32_t value) {
    for (std::size_t index = 0; index < 4U; ++index) {
        bytes[offset + index] = static_cast<std::byte>((value >> (8U * index)) & 0xFFU);
        bytes[offset + 4U + index] = static_cast<std::byte>((value >> (8U * (3U - index))) & 0xFFU);
    }
}

std::vector<std::byte> directory_record(std::uint32_t lba, std::uint32_t length, std::uint8_t flags,
                                        const std::vector<std::byte>& name) {
    const std::size_t record_size = 33U + name.size() + ((name.size() % 2U) == 0U ? 1U : 0U);
    std::vector<std::byte> record(record_size);
    record[0] = static_cast<std::byte>(record_size);
    put_both32(record, 2U, lba);
    put_both32(record, 10U, length);
    record[25] = static_cast<std::byte>(flags);
    put_both16(record, 28U, 1U);
    record[32] = static_cast<std::byte>(name.size());
    std::copy(name.begin(), name.end(), record.begin() + 33);
    return record;
}

std::filesystem::path make_iso_fixture() {
    constexpr std::uint32_t sectors = 24U;
    std::vector<std::byte> image(static_cast<std::size_t>(sectors) * fate::vfs::iso_sector_size);
    const std::size_t pvd = 16U * fate::vfs::iso_sector_size;
    image[pvd] = std::byte{1};
    image[pvd + 1U] = std::byte{'C'};
    image[pvd + 2U] = std::byte{'D'};
    image[pvd + 3U] = std::byte{'0'};
    image[pvd + 4U] = std::byte{'0'};
    image[pvd + 5U] = std::byte{'1'};
    image[pvd + 6U] = std::byte{1};
    put_both32(image, pvd + 80U, sectors);
    put_both16(image, pvd + 128U, fate::vfs::iso_sector_size);
    const auto root_name = std::vector<std::byte>{std::byte{0}};
    const auto root_record = directory_record(20U, fate::vfs::iso_sector_size, 2U, root_name);
    image[pvd + 156U] = static_cast<std::byte>(root_record.size());
    std::copy(root_record.begin(), root_record.end(), image.begin() + static_cast<std::ptrdiff_t>(pvd + 156U));

    const std::size_t terminator = 17U * fate::vfs::iso_sector_size;
    image[terminator] = std::byte{255};
    image[terminator + 1U] = std::byte{'C'};
    image[terminator + 2U] = std::byte{'D'};
    image[terminator + 3U] = std::byte{'0'};
    image[terminator + 4U] = std::byte{'0'};
    image[terminator + 5U] = std::byte{'1'};
    image[terminator + 6U] = std::byte{1};

    const std::size_t root = 20U * fate::vfs::iso_sector_size;
    auto dot = directory_record(20U, fate::vfs::iso_sector_size, 2U, {std::byte{0}});
    auto parent = directory_record(20U, fate::vfs::iso_sector_size, 2U, {std::byte{1}});
    auto file = directory_record(21U, 3U, 0U, {std::byte{'T'}, std::byte{'E'}, std::byte{'S'}, std::byte{'T'},
        std::byte{'.'}, std::byte{'T'}, std::byte{'X'}, std::byte{'T'}, std::byte{';'}, std::byte{'1'}});
    std::size_t cursor = root;
    for (const auto* record : {&dot, &parent, &file}) {
        std::copy(record->begin(), record->end(), image.begin() + static_cast<std::ptrdiff_t>(cursor));
        cursor += record->size();
    }
    image[21U * fate::vfs::iso_sector_size] = std::byte{'O'};
    image[21U * fate::vfs::iso_sector_size + 1U] = std::byte{'K'};
    image[21U * fate::vfs::iso_sector_size + 2U] = std::byte{'!'};

    const auto stamp = std::chrono::steady_clock::now().time_since_epoch().count();
    const auto path = std::filesystem::temp_directory_path() /
        ("fate_iso_fixture_" + std::to_string(stamp) + ".iso");
    std::ofstream stream(path, std::ios::binary | std::ios::trunc);
    stream.write(reinterpret_cast<const char*>(image.data()), static_cast<std::streamsize>(image.size()));
    if (!stream) throw std::runtime_error("failed to create ISO fixture");
    return path;
}

void test_iso9660_index() {
    const auto path = make_iso_fixture();
    try {
        fate::vfs::Iso9660Image image(path);
        require(image.contains_file("test.txt"), "case-insensitive version-stripped file lookup failed");
        const auto content = image.read_file("TEST.TXT");
        require(content.size() == 3U && content[0] == std::byte{'O'} && content[2] == std::byte{'!'},
            "ISO file extent read failed");
        require(image.files().size() == 1U, "ISO index included dot or parent records");
    } catch (...) {
        std::filesystem::remove(path);
        throw;
    }
    std::filesystem::remove(path);
}

void test_fixed_timestep() {
    fate::gameplay::FixedStepGameLoop loop;
    std::size_t updates{};
    for (unsigned frame = 0U; frame < 10U; ++frame) {
        (void)loop.advance(fate::gameplay::FixedStepGameLoop::fixed_seconds * 3.0,
            [&updates](float dt) { require(dt > 0.016F && dt < 0.017F, "fixed delta changed"); ++updates; });
    }
    require(updates == 30U, "fixed-step update count depends on render frames");
    require(loop.interpolation_alpha() < 0.0001, "fixed-step accumulator did not return to zero");
    const auto steps = loop.advance(0.5, [](float) {});
    require(steps == fate::gameplay::FixedStepGameLoop::maximum_steps_per_frame, "frame-step cap was not enforced");
    require(loop.dropped_steps() > 0U, "overload did not account for dropped simulation ticks");
}

void test_entities_fsm_and_combat() {
    fate::gameplay::ActiveUnits units;
    const auto player = units.spawn(1U, 0U, 0.0F, 0.0F, 0.0F, false, true);
    const auto enemy = units.spawn(2U, 1U, 0.0F, 0.0F, 1.3F);
    units.update(1.0F / 60.0F, {0.0F, 1.0F, false, false, false});
    require(units.view(player).state == fate::gameplay::UnitState::march, "movement did not enter MARCH");
    units.update(1.0F / 60.0F, {0.0F, 0.0F, true, false, false});
    require(units.view(player).state == fate::gameplay::UnitState::attack, "normal attack did not enter ATTACK");
    require(units.view(enemy).life < 100.0F, "root-socket sphere did not apply damage");
    require(units.metrics().hit_events > 0U, "combat did not record a hit");
    require(units.view(player).musou > 0.0F, "hit did not increase Musou meter");
    require(units.size() == 2U && units.actors().size() == 2U, "parallel entity arrays lost unit membership");
}

void test_hyper_armor_trait() {
    fate::gameplay::ActiveUnits units;
    (void)units.spawn(10U, 0U, 0.0F, 0.0F, 0.0F, false, true);
    const auto officer = units.spawn(11U, 1U, 0.0F, 0.0F, 1.4F, true, false);
    units.set_hyper_armor(officer, true);
    units.update(1.0F / 60.0F, {0.0F, 0.0F, true, false, false});
    require(units.view(officer).life < 100.0F, "hyper armor incorrectly prevented damage");
    require(units.view(officer).flinch_seconds == 0.0F, "hyper armor failed to suppress flinch");
}

void test_normal_combo_six() {
    fate::gameplay::ActiveUnits units;
    const auto player = units.spawn(20U, 0U, 0.0F, 0.0F, 0.0F, false, true);
    (void)units.spawn(21U, 1U, 0.0F, 0.0F, 1.35F);
    for (std::uint8_t stage = 1U; stage <= 6U; ++stage) {
        units.update(1.0F / 60.0F, {0.0F, 0.0F, true, false, false});
        require(units.view(player).combo_count == stage, "normal chain did not advance from hit to hit");
        for (unsigned tick = 0U; tick < 20U; ++tick)
            units.update(1.0F / 60.0F, {});
    }
    require(units.metrics().attacks >= 6U, "normal chain did not execute six attack stages");
}

void test_charge_and_musou_rules() {
    fate::gameplay::ActiveUnits units;
    const auto player = units.spawn(30U, 0U, 0.0F, 0.0F, 0.0F, false, true);
    (void)units.spawn(31U, 1U, 0.0F, 0.0F, 24.0F);
    for (std::uint8_t level = 1U; level <= 6U; ++level) {
        units.update(1.0F / 60.0F, {0.0F, 0.0F, false, true, false});
        require(units.view(player).charge_level == level, "Charge sequence did not cycle C1 through C6");
        for (unsigned tick = 0U; tick < 40U; ++tick)
            units.update(1.0F / 60.0F, {});
    }
    units.set_resources(player, 18.0F, 60.0F);
    units.update(1.0F / 60.0F, {0.0F, 0.0F, false, false, true});
    require(units.view(player).attack == fate::gameplay::AttackKind::musou,
        "prototype low-life True Musou condition did not trigger");
    require(units.view(player).musou == 0.0F, "Musou activation did not consume its meter");
}

void test_spatial_collision_and_flee() {
    fate::gameplay::ActiveUnits units;
    (void)units.spawn(40U, 0U, 0.0F, 0.0F, 0.0F, false, true);
    const auto enemy = units.spawn(41U, 1U, 0.2F, 0.0F, 0.0F);
    units.set_resources(enemy, 10.0F, 0.0F);
    units.update(1.0F / 60.0F, {});
    const auto actor = units.view(enemy);
    require(actor.state == fate::gameplay::UnitState::flee, "low-life AI did not enter FLEE");
    require(units.metrics().collision_pairs > 0U, "spatial broadphase did not find overlapping AABBs");
}

void test_dual_iso_precedence() {
    fate::vfs::DualIsoVfs vfs;
    vfs.mount("C:/DW3/sources/Isos/DW3PS2.iso", "C:/DW3/sources/Isos/DW3XL.iso");
    const auto preferred = vfs.read_resource(207U, fate::dual::GameVersion::xl);
    const auto pinned_base = vfs.read_resource(207U, fate::dual::GameVersion::base);
    require(preferred.source == fate::dual::GameVersion::xl, "default XL-first source resolution failed");
    require(pinned_base.source == fate::dual::GameVersion::base, "explicit base resource selection failed");
    require(vfs.resource_toc(fate::dual::GameVersion::base).size() == 2123U,
        "DW3 Base descriptor TOC count changed");
    require(vfs.resource_toc(fate::dual::GameVersion::xl).size() == 3015U,
        "DW3 XL descriptor TOC count changed");
    const auto shared = vfs.read_virtual("/data/SYSTEM.CNF");
    const auto xl = vfs.read_virtual("/data/dw3_xl/SYSTEM.CNF");
    require(shared == xl, "shared virtual path did not search the XL mount first");
}

void test_mod_override_vfs() {
    fate::vfs::DualIsoVfs vfs;
    vfs.mount("C:/DW3/sources/Isos/DW3PS2.iso", "C:/DW3/sources/Isos/DW3XL.iso");
    const auto stamp = std::chrono::steady_clock::now().time_since_epoch().count();
    const auto root = std::filesystem::temp_directory_path() / ("fate_mod_vfs_" + std::to_string(stamp));
    const auto base_resource = root / "dw3" / "resources" / "207.bin";
    const auto xl_resource = root / "dw3xl" / "resources" / "207.bin";
    const auto obj_asset = root / "dw3" / "assets" / "207.obj";
    const auto virtual_override = root / "dw3xl" / "files" / "SYSTEM.CNF";
    try {
        std::filesystem::create_directories(base_resource.parent_path());
        std::filesystem::create_directories(xl_resource.parent_path());
        std::filesystem::create_directories(obj_asset.parent_path());
        std::filesystem::create_directories(virtual_override.parent_path());
        for (const auto& [path, content] : std::array{
                 std::pair{base_resource, std::string("BASE-MOD")},
                 std::pair{xl_resource, std::string("XL-MOD")},
                 std::pair{obj_asset, std::string("o overridden model\n")},
                 std::pair{virtual_override, std::string("MOD-SYSTEM-CNF")}}) {
            std::ofstream output(path, std::ios::binary | std::ios::trunc);
            output.write(content.data(), static_cast<std::streamsize>(content.size()));
            if (!output) throw std::runtime_error("failed to write mod override fixture");
        }
        vfs.mount_mods(root);

        const auto base_payload = vfs.read_resource(207U, fate::dual::GameVersion::base);
        require(base_payload.origin == fate::vfs::PayloadOrigin::mod_override &&
                base_payload.source == fate::dual::GameVersion::base &&
                std::string(reinterpret_cast<const char*>(base_payload.bytes.data()), base_payload.bytes.size()) == "BASE-MOD",
                "Base RID override did not precede ISO payload");
        const auto xl_payload = vfs.read_resource(207U, fate::dual::GameVersion::xl);
        require(xl_payload.origin == fate::vfs::PayloadOrigin::mod_override &&
                xl_payload.source == fate::dual::GameVersion::xl &&
                std::string(reinterpret_cast<const char*>(xl_payload.bytes.data()), xl_payload.bytes.size()) == "XL-MOD",
                "XL RID override did not win XL-first selection");
        const auto named_asset = vfs.read_mod_asset(fate::dual::GameVersion::base, 207U, ".obj");
        require(named_asset.has_value() && !named_asset->empty(), "OBJ asset override lookup failed");
        const auto shared = vfs.read_virtual("/data/SYSTEM.CNF");
        require(std::string(reinterpret_cast<const char*>(shared.data()), shared.size()) == "MOD-SYSTEM-CNF",
                "virtual-file override did not precede dual-ISO lookup");

        bool traversal_rejected = false;
        try {
            (void)vfs.read_mod_file("../escape.bin");
        } catch (const std::runtime_error&) {
            traversal_rejected = true;
        }
        require(traversal_rejected, "mod path traversal was not rejected");
    } catch (...) {
        std::filesystem::remove_all(root);
        throw;
    }
    std::filesystem::remove_all(root);
}

} // namespace

int main(int argc, char** argv) {
    try {
        if (argc != 2) throw std::invalid_argument("expected one test case");
        const std::string test(argv[1]);
        if (test == "phase14_iso9660_index") test_iso9660_index();
        else if (test == "phase14_fixed_timestep") test_fixed_timestep();
        else if (test == "phase14_entities_fsm_combat") test_entities_fsm_and_combat();
        else if (test == "phase14_officer_hyper_armor") test_hyper_armor_trait();
        else if (test == "phase14_normal_combo") test_normal_combo_six();
        else if (test == "phase14_charge_and_musou") test_charge_and_musou_rules();
        else if (test == "phase14_spatial_collision_flee") test_spatial_collision_and_flee();
        else if (test == "phase14_dual_iso_precedence") test_dual_iso_precedence();
        else if (test == "phase15_mod_override_vfs") test_mod_override_vfs();
        else throw std::invalid_argument("unknown Phase 14 test case");
        std::cout << test << ": PASS\n";
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "Phase 14 test failure: " << error.what() << '\n';
        return 1;
    }
}
