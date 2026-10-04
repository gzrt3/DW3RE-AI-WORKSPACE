#include "fate/vfs/vfs_hook.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
constexpr std::size_t sector_size = 2048;
using Bytes = std::vector<std::uint8_t>;

void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}

void write_fixture(const std::filesystem::path& path, const Bytes& bytes) {
    std::ofstream stream(path, std::ios::binary | std::ios::trunc);
    stream.write(reinterpret_cast<const char*>(bytes.data()), static_cast<std::streamsize>(bytes.size()));
    if (!stream) throw std::runtime_error("Cannot write extracted-file fixture");
}

Bytes content(std::size_t size, std::uint8_t first = 0x31, std::uint8_t second = 0xA7) {
    Bytes bytes(size, first);
    if (size > sector_size) std::fill(bytes.begin() + sector_size, bytes.end(), second);
    return bytes;
}

fate::vfs::sceCdlFILE find(const char* name) {
    fate::vfs::sceCdlFILE file{};
    require(fate::vfs::VFSHook::get().sceCdSearchFile(&file, name) == 1,
            "Expected actual fixture file to be registered");
    return file;
}

void missing(const char* name) {
    fate::vfs::sceCdlFILE file;
    std::memset(&file, 0xCD, sizeof(file));
    const auto before = file;
    require(fate::vfs::VFSHook::get().sceCdSearchFile(&file, name) == 0,
            "Missing name was reported as present or aliased to different content");
    require(std::memcmp(&file, &before, sizeof(file)) == 0,
            "Failed search changed caller metadata");
}

void rejected_read(std::uint32_t lsn, std::uint32_t count) {
    Bytes buffer(3 * sector_size, 0xCD);
    const auto before = buffer;
    require(fate::vfs::VFSHook::get().sceCdRead(lsn, count, buffer.data(), nullptr) == 0,
            "Out-of-range, short or invalid sector read reported success");
    require(buffer == before, "Failed read partially changed caller bytes");
}

void run(const std::string& test, const std::filesystem::path& root) {
    require(std::filesystem::create_directory(root), "Fixture directory must be new");
    const auto xl_path = root / "LINKDAT2.BNS";
    const auto xl_bytes = content(2 * sector_size);
    write_fixture(xl_path, xl_bytes);
    if (test == "distinct_archive_identity")
        write_fixture(root / "LINKDATA.BNS", content(2 * sector_size, 0x41, 0x42));
    if (test == "unbacked_final_sector")
        write_fixture(xl_path, content(sector_size + 1));

    auto& vfs = fate::vfs::VFSHook::get();
    vfs.initialize(root.string());
    const auto xl = find("\\LINKDAT2.BNS;1");

    if (test == "xl_is_not_base") {
        missing("\\LINKDATA.BNS;1");
    } else if (test == "distinct_archive_identity") {
        const auto base = find("\\LINKDATA.BNS;1");
        require(base.lsn != xl.lsn, "Distinct archives share one extent");
        Bytes buffer(2 * sector_size);
        require(vfs.sceCdRead(base.lsn, 2, buffer.data(), nullptr) == 1,
                "Base archive read failed");
        require(buffer == content(2 * sector_size, 0x41, 0x42),
                "Base archive returned XL bytes");
        require(vfs.sceCdRead(xl.lsn, 2, buffer.data(), nullptr) == 1 && buffer == xl_bytes,
                "XL archive returned different bytes");
    } else if (test == "no_invented_idx_bin") {
        missing("\\LINKDATA.IDX;1");
        missing("\\LINKDATA.BIN;1");
    } else if (test == "missing_asset") {
        missing("\\BGM.BNS;1");
    } else if (test == "exact_and_offset_read") {
        Bytes buffer(2 * sector_size);
        require(vfs.sceCdRead(xl.lsn, 2, buffer.data(), nullptr) == 1 && buffer == xl_bytes,
                "Exact archive read failed or bytes changed");
        buffer.assign(sector_size, 0);
        require(vfs.sceCdRead(xl.lsn + 1, 1, buffer.data(), nullptr) == 1,
                "Interior sector read failed");
        require(buffer == Bytes(sector_size, 0xA7), "Interior sector offset is incorrect");
    } else if (test == "before_first_extent") {
        rejected_read(0xFFFF, 1);
    } else if (test == "after_extent") {
        rejected_read(xl.lsn + 2, 1);
    } else if (test == "cross_extent") {
        rejected_read(xl.lsn + 1, 2);
    } else if (test == "unbacked_final_sector") {
        Bytes buffer(sector_size);
        require(vfs.sceCdRead(xl.lsn, 1, buffer.data(), nullptr) == 1 &&
                buffer == Bytes(sector_size, 0x31), "Backed first sector failed");
        rejected_read(xl.lsn + 1, 1);
    } else if (test == "count_overflow") {
        rejected_read(xl.lsn, 0x200000);
    } else if (test == "offset_overflow") {
        rejected_read(std::numeric_limits<std::uint32_t>::max(), 1);
    } else if (test == "shrunk_file") {
        write_fixture(xl_path, Bytes(512, 0x52));
        rejected_read(xl.lsn, 2);
    } else if (test == "removed_file") {
        require(std::filesystem::remove(xl_path), "Cannot remove fixture file");
        missing("\\LINKDAT2.BNS;1");
        rejected_read(xl.lsn, 1);
    } else if (test == "reinitialize_clears_previous_mount") {
        const auto next = root / "next";
        require(std::filesystem::create_directory(next), "Cannot create second fixture mount");
        write_fixture(next / "LINKDATA.BNS", content(sector_size, 0x42));
        vfs.initialize(next.string());
        missing("\\LINKDAT2.BNS;1");
        const auto base = find("\\LINKDATA.BNS;1");
        Bytes buffer(sector_size);
        require(vfs.sceCdRead(base.lsn, 1, buffer.data(), nullptr) == 1 &&
                buffer == Bytes(sector_size, 0x42), "Second mount did not retain its own identity");
    } else if (test == "zero_sectors") {
        rejected_read(xl.lsn, 0);
    } else {
        throw std::runtime_error("Unknown contract case");
    }
}
} // namespace

int main(int argc, char** argv) {
    try {
        require(argc == 3, "Expected contract case and new fixture directory");
        run(argv[1], argv[2]);
        std::cout << "vfs_hook_contract=" << argv[1] << " PASS\n";
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "vfs_hook_contract=FAIL " << error.what() << '\n';
        return 1;
    }
}
