#include "iop_ioman.h"
#include "iop_cdvd.h"

#include "../core/iop_cpu.h"
#include "../core/iop_memory.h"
#include "../services/iop_rpc.h"
#include "ps2x/iop/iop_host.h"

#include <algorithm>

namespace ps2x::iop::detail
{
    IopIoman::IopIoman(IopMemory &memory, IopHost &host) noexcept
        : m_memory(memory), m_host(host)
    {
    }

    IopIoman::~IopIoman() { reset(); }

    void IopIoman::reset()
    {
        for (auto &file : m_files)
        {
            if (file.handle != 0u && !file.console) m_host.closeHostFile(file.handle);
            file = {};
        }
        m_devices.clear();
    }

    void IopIoman::installStandardStreams()
    {
        // IOMAN open_tty_handles opens tty00: read/write as fd0,
        // then write-only as fd1. It does not reserve fd2.
        // Native console endpoints have no host file handles to release.
        for (size_t i = 0u; i < 2u; ++i)
            if (m_files[i].handle == 0u) m_files[i] = {UINT64_MAX,0u,true};
    }

    bool IopIoman::dispatchDevctl(uint16_t version, IopCpuState &cpu, IopCdvd &cdvd)
    {
        // Identified IOPRP253 IOMAN1.4 export31 and original FILEIO poweroff
        // thread: devctl("cdrom0:", 0x4391, nullptr, 0, output, 4).
        // Other versions/devices/controls retain the missing-import barrier.
        if (version != 0x0104u || cpu.gpr[5] != 0x4391u) return false;
        const auto invalid = [&]() { cpu.gpr[2] = static_cast<uint32_t>(-22); return true; };
        const uint32_t pathAddress = cpu.gpr[4];
        std::string path;
        if (pathAddress == 0u) return invalid();
        for (uint32_t i = 0u; i < 1024u; ++i)
        {
            if (pathAddress > UINT32_MAX - i || !m_memory.ownsRamRange(pathAddress + i, 1u))
                return invalid();
            const char value = static_cast<char>(m_memory.read8(pathAddress + i));
            if (value == '\0') break;
            path.push_back(value);
        }
        if (path.empty() || path.size() == 1024u) return invalid();
        if (path != "cdrom0:") return false;
        const uint32_t sp = cpu.gpr[29];
        if (cpu.gpr[6] != 0u || cpu.gpr[7] != 0u || sp > UINT32_MAX - 0x18u ||
            !m_memory.ownsRamRange(sp + 0x10u, 8u)) return invalid();
        const uint32_t output = m_memory.read32(sp + 0x10u);
        const uint32_t outputSize = m_memory.read32(sp + 0x14u);
        if (output == 0u || outputSize < 4u || !m_memory.ownsRamRange(output, outputSize))
            return invalid();
        if (std::none_of(m_files.begin(), m_files.end(), [](const OpenFile &file) { return file.handle == 0u; }))
        {
            cpu.gpr[2] = static_cast<uint32_t>(-24); // Original temporary file-slot exhaustion.
            return true;
        }
        // Original CDVDMAN4391 calls sceCdSC(-11). Forward to that same owner;
        // neither allocate an unrelated event nor signal the poweroff bit0x10.
        IopCpuState control{};
        control.gpr[4] = static_cast<uint32_t>(-11);
        if (!cdvd.dispatchImport(50u, control)) return false;
        if (static_cast<int32_t>(control.gpr[2]) <= 0)
        {
            cpu.gpr[2] = static_cast<uint32_t>(-12);
            return true;
        }
        m_memory.write32(output, control.gpr[2]);
        cpu.gpr[2] = 0u;
        m_host.log(LogLevel::Info, "[IOMAN] devctl0x4391 shared CDVD event=" + std::to_string(control.gpr[2]));
        return true;
    }

    bool IopIoman::dispatchImport(uint16_t ordinal, IopCpuState &cpu, IopGuestExecutor &executor)
    {
        constexpr size_t kMaxDevices = 16u;
        const uint32_t a0 = cpu.gpr[4];
        const auto setV0 = [&](uint32_t value)
        {
            cpu.gpr[2] = value;
        };

        switch (ordinal)
        {
        case 6: // io_read from native stdin: no buffered input, EOF.
            if (a0 < m_files.size() && m_files[a0].console && a0 == 0u)
            { setV0(0u); return true; }
            return false;
        case 7: // io_write to native tty read/write fd0 or write-only fd1.
        {
            if (a0 >= m_files.size() || !m_files[a0].console)
            { setV0(static_cast<uint32_t>(-9)); return true; }
            const uint32_t buffer = cpu.gpr[5], size = cpu.gpr[6];
            if (!m_memory.ownsRamRange(buffer,size))
            { setV0(static_cast<uint32_t>(-22)); return true; }
            std::string bytes(size,'\0');
            if (!m_memory.readRam(buffer,bytes.data(),size))
            { setV0(static_cast<uint32_t>(-22)); return true; }
            if (!bytes.empty()) m_host.log(LogLevel::Info,bytes);
            setV0(size);
            return true;
        }
        case 4: // io_open: read-only native files; unavailable devices fail.
        {
            std::string path;
            for (uint32_t i = 0; i < 1024u; ++i)
            {
                if (a0 > UINT32_MAX - i || !m_memory.ownsRamRange(a0 + i, 1u))
                { setV0(static_cast<uint32_t>(-22)); return true; }
                const char value = static_cast<char>(m_memory.read8(a0 + i));
                if (value == '\0') break;
                path.push_back(value);
            }
            if (path.empty() || path.size() == 1024u)
            { setV0(static_cast<uint32_t>(-22)); return true; }
            // Writing and creation are deliberately unsupported by this reader.
            if (cpu.gpr[5] != 1u)
            { setV0(static_cast<uint32_t>(-13)); return true; }
            const auto slot = std::find_if(m_files.begin(), m_files.end(),
                                          [](const OpenFile &file) { return file.handle == 0u; });
            if (slot == m_files.end())
            { setV0(static_cast<uint32_t>(-24)); return true; }
            const std::string translated = m_host.translateGuestPath(path);
            if (translated.empty())
            { setV0(static_cast<uint32_t>(-19)); return true; }
            const uint64_t handle = m_host.openHostFile(translated);
            if (handle == 0u)
            { setV0(static_cast<uint32_t>(-2)); return true; }
            *slot = {handle, 0u};
            setV0(static_cast<uint32_t>(slot - m_files.begin()));
            return true;
        }
        case 5: // io_close
        case 8: // io_lseek
        {
            if (a0 >= m_files.size() || m_files[a0].handle == 0u)
            { setV0(static_cast<uint32_t>(-9)); return true; }
            auto &file = m_files[a0];
            if (ordinal == 5u)
            {
                if (!file.console) m_host.closeHostFile(file.handle);
                file = {};
                setV0(0u);
                return true;
            }
            if (file.console) { setV0(static_cast<uint32_t>(-29)); return true; }
            const uint32_t whence = cpu.gpr[6];
            if (whence > 2u)
            { setV0(static_cast<uint32_t>(-22)); return true; }
            uint64_t base = whence == 1u ? file.offset : 0u;
            if (whence == 2u && !m_host.hostFileSize(file.handle, base))
            { setV0(static_cast<uint32_t>(-5)); return true; }
            if (base > INT32_MAX)
            { setV0(static_cast<uint32_t>(-22)); return true; }
            const int64_t next = static_cast<int64_t>(base) + static_cast<int32_t>(cpu.gpr[5]);
            if (next < 0 || next > INT32_MAX)
            { setV0(static_cast<uint32_t>(-22)); return true; }
            file.offset = static_cast<uint64_t>(next);
            setV0(static_cast<uint32_t>(next));
            return true;
        }
        case 20: // AddDrv
        {
            if (a0 == 0u || m_devices.size() >= kMaxDevices)
            {
                setV0(0xFFFFFFFFu);
                return true;
            }

            const uint32_t nameAddress = m_memory.read32(a0);
            const uint32_t operations = m_memory.read32(a0 + 16u);
            const std::string name = m_memory.readString(nameAddress, 64u);
            if (nameAddress == 0u || operations == 0u || name.empty())
            {
                setV0(0xFFFFFFFFu);
                return true;
            }

            m_devices.push_back({a0, cpu.gpr[28], name});
            const uint32_t init = m_memory.read32(operations);
            if (init != 0u)
            {
                const int32_t result = static_cast<int32_t>(
                    executor.executeGuestFunction(init, a0, 0u, 0u, 0u, cpu.gpr[28]));
                if (result < 0)
                {
                    m_devices.pop_back();
                    setV0(0xFFFFFFFFu);
                    return true;
                }
            }

            setV0(0u);
            return true;
        }
        case 21: // DelDrv
        {
            const std::string name = m_memory.readString(a0, 64u);
            const auto device = std::find_if(
                m_devices.begin(), m_devices.end(),
                [&](const Device &candidate)
                { return candidate.name == name; });
            if (device == m_devices.end())
            {
                setV0(0xFFFFFFFFu);
                return true;
            }

            const uint32_t operations = m_memory.read32(device->address + 16u);
            const uint32_t deinit = operations != 0u ? m_memory.read32(operations + 4u) : 0u;
            if (deinit != 0u)
                (void)executor.executeGuestFunction(deinit, device->address, 0u, 0u, 0u, device->gp);
            m_devices.erase(device);
            setV0(0u);
            return true;
        }
        default:
            return false;
        }
    }
}
