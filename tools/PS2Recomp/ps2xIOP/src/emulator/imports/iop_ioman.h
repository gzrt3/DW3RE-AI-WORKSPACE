#pragma once

#include <cstdint>
#include <array>
#include <string>
#include <vector>

namespace ps2x::iop { class IopHost; }
namespace ps2x::iop::detail
{
    struct IopCpuState;
    class IopGuestExecutor;
    class IopMemory;
    class IopCdvd;

    class IopIoman
    {
    public:
        explicit IopIoman(IopMemory &memory, IopHost &host) noexcept;
        ~IopIoman();

        void reset();
        void installStandardStreams();
        [[nodiscard]] bool dispatchImport(uint16_t ordinal, IopCpuState &cpu, IopGuestExecutor &executor);
        [[nodiscard]] bool dispatchDevctl(uint16_t version, IopCpuState &cpu, IopCdvd &cdvd);

    private:
        struct Device
        {
            uint32_t address = 0u;
            uint32_t gp = 0u;
            std::string name;
        };

        IopMemory &m_memory;
        IopHost &m_host;
        struct OpenFile { uint64_t handle = 0u; uint64_t offset = 0u; bool console = false; };
        std::array<OpenFile, 16> m_files{};
        std::vector<Device> m_devices;
    };
}
