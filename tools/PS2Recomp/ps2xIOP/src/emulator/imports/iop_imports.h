#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <map>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace ps2x::iop::detail
{
    class IopMemory;

    struct IopImportCall
    {
        std::string library;
        uint16_t ordinal = 0;
        uint16_t version = 0;
        uint32_t tableAddress = 0;
        uint32_t providerAddress = 0;
        uint32_t targetAddress = 0;
        uint32_t delayInstruction = 0;
        bool linked = false;
        std::array<uint8_t, 8> exactName{};
    };

    class IopImportRegistry
    {
    public:
        explicit IopImportRegistry(IopMemory &memory) noexcept;

        void reset();
        // The caller owns/initializes this selected LOADCORE1.3 block. Binding
        // adopts its existing lists; it does not manufacture bootstrap records.
        [[nodiscard]] bool bindInternalData(uint32_t address);
        [[nodiscard]] uint32_t internalDataAddress() const noexcept { return m_internalData; }
        // nullopt rejects unowned, cyclic or unverified inputs without writes;
        // contained values retain selected original success/error semantics.
        [[nodiscard]] std::optional<int32_t> registerLibrary(uint32_t address, bool nonAuto = false);
        [[nodiscard]] std::optional<int32_t> releaseLibrary(uint32_t address);
        [[nodiscard]] std::optional<int32_t> linkLibraries(uint32_t base, uint32_t size);
        [[nodiscard]] std::optional<int32_t> unlinkLibraries(uint32_t base, uint32_t size);
        [[nodiscard]] std::optional<IopImportCall> decode(uint32_t pc) const;
        [[nodiscard]] bool registerExportTable(uint32_t address);
        [[nodiscard]] bool releaseExportTable(uint32_t address);
        [[nodiscard]] uint32_t findTable(std::string_view library, std::optional<uint16_t> version = std::nullopt) const;
        [[nodiscard]] uint32_t resolve(std::string_view library, uint16_t ordinal, std::optional<uint16_t> version = std::nullopt) const;
        [[nodiscard]] bool isRegisteredTarget(uint32_t table, uint16_t ordinal, uint32_t target) const;
        [[nodiscard]] int32_t setRebootTimeLibraryHandlingMode(uint32_t address, uint32_t mode);
        void eraseRange(uint32_t base, uint32_t size);

    private:
        IopMemory &m_memory;
        uint32_t m_internalData = 0;
        uint32_t m_unboundHead = 0;
        std::map<uint32_t, IopImportCall> m_bindings;
    };
}
