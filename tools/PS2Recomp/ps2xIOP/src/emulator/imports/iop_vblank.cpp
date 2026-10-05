#include "iop_vblank.h"

#include "../core/iop_cpu.h"
#include "../iop_emulator_const.h"
#include "../core/iop_kernel.h"
#include "../core/iop_memory.h"
#include "../services/iop_rpc.h"
#include "iop_intrman.h"
#include <algorithm>

namespace ps2x::iop::detail
{
    IopVblank::IopVblank(IopKernel &kernel) noexcept
        : m_kernel(kernel)
    {
        reset();
    }

    void IopVblank::reset() noexcept
    {
        m_nextStart = kVblankPeriodCycles;
        m_nextEnd = kVblankEndPhaseCycles;
        m_servicing = false;
    }

    uint64_t IopVblank::nextEventCycle(uint64_t fallback) const noexcept
    {
        return std::min({fallback, m_nextStart, m_nextEnd});
    }

    void IopVblank::serviceDue(uint64_t currentCycle, IopMemory& memory,
        IopIntrman& intrman, IopGuestExecutor& executor)
    {
        if (m_servicing) return;
        m_servicing = true;
        struct Guard { bool& flag; ~Guard() { flag = false; } } guard{m_servicing};
        const auto deliver = [&] {
            for (const int irq : {0, 11}) {
                const uint32_t bit = 1u << irq;
                if ((memory.interruptStatus() & bit) == 0 || executor.inInterruptContext() ||
                    !intrman.canDispatch(irq)) continue;
                // INTC latches each phase while masked. Acknowledge only on delivery.
                memory.setInterruptStatus(memory.interruptStatus() & ~bit);
                (void)intrman.dispatchInterrupt(irq, executor);
            }
        };
        deliver();
        while (std::min(m_nextStart, m_nextEnd) <= currentCycle) {
            const bool start = m_nextStart <= m_nextEnd;
            auto& next = start ? m_nextStart : m_nextEnd;
            next += kVblankPeriodCycles;
            memory.setInterruptStatus(memory.interruptStatus() | (1u << (start ? 0 : 11)));
            deliver();
        }
    }

    bool IopVblank::dispatchImport(uint16_t ordinal, IopCpuState &cpu, uint64_t currentCycle)
    {
        switch (ordinal)
        {
        case 4: // WaitVblankStart
        case 5: // WaitVblankEnd
        case 6: // WaitVblank
        case 7: // WaitNonVblank
        {
            const bool waitForEnd = ordinal == 5u || ordinal == 7u;
            const uint64_t phase = waitForEnd ? kVblankEndPhaseCycles : 0u;
            const uint64_t fieldStart = currentCycle - (currentCycle % kVblankPeriodCycles);
            uint64_t wakeCycle = fieldStart + phase;
            if (wakeCycle <= currentCycle)
                wakeCycle += kVblankPeriodCycles;
            m_kernel.delayCurrentUntil(wakeCycle, cpu);
            cpu.gpr[2] = 0u;
            return true;
        }
        case 8: // RegisterVblankHandler
        case 9: // ReleaseVblankHandler
            return false;
        default:
            return false;
        }
    }
}
