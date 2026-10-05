#include "iop_compat_test_support.h"
#include "emulator/core/iop_cpu.h"
#include "emulator/core/iop_memory.h"
#include "emulator/imports/iop_imports.h"

#include <fstream>
#include <functional>
#include <iterator>

namespace
{
    using namespace iop_test;
    using namespace ps2x::iop::detail;
    constexpr uint32_t Data = 0x1DC0u, P = 0x20000u, Q = 0x20200u, R = 0x20400u;
    constexpr uint32_t A = 0x30000u, B = 0x30100u, C = 0x30200u;
    constexpr uint32_t Stack = 0x110000u, Return = 0x1FFF00u;
    constexpr std::array<uint8_t, 8> Name{'t','e','s','t','l','i','b',0};
    struct Action { uint32_t ordinal, a0, a1 = 0u; };
    using Prepare = std::function<void(IopMemory &)>;

    uint32_t word(const std::vector<uint8_t> &bytes, size_t p)
    {
        require(p <= bytes.size() && bytes.size() - p >= 4u, "ELF word outside file");
        uint32_t result{}; std::memcpy(&result, bytes.data() + p, 4u); return result;
    }
    void provider(IopMemory &m, uint32_t p, uint16_t version = 0x0101u,
                  uint32_t target = 0x80000u, const std::array<uint8_t, 8> &name = Name)
    {
        require(m.zeroRam(p, 0x100u), "provider span failed");
        m.write32(p, 0x41C00000u); m.write16(p + 8u, version);
        require(m.writeRam(p + 12u, name.data(), name.size()), "provider name failed");
        for (uint32_t i = 0u; i < 4u; ++i) m.write32(p + 20u + 4u * i, target + i * 16u);
    }
    void consumer(IopMemory &m, uint32_t p, uint16_t version = 0x0101u,
                  uint32_t delay = 0x24000003u, const std::array<uint8_t, 8> &name = Name)
    {
        require(m.zeroRam(p, 0x100u), "consumer span failed");
        m.write32(p, 0x41E00000u); m.write16(p + 8u, version);
        require(m.writeRam(p + 12u, name.data(), name.size()), "consumer name failed");
        m.write32(p + 20u, 0x03E00008u); m.write32(p + 24u, delay);
    }
    void initialize(IopMemory &m, const std::vector<uint8_t> &original)
    {
        const uint32_t ph = word(original, 28u);
        require(word(original, ph + 32u) == 1u, "selected LOADCORE PT_LOAD missing");
        const uint32_t offset = word(original, ph + 36u), size = word(original, ph + 48u);
        require(size >= 0x1A60u && offset <= original.size() && size <= original.size() - offset,
                "selected LOADCORE code missing");
        require(word(original, offset + 0x924u) == 0x27BDFFD8u &&
                word(original, offset + 0xC2Cu) == 0x27BDFFD8u &&
                word(original, offset + 0x1200u) == 0xAC830004u,
                "LOADCORE instruction anchors do not match selected revision");
        require(m.writeRam(0u, original.data() + offset, size), "LOADCORE code copy failed");
        require(m.zeroRam(Data, 0x20u) && m.zeroRam(P, 0x1000u) && m.zeroRam(A, 0x1000u) &&
                m.zeroRam(Stack - 0x1000u, 0x1000u), "oracle fixture ownership failed");
    }
    uint32_t execute(IopMemory &m, const Action &action, uint32_t &flushes)
    {
        uint32_t pc{};
        switch (action.ordinal)
        {
        case 6u: pc = 0x924u; break;
        case 10u: pc = 0xAECu; break;
        case 7u: pc = 0xB4Cu; break;
        case 8u: pc = 0xC2Cu; break;
        case 9u: pc = 0xCE8u; break;
        default: throw std::runtime_error("unsupported oracle ordinal");
        }
        IopCpuState cpu{};
        for (uint32_t r = 1u; r < 32u; ++r) cpu.gpr[r] = 0xBEEF0000u + r;
        cpu.pc = pc; cpu.gpr[4] = action.a0; cpu.gpr[5] = action.a1;
        cpu.gpr[29] = Stack; cpu.gpr[31] = Return;
        const auto before = cpu;
        IopCpuCore core(m);
        uint32_t count = 0u;
        while (cpu.pc != Return && count++ < 1000000u)
        {
            if (cpu.pc == 0x1A60u)
            {
                // Cache flush is intercepted, not executed as RAM clearing.
                // The local CPU has no instruction-cache model to compare.
                require(!cpu.branchPending && !cpu.pendingLoad, "flush boundary retained pending CPU state");
                cpu.pc = cpu.gpr[31]; ++flushes; continue;
            }
            require(cpu.pc >= 0x924u && cpu.pc < 0x1250u, "original escaped selected lifecycle interval");
            require(core.executeInstruction(cpu) && !cpu.exception, "original instruction failed");
        }
        require(cpu.pc == Return, "original did not return within instruction bound");
        for (uint32_t r = 16u; r < 24u; ++r)
            require(cpu.gpr[r] == before.gpr[r], "original callee-saved register changed");
        for (uint32_t r = 28u; r < 32u; ++r)
            require(cpu.gpr[r] == before.gpr[r], "original GP/SP/FP/RA changed");
        return cpu.gpr[2];
    }
    void compare(const IopMemory &native, const IopMemory &oracle, const char *label)
    {
        for (uint32_t address = 0u; address < IopMemory::RamSize; ++address)
        {
            if (address >= Stack - 0x1000u && address < Stack) continue;
            if (native.ram()[address] != oracle.ram()[address])
            {
                std::cerr << label << " memory mismatch at0x" << std::hex << address
                          << " native=" << unsigned(native.ram()[address])
                          << " original=" << unsigned(oracle.ram()[address]) << std::dec << '\n';
                throw std::runtime_error("original library memory effects disagree");
            }
        }
    }
    void replay(const std::vector<uint8_t> &original, const char *label, const Prepare &prepare,
                const std::vector<Action> &actions, uint32_t &comparisons)
    {
        IopMemory native, oracle;
        initialize(native, original); initialize(oracle, original);
        prepare(native); prepare(oracle);
        IopImportRegistry registry(native);
        require(registry.bindInternalData(Data), "native shared list binding failed");
        uint32_t flushes = 0u;
        for (const auto &action : actions)
        {
            const uint32_t expected = execute(oracle, action, flushes);
            std::optional<int32_t> actual;
            switch (action.ordinal)
            {
            case 6u: actual = registry.registerLibrary(action.a0); break;
            case 10u: actual = registry.registerLibrary(action.a0, true); break;
            case 7u: actual = registry.releaseLibrary(action.a0); break;
            case 8u: actual = registry.linkLibraries(action.a0, action.a1); break;
            case 9u: actual = registry.unlinkLibraries(action.a0, action.a1); break;
            }
            if (!actual || static_cast<uint32_t>(*actual) != expected)
            {
                std::cerr << label << " ordinal=" << action.ordinal << " expected=" << static_cast<int32_t>(expected)
                          << " actual=" << (actual ? std::to_string(*actual) : "UNSUPPORTED") << '\n';
                throw std::runtime_error("original library return disagrees");
            }
            compare(native, oracle, label); ++comparisons;
        }
        std::cout << "PASS original LOADCORE libraries: " << label << " calls=" << actions.size()
                  << " cache-flush-interceptions=" << flushes << '\n';
    }
}

int main(int argc, char **argv)
{
    try
    {
        require(argc == 2, "usage: ps2_iop_loadcore_link_original_replay LOADCORE.IRX (externally hash selected revision)");
        std::ifstream stream(argv[1], std::ios::binary);
        require(stream.good(), "original LOADCORE file unavailable");
        const std::vector<uint8_t> original{std::istreambuf_iterator<char>(stream), {}};
        require(original.size() >= 0x1A60u && original.size() < 0x100000u, "original file size out of bound");
        uint32_t comparisons = 0u;
        const auto common = [](IopMemory &m)
        {
            provider(m, P); provider(m, Q, 0x0102u, 0x90000u);
            consumer(m, A); consumer(m, B); consumer(m, C);
        };
        replay(original, "registration, duplicate, lower/equal minor, release", [](IopMemory &m)
        {
            provider(m, P, 0x0102u); provider(m, Q, 0x0101u); provider(m, R, 0x0102u);
        }, {{6u,P},{6u,P},{6u,Q},{6u,R},{6u,0u},{7u,Q},{7u,P}}, comparisons);
        replay(original, "non-auto provider skipped, older automatic registration rejected", common,
            {{10u,Q},{8u,A,0x100u},{6u,P},{8u,A,0x100u},{7u,P},{9u,A,0x100u},{7u,P}}, comparisons);
        replay(original, "non-auto head skipped for existing automatic provider", common,
            {{6u,P},{10u,Q},{8u,A,0x100u},{7u,Q},{9u,A,0x100u},{7u,P}}, comparisons);
        replay(original, "case and final name byte, major mismatch", [](IopMemory &m)
        {
            provider(m,P); auto name=Name; name[0]='T'; consumer(m,A,0x0101u,0x24000003u,name);
            name=Name; name[7]='X'; consumer(m,B,0x0101u,0x24000003u,name); consumer(m,C,0x0201u);
        }, {{6u,P},{8u,A,0x100u},{8u,B,0x100u},{8u,C,0x100u}}, comparisons);
        replay(original, "major-only match and full ADDIU delay", [](IopMemory &m)
        {
            provider(m,P); consumer(m,A,0x017Fu,0x25040003u); consumer(m,B,0x0101u,0x24000020u);
        }, {{6u,P},{8u,A,0x200u},{9u,A,0x200u}}, comparisons);
        replay(original, "all unlocked clients rebound with same order", common,
            {{6u,P},{8u,A,0x300u},{6u,Q},{7u,P},{9u,A,0x300u},{7u,Q}}, comparisons);
        replay(original, "locked client remains on older minor", [](IopMemory &m)
        {
            provider(m,P); provider(m,Q,0x0102u,0x90000u); consumer(m,A); consumer(m,B); consumer(m,C);
            m.write32(Data,P); m.write32(P,0u); m.write32(P+4u,C);
            m.write32(C+4u,B); m.write32(B+4u,A); m.write32(A+4u,0u);
            for (const uint32_t table : {A,B,C}) { m.write16(table+10u,2u); m.write32(table+20u,0x0802000Cu); }
            m.write16(B+10u,3u);
        }, {{6u,Q},{7u,P},{7u,Q},{9u,A,0x300u},{7u,P},{7u,Q}}, comparisons);
        replay(original, "unresolved match, retained different major", [](IopMemory &m)
        {
            provider(m,P); consumer(m,A); consumer(m,B,0x0201u); consumer(m,C);
            m.write32(Data+12u,C); m.write32(C+4u,B); m.write32(B+4u,A);
            for(const uint32_t table:{A,B,C}) m.write16(table+10u,4u);
        }, {{6u,P},{9u,A,0x300u},{7u,P}}, comparisons);
        replay(original, "head unlink preserves removed next", common,
            {{6u,P},{8u,A,0x300u},{9u,C,0x100u},{9u,B,0x100u},{9u,A,0x100u},{7u,P}}, comparisons);
        replay(original, "nonhead unlink stops before remaining in-range client", common,
            {{6u,P},{8u,A,0x300u},{9u,A,0x200u},{7u,P},{9u,A,0x300u},{7u,P}}, comparisons);
        replay(original, "whole-range rollback with missing provider", [](IopMemory &m)
        {
            provider(m,P); consumer(m,A); consumer(m,B,0x0201u);
        }, {{6u,P},{8u,A,0x200u},{7u,P}}, comparisons);
        replay(original, "external clients prevent provider range release", common,
            {{6u,P},{8u,A,0x100u},{9u,P,0x100u},{7u,P},{9u,A,0x100u},{7u,P}}, comparisons);
        replay(original, "malformed and flagged tables are skipped", [](IopMemory &m)
        {
            provider(m,P); consumer(m,A); consumer(m,B); consumer(m,C);
            m.write32(A+20u,0x03E00009u); m.write16(B+10u,4u); m.write32(C+24u,0x34000003u);
        }, {{6u,P},{8u,A,0x300u},{8u,A,3u},{7u,P}}, comparisons);
        replay(original, "unresolved unlink clears every selected next", [](IopMemory &m)
        {
            consumer(m,A); consumer(m,B); consumer(m,C);
            m.write32(Data+12u,C); m.write32(C+4u,B); m.write32(B+4u,A);
            for(const uint32_t table:{A,B,C}) m.write16(table+10u,5u);
        }, {{9u,A,0x200u},{9u,C,0x100u}}, comparisons);
        std::cout << "PASS comparisons=" << comparisons
                  << ". Local original-instruction oracle; cache flush intercepted; stack scratch excluded. "
                     "Not independent PCSX2 lockstep or gameplay parity.\n";
        return 0;
    }
    catch (const std::exception &error)
    {
        std::cerr << "FAIL original LOADCORE library replay: " << error.what() << '\n';
        return 1;
    }
}
