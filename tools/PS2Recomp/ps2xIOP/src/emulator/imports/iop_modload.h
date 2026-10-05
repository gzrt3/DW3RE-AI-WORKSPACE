#pragma once

#include <cstdint>
#include <optional>

namespace ps2x::iop::detail
{
    class IopMemory;

    // Selected MODLOAD 1.6 export 15, original interval 0x1700..0x17DC.
    // nullopt denotes an unsupported memory access, not an original return.
    [[nodiscard]] std::optional<uint32_t> modload16IllegalBootDevice(
        const IopMemory &memory, uint32_t address);
}
