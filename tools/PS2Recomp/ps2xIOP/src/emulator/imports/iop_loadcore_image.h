#pragma once

#include <cstdint>
#include <optional>

namespace ps2x::iop::detail
{
    class IopMemory;

    // Selected original LOADCORE1.3 exports22/23. A value is the guest return;
    // nullopt means unsupported format/relocation or unsafe owned-memory access.
    // Unhandled operations do not modify RAM. The loader neither allocates nor
    // links/registers/starts modules; MODLOAD already owns a single allocation
    // containing the header and the complete loaded image/BSS destination.
    [[nodiscard]] std::optional<uint32_t> probeLoadcore13Elf(
        IopMemory &memory, uint32_t imageAddress, uint32_t fileInfoAddress);
    [[nodiscard]] std::optional<uint32_t> loadLoadcore13Elf(
        IopMemory &memory, uint32_t imageAddress, uint32_t fileInfoAddress);
}
