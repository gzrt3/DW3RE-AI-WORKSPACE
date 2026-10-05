#pragma once

#include <cstdint>

namespace ps2x::iop::detail
{
    struct IopCpuState;
    class IopKernel;
    class IopMemory;
    class IopIntrman;
    class IopGuestExecutor;

    class IopVblank
    {
    public:
        explicit IopVblank(IopKernel &kernel) noexcept;
        void reset() noexcept;
        void serviceDue(uint64_t currentCycle, IopMemory& memory, IopIntrman& intrman, IopGuestExecutor& executor);
        [[nodiscard]] uint64_t nextEventCycle(uint64_t fallback) const noexcept;

        [[nodiscard]] bool dispatchImport(uint16_t ordinal, IopCpuState &cpu, uint64_t currentCycle);

    private:
        IopKernel &m_kernel;
        uint64_t m_nextStart = 0, m_nextEnd = 0;
        bool m_servicing = false;
    };
}
