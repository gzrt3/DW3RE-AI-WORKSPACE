#include "iop_compat_test_support.h"
#include "emulator/core/iop_cpu.h"
#include "emulator/core/iop_memory.h"
#include "emulator/imports/iop_loadcore_state.h"

#include <fstream>
#include <iterator>

namespace
{
    using namespace iop_test;
    using namespace ps2x::iop::detail;
    constexpr uint32_t Data = 0x1DC0u, Begin = 0x1DE0u, Limit = 0x1E20u;
    constexpr uint32_t P = 0x30000u, Q = 0x30200u, R = 0x30400u, Source = 0x40000u;
    constexpr uint32_t Return = 0x1FFF00u;

    void fixture(IopMemory &m)
    {
        require(m.zeroRam(Data, 0x64u) && m.zeroRam(0x3F0u, 8u) &&
                m.zeroRam(P, 0x1000u) && m.zeroRam(Source, 0x1000u), "state fixture failed");
        m.write32(0x3F0u, Begin); m.write32(0x3F4u, Begin);
        m.write32(Data + 0x18u, 0x10002u);
        for (uint32_t node : {P, Q, R})
        {
            for (uint32_t i = 4u; i < 0x30u; i += 4u) m.write32(node + i, 0xDEADBEEFu);
            m.write32(node + 0x18u, node + 0x100u);
            m.write32(node + 0x1Cu, 0x20u); m.write32(node + 0x20u, 0x10u); m.write32(node + 0x24u, 0x10u);
        }
    }

    void contracts()
    {
        IopMemory m; fixture(m);
        require(queryLoadcore13BootMode(m, 4u, Begin, Limit) == 0u, "empty boot lookup failed");
        m.write32(Source, 0x00040002u);
        require(registerLoadcore13BootMode(m, Source, Begin, Limit) == 0u, "boot append failed");
        require(queryLoadcore13BootMode(m, 4u, Begin, Limit) == Begin && m.read32(Begin) == 0x00040002u,
                "boot lookup did not preserve header pointer");
        require(queryLoadcore13BootMode(m, 0x104u, Begin, Limit) == 0u, "mode was truncated to byte");
        m.write32(Source, 0x01050000u); m.write32(Source + 4u, 0x12345678u);
        require(registerLoadcore13BootMode(m, Source, Begin, Limit) == 0u &&
                queryLoadcore13BootMode(m, 5u, Begin, Limit) == Begin + 4u &&
                m.read32(Begin + 8u) == 0x12345678u, "boot payload changed");
        m.write32(Source, 0xFF070000u);
        const auto cursor = m.read32(0x3F4u);
        require(registerLoadcore13BootMode(m, Source, Begin, Limit) == 1u &&
                m.read32(0x3F4u) == cursor, "capacity rejection changed boot state");
        require(registerLoadcore13Module(m, Data, Q) == 0x10003u &&
                registerLoadcore13Module(m, Data, P) == 0x10004u &&
                registerLoadcore13Module(m, Data, R) == 0x10005u, "module ID width/order failed");
        require(m.read32(Data + 0x10u) == P && m.read32(P) == Q && m.read32(Q) == R &&
                m.read32(Data + 0x14u) == 3u && m.read32(Q + 0xCu) == 0x10002u,
                "module list/id effects failed");
        require(searchLoadcore13Module(m, Data, Q + 0x100u) == Q &&
                searchLoadcore13Module(m, Data, Q + 0x13Fu) == Q &&
                searchLoadcore13Module(m, Data, Q + 0x140u) == 0u, "module extent bounds failed");
        require(releaseLoadcore13Module(m, Data, Q, 99u) == 2u && m.read32(P) == R && m.read32(Q) == R,
                "release cleared metadata or returned wrong count");
        require(releaseLoadcore13Module(m, Data, Q, 99u) == 0u &&
                releaseLoadcore13Module(m, Data, 0u, 99u) == 99u, "absent/null return behavior failed");
        auto before = std::vector<uint8_t>(m.ram().begin(), m.ram().end());
        require(!registerLoadcore13Module(m, Data, P) && !registerLoadcore13Module(m, Data, 0x50000u),
                "duplicate/unowned module accepted");
        require(std::equal(before.begin(), before.end(), m.ram().begin()), "unsupported module wrote memory");
        m.write32(R, P);
        require(!releaseLoadcore13Module(m, Data, P, 0u), "cyclic chain accepted");
        require(m.read32(Data + 0x10u) == P, "cycle rejection changed head");
        std::cout << "PASS LOADCORE module/boot state contracts\n";
    }

    uint32_t word(const std::vector<uint8_t> &bytes, size_t at)
    {
        require(at <= bytes.size() && bytes.size() - at >= 4u, "ELF read out of range");
        uint32_t value{}; std::memcpy(&value, bytes.data() + at, 4u); return value;
    }

    void originalReplay(const char *path)
    {
        std::ifstream stream(path, std::ios::binary);
        require(stream.good(), "selected LOADCORE unavailable");
        const std::vector<uint8_t> bytes{std::istreambuf_iterator<char>(stream), {}};
        const uint32_t ph = word(bytes, 28u), offset = word(bytes, ph + 36u), size = word(bytes, ph + 48u);
        require(word(bytes, ph + 32u) == 1u && offset <= bytes.size() && size <= bytes.size() - offset,
                "LOADCORE PT_LOAD invalid");
        require(word(bytes, offset + 0x670u) == 0x90820003u && word(bytes, offset + 0x7CCu) == 0x00802821u &&
                word(bytes, offset + 0x8B4u) == 0x3C050000u, "selected state instruction anchors differ");
        IopMemory native, original;
        require(native.writeRam(0u, bytes.data() + offset, size) &&
                original.writeRam(0u, bytes.data() + offset, size), "original copy failed");
        fixture(native); fixture(original);
        uint32_t comparisons = 0u;
        auto compare = [&](uint32_t ordinal, uint32_t a0, uint32_t incoming = 0xAA55AA55u)
        {
            uint32_t pc = 0u;
            switch (ordinal)
            {
            case 12u: pc = 0x6CCu; break;
            case 13u: pc = 0x670u; break;
            case 16u: pc = 0x7CCu; break;
            case 17u: pc = 0x848u; break;
            case 24u: pc = 0x8B4u; break;
            }
            IopCpuState cpu{};
            for (uint32_t i = 1u; i < 32u; ++i) cpu.gpr[i] = 0xABCD0000u + i;
            cpu.pc = pc; cpu.gpr[2] = incoming; cpu.gpr[4] = a0; cpu.gpr[31] = Return;
            const auto before = cpu;
            IopCpuCore core(original);
            uint32_t count = 0u;
            while (cpu.pc != Return && count++ < 10000u)
            {
                require(cpu.pc >= 0x670u && cpu.pc <= 0x920u, "original escaped state interval");
                require(core.executeInstruction(cpu) && !cpu.exception, "original state instruction failed");
            }
            require(cpu.pc == Return, "original did not return");
            for (uint32_t i : {16u,17u,18u,19u,20u,21u,22u,23u,28u,29u,30u,31u})
                require(cpu.gpr[i] == before.gpr[i], "callee-saved state changed");
            std::optional<uint32_t> actual;
            switch (ordinal)
            {
            case 12u: actual = queryLoadcore13BootMode(native, a0, Begin, Limit); break;
            case 13u: actual = registerLoadcore13BootMode(native, a0, Begin, Limit); break;
            case 16u: actual = registerLoadcore13Module(native, Data, a0); break;
            case 17u: actual = releaseLoadcore13Module(native, Data, a0, incoming); break;
            case 24u: actual = searchLoadcore13Module(native, Data, a0); break;
            }
            if (!actual || *actual != cpu.gpr[2])
                std::cerr << "ordinal=" << ordinal << " original=" << cpu.gpr[2]
                          << " native=" << (actual ? std::to_string(*actual) : "UNSUPPORTED") << '\n';
            require(actual && *actual == cpu.gpr[2], "return differs from selected original");
            require(std::equal(native.ram().begin(), native.ram().end(), original.ram().begin()),
                    "full RAM differs from selected original");
            ++comparisons;
        };
        auto write = [&](uint32_t at, uint32_t value) { native.write32(at,value); original.write32(at,value); };
        compare(12u, 4u); compare(17u, 0u); compare(17u, P);
        write(Source, 0x00040002u); compare(13u, Source); compare(12u, 4u); compare(12u, 0x104u);
        write(Source, 0x01050000u); write(Source+4u, 0x12345678u);
        compare(13u, Source); compare(12u, 5u); compare(12u, 7u);
        write(Source, 0xFF070000u); compare(13u, Source);
        compare(16u, Q); compare(16u, P); compare(16u, R);
        compare(24u, Q+0xFFu); compare(24u, Q+0x100u); compare(24u, Q+0x13Fu); compare(24u, Q+0x140u);
        compare(17u, Q); compare(17u, Q); compare(17u, 0u);
        compare(17u, P); compare(17u, R); compare(24u, P+0x100u);
        compare(16u, 0x80000000u | Q); compare(16u, P); compare(17u, 0x80000000u | Q); compare(17u, P);
        write(Data+0x18u, 0xFFFFFFFFu); compare(16u, R); compare(17u, R);
        write(Source, 0x0C090000u); compare(13u, Source); compare(12u, 9u);
        write(Source, 0x000A0000u); compare(13u, Source);
        std::cout << "PASS " << comparisons << " original LOADCORE state comparisons; full RAM, no intercepted calls\n";
    }
}

int main(int argc, char **argv)
{
    try
    {
        contracts();
        if (argc == 2) originalReplay(argv[1]);
        else require(argc == 1, "usage: ps2_iop_loadcore_state_tests [selected LOADCORE.IRX]");
        return 0;
    }
    catch (const std::exception &error)
    {
        std::cerr << "FAIL " << error.what() << '\n'; return 1;
    }
}
