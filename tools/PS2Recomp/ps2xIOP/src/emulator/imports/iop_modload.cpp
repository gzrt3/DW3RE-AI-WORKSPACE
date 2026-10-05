#include "iop_modload.h"
#include "../core/iop_memory.h"

#include <initializer_list>

namespace ps2x::iop::detail
{
    std::optional<uint32_t> modload16IllegalBootDevice(const IopMemory &memory, uint32_t address)
    {
        // Limit HLE reads to owned direct RAM and its two aliases. Do not turn
        // invalid pointers, MMIO or wrapped addresses into a successful check.
        const auto read = [&memory](uint32_t at) -> std::optional<uint32_t>
        {
            const bool direct = at < IopMemory::RamSize;
            const bool cached = at >= 0x80000000u && at < 0x80200000u;
            const bool uncached = at >= 0xA0000000u && at < 0xA0200000u;
            if (at == 0u || (!direct && !cached && !uncached) || !memory.ownsRamRange(at, 1u))
                return std::nullopt;
            const uint32_t byte = memory.read8(at);
            return byte < 0x80u ? byte : byte | 0xFFFFFF00u; // Original LB, not LBU.
        };
        std::optional<uint32_t> first;
        do
        {
            first = read(address++); // BEQ's increment delay slot also runs on exit.
            if (!first) return std::nullopt;
        } while (*first == 0x20u);

        uint32_t prefix = *first;
        for (uint32_t n = 0u; n < 3u; ++n)
        {
            const auto byte = read(address);
            if (!byte) return std::nullopt;
            prefix = (prefix << 8u) | *byte;
            if (n != 2u) ++address;
        }
        prefix ^= 0x72E7C42Fu;
        if ((prefix >> 8u) != 0x88A9u) // rom: fourth byte is the device character.
        {
            ++address;
            if (prefix == 0x1183B640u) // cdro + m
            {
                const auto byte = read(address++);
                if (!byte) return std::nullopt;
                if (*byte != 'm') return 1u;
            }
            else if (prefix == 0x1393A246u) // atfi + le
            {
                for (const uint32_t expected : {uint32_t{'l'}, uint32_t{'e'}})
                {
                    const auto byte = read(address++);
                    if (!byte) return std::nullopt;
                    if (*byte != expected) return 1u;
                }
            }
            else if (prefix != 0x1A88B75Bu) // host
                return 1u;
        }
        const auto device = read(address);
        if (!device) return std::nullopt;
        // Original SLTIU after ADDIU -48 accepts '0'..'9' and ':'. It is a
        // prefix check, not a complete path grammar or an existence check.
        return ((*device - 48u) < 11u ? 1u : 0u) ^ 1u;
    }
}
