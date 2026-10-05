#pragma once

#include <cstdint>

namespace ps2x::iop::detail
{
    struct IopCpuState;
    class IopImportRegistry;
    class IopMemory;

    class IopLoadcore
    {
    public:
        IopLoadcore(IopMemory &memory, IopImportRegistry &imports) noexcept;

        [[nodiscard]] bool bindState(uint32_t internalData, uint32_t bootStorage, uint32_t bootLimit);
        void reset() noexcept;

        [[nodiscard]] bool dispatchImport(uint16_t ordinal, IopCpuState &cpu, uint16_t version = 0u);

    private:
        IopMemory &m_memory;
        IopImportRegistry &m_imports;
        uint32_t m_internalData = 0u;
        uint32_t m_bootStorage = 0u;
        uint32_t m_bootLimit = 0u;
    };
}
