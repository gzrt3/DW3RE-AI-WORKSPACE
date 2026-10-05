#include "iop_compat_test_support.h"
#include "emulator/core/iop_memory.h"
#include "emulator/imports/iop_imports.h"

namespace
{
    using namespace iop_test;
    using namespace ps2x::iop::detail;
    constexpr uint32_t Data = 0x1DC0u, P = 0x20000u, Q = 0x20200u;
    constexpr uint32_t A = 0x30000u, B = 0x30100u, C = 0x30200u;
    constexpr std::array<uint8_t, 8> Name{'t','e','s','t','l','i','b',0};

    void provider(IopMemory &m, uint32_t p, uint16_t version = 0x0101u,
                  uint32_t target = 0x80000u, const std::array<uint8_t, 8> &name = Name)
    {
        require(m.zeroRam(p, 0x100u), "provider ownership failed");
        m.write32(p, 0x41C00000u); m.write16(p + 8u, version);
        require(m.writeRam(p + 12u, name.data(), name.size()), "name copy failed");
        for (uint32_t i = 0u; i < 4u; ++i) m.write32(p + 20u + 4u * i, target + i * 16u);
    }
    void consumer(IopMemory &m, uint32_t p, uint16_t version = 0x0101u,
                  uint32_t delay = 0x24000003u, const std::array<uint8_t, 8> &name = Name)
    {
        require(m.zeroRam(p, 0x100u), "consumer ownership failed");
        m.write32(p, 0x41E00000u); m.write16(p + 8u, version);
        require(m.writeRam(p + 12u, name.data(), name.size()), "name copy failed");
        m.write32(p + 20u, 0x03E00008u); m.write32(p + 24u, delay);
    }
    struct Fixture
    {
        IopMemory memory;
        IopImportRegistry registry{memory};
        Fixture()
        {
            require(memory.zeroRam(Data, 0x20u), "internal data ownership failed");
            require(memory.zeroRam(P, 0x1000u) && memory.zeroRam(A, 0x1000u), "arena ownership failed");
            require(registry.bindInternalData(Data), "internal data binding failed");
        }
        void setup()
        {
            provider(memory, P); consumer(memory, A);
            require(registry.registerLibrary(P) == 0, "register failed");
        }
        void linked()
        {
            setup(); require(registry.linkLibraries(A, 0x100u) == 0, "link failed");
        }
    };

    void registrationErrors()
    {
        Fixture f; f.setup();
        require(f.memory.read32(Data) == P && f.memory.read32(P) == 0u, "guest provider chain not published");
        require(f.registry.registerLibrary(P) == -214 && f.registry.registerLibrary(0u) == -214,
                "illegal/duplicate table error mismatch");
        provider(f.memory, Q, 0x0100u);
        require(f.registry.registerLibrary(Q) == -212 && f.memory.read32(Q) == 0x41C00000u,
                "older minor accepted or modified");
        f.memory.write16(Q + 8u, 0x0101u);
        require(f.registry.registerLibrary(Q) == -212, "equal minor accepted");
        require(f.registry.releaseLibrary(Q) == -213, "absent release error mismatch");
        require(f.registry.releaseLibrary(P) == 0 && f.memory.read32(P) == 0x41C00000u &&
                f.memory.read32(Data) == 0u, "released table not restored");
    }
    void exactNameAndMajor()
    {
        Fixture f; f.setup();
        auto name = Name; name[0] = 'T'; consumer(f.memory, A, 0x0101u, 0x24000003u, name);
        require(f.registry.linkLibraries(A, 0x100u) == -1, "case-insensitive link");
        name = Name; name[7] = 'X'; consumer(f.memory, A, 0x0101u, 0x24000003u, name);
        require(f.registry.linkLibraries(A, 0x100u) == -1, "eighth name byte ignored");
        consumer(f.memory, A, 0x0201u);
        require(f.registry.linkLibraries(A, 0x100u) == -1, "major mismatch linked");
        consumer(f.memory, A, 0x017Fu);
        require(f.registry.linkLibraries(A, 0x100u) == 0, "invented minimum minor constraint");
    }
    void nonAuto()
    {
        Fixture f; provider(f.memory, P); consumer(f.memory, A);
        require(f.registry.registerLibrary(P, true) == 0 && (f.memory.read16(P + 10u) & 1u), "non-auto flag missing");
        require(f.registry.findTable("testlib", uint16_t{0x0101u}) == P, "query wrongly skips non-auto provider");
        require(f.registry.linkLibraries(A, 0x100u) == -1, "automatic link used non-auto provider");
    }
    void bindingIdentity()
    {
        Fixture f; f.setup(); f.memory.write32(A + 24u, 0x25040003u);
        require(f.registry.linkLibraries(A, 0x100u) == 0, "ADDIU with source/destination rejected");
        const auto call = f.registry.decode(A + 20u);
        require(call && call->linked && call->tableAddress == A && call->providerAddress == P &&
                call->targetAddress == 0x80030u && call->delayInstruction == 0x25040003u &&
                call->version == 0x0101u && call->ordinal == 3u && call->exactName == Name,
                "linked call identity incomplete");
        const auto alias = f.registry.decode(0x80000000u | (A + 20u));
        require(alias && alias->targetAddress == call->targetAddress, "cached alias lost binding");
        require(f.memory.read32(A + 20u) == (0x08000000u | (0x80030u >> 2u)) &&
                f.memory.read32(A + 24u) == 0x25040003u && f.memory.read32(P + 4u) == A,
                "linked guest instructions or client head mismatch");
    }
    void missingOrdinal()
    {
        Fixture f; f.setup(); f.memory.write32(A + 24u, 0x24000020u);
        require(f.registry.linkLibraries(A, 0x100u) == 0, "original out-of-range link did not succeed");
        const auto call = f.registry.decode(A + 20u);
        require(call && call->linked && call->targetAddress == 0u && call->ordinal == 32u &&
                f.memory.read32(A + 20u) == 0x03E00008u, "missing target became executable success");
    }
    void provenanceInvalidation()
    {
        Fixture f; f.linked(); const uint32_t jump = f.memory.read32(A + 20u);
        consumer(f.memory, B); f.memory.write32(B + 20u, jump);
        require(!f.registry.decode(B + 20u), "arbitrary J decoded without binding");
        f.memory.write32(A + 24u, 0x24000002u);
        require(!f.registry.decode(A + 20u), "changed ordinal kept old binding");
        f.memory.write32(A + 24u, 0x24000003u); f.memory.write32(P + 32u, 0x90030u);
        require(!f.registry.decode(A + 20u), "changed provider target kept old binding");
        f.memory.write32(P + 32u, 0x80030u); f.memory.write32(Data, 0u);
        require(!f.registry.decode(A + 20u), "removed guest provider stayed bound");
    }
    void replacementLockedClient()
    {
        Fixture f; f.linked(); consumer(f.memory, B);
        require(f.registry.linkLibraries(B, 0x100u) == 0, "second link failed");
        f.memory.write16(A + 10u, 3u);
        provider(f.memory, Q, 0x0102u, 0x90000u);
        require(f.registry.registerLibrary(Q) == 0, "newer provider rejected");
        const auto a = f.registry.decode(A + 20u), b = f.registry.decode(B + 20u);
        require(a && b && a->providerAddress == P && b->providerAddress == Q &&
                a->targetAddress == 0x80030u && b->targetAddress == 0x90030u &&
                f.memory.read32(P + 4u) == A && f.memory.read32(A + 4u) == 0u &&
                f.memory.read32(Q + 4u) == B, "replacement ignored locked client or chain order");
        require(f.registry.releaseLibrary(P) == -215 && f.registry.releaseLibrary(Q) == -215,
                "provider with live clients released");
    }
    void unresolvedRegistration()
    {
        Fixture f; consumer(f.memory, A); consumer(f.memory, B, 0x0201u);
        f.memory.write32(Data + 12u, A); f.memory.write32(A + 4u, B); f.memory.write16(A + 10u, 4u);
        provider(f.memory, P);
        require(f.registry.registerLibrary(P) == 0 && f.memory.read32(Data + 12u) == B &&
                f.memory.read32(A + 4u) == 0u && f.memory.read16(A + 10u) == 2u &&
                f.memory.read32(P + 4u) == A, "unresolved matching importer not rebound");
    }
    void headUnlink()
    {
        Fixture f; f.linked(); consumer(f.memory, B);
        require(f.registry.linkLibraries(B, 0x100u) == 0, "second link failed");
        require(f.registry.unlinkLibraries(B, 0x100u) == 0 && f.memory.read32(B + 4u) == A &&
                f.memory.read32(P + 4u) == A && f.memory.read16(B + 10u) == 0u &&
                f.memory.read32(B + 20u) == 0x03E00008u, "head removal differs from selected original");
        const auto b = f.registry.decode(B + 20u);
        require(b && !b->linked, "unlinked importer retained active provenance");
    }
    void nonheadStopsEarly()
    {
        Fixture f; f.setup(); consumer(f.memory, B); consumer(f.memory, C);
        for (const uint32_t table : {A, B, C}) require(f.registry.linkLibraries(table, 0x100u) == 0, "link failed");
        require(f.registry.unlinkLibraries(A, 0x200u) == 0 && f.memory.read32(C + 4u) == A &&
                f.memory.read32(B + 4u) == 0u && f.memory.read16(B + 10u) == 0u &&
                f.memory.read16(A + 10u) == 2u && f.memory.read32(P + 4u) == C,
                "nonhead unlink was incorrectly simplified to erase every in-range client");
    }
    void rollbackWholeRange()
    {
        Fixture f; f.setup(); consumer(f.memory, B, 0x0201u);
        require(f.registry.linkLibraries(A, 0x200u) == -1 && f.memory.read32(P + 4u) == 0u &&
                f.memory.read16(A + 10u) == 0u && f.memory.read32(A + 20u) == 0x03E00008u &&
                f.memory.read32(Data + 12u) == 0u, "failed link omitted original whole-range rollback");
    }
    void externalClientsPreventRelease()
    {
        Fixture f; f.linked();
        require(f.registry.unlinkLibraries(P, 0x100u) == 0 && f.memory.read32(Data) == P &&
                f.memory.read32(P + 4u) == A, "unlink erased provider with external clients");
        f.registry.eraseRange(P, 0x100u);
        require(f.registry.resolve("testlib", 3u, uint16_t{0x0101u}) == 0x80030u,
                "legacy erase destroyed referenced library");
    }
    void boundedFailureIsAtomic()
    {
        Fixture f; f.setup(); consumer(f.memory, B);
        f.memory.write32(B + 28u, 0x03E00008u);
        // This unterminated candidate is at the final owned arena boundary.
        const uint32_t bad = IopMemory::RamSize - 28u;
        require(f.memory.zeroRam(bad, 28u), "end fixture ownership failed");
        f.memory.write32(bad, 0x41E00000u); f.memory.write32(bad + 20u, 0x03E00008u);
        f.memory.write32(bad + 24u, 0x24000003u);
        const auto before = std::vector<uint8_t>(f.memory.ram().begin(), f.memory.ram().end());
        require(!f.registry.linkLibraries(bad, 28u), "unterminated unowned table accepted");
        require(std::equal(before.begin(), before.end(), f.memory.ram().begin()), "unsafe link published writes");
        f.memory.write32(P, P);
        const auto cyclic = std::vector<uint8_t>(f.memory.ram().begin(), f.memory.ram().end());
        require(!f.registry.unlinkLibraries(A, 0x100u) &&
                std::equal(cyclic.begin(), cyclic.end(), f.memory.ram().begin()), "cyclic state mutated or succeeded");
    }
    void malformedAndFlaggedSkipped()
    {
        Fixture f; f.setup(); f.memory.write32(A + 20u, 0x03E00009u);
        require(f.registry.linkLibraries(A, 0x100u) == 0 && f.memory.read32(P + 4u) == 0u, "malformed table linked");
        consumer(f.memory, A); f.memory.write16(A + 10u, 4u);
        require(f.registry.linkLibraries(A, 0x100u) == 0 && f.memory.read32(P + 4u) == 0u, "flagged table linked");
        require(f.registry.linkLibraries(A, 3u) == 0, "word-rounded empty span failed");
    }
    void nonAutoUnsafeClientHead()
    {
        Fixture f; provider(f.memory, P); f.memory.write32(P + 4u, 0x1FFFFCu);
        const auto before = std::vector<uint8_t>(f.memory.ram().begin(), f.memory.ram().end());
        require(!f.registry.registerLibrary(P, true) &&
                std::equal(before.begin(), before.end(), f.memory.ram().begin()),
                "non-auto registration published an unsafe preserved client head");
    }
    void unresolvedUnlinkAndReset()
    {
        Fixture f; consumer(f.memory, A); consumer(f.memory, B);
        f.memory.write32(Data + 12u, A); f.memory.write32(A + 4u, B);
        f.memory.write16(A + 10u, 5u); f.memory.write16(B + 10u, 4u);
        require(f.registry.unlinkLibraries(A, 0x200u) == 0 && f.memory.read32(Data + 12u) == 0u &&
                f.memory.read32(A + 4u) == 0u && f.memory.read16(A + 10u) == 0u &&
                f.memory.read16(B + 10u) == 0u, "unresolved chain not removed");
        f.linked(); f.registry.reset();
        require(!f.registry.decode(A + 20u) && f.registry.findTable("testlib") == 0u,
                "reset retained linked provenance");
    }
}

int main()
{
    const Test tests[] = {
        {"LOADCORE registration errors and guest list", registrationErrors},
        {"Exact eight-byte names and major-only matching", exactNameAndMajor},
        {"Non-auto registration remains queryable but is not auto-linked", nonAuto},
        {"Linked J retains provider, ordinal, version and full delay instruction", bindingIdentity},
        {"Out-of-range ordinal remains a strict missing target", missingOrdinal},
        {"Forged and stale J instructions cannot use old provenance", provenanceInvalidation},
        {"New minor rebinds unlocked clients and preserves locked clients", replacementLockedClient},
        {"Registration consumes matching unresolved importers", unresolvedRegistration},
        {"Head unlink preserves removed next pointer", headUnlink},
        {"Nonhead unlink retains original early-stop asymmetry", nonheadStopsEarly},
        {"Missing provider rolls back the whole requested link range", rollbackWholeRange},
        {"Unlink preserves providers referenced outside the range", externalClientsPreventRelease},
        {"Unowned spans and cyclic chains fail without partial mutation", boundedFailureIsAtomic},
        {"Malformed, flagged and fractional-word candidates", malformedAndFlaggedSkipped},
        {"Non-auto registration validates its preserved client head atomically", nonAutoUnsafeClientHead},
        {"Unresolved unlink and reset invalidate active bindings", unresolvedUnlinkAndReset},
    };
    return run(tests);
}
