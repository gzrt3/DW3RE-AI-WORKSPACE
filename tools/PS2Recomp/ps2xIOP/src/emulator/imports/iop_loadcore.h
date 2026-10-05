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

        [[nodiscard]] bool dispatchImport(uint16_t ordinal, IopCpuState &cpu, uint16_t version = 0u);

    private:
        IopMemory &m_memory;
        IopImportRegistry &m_imports;
    };
}
