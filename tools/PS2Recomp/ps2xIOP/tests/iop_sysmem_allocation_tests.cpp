#include "iop_compat_test_support.h"
#include "emulator/core/iop_cpu.h"
#include "emulator/core/iop_memory.h"
#include "emulator/imports/iop_sysmem.h"

#include <limits>

namespace
{
    using namespace iop_test;
    using namespace ps2x::iop::detail;
    constexpr uint32_t Base = IopMemory::HeapBase;
    constexpr uint32_t Limit = IopMemory::HeapLimit;
    constexpr uint32_t Capacity = Limit - Base;

    // Original SYSMEM1.1 SHA256:
    // 1b03e6ffd2042c2545cf1a78ab937b6b57ccda037783e7ad52467bb9f5556054.
    // Export4@2ec, placement@470/524/604, Free@86c, queries@230/294/3a4/40c.
    // These are bounded host contracts, not a retail heap-map or timing replay.
    struct Fixture
    {
        Host host;
        IopMemory memory;
        IopSysmem sysmem{host, memory};

        uint32_t call(uint16_t ordinal, uint32_t a0 = 0u, uint32_t a1 = 0u, uint32_t a2 = 0u)
        {
            IopCpuState cpu;
            cpu.gpr[4] = a0; cpu.gpr[5] = a1; cpu.gpr[6] = a2;
            cpu.gpr[16] = 0x12345678u;
            require(sysmem.dispatchImport(ordinal, cpu), "SYSMEM import rejected");
            require(cpu.gpr[4] == a0 && cpu.gpr[5] == a1 && cpu.gpr[6] == a2 &&
                    cpu.gpr[16] == 0x12345678u, "SYSMEM changed caller registers");
            return cpu.gpr[2];
        }
    };

    void lowHighAndRounding()
    {
        Fixture f;
        const uint32_t low = f.call(4u, 0u, 1u);
        const uint32_t high = f.call(4u, 1u, 257u);
        require(low == Base && high == Limit - 512u, "low/high placement mismatch");
        require(f.call(10u, low) == 256u && f.call(10u, high + 511u) == 512u,
                "guest allocation page rounding mismatch");
        require(f.call(9u, high + 127u) == high, "allocated block base mismatch");
        require(f.memory.ownsRamRange(low, 256u) && f.memory.ownsRamRange(high, 512u),
                "rounded allocation did not own complete pages");
        require(f.call(4u, 0u, 256u) == Base + 256u, "low placement skipped usable page");
    }

    void fixedPlacementAndBounds()
    {
        Fixture f;
        const uint32_t fixed = Base + 0x800u;
        require(f.call(4u, 2u, 257u, fixed) == fixed, "fixed placement failed");
        const uint32_t before = f.call(8u);
        for (const uint32_t address : {fixed + 1u, fixed + 0x100u, Base - 0x100u,
                                       Limit, 0xFFFFFF00u, 0x80000000u | fixed})
            require(f.call(4u, 2u, 256u, address) == 0u, "invalid/overlapping fixed allocation accepted");
        require(f.call(4u, 2u, 512u, Limit - 256u) == 0u, "fixed range crossed heap limit");
        require(f.call(8u) == before, "failed allocations consumed memory");
        require(f.call(4u, 2u, 256u, Limit - 256u) == Limit - 256u,
                "last complete heap page rejected");
    }

    void invalidSizesModesAndExhaustion()
    {
        Fixture f;
        for (const uint32_t size : {0u, Capacity + 1u, 0xFFFFFF01u, 0xFFFFFFFFu})
            require(f.call(4u, 0u, size) == 0u, "invalid/overflow size accepted");
        for (const uint32_t mode : {3u, 0xFFFFFFFFu})
            require(f.call(4u, mode, 256u) == 0u, "unsupported mode treated as low allocation");
        require(f.call(4u, 1u, Capacity) == Base, "whole bounded heap allocation failed");
        for (uint32_t mode = 0u; mode < 3u; ++mode)
            require(f.call(4u, mode, 1u, Base) == 0u, "out-of-space allocation fabricated an address");
        require(f.call(7u) == 0u && f.call(8u) == 0u, "exhausted heap reported free space");
        require(f.call(5u, Base) == 0u && f.call(4u, 0u, Capacity) == Base,
                "freed whole heap was not reusable");
    }

    void coalescingAndPlacementAfterFree()
    {
        Fixture f;
        for (const uint32_t address : {Base, Base + 0x100u, Base + 0x200u})
            require(f.call(4u, 2u, 256u, address) == address, "adjacent fixture allocation failed");
        require(f.call(5u, Base + 0x100u) == 0u && f.call(5u, Base) == 0u,
                "adjacent free failed");
        require(f.call(4u, 0u, 512u) == Base, "adjacent freed pages were not coalesced");
        const uint32_t upper = Limit - 0x200u;
        require(f.call(4u, 2u, 256u, upper) == upper, "high fixture allocation failed");
        require(f.call(4u, 1u, 256u) == Limit - 256u, "high placement did not choose last hole");
        require(f.call(4u, 1u, 512u) == upper - 512u,
                "high placement did not use upper end of preceding hole");
    }

    void exactFreeAndOwnership()
    {
        Fixture f;
        const uint32_t host = f.memory.allocate(16u);
        const uint32_t guest = f.call(4u, 0u, 512u);
        f.memory.write32(guest, 0xCAFEBABEu);
        f.memory.write32(host, 0x1234ABCDu);
        for (const uint32_t address : {host, guest + 1u, guest + 256u, 0x80000000u | guest})
            require(f.call(5u, address) == 0xFFFFFFFFu, "interior/host/alias free succeeded");
        require(f.memory.ownsRamRange(guest, 512u), "failed free revoked guest ownership");
        require(f.call(5u, guest) == 0u, "owned guest allocation could not be freed");
        require(f.call(5u, guest) == 0xFFFFFFFFu, "double free reported success");
        require(!f.memory.ownsRamRange(guest, 1u) && f.memory.read32(guest) == 0xCAFEBABEu,
                "free must revoke ownership without erasing payload");
        require(f.memory.ownsRamRange(host, 16u) && f.memory.read32(host) == 0x1234ABCDu,
                "guest free damaged host allocation");
        require(f.call(4u, 0u, 512u) == guest && f.memory.read32(guest) == 0xCAFEBABEu,
                "reallocation lost retained bytes or ownership");
    }

    void distinctFreeQueriesAndFlags()
    {
        Fixture f;
        for (const uint32_t address : {Base + 0x200u, Base + 0x600u, Limit - 0x300u})
            require(f.call(4u, 2u, 256u, address) == address, "fragmentation fixture failed");
        require(f.call(7u) == Capacity - 0xA00u, "max query did not measure largest free run");
        require(f.call(8u) == Capacity - 0x300u, "total query omitted free holes");
        require(f.call(9u, Base + 0x80u) == (0x80000000u | Base), "free base lacks bit31");
        require(f.call(10u, Base + 0x80u) == 0x80000200u, "free size lacks bit31");
        require(f.call(9u, Base + 0x280u) == Base + 0x200u &&
                f.call(10u, Base + 0x280u) == 0x100u, "allocated query marked block free");
        require(f.call(5u, Base + 0x600u) == 0u, "fragment free failed");
        require(f.call(7u) == Capacity - 0x600u && f.call(8u) == Capacity - 0x200u,
                "free query did not coalesce surrounding holes");
        for (const uint32_t address : {Base - 1u, Limit, 0x80000000u | Base})
            require(f.call(9u, address) == 0xFFFFFFFFu && f.call(10u, address) == 0xFFFFFFFFu,
                    "query fabricated a block outside managed heap");
    }

    void hostPagesAreExcludedOnce()
    {
        Fixture f;
        const uint32_t first = f.memory.allocate(16u);
        const uint32_t crossing = f.memory.allocate(32u, 16u, Base + 0xF0u);
        require(first == Base && crossing == Base + 0xF0u, "host fixture placement changed");
        require(f.call(8u) == Capacity - 512u, "overlapping host page coverage double counted");
        require(f.call(4u, 2u, 256u, Base + 0x100u) == 0u, "guest occupied host's partial page");
        require(f.call(4u, 0u, 1u) == Base + 0x200u, "low guest allocation overlapped host page");
        require(f.memory.freeAllocation(first) && f.memory.freeAllocation(crossing), "host release failed");
        require(f.call(4u, 0u, 512u) == Base, "released host pages were not reusable by guest");
    }

    void adjacentAllocationQueriesStayDistinct()
    {
        Fixture f;
        require(f.call(4u, 0u, 256u) == Base && f.call(4u, 0u, 512u) == Base + 256u,
                "adjacent allocation fixture failed");
        require(f.call(9u, Base + 255u) == Base && f.call(10u, Base + 255u) == 256u,
                "first block merged into neighbor");
        require(f.call(9u, Base + 256u) == Base + 256u && f.call(10u, Base + 256u) == 512u,
                "second block boundary lost");
    }

    void hostContractsAndOverflow()
    {
        IopMemory memory;
        require(memory.allocate(0u) == Base, "host zero-byte allocation contract changed");
        require(memory.allocate(33u) == Base + 16u, "host16-byte size rounding changed");
        require(memory.allocate(1u, 64u) == Base + 64u, "host alignment changed");
        for (const uint32_t size : {Capacity + 1u, std::numeric_limits<uint32_t>::max()})
            require(memory.allocate(size) == 0u, "host size overflow accepted");
        require(memory.allocate(16u, 6u) == 0u, "non-power-of-two alignment accepted");
        require(memory.allocate(16u, 16u, 0xFFFFFFF0u) == 0u, "wrapped fixed host range accepted");
        require(memory.allocate(16u, 16u, Base + 1u) == 0u, "misaligned fixed host address accepted");
    }

    void hostCanReuseExhaustedHighWater()
    {
        IopMemory memory;
        require(memory.allocate(16u) == Base, "host reuse fixture first allocation failed");
        require(memory.allocate(Capacity - 16u) == Base + 16u, "host reuse fixture fill failed");
        require(memory.freeAllocation(Base), "host reuse fixture free failed");
        require(memory.maxFreeMemory() == 16u && memory.allocate(16u) == Base,
                "host allocator leaked freed hole after high-water exhaustion");
    }

    void statefulBitmapOracle()
    {
        constexpr uint32_t Pages = Capacity / 256u;
        struct Live { uint32_t page, pages, owner; };
        for (const uint32_t seed : {0x8C72D591u, 0x12345678u})
        {
            Fixture f;
            std::array<uint32_t, Pages> bitmap{};
            std::vector<Live> live;
            uint32_t rng = seed, nextOwner = 1u;
            const auto random = [&]()
            {
                rng ^= rng << 13u; rng ^= rng >> 17u; rng ^= rng << 5u;
                return rng;
            };
            // Three unavailable pages cover two host objects, including a
            // partial-page crossing. The oracle never inspects runtime maps.
            constexpr uint32_t HostPage = 0xFFFFFFFFu;
            require(f.memory.allocate(16u, 16u, Base) == Base, "bitmap host fixture failed");
            require(f.memory.allocate(32u, 16u, Base + 0x5F0u) == Base + 0x5F0u,
                    "bitmap crossing host fixture failed");
            bitmap[0] = bitmap[5] = bitmap[6] = HostPage;
            std::array<uint32_t, 3> successfulModes{};
            uint32_t freed = 0u;
            for (uint32_t step = 0u; step < 5000u; ++step)
            {
                const auto check = [&](bool valid, const char *message)
                {
                    if (!valid) throw std::runtime_error(std::string(message) + " seed=" +
                        std::to_string(seed) + " step=" + std::to_string(step));
                };
                if (random() % 100u < 62u || live.empty())
                {
                    uint32_t mode = random() % 3u;
                    uint32_t size = (1u + random() % 48u) * 256u - random() % 256u;
                    uint32_t fixed = Base + (random() % Pages) * 256u;
                    switch (random() % 23u)
                    {
                    case 0u: size = 0u; break;
                    case 1u: size = 0xFFFFFFFFu; break;
                    case 2u: mode = 3u; break;
                    case 3u: fixed += 1u; break;
                    case 4u: fixed = Limit; break;
                    default: break;
                    }
                    uint32_t expected = 0u;
                    const uint32_t requested = size <= Capacity ? (size + 255u) / 256u : 0u;
                    if (mode < 3u && requested != 0u)
                    {
                        if (mode == 2u)
                        {
                            if (fixed >= Base && fixed < Limit && (fixed % 256u) == 0u)
                            {
                                const uint32_t first = (fixed - Base) / 256u;
                                bool vacant = requested <= Pages - first;
                                for (uint32_t n = 0u; vacant && n < requested; ++n)
                                    vacant = bitmap[first + n] == 0u;
                                if (vacant) expected = fixed;
                            }
                        }
                        else
                        {
                            // Scan individual pages in placement order. This is
                            // independent of the production sorted-gap builder.
                            uint32_t consecutive = 0u;
                            for (uint32_t n = 0u; n < Pages; ++n)
                            {
                                const uint32_t page = mode == 0u ? n : Pages - 1u - n;
                                consecutive = bitmap[page] == 0u ? consecutive + 1u : 0u;
                                if (consecutive == requested)
                                {
                                    const uint32_t first = mode == 0u ? page + 1u - requested : page;
                                    expected = Base + first * 256u;
                                    break;
                                }
                            }
                        }
                    }
                    const uint32_t actual = f.call(4u, mode, size, fixed);
                    check(actual == expected, "bitmap placement mismatch");
                    if (actual != 0u)
                    {
                        const uint32_t first = (actual - Base) / 256u;
                        for (uint32_t n = 0u; n < requested; ++n)
                        {
                            check(bitmap[first + n] == 0u, "live allocation overlap");
                            bitmap[first + n] = nextOwner;
                        }
                        live.push_back({first, requested, nextOwner++});
                        ++successfulModes[mode];
                    }
                }
                else
                {
                    const size_t index = static_cast<size_t>(random()) % live.size();
                    const Live victim = live[index];
                    const uint32_t address = Base + victim.page * 256u;
                    if (random() % 4u == 0u)
                    {
                        check(f.call(5u, address + 1u) == 0xFFFFFFFFu, "misaligned stateful free accepted");
                        check(f.call(5u, Base) == 0xFFFFFFFFu, "stateful free released host object");
                    }
                    else
                    {
                        check(f.call(5u, address) == 0u, "live stateful free failed");
                        check(f.call(5u, address) == 0xFFFFFFFFu, "stateful double free accepted");
                        for (uint32_t n = 0u; n < victim.pages; ++n) bitmap[victim.page + n] = 0u;
                        live.erase(live.begin() + static_cast<std::vector<Live>::difference_type>(index));
                        ++freed;
                    }
                }

                uint32_t total = 0u, maximum = 0u, consecutive = 0u;
                for (const uint32_t owner : bitmap)
                {
                    if (owner == 0u) { ++total; ++consecutive; maximum = std::max(maximum, consecutive); }
                    else consecutive = 0u;
                }
                check(f.call(7u) == maximum * 256u, "bitmap max/coalescing mismatch");
                check(f.call(8u) == total * 256u, "bitmap total free mismatch");
                std::array<uint32_t, Pages> seen{};
                for (const auto &allocation : live)
                {
                    const uint32_t address = Base + allocation.page * 256u;
                    const auto actual = f.memory.allocationContaining(address);
                    check(actual && actual->address == address && actual->size == allocation.pages * 256u &&
                          actual->sysmem, "stateful live allocation lost identity");
                    check(f.memory.ownsRamRange(address, 1u) &&
                          f.memory.ownsRamRange(address + allocation.pages * 256u - 1u, 1u),
                          "stateful live boundary lost memory ownership");
                    for (uint32_t n = 0u; n < allocation.pages; ++n)
                    {
                        const uint32_t page = allocation.page + n;
                        check(seen[page] == 0u && bitmap[page] == allocation.owner,
                              "stateful live records overlap or differ from bitmap");
                        seen[page] = allocation.owner;
                    }
                }
                const uint32_t page = random() % Pages;
                if (bitmap[page] == 0u)
                {
                    uint32_t first = page, end = page + 1u;
                    while (first != 0u && bitmap[first - 1u] == 0u) --first;
                    while (end < Pages && bitmap[end] == 0u) ++end;
                    check(f.call(9u, Base + page * 256u + 173u) ==
                          (0x80000000u | (Base + first * 256u)), "stateful free block base mismatch");
                    check(f.call(10u, Base + page * 256u + 173u) ==
                          (0x80000000u | ((end - first) * 256u)), "stateful free block size mismatch");
                }
                else if (bitmap[page] != HostPage)
                {
                    const auto owner = std::find_if(live.begin(), live.end(),
                        [&](const Live &block) { return block.owner == bitmap[page]; });
                    check(owner != live.end(), "bitmap references missing owner");
                    check(f.call(9u, Base + page * 256u + 173u) == Base + owner->page * 256u &&
                          f.call(10u, Base + page * 256u + 173u) == owner->pages * 256u,
                          "stateful allocated block query mismatch");
                }
            }
            require(freed > 500u && successfulModes[0] > 100u && successfulModes[1] > 100u &&
                    successfulModes[2] > 20u, "stateful run did not exercise all placement/free modes");
            while (!live.empty())
            {
                const size_t index = static_cast<size_t>(random()) % live.size();
                require(f.call(5u, Base + live[index].page * 256u) == 0u, "stateful drain free failed");
                live.erase(live.begin() + static_cast<std::vector<Live>::difference_type>(index));
            }
            require(f.call(8u) == Capacity - 3u * 256u && f.call(7u) == Capacity - 7u * 256u,
                    "stateful drain did not coalesce all guest holes");
            require(f.memory.freeAllocation(Base) && f.memory.freeAllocation(Base + 0x5F0u),
                    "stateful host drain failed");
            require(f.call(7u) == Capacity && f.call(8u) == Capacity, "stateful final heap leaked pages");
        }
    }

    void resetClearsAllocationOwnership()
    {
        Fixture f;
        const uint32_t old = f.call(4u, 1u, 256u);
        f.memory.reset();
        require(f.call(5u, old) == 0xFFFFFFFFu && !f.memory.ownsRamRange(old, 1u),
                "reset retained allocation ownership");
        require(f.call(7u) == Capacity && f.call(8u) == Capacity && f.call(4u, 0u, 1u) == Base,
                "reset did not restore bounded heap map");
    }
}

int main()
{
    const std::pair<const char *, void (*)()> tests[] = {
        {"low/high placement and page rounding", lowHighAndRounding},
        {"fixed placement and bounds", fixedPlacementAndBounds},
        {"invalid sizes/modes and exhaustion", invalidSizesModesAndExhaustion},
        {"coalescing and placement after free", coalescingAndPlacementAfterFree},
        {"exact free and allocation ownership", exactFreeAndOwnership},
        {"distinct free queries and flags", distinctFreeQueriesAndFlags},
        {"host page exclusion", hostPagesAreExcludedOnce},
        {"adjacent allocation query boundaries", adjacentAllocationQueriesStayDistinct},
        {"host contracts and overflow", hostContractsAndOverflow},
        {"host freed-hole reuse", hostCanReuseExhaustedHighWater},
        {"stateful page bitmap oracle (10000 operations)", statefulBitmapOracle},
        {"reset allocation ownership", resetClearsAllocationOwnership},
    };
    unsigned failures = 0u;
    for (const auto &[name, test] : tests)
    {
        try { test(); std::cout << "PASS " << name << '\n'; }
        catch (const std::exception &error)
        { ++failures; std::cerr << "FAIL " << name << ": " << error.what() << '\n'; }
    }
    return failures == 0u ? 0 : 1;
}
