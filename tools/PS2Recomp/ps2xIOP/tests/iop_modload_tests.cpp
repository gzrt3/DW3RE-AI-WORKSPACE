#include "iop_compat_test_support.h"
#include "emulator/core/iop_cpu.h"
#include "emulator/core/iop_memory.h"
#include "emulator/imports/iop_modload.h"
#include "emulator/iop_emulator.h"

#include <fstream>
#include <iterator>
#include <tuple>

namespace
{
    using namespace iop_test;
    using namespace ps2x::iop::detail;

    void putPath(IopMemory &memory, const std::string &path)
    {
        require(memory.zeroRam(0x8000u, 1024u), "path backing failed");
        require(path.size() < 1024u && memory.writeRam(0x8000u, path.data(), path.size()), "path write failed");
    }

    void prefixSemantics()
    {
        IopMemory memory;
        for (const std::string prefix : {"rom", "host", "cdrom", "atfile"})
        {
            for (uint32_t byte = 0u; byte < 256u; ++byte)
            {
                putPath(memory, "  " + prefix + static_cast<char>(byte) + "anything");
                const uint32_t expected = byte >= '0' && byte <= ':' ? 0u : 1u;
                require(modload16IllegalBootDevice(memory, 0x8000u) == expected, "device byte acceptance mismatch");
            }
        }
        for (const std::string path : {"", "ROM0:", "\trom0:", "cdroX0:", "atfilX0:", "mass0:", "hdd0:"})
        {
            putPath(memory, path);
            require(modload16IllegalBootDevice(memory, 0x8000u) == 1u, "invalid prefix accepted");
        }
        putPath(memory, std::string(256u, ' ') + "host:");
        require(modload16IllegalBootDevice(memory, 0x8000u) == 0u, "leading ASCII spaces not skipped");
    }

    void defensiveMemory()
    {
        IopMemory memory;
        putPath(memory, "rom0:");
        for (const uint32_t address : {0x8000u, 0x80008000u, 0xA0008000u})
            require(modload16IllegalBootDevice(memory, address) == 0u, "direct RAM alias failed");
        for (const uint32_t address : {0u, 0x4000u, 0xFFFFFFFFu, 0xC0008000u, 0x1F801000u})
            require(!modload16IllegalBootDevice(memory, address), "unsupported pointer returned guest success/failure");
        const char tail[] = {'r', 'o', 'm'};
        require(memory.writeRam(IopMemory::RamSize - 3u, tail, sizeof(tail)), "end-of-RAM setup failed");
        require(!modload16IllegalBootDevice(memory, IopMemory::RamSize - 3u), "out-of-RAM access accepted");
    }

    Irx consumer(uint16_t version, const char *path)
    {
        Irx image;
        image.words(0u, {0x27BDFFF0u, 0xAFBF000Cu, 0x3C040001u, 0x34840400u,
            0x0C004025u, 0u, 0x8FBF000Cu, 0x27BD0010u, 0x03E00008u, 0u});
        image.words(0x80u, {0x41E00000u, 0u, version, 0x6C646F6Du, 0x0064616Fu,
            0x03E00008u, 0x2400000Fu, 0u, 0u});
        std::memcpy(image.bytes.data() + 0x500u, path, std::strlen(path) + 1u);
        return image;
    }

    void versionedImport()
    {
        for (const auto &[version, path, expected] : {
            std::tuple{uint16_t{0x0106u}, "cdrom0:\\MODULES\\TEST.IRX", 0},
            std::tuple{uint16_t{0x0106u}, "mass0:TEST.IRX", 1},
            std::tuple{uint16_t{0x0107u}, "rom0:TEST", -1}})
        {
            Host host;
            IopEmulator iop(host);
            require(iop.loadOwnedModule("test:modload15", consumer(version, path).bytes).startResult == expected,
                    "versioned MODLOAD15 dispatch mismatch");
        }
    }

    void compareOriginal(const char *slicePath)
    {
        std::ifstream file(slicePath, std::ios::binary);
        require(file.good(), "original slice missing");
        const std::vector<uint8_t> slice{std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>()};
        require(slice.size() == 0xE0u, "expected exactly original 0x1700..0x17DC words");
        IopMemory memory;
        require(memory.writeRam(0x1700u, slice.data(), slice.size()), "original slice copy failed");
        IopCpuCore core(memory);
        std::vector<std::string> paths{"", "r", "rom", "ROM0:", "\trom0:", "hdd0:", "mass0:",
            "cdroX0:", "atfiX0:", "atfilX0:", std::string(256u, ' ') + "rom0:"};
        for (const std::string prefix : {"rom", "host", "cdrom", "atfile"})
        {
            for (uint32_t byte = 0u; byte < 256u; ++byte)
            {
                paths.push_back(prefix + static_cast<char>(byte) + "remaining");
                paths.push_back("  " + paths.back());
            }
            for (size_t i = 0u; i < prefix.size(); ++i)
            {
                auto bad = prefix + "0:";
                bad[i] = static_cast<char>(0x80u + static_cast<uint32_t>(i));
                paths.push_back(bad);
            }
        }
        for (const auto &path : paths)
        {
            putPath(memory, path);
            IopCpuState cpu{};
            for (uint32_t reg = 1u; reg < 32u; ++reg) cpu.gpr[reg] = 0xBAAD0000u + reg;
            cpu.pc = 0x1700u;
            cpu.gpr[4] = 0x8000u;
            cpu.gpr[31] = 0x10000u;
            const auto before = cpu;
            uint32_t steps = 0u;
            while (cpu.pc != 0x10000u && steps++ < 4096u)
            {
                require(cpu.pc >= 0x1700u && cpu.pc <= 0x17DCu, "original escaped identified interval");
                require(core.executeInstruction(cpu) && !cpu.exception, "original instruction failed");
            }
            require(cpu.pc == 0x10000u, "original did not return within bound");
            require(modload16IllegalBootDevice(memory, 0x8000u) == cpu.gpr[2], "HLE result differs from original instructions");
            for (uint32_t reg = 16u; reg < 32u; ++reg)
                require(cpu.gpr[reg] == before.gpr[reg], "original modified a preserved register");
        }
        std::cout << "PASS original instruction replay: " << paths.size()
                  << " paths; return value and preserved ABI; not a PCSX2 trace\n";
    }
}

int main(int argc, char **argv)
{
    const Test tests[] = {
        {"Original MODLOAD1.6 device-prefix semantics", prefixSemantics},
        {"Defensive direct-RAM bounds and aliases", defensiveMemory},
        {"MODLOAD15 import is restricted to version1.6", versionedImport},
    };
    const int result = run(tests);
    if (result != 0 || argc == 1) return result;
    try
    {
        require(argc == 2, "usage: ps2_iop_modload_tests [identified-original-slice.bin]");
        compareOriginal(argv[1]);
        return 0;
    }
    catch (const std::exception &error)
    {
        std::cerr << "FAIL original replay: " << error.what() << '\n';
        return 1;
    }
}
