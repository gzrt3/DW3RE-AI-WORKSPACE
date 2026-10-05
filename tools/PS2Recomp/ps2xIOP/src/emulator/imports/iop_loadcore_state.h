#pragma once

#include <cstdint>
#include <optional>

namespace ps2x::iop::detail
{
    class IopMemory;

    [[nodiscard]] std::optional<uint32_t> queryLoadcore13BootMode(
        const IopMemory &memory, uint32_t mode, uint32_t storage, uint32_t terminatorLimit);
    [[nodiscard]] std::optional<uint32_t> registerLoadcore13BootMode(
        IopMemory &memory, uint32_t record, uint32_t storage, uint32_t terminatorLimit);
    [[nodiscard]] std::optional<uint32_t> registerLoadcore13Module(
        IopMemory &memory, uint32_t internalData, uint32_t module);
    [[nodiscard]] std::optional<uint32_t> releaseLoadcore13Module(
        IopMemory &memory, uint32_t internalData, uint32_t module, uint32_t incomingV0);
    [[nodiscard]] std::optional<uint32_t> searchLoadcore13Module(
        const IopMemory &memory, uint32_t internalData, uint32_t address);
}
