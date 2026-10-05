#include "iop_loadcore.h"
#include "iop_loadcore_image.h"
#include "iop_loadcore_state.h"

#include "../core/iop_cpu.h"
#include "iop_imports.h"
#include "../core/iop_memory.h"

namespace ps2x::iop::detail
{
    IopLoadcore::IopLoadcore(IopMemory &memory, IopImportRegistry &imports) noexcept
        : m_memory(memory), m_imports(imports)
    {
    }

    bool IopLoadcore::bindState(uint32_t internalData, uint32_t bootStorage, uint32_t bootLimit)
    {
        if (!queryLoadcore13BootMode(m_memory, 0x100u, bootStorage, bootLimit) ||
            !searchLoadcore13Module(m_memory, internalData, 0u) || !m_imports.bindInternalData(internalData))
            return false;
        m_internalData = internalData;
        m_bootStorage = bootStorage;
        m_bootLimit = bootLimit;
        return true;
    }

    void IopLoadcore::reset() noexcept
    {
        m_internalData = m_bootStorage = m_bootLimit = 0u;
    }

    bool IopLoadcore::dispatchImport(uint16_t ordinal, IopCpuState &cpu, uint16_t version)
    {
        const uint32_t a0 = cpu.gpr[4];
        const auto setV0 = [&](uint32_t value)
        {
            cpu.gpr[2] = value;
        };

        switch (ordinal)
        {
        case 22: // Selected LOADCORE1.3 ProbeExecutableObject.
        case 23: // LoadExecutableObject; caller owns image/header allocation.
        {
            if (version != 0x0103u) return false;
            const auto result = ordinal == 22u
                ? probeLoadcore13Elf(m_memory, a0, cpu.gpr[5])
                : loadLoadcore13Elf(m_memory, a0, cpu.gpr[5]);
            if (!result) return false;
            setV0(*result);
            return true;
        }
        case 3:
            if (m_internalData == 0u) return false;
            setV0(m_internalData);
            return true;
        case 8:
        case 9:
        {
            const auto result = ordinal == 8u ? m_imports.linkLibraries(a0, cpu.gpr[5])
                                               : m_imports.unlinkLibraries(a0, cpu.gpr[5]);
            if (!result) return false;
            setV0(static_cast<uint32_t>(*result));
            return true;
        }
        case 12:
        case 13:
        case 16:
        case 17:
        case 24:
        {
            if (m_internalData == 0u || (version != 0x0103u && !(ordinal == 12u && version == 0x0101u))) return false;
            std::optional<uint32_t> result;
            switch (ordinal)
            {
            case 12: result = queryLoadcore13BootMode(m_memory, a0, m_bootStorage, m_bootLimit); break;
            case 13: result = registerLoadcore13BootMode(m_memory, a0, m_bootStorage, m_bootLimit); break;
            case 16: result = registerLoadcore13Module(m_memory, m_internalData, a0); break;
            case 17: result = releaseLoadcore13Module(m_memory, m_internalData, a0, cpu.gpr[2]); break;
            case 24: result = searchLoadcore13Module(m_memory, m_internalData, a0); break;
            }
            if (!result) return false;
            setV0(*result);
            return true;
        }
        case 4:
        case 5:
            setV0(0u);
            return true;
        case 6:
        case 10:
        {
            const auto result = m_imports.registerLibrary(a0, ordinal == 10u);
            if (!result) return false;
            setV0(static_cast<uint32_t>(*result));
            return true;
        }
        case 7:
        {
            const auto result = m_imports.releaseLibrary(a0);
            if (!result) return false;
            setV0(static_cast<uint32_t>(*result));
            return true;
        }
        case 11: // QueryLibraryEntryTable returns the function array, not the export header.
        {
            const uint32_t address = IopMemory::physicalAddress(a0);
            if (a0 == 0u || address > IopMemory::RamSize - 20u)
            {
                setV0(0u);
                return true;
            }
            if (!m_memory.ownsRamRange(a0, 20u)) return false;
            const auto bytes = m_memory.ram().subspan(address + 12u, 8u);
            const std::string_view name(reinterpret_cast<const char *>(bytes.data()), bytes.size());
            const uint32_t table = m_imports.findTable(name, m_memory.read16(address + 8u));
            setV0(table != 0u ? table + 20u : 0u);
            return true;
        }
        case 27: // SetRebootTimeLibraryHandlingMode
            setV0(static_cast<uint32_t>(m_imports.setRebootTimeLibraryHandlingMode(a0, cpu.gpr[5])));
            return true;
        default:
            return false;
        }
    }
}
