#include "iop_compat_test_support.h"
#include "emulator/core/iop_memory.h"
#include "emulator/imports/iop_loadcore_image.h"

// Synthetic contracts only. The separate original replay target compares
// identified retail instructions and images; these tests do not prove parity.
namespace
{
    using namespace iop_test;
    using namespace ps2x::iop::detail;

    struct Fixture
    {
        static constexpr uint32_t Image = 0x160000u, Info = 0x1000u;
        static constexpr uint32_t Ph = Image + 0x40u, Meta = Image + 0x90u;
        static constexpr uint32_t Source = Image + 0x100u, Sections = Image + 0x200u;
        static constexpr uint32_t Records = Image + 0x300u;
        static constexpr uint32_t Header = 0x138000u, Text = Header + 0x30u;
        IopMemory memory;

        explicit Fixture(bool destinationOwned = true)
        {
            require(memory.allocate(0x500u, 16u, Image) == Image, "fixture image allocation failed");
            fill(Image, 0x500u, 0u);
            fill(Info, 36u, 0xA5u);
            if (destinationOwned)
            {
                require(memory.allocate(0xB0u, 16u, Header) == Header, "fixture module allocation failed");
                fill(Header, 0xB0u, 0xCCu);
            }
            memory.write32(Image, 0x464C457Fu);
            memory.write16(Image + 4u, 0x0101u);
            memory.write16(Image + 0x10u, 0xFF80u);
            memory.write16(Image + 0x12u, 8u);
            memory.write32(Image + 0x1Cu, 0x40u);
            memory.write32(Image + 0x20u, 0x200u);
            memory.write16(Image + 0x2Au, 0x20u);
            memory.write16(Image + 0x2Cu, 2u);
            memory.write16(Image + 0x2Eu, 40u);
            memory.write16(Image + 0x30u, 1u);
            memory.write32(Ph, 0x70000080u);
            memory.write32(Ph + 4u, 0x90u);
            memory.write32(Ph + 0x20u, 1u);
            memory.write32(Ph + 0x24u, 0x100u);
            memory.write32(Ph + 0x28u, 0u);
            memory.write32(Ph + 0x30u, 0x60u);
            memory.write32(Ph + 0x34u, 0x80u);
            memory.write32(Meta, 0xFFFFFFFFu);
            memory.write32(Meta + 4u, 0x20u);
            memory.write32(Meta + 8u, 0u);
            memory.write32(Meta + 0xCu, 0x40u);
            memory.write32(Meta + 0x10u, 0x20u);
            memory.write32(Meta + 0x14u, 0x20u);
            for (uint32_t offset = 0u; offset < 0x60u; offset += 4u)
                memory.write32(Source + offset, 0x12340000u + offset);
        }

        void fill(uint32_t address, uint32_t bytes, uint8_t value)
        {
            const std::vector<uint8_t> data(bytes, value);
            require(memory.writeRam(address, data.data(), data.size()), "fixture RAM write failed");
        }

        void prepare(uint32_t type = 0xFF80u)
        {
            memory.write16(Image + 0x10u, static_cast<uint16_t>(type));
            memory.write32(Ph + 0x28u, type == 2u ? Text : 0u);
            const auto result = probeLoadcore13Elf(memory, Image, Info);
            require(result && *result == (type == 2u ? 3u : 4u), "fixture probe failed");
            if (type != 2u) memory.write32(Info + 0xCu, Text);
        }

        void relocations(std::initializer_list<std::pair<uint32_t, uint32_t>> records)
        {
            memory.write16(Image + 0x30u, 2u);
            memory.write32(Sections + 40u + 4u, 9u);
            memory.write32(Sections + 40u + 0x10u, 0x300u);
            memory.write32(Sections + 40u + 0x14u, static_cast<uint32_t>(records.size()) * 8u);
            memory.write32(Sections + 40u + 0x1Cu, 0u);
            memory.write32(Sections + 40u + 0x24u, 8u);
            uint32_t offset = 0u;
            for (const auto &[patch, info] : records)
            {
                memory.write32(Records + offset, patch);
                memory.write32(Records + offset + 4u, info);
                offset += 8u;
            }
        }

        void load()
        {
            const auto result = loadLoadcore13Elf(memory, Image, Info);
            require(result && *result == 0u, "supported image did not load");
        }

        std::vector<uint8_t> snapshot() const
        {
            return {memory.ram().begin(), memory.ram().end()};
        }

        void unchanged(const std::vector<uint8_t> &before) const
        {
            require(std::equal(before.begin(), before.end(), memory.ram().begin()), "unhandled operation changed guest RAM");
        }

        void expectUnhandled()
        {
            const auto before = snapshot();
            require(!loadLoadcore13Elf(memory, Image, Info), "unsafe/unsupported load was handled");
            unchanged(before);
        }
    };

    void acceptedProbeFields()
    {
        for (const uint32_t type : {2u, 0xFF80u, 0xFF81u})
        {
            Fixture f;
            // These fields are deliberately not checked by the selected original.
            f.memory.write32(Fixture::Image, 0xDEADBEEFu);
            f.memory.write16(Fixture::Image + 0x28u, 0xFFFFu);
            f.memory.write32(Fixture::Ph + 0x20u, 0xDEADu);
            f.prepare(type);
            const std::array<uint32_t, 9> expected{type == 2u ? 3u : 4u, 0x20u, 0u,
                Fixture::Text, 0x40u, 0x20u, 0x20u, 0x80u, 0xFFFFFFFFu};
            for (uint32_t i = 0u; i < expected.size(); ++i)
                require(f.memory.read32(Fixture::Info + i * 4u) == expected[i], "probe FileInfo field differs");
        }
    }

    void rejectedProbePreservesOtherWords()
    {
        for (const auto &[offset, value] : {std::pair{4u, 2u}, {0x12u, 9u}, {0x2Au, 31u}, {0x2Cu, 1u}, {0x10u, 3u}})
        {
            Fixture f;
            f.memory.write16(Fixture::Image + offset, static_cast<uint16_t>(value));
            const auto result = probeLoadcore13Elf(f.memory, Fixture::Image, Fixture::Info);
            require(result && *result == 0xFFFFFFFFu, "invalid ELF field not rejected");
            require(f.memory.read32(Fixture::Info) == 0xFFFFFFFFu, "rejection did not write type");
            for (uint32_t i = 1u; i < 9u; ++i)
                require(f.memory.read32(Fixture::Info + i * 4u) == 0xA5A5A5A5u, "rejection clobbered other FileInfo words");
        }
        Fixture f;
        f.memory.write32(Fixture::Ph, 1u);
        require(probeLoadcore13Elf(f.memory, Fixture::Image, Fixture::Info) == 0xFFFFFFFFu,
                "invalid first PH type accepted");
    }

    void probeOwnershipAndCoff()
    {
        Fixture f;
        f.memory.write32(Fixture::Ph + 4u, IopMemory::RamSize);
        const auto before = f.snapshot();
        require(!probeLoadcore13Elf(f.memory, Fixture::Image, Fixture::Info), "unowned metadata accepted");
        f.unchanged(before);
        for (const uint32_t alias : {0x20000000u, 0xC0000000u})
        {
            require(!probeLoadcore13Elf(f.memory, Fixture::Image | alias, Fixture::Info), "unsupported source alias accepted");
            f.unchanged(before);
        }
        require(!probeLoadcore13Elf(f.memory, Fixture::Image + 1u, Fixture::Info), "misaligned source accepted");
        f.unchanged(before);
        f.memory.write16(Fixture::Image, 0x0162u);
        const auto coff = f.snapshot();
        require(!probeLoadcore13Elf(f.memory, Fixture::Image, Fixture::Info), "COFF fabricated a supported return");
        f.unchanged(coff);
    }

    void rejectionNeedsOnlyTypeOwnership()
    {
        Fixture f;
        constexpr uint32_t PartialInfo = 0x3000u;
        f.memory.write32(PartialInfo, 0x12345678u);
        f.memory.write16(Fixture::Image + 4u, 0u);
        require(probeLoadcore13Elf(f.memory, Fixture::Image, PartialInfo) == 0xFFFFFFFFu,
                "ordinary rejection required unrelated FileInfo ownership");
        require(!f.memory.ownsRamRange(PartialInfo + 4u, 4u), "rejection claimed unrelated memory");
    }

    void relocatableCopyBssAndHeader()
    {
        Fixture f;
        f.prepare();
        f.load();
        require(f.memory.read32(Fixture::Info + 4u) == Fixture::Text + 0x20u, "entry was not relocated");
        require(f.memory.read32(Fixture::Info + 8u) == Fixture::Text, "GP0 did not receive relocation base");
        require(f.memory.read32(Fixture::Info + 0x20u) == 0xFFFFFFFFu, "absent IopModuleID was relocated");
        for (uint32_t offset = 0u; offset < 0x60u; offset += 4u)
            require(f.memory.read32(Fixture::Text + offset) == 0x12340000u + offset, "image copy differs");
        for (uint32_t offset = 0x60u; offset < 0x80u; ++offset)
            require(f.memory.read8(Fixture::Text + offset) == 0u, "BSS not zeroed");
        for (uint32_t offset = 0u; offset < 0x10u; offset += 4u)
            require(f.memory.read32(Fixture::Header + offset) == 0u, "initial ModuleInfo words not cleared");
        for (uint32_t offset = 4u; offset <= 0x18u; offset += 4u)
            require(f.memory.read32(Fixture::Header + 0xCu + offset) == f.memory.read32(Fixture::Info + offset),
                    "ModuleInfo copy field differs");
        require(f.memory.read32(Fixture::Header + 0x28u) == 0xCCCCCCCCu &&
                f.memory.read32(Fixture::Header + 0x2Cu) == 0xCCCCCCCCu, "ModuleInfo tail was overwritten");
        const auto allocation = f.memory.allocationContaining(Fixture::Text);
        require(allocation && allocation->address == Fixture::Header && allocation->size == 0xB0u,
                "image helper changed the reserved module allocation");
    }

    void fixedImageLeavesFileInfo()
    {
        Fixture f;
        f.prepare(2u);
        const std::vector<uint8_t> info(f.memory.ram().begin() + Fixture::Info,
                                      f.memory.ram().begin() + Fixture::Info + 36u);
        f.load();
        require(std::equal(info.begin(), info.end(), f.memory.ram().begin() + Fixture::Info), "fixed image changed FileInfo");
        require(f.memory.read32(Fixture::Header + 0x10u) == 0x20u &&
                f.memory.read32(Fixture::Header + 0x14u) == 0u, "fixed entry/GP received base");
        Fixture mismatch;
        mismatch.prepare(2u);
        mismatch.memory.write32(Fixture::Info + 0xCu, Fixture::Text + 4u);
        mismatch.expectUnhandled();
    }

    void moduleIdRecordIsNotModuleInfo()
    {
        for (const uint32_t recordOffset : {0u, 0x10u})
        {
            Fixture f;
            f.memory.write32(Fixture::Meta, recordOffset);
            f.memory.write32(Fixture::Source + recordOffset, 0x38u);
            f.memory.write16(Fixture::Source + recordOffset + 4u, 0x0205u);
            f.relocations({{recordOffset, 2u}});
            f.prepare();
            f.load();
            require(f.memory.read32(Fixture::Info + 0x20u) == Fixture::Text + recordOffset, "IopModuleID not relocated");
            require(f.memory.read32(Fixture::Header + 4u) == Fixture::Text + 0x38u, "ModuleInfo name not read after relocation");
            require(f.memory.read16(Fixture::Header + 8u) == 0x0205u &&
                    f.memory.read16(Fixture::Header + 0xAu) == 0u, "module version/flags differ");
            require(f.memory.read32(Fixture::Header + 0xCu) == 0u, "full module ID word not cleared");
        }
    }

    void selectedRelocationsAndIgnoredSymbols()
    {
        Fixture f;
        f.memory.write32(Fixture::Source, 0xFFFFFFF0u);
        f.memory.write32(Fixture::Source + 4u, 0x0C000010u);
        f.memory.write32(Fixture::Source + 8u, 0x3C081234u);
        f.memory.write32(Fixture::Source + 12u, 0x25098010u);
        f.memory.write32(Fixture::Source + 16u, 0x240AFFF0u);
        f.relocations({{0u, 0x120002u}, {4u, 0x340004u}, {8u, 0x560005u},
                       {12u, 0x780006u}, {16u, 0x9A0001u}, {0xFFFFFFFFu, 0u}, {0xFFFFFFFFu, 3u}});
        f.prepare();
        f.load();
        require(f.memory.read32(Fixture::Text) == 0x00138020u, "R_MIPS_32 wrap differs");
        require(f.memory.read32(Fixture::Text + 4u) == 0x0C04E01Cu, "R_MIPS_26 differs");
        require(f.memory.read32(Fixture::Text + 8u) == 0x3C081247u, "HI16 next-record signed-low carry differs");
        require(f.memory.read32(Fixture::Text + 12u) == 0x25090040u, "LO16 differs");
        require(f.memory.read32(Fixture::Text + 16u) == 0x240A8020u, "R_MIPS_16 differs");
    }

    void hiUsesNextOffsetRegardlessOfSymbolAndType()
    {
        Fixture f;
        f.memory.write32(Fixture::Source, 0x3C081234u);
        f.memory.write32(Fixture::Source + 8u, 0x25098010u);
        f.relocations({{0u, 0x123405u}, {8u, 0x987603u}});
        f.prepare();
        f.load();
        require(f.memory.read32(Fixture::Text) == 0x3C081247u, "HI relocation imposed generic LO/symbol matching");
        require(f.memory.read32(Fixture::Text + 8u) == 0x25098010u, "next no-op record was changed/consumed incorrectly");
    }

    void chainedRelocationConsumesAddend()
    {
        Fixture f;
        f.memory.write32(Fixture::Source, 0x3C080002u);
        f.memory.write32(Fixture::Source + 8u, 0x3C09FFFFu);
        f.memory.write32(Fixture::Source + 4u, 0x3C0A0000u);
        f.memory.write32(Fixture::Source + 0x10u, 0x10u);
        f.relocations({{0u, 250u}, {0x7FF0u, 255u}, {0x10u, 2u}});
        f.prepare();
        f.load();
        require(f.memory.read32(Fixture::Text) == 0x3C080014u &&
                f.memory.read32(Fixture::Text + 8u) == 0x3C090014u &&
                f.memory.read32(Fixture::Text + 4u) == 0x3C0A0014u, "type250 signed chain differs");
        require(f.memory.read32(Fixture::Text + 0x10u) == Fixture::Text + 0x10u,
                "type250 did not consume just its addend record");
    }

    void sectionAndRecordStrides()
    {
        Fixture f;
        f.memory.write32(Fixture::Source, 0x10u);
        f.memory.write32(Fixture::Source + 4u, 0x20u);
        f.relocations({{0u, 2u}, {4u, 2u}});
        f.memory.write16(Fixture::Image + 0x2Eu, 17u);
        f.memory.write32(Fixture::Sections + 40u + 0x14u, 32u);
        f.memory.write32(Fixture::Sections + 40u + 0x24u, 16u);
        f.prepare();
        f.load();
        require(f.memory.read32(Fixture::Text) == Fixture::Text + 0x10u &&
                f.memory.read32(Fixture::Text + 4u) == Fixture::Text + 0x20u,
                "selected fixed40/fixed8 strides changed");
    }

    void wordTailsAndUnalignedBss()
    {
        Fixture f;
        f.memory.write32(Fixture::Ph + 0x30u, 6u);
        f.memory.write32(Fixture::Ph + 0x34u, 9u);
        f.prepare();
        f.load();
        require(f.memory.read32(Fixture::Text) == 0x12340000u, "word copy missing");
        for (uint32_t i = 4u; i < 12u; ++i)
            require(f.memory.read8(Fixture::Text + i) == 0xCCu, "partial copy/BSS bytes were fabricated");
        Fixture unaligned;
        unaligned.memory.write32(Fixture::Ph + 0x30u, 6u);
        unaligned.memory.write32(Fixture::Ph + 0x34u, 10u);
        unaligned.prepare();
        unaligned.expectUnhandled();
    }

    void forwardOverlapIsNotMemmove()
    {
        Fixture f;
        f.memory.write32(Fixture::Ph + 0x30u, 16u);
        f.memory.write32(Fixture::Ph + 0x34u, 16u);
        f.prepare();
        f.memory.write32(Fixture::Info + 0xCu, Fixture::Source + 4u);
        f.load();
        for (uint32_t i = 1u; i <= 4u; ++i)
            require(f.memory.read32(Fixture::Source + i * 4u) == 0x12340000u, "overlap used snapshot/memmove semantics");
    }

    void supportedDirectAliases()
    {
        for (const uint32_t alias : {0u, 0x80000000u, 0xA0000000u})
        {
            Fixture f;
            require(probeLoadcore13Elf(f.memory, Fixture::Image | alias, Fixture::Info | alias) == 4u,
                    "direct alias probe failed");
            f.memory.write32(Fixture::Info + 0xCu, Fixture::Text | alias);
            require(loadLoadcore13Elf(f.memory, Fixture::Image | alias, Fixture::Info | alias) == 0u,
                    "direct alias load failed");
            require(f.memory.read32(Fixture::Info + 8u) == (Fixture::Text | alias), "GP lost architectural alias bits");
            require(f.memory.read32(Fixture::Text) == 0x12340000u, "alias copy missed physical destination");
        }
    }

    void invalidTypeDoesNotAccessImageOrHeader()
    {
        Fixture f;
        for (const uint32_t type : {0u, 2u, 5u, 0xFFFFFFFFu})
        {
            f.memory.write32(Fixture::Info, type);
            const auto before = f.snapshot();
            require(loadLoadcore13Elf(f.memory, 0xFFFFFFFFu, Fixture::Info) == 0xFFFFFFFFu,
                    "unknown type read image or fabricated success");
            f.unchanged(before);
        }
        f.memory.write32(Fixture::Info, 1u);
        f.expectUnhandled();
    }

    void unownedAndUnsupportedRangesRollback()
    {
        Fixture unowned(false);
        unowned.prepare();
        unowned.expectUnhandled();
        require(!unowned.memory.ownsRamRange(Fixture::Header, 1u), "failed load claimed unowned destination");
        Fixture source;
        source.memory.write32(Fixture::Ph + 0x24u, 0x4FCu);
        source.memory.write32(Fixture::Ph + 0x30u, 8u);
        source.memory.write32(Fixture::Ph + 0x34u, 8u);
        source.prepare();
        source.expectUnhandled();
        for (const uint32_t address : {Fixture::Text | 0x20000000u, Fixture::Text | 0xC0000000u,
                                      IopMemory::RamSize - 4u, 0xFFFFFFFCu, Fixture::Text + 1u})
        {
            Fixture f;
            f.prepare();
            f.memory.write32(Fixture::Info + 0xCu, address);
            f.expectUnhandled();
        }
    }

    void badRelocationsRollbackAllEarlierWrites()
    {
        for (const uint32_t type : {7u, 255u, 5u, 250u})
        {
            Fixture f;
            f.relocations({{0u, 2u}, {4u, type}});
            f.prepare();
            f.expectUnhandled();
        }
        Fixture target;
        target.relocations({{0u, 2u}, {IopMemory::RamSize, 2u}});
        target.prepare();
        target.expectUnhandled();
        Fixture zeroStride;
        zeroStride.relocations({{0u, 2u}});
        zeroStride.memory.write32(Fixture::Sections + 40u + 0x24u, 0u);
        zeroStride.prepare();
        zeroStride.expectUnhandled();
        Fixture cycle;
        cycle.memory.write32(Fixture::Source, 0x3C080001u);
        cycle.memory.write32(Fixture::Source + 4u, 0x3C09FFFFu);
        cycle.relocations({{0u, 250u}, {0x7FF0u, 0u}});
        cycle.prepare();
        cycle.expectUnhandled();
    }

    void adjacentAllocationsDoNotConstituteModuleOwnership()
    {
        Fixture f(false);
        require(f.memory.allocate(0x30u, 16u, Fixture::Header) == Fixture::Header,
                "fixture separate header allocation failed");
        require(f.memory.allocate(0x80u, 16u, Fixture::Text) == Fixture::Text,
                "fixture separate payload allocation failed");
        f.fill(Fixture::Header, 0x30u, 0xCCu);
        f.fill(Fixture::Text, 0x80u, 0xCCu);
        f.prepare();
        require(f.memory.ownsRamRange(Fixture::Header, 0xB0u), "adjacent fixture did not own every byte");
        f.expectUnhandled();
    }
}

int main()
{
    const Test tests[] = {
        {"Selected ELF types and FileInfo fields without invented generic validation", acceptedProbeFields},
        {"ELF rejection modifies only FileInfo type", rejectedProbePreservesOtherWords},
        {"Probe bounds, aliases, alignment and unsupported COFF preserve RAM", probeOwnershipAndCoff},
        {"Format rejection needs only ownership of the type word", rejectionNeedsOnlyTypeOwnership},
        {"Relocatable copy, BSS, unconditional GP and exact ModuleInfo stores", relocatableCopyBssAndHeader},
        {"Fixed ELF preserves FileInfo and requires the selected destination", fixedImageLeavesFileInfo},
        {"Relocated IopModuleID0/offset supplies name and version to distinct ModuleInfo", moduleIdRecordIsNotModuleInfo},
        {"Selected32/26/HI/LO/16 relocations ignore symbols and preserve known no-ops", selectedRelocationsAndIgnoredSymbols},
        {"HI reads the next record offset without generic symbol/type matching", hiUsesNextOffsetRegardlessOfSymbolAndType},
        {"Type250 follows signed chains and consumes its addend record", chainedRelocationConsumesAddend},
        {"Section40-byte and relocation8-byte strides follow selected original", sectionAndRecordStrides},
        {"Word copy/zero tails are preserved and misaligned BSS is unhandled", wordTailsAndUnalignedBss},
        {"Overlapping images copy forward with staged reads", forwardOverlapIsNotMemmove},
        {"Physical/KSEG0/KSEG1 aliases preserve architectural address values", supportedDirectAliases},
        {"Unknown FileInfo types reject without image/header access", invalidTypeDoesNotAccessImageOrHeader},
        {"Unowned, overflowing, unsupported and misaligned ranges rollback", unownedAndUnsupportedRangesRollback},
        {"Unknown/dangling relocations, zero stride and cyclic chains rollback", badRelocationsRollbackAllEarlierWrites},
        {"Adjacent independent allocations cannot be combined as module ownership", adjacentAllocationsDoNotConstituteModuleOwnership},
    };
    return run(tests);
}
