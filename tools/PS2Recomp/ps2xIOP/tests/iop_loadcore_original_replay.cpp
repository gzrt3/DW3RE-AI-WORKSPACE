#include "iop_compat_test_support.h"
#include "emulator/core/iop_cpu.h"
#include "emulator/core/iop_memory.h"
#include "emulator/imports/iop_loadcore_image.h"

#include <fstream>
#include <iterator>

// Optional local oracle: copyrighted IRX inputs are supplied by the caller and
// are never embedded in this target or the repository. Hash inputs externally.
namespace
{
    using namespace iop_test;
    using namespace ps2x::iop::detail;
    constexpr uint32_t Image = 0x20000u, Info = 0x10000u;
    constexpr uint32_t Stack = 0x110000u, Return = 0x1FFF00u;

    std::vector<uint8_t> readFile(const char *path)
    {
        std::ifstream stream(path, std::ios::binary);
        require(stream.good(), "original input unavailable");
        std::vector<uint8_t> bytes{std::istreambuf_iterator<char>(stream), {}};
        require(bytes.size() >= 116u && bytes.size() < 0xD0000u, "original file size out of bound");
        return bytes;
    }

    uint32_t word(const std::vector<uint8_t> &bytes, size_t offset)
    {
        require(offset <= bytes.size() && 4u <= bytes.size() - offset, "original ELF field out of bound");
        uint32_t result{};
        std::memcpy(&result, bytes.data() + offset, sizeof(result));
        return result;
    }

    void fill(IopMemory &memory, uint32_t address, uint32_t size, uint8_t value)
    {
        const std::vector<uint8_t> bytes(size, value);
        require(memory.writeRam(address, bytes.data(), bytes.size()), "fixture RAM fill failed");
    }

    void initialize(IopMemory &memory, const std::vector<uint8_t> &original,
                    const std::vector<uint8_t> &image)
    {
        const uint32_t ph = word(original, 28u);
        require(word(original, ph + 32u) == 1u, "expected LOADCORE second PT_LOAD");
        const uint32_t offset = word(original, ph + 36u), size = word(original, ph + 48u);
        require(offset <= original.size() && size <= original.size() - offset && size >= 0x1A60u,
                "LOADCORE text does not contain selected original functions");
        // Original routines22/23 and their helpers use absolute local J/JAL
        // targets. Replay their identified unrelocated text at original vaddr0.
        require(memory.writeRam(0u, original.data() + offset, size), "LOADCORE text copy failed");
        require(memory.writeRam(Image, image.data(), image.size()), "module input copy failed");
        fill(memory, Info, 36u, 0xA5u);
        fill(memory, Stack - 0x1000u, 0x1000u, 0xB6u);
    }

    uint32_t execute(IopMemory &memory, uint32_t pc)
    {
        IopCpuState cpu{};
        for (uint32_t r = 1u; r < 32u; ++r) cpu.gpr[r] = 0xBEEF0000u + r;
        cpu.pc = pc; cpu.gpr[4] = Image; cpu.gpr[5] = Info;
        cpu.gpr[29] = Stack; cpu.gpr[31] = Return;
        const auto before = cpu;
        IopCpuCore core(memory);
        uint32_t count = 0u;
        while (cpu.pc != Return && count++ < 10000000u)
        {
            require(cpu.pc >= 0x1310u && cpu.pc < 0x1A60u, "original execution escaped verified interval");
            require(core.executeInstruction(cpu) && !cpu.exception, "original instruction failed");
        }
        require(cpu.pc == Return, "original did not actually return within instruction bound");
        for (uint32_t r = 16u; r < 24u; ++r)
            require(cpu.gpr[r] == before.gpr[r], "original callee-saved register mismatch");
        for (uint32_t r = 28u; r < 32u; ++r)
            require(cpu.gpr[r] == before.gpr[r], "original GP/SP/FP/RA mismatch");
        return cpu.gpr[2];
    }

    void compare(const IopMemory &actual, const IopMemory &expected,
                 uint32_t address, uint32_t size, const char *description)
    {
        for (uint32_t offset = 0u; offset < size; ++offset)
        {
            if (actual.read8(address + offset) != expected.read8(address + offset))
            {
                std::cerr << description << " mismatch at 0x" << std::hex << address + offset
                          << " native=" << unsigned(actual.read8(address + offset))
                          << " original=" << unsigned(expected.read8(address + offset)) << std::dec << '\n';
                throw std::runtime_error(description);
            }
        }
    }

    void replay(const std::vector<uint8_t> &original, const std::vector<uint8_t> &image,
                bool load, const char *label, uint32_t allocation = 0x140000u)
    {
        IopMemory native, oracle;
        initialize(native, original, image); initialize(oracle, original, image);
        const auto expected = execute(oracle, 0x1310u);
        const auto actual = probeLoadcore13Elf(native, Image, Info);
        require(actual && *actual == expected, "probe return disagrees with original");
        compare(native, oracle, Info, 36u, "FileInfo probe");
        if (load)
        {
            require(expected == 4u, "replay load requires selected relocatable IRX");
            const uint32_t size = oracle.read32(Info + 28u);
            require(size > 0u && size < 0x80000u, "original module image span too large");
            for (IopMemory *memory : {&native, &oracle})
            {
                require(memory->allocateSysMemory(2u, size + 0x30u, allocation) == allocation,
                        "module header and image ownership failed");
                fill(*memory, allocation, size + 0x30u, 0xC7u);
                memory->write32(Info + 12u, allocation + 0x30u);
            }
            const auto loaded = loadLoadcore13Elf(native, Image, Info);
            require(loaded && *loaded == execute(oracle, 0x150Cu), "load return disagrees with original");
            compare(native, oracle, Info, 36u, "FileInfo load");
            compare(native, oracle, allocation, size + 0x30u, "ModuleInfo/image/BSS/relocations");
        }
        std::cout << "PASS original LOADCORE22" << (load ? "/23" : "") << ": " << label
                  << " allocation=0x" << std::hex << allocation << std::dec << '\n';
    }
}

int main(int argc, char **argv)
{
    try
    {
        require(argc >= 3, "usage: ps2_iop_loadcore_original_replay LOADCORE.IRX module.IRX [module.IRX ...]");
        const auto original = readFile(argv[1]);
        for (int arg = 2; arg < argc; ++arg)
        {
            const auto image = readFile(argv[arg]);
            for (const uint32_t allocation : {0x140000u, 0x14FF00u, 0x187F00u})
                replay(original, image, true, argv[arg], allocation);
            for (const auto &[offset, value] : {std::pair{4u, 2u}, {18u, 9u}, {42u, 31u}, {44u, 1u}, {16u, 3u}})
            {
                auto invalid = image;
                invalid[offset] = static_cast<uint8_t>(value);
                replay(original, invalid, false, "modified header rejected by original");
            }
        }
        std::cout << "Original instruction replay in the local IOP core; not independent PCSX2 lockstep or gameplay parity.\n";
        return 0;
    }
    catch (const std::exception &error)
    {
        std::cerr << "FAIL original LOADCORE replay: " << error.what() << '\n';
        return 1;
    }
}
