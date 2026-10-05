#include "iop_imports.h"
#include "../core/iop_memory.h"

#include <algorithm>
#include <set>
#include <utility>

namespace ps2x::iop::detail
{
    namespace
    {
        constexpr uint32_t kImportMagic = 0x41E00000u, kExportMagic = 0x41C00000u;
        constexpr uint32_t kJrRa = 0x03E00008u, kMaxChain = 4096u, kMaxStubs = 8192u;
        struct Unsupported {};

        uint32_t ramAddress(const IopMemory &memory, uint32_t address, uint32_t size)
        {
            const uint32_t physical = IopMemory::physicalAddress(address);
            if ((address != physical && address != (physical | 0x80000000u) &&
                 address != (physical | 0xA0000000u)) || physical > IopMemory::RamSize ||
                size > IopMemory::RamSize - physical || !memory.ownsRamRange(address, size))
                throw Unsupported{};
            return physical;
        }

        std::string nameString(const std::array<uint8_t, 8> &name)
        {
            return std::string(name.begin(), std::find(name.begin(), name.end(), uint8_t{0}));
        }

        // Speculative writes remain private until every accessed byte is owned.
        // Original error returns still commit their verified side effects.
        class Transaction
        {
        public:
            Transaction(IopMemory &memory, uint32_t internal, uint32_t head,
                        const std::map<uint32_t, IopImportCall> &bindings = {})
                : memory(memory), internal(internal), head(head), bindings(bindings)
            {
                if (internal != 0u)
                {
                    (void)ramAddress(memory, internal, 0x20u);
                    this->head = read32(internal);
                    unresolved = read32(internal + 12u);
                }
            }
            uint8_t byte(uint32_t physical) const
            {
                const auto found = changed.find(physical);
                return found == changed.end() ? memory.ram()[physical] : found->second;
            }
            uint32_t read32(uint32_t address) const
            {
                if ((address & 3u) != 0u) throw Unsupported{};
                const uint32_t p = ramAddress(memory, address, 4u);
                return uint32_t(byte(p)) | (uint32_t(byte(p + 1u)) << 8u) |
                       (uint32_t(byte(p + 2u)) << 16u) | (uint32_t(byte(p + 3u)) << 24u);
            }
            uint16_t read16(uint32_t address) const
            {
                if ((address & 1u) != 0u) throw Unsupported{};
                const uint32_t p = ramAddress(memory, address, 2u);
                return static_cast<uint16_t>(byte(p) | (uint32_t(byte(p + 1u)) << 8u));
            }
            void write32(uint32_t address, uint32_t value)
            {
                if ((address & 3u) != 0u) throw Unsupported{};
                write(address, value, 4u);
            }
            void write16(uint32_t address, uint16_t value)
            {
                if ((address & 1u) != 0u) throw Unsupported{};
                write(address, value, 2u);
            }
            void write(uint32_t address, uint32_t value, uint32_t size)
            {
                const uint32_t p = ramAddress(memory, address, size);
                for (uint32_t i = 0u; i < size; ++i) changed[p + i] = static_cast<uint8_t>(value >> (i * 8u));
            }
            std::array<uint8_t, 8> name(uint32_t table) const
            {
                const uint32_t p = ramAddress(memory, table, 20u);
                std::array<uint8_t, 8> result{};
                for (uint32_t i = 0u; i < 8u; ++i) result[i] = byte(p + 12u + i);
                return result;
            }
            bool sameLibrary(uint32_t a, uint32_t b) const
            {
                return name(a) == name(b) && (read16(a + 8u) >> 8u) == (read16(b + 8u) >> 8u);
            }
            std::vector<uint32_t> chain(uint32_t first, uint32_t nextOffset) const
            {
                std::vector<uint32_t> result;
                std::set<uint32_t> seen;
                for (uint32_t current = first; current != 0u; current = read32(current + nextOffset))
                {
                    const uint32_t p = ramAddress(memory, current, 20u);
                    if (!seen.insert(p).second || result.size() >= kMaxChain) throw Unsupported{};
                    result.push_back(current);
                }
                return result;
            }
            std::vector<uint32_t> targets(uint32_t provider) const
            {
                std::vector<uint32_t> result;
                for (uint32_t offset = 20u; result.size() <= 1024u; offset += 4u)
                {
                    const uint32_t value = read32(provider + offset);
                    if (value == 0u) return result;
                    result.push_back(value);
                }
                throw Unsupported{};
            }
            std::optional<std::vector<uint32_t>> stubs(uint32_t table) const
            {
                if (read32(table) != kImportMagic) return std::nullopt;
                (void)name(table);
                std::vector<uint32_t> result;
                for (uint32_t i = 0u; i < kMaxStubs; ++i)
                {
                    const uint32_t pc = table + 20u + 8u * i;
                    const uint32_t first = read32(pc), second = read32(pc + 4u);
                    if (first == 0u)
                        return second == 0u && !result.empty() ? std::optional{result} : std::nullopt;
                    if ((first != kJrRa && (first >> 26u) != 2u) || (second >> 26u) != 9u) return std::nullopt;
                    result.push_back(pc);
                }
                throw Unsupported{};
            }
            void invalidate(uint32_t table)
            {
                for (auto entry = bindings.begin(); entry != bindings.end();)
                    if (entry->second.tableAddress == table) entry = bindings.erase(entry);
                    else ++entry;
            }
            void bind(uint32_t table, uint32_t provider)
            {
                const auto functions = targets(provider);
                const auto imported = stubs(table);
                if (!imported) throw Unsupported{};
                invalidate(table);
                const auto exact = name(table);
                for (const uint32_t pc : *imported)
                {
                    const uint32_t delay = read32(pc + 4u);
                    const auto ordinal = static_cast<uint16_t>(delay);
                    const uint32_t target = ordinal < functions.size() ? functions[ordinal] : 0u;
                    write32(pc, target ? 0x08000000u | ((target >> 2u) & 0x03FFFFFFu) : kJrRa);
                    bindings[IopMemory::physicalAddress(pc)] = IopImportCall{
                        nameString(exact), ordinal, read16(table + 8u), table, provider, target, delay, true, exact};
                }
                write16(table + 10u, static_cast<uint16_t>((read16(table + 10u) & ~4u) | 2u));
            }
            void resetStubs(uint32_t table)
            {
                invalidate(table);
                for (uint32_t i = 0u; i < kMaxStubs; ++i)
                {
                    const uint32_t pc = table + 20u + 8u * i;
                    if (read32(pc) == 0u || (read32(pc + 4u) >> 26u) != 9u) return;
                    write32(pc, kJrRa);
                }
                throw Unsupported{};
            }
            void validateLists() const
            {
                std::set<uint32_t> clients;
                for (const uint32_t provider : chain(head, 0u))
                {
                    (void)targets(provider);
                    for (const uint32_t table : chain(read32(provider + 4u), 4u))
                        if (!clients.insert(IopMemory::physicalAddress(table)).second || !stubs(table))
                            throw Unsupported{};
                }
                for (const uint32_t table : chain(unresolved, 4u))
                    if (!clients.insert(IopMemory::physicalAddress(table)).second || !stubs(table)) throw Unsupported{};
            }
            void commit()
            {
                if (internal != 0u)
                {
                    write32(internal, head);
                    write32(internal + 12u, unresolved);
                }
                for (const auto &[address, value] : changed) memory.write8(address, value);
            }

            IopMemory &memory;
            uint32_t internal, head, unresolved = 0u;
            std::map<uint32_t, IopImportCall> bindings;
            std::map<uint32_t, uint8_t> changed;
        };

        int32_t release(Transaction &tx, uint32_t address)
        {
            uint32_t previous = 0u;
            for (const uint32_t provider : tx.chain(tx.head, 0u))
            {
                if (provider == address)
                {
                    if (tx.read32(provider + 4u) != 0u) return -215;
                    if (previous == 0u) tx.head = tx.read32(provider);
                    else tx.write32(previous, tx.read32(provider));
                    tx.write32(provider + 4u, 0u);
                    tx.write32(provider, kExportMagic);
                    return 0;
                }
                previous = provider;
            }
            // Original NULL removal dereferences address0 at the terminator.
            // It is outside the supported owned-library contract.
            if (address == 0u) throw Unsupported{};
            return -213;
        }

        bool unlinkClient(Transaction &tx, uint32_t provider, uint32_t table)
        {
            uint32_t previous = 0u;
            for (const uint32_t client : tx.chain(tx.read32(provider + 4u), 4u))
            {
                if (client == table)
                {
                    tx.write32((previous ? previous : provider) + 4u, tx.read32(table + 4u));
                    // LOADCORE1.3 preserves removed head.next; nonhead.next is
                    // zeroed, so the outer unlink scan can end early.
                    if (previous != 0u) tx.write32(table + 4u, 0u);
                    return true;
                }
                previous = client;
            }
            return false;
        }

        int32_t unlink(Transaction &tx, uint32_t base, uint32_t size)
        {
            const uint32_t span = size & ~3u;
            (void)ramAddress(tx.memory, base, span);
            if ((base & 3u) != 0u || uint64_t(base) + span > UINT32_MAX) throw Unsupported{};
            const uint32_t end = base + span;
            const auto inside = [base, end](uint32_t p) { return p >= base && p < end; };
            for (const uint32_t provider : tx.chain(tx.head, 0u))
            {
                uint32_t client = tx.read32(provider + 4u), visited = 0u;
                while (client != 0u)
                {
                    if (++visited > kMaxChain) throw Unsupported{};
                    if (inside(client))
                    {
                        if (!unlinkClient(tx, provider, client)) return -1;
                        tx.write16(client + 10u, static_cast<uint16_t>(tx.read16(client + 10u) & ~7u));
                        tx.resetStubs(client);
                    }
                    client = tx.read32(client + 4u);
                }
                if (inside(provider)) (void)release(tx, provider);
            }
            uint32_t previous = 0u;
            for (const uint32_t table : tx.chain(tx.unresolved, 4u))
            {
                if (inside(table))
                {
                    tx.write16(table + 10u, static_cast<uint16_t>(tx.read16(table + 10u) & ~7u));
                    tx.resetStubs(table);
                    const uint32_t next = tx.read32(table + 4u);
                    if (previous == 0u) tx.unresolved = next;
                    else tx.write32(previous + 4u, next);
                    tx.write32(table + 4u, 0u);
                }
                else previous = table;
            }
            return 0;
        }

        int32_t registerSelectedLibrary(Transaction &tx, uint32_t address, bool nonAuto)
        {
            if (address == 0u) return -214;
            if (tx.read32(address) != kExportMagic) return -214;
            (void)tx.targets(address);
            if (nonAuto)
            {
                tx.write16(address + 10u, static_cast<uint16_t>(tx.read16(address + 10u) | 1u));
                tx.write32(address, tx.head);
                tx.head = address;
                return 0;
            }
            uint32_t pending = 0u;
            for (const uint32_t provider : tx.chain(tx.head, 0u))
            {
                if (!tx.sameLibrary(provider, address)) continue;
                if ((tx.read16(address + 8u) & 255u) <= (tx.read16(provider + 8u) & 255u)) return -212;
                const auto clients = tx.chain(tx.read32(provider + 4u), 4u);
                tx.write32(provider + 4u, 0u);
                uint32_t lockedTail = provider;
                for (const uint32_t table : clients)
                {
                    if ((tx.read16(table + 10u) & 1u) == 0u)
                    {
                        tx.write32(table + 4u, pending);
                        pending = table;
                    }
                    else
                    {
                        tx.write32(lockedTail + 4u, table);
                        lockedTail = table;
                        tx.write32(table + 4u, 0u);
                    }
                }
            }
            uint32_t previous = 0u;
            for (const uint32_t table : tx.chain(tx.unresolved, 4u))
            {
                if (tx.sameLibrary(address, table))
                {
                    const uint32_t next = tx.read32(table + 4u);
                    tx.write32(table + 4u, pending);
                    pending = table;
                    if (previous == 0u) tx.unresolved = next;
                    else tx.write32(previous + 4u, next);
                }
                else previous = table;
            }
            tx.write32(address + 4u, 0u);
            for (const uint32_t table : tx.chain(pending, 4u))
            {
                tx.bind(table, address);
                tx.write32(table + 4u, tx.read32(address + 4u));
                tx.write32(address + 4u, table);
            }
            tx.write16(address + 10u, static_cast<uint16_t>(tx.read16(address + 10u) & ~1u));
            tx.write32(address, tx.head);
            tx.head = address;
            return 0;
        }

        int32_t link(Transaction &tx, uint32_t base, uint32_t size)
        {
            const uint32_t span = size & ~3u;
            (void)ramAddress(tx.memory, base, span);
            if ((base & 3u) != 0u || uint64_t(base) + span > UINT32_MAX) throw Unsupported{};
            for (uint32_t offset = 0u; offset < span; offset += 4u)
            {
                const uint32_t table = base + offset;
                if (tx.read32(table) != kImportMagic) continue;
                if (!tx.stubs(table) || (tx.read16(table + 10u) & 7u) != 0u) continue;
                uint32_t found = 0u;
                for (const uint32_t provider : tx.chain(tx.head, 0u))
                    if ((tx.read16(provider + 10u) & 1u) == 0u && tx.sameLibrary(provider, table))
                    {
                        found = provider;
                        break;
                    }
                if (found == 0u)
                {
                    (void)unlink(tx, base, size);
                    return -1;
                }
                tx.bind(table, found);
                tx.write32(table + 4u, tx.read32(found + 4u));
                tx.write32(found + 4u, table);
            }
            return 0;
        }
    }

    IopImportRegistry::IopImportRegistry(IopMemory &memory) noexcept : m_memory(memory) {}

    void IopImportRegistry::reset()
    {
        m_internalData = 0u;
        m_unboundHead = 0u;
        m_bindings.clear();
    }

    bool IopImportRegistry::bindInternalData(uint32_t address)
    {
        if (address == 0u) return false;
        try
        {
            Transaction tx(m_memory, address, 0u);
            tx.validateLists();
            if (m_internalData == 0u && m_unboundHead != 0u && m_unboundHead != tx.head) return false;
            if (m_internalData != address) m_bindings.clear();
            m_internalData = address;
            m_unboundHead = tx.head;
            return true;
        }
        catch (const Unsupported &) { return false; }
    }

    std::optional<int32_t> IopImportRegistry::registerLibrary(uint32_t address, bool nonAuto)
    {
        try
        {
            Transaction tx(m_memory, m_internalData, m_unboundHead, m_bindings);
            tx.validateLists();
            const int32_t result = registerSelectedLibrary(tx, address, nonAuto);
            tx.validateLists();
            tx.commit(); m_unboundHead = tx.head; m_bindings = std::move(tx.bindings);
            return result;
        }
        catch (const Unsupported &) { return std::nullopt; }
    }

    std::optional<int32_t> IopImportRegistry::releaseLibrary(uint32_t address)
    {
        try
        {
            Transaction tx(m_memory, m_internalData, m_unboundHead, m_bindings);
            tx.validateLists();
            const int32_t result = release(tx, address);
            tx.commit(); m_unboundHead = tx.head; m_bindings = std::move(tx.bindings);
            return result;
        }
        catch (const Unsupported &) { return std::nullopt; }
    }

    std::optional<int32_t> IopImportRegistry::linkLibraries(uint32_t base, uint32_t size)
    {
        try
        {
            Transaction tx(m_memory, m_internalData, m_unboundHead, m_bindings);
            tx.validateLists();
            const int32_t result = link(tx, base, size);
            tx.commit(); m_unboundHead = tx.head; m_bindings = std::move(tx.bindings);
            return result;
        }
        catch (const Unsupported &) { return std::nullopt; }
    }

    std::optional<int32_t> IopImportRegistry::unlinkLibraries(uint32_t base, uint32_t size)
    {
        try
        {
            Transaction tx(m_memory, m_internalData, m_unboundHead, m_bindings);
            tx.validateLists();
            const int32_t result = unlink(tx, base, size);
            tx.commit(); m_unboundHead = tx.head; m_bindings = std::move(tx.bindings);
            return result;
        }
        catch (const Unsupported &) { return std::nullopt; }
    }

    std::optional<IopImportCall> IopImportRegistry::decode(uint32_t pc) const
    {
        try
        {
            const uint32_t physical = ramAddress(m_memory, pc, 8u);
            Transaction tx(m_memory, m_internalData, m_unboundHead);
            const auto bound = m_bindings.find(physical);
            if (bound != m_bindings.end())
            {
                const auto &call = bound->second;
                const uint32_t first = call.targetAddress ?
                    0x08000000u | ((call.targetAddress >> 2u) & 0x03FFFFFFu) : kJrRa;
                if (tx.read32(pc) != first || tx.read32(pc + 4u) != call.delayInstruction ||
                    tx.read32(call.tableAddress) != kImportMagic || tx.name(call.tableAddress) != call.exactName ||
                    tx.read16(call.tableAddress + 8u) != call.version ||
                    (tx.read16(call.tableAddress + 10u) & 6u) != 2u) return std::nullopt;
                const auto providers = tx.chain(tx.head, 0u);
                if (std::find(providers.begin(), providers.end(), call.providerAddress) == providers.end() ||
                    !tx.sameLibrary(call.providerAddress, call.tableAddress)) return std::nullopt;
                const auto clients = tx.chain(tx.read32(call.providerAddress + 4u), 4u);
                const auto functions = tx.targets(call.providerAddress);
                const uint32_t target = call.ordinal < functions.size() ? functions[call.ordinal] : 0u;
                if (std::find(clients.begin(), clients.end(), call.tableAddress) == clients.end() ||
                    target != call.targetAddress) return std::nullopt;
                return call;
            }
            // A J instruction requires an active recorded binding above.
            if (tx.read32(pc) != kJrRa || (tx.read32(pc + 4u) >> 26u) != 9u)
                return std::nullopt;
            const uint32_t searchBegin = physical > 0x10000u ? physical - 0x10000u : 0u;
            for (uint32_t candidate = physical & ~3u; candidate >= searchBegin + 20u; candidate -= 4u)
            {
                const uint32_t table = candidate - 20u;
                if (!m_memory.ownsRamRange(table, 20u)) continue;
                if (tx.read32(table) != kImportMagic || ((physical - table - 20u) & 7u) != 0u) continue;
                const auto imported = tx.stubs(table);
                if (!imported || std::find(imported->begin(), imported->end(), physical) == imported->end()) continue;
                if ((tx.read16(table + 10u) & 2u) != 0u) return std::nullopt;
                const auto exact = tx.name(table);
                return IopImportCall{nameString(exact), static_cast<uint16_t>(tx.read32(pc + 4u)),
                    tx.read16(table + 8u), table, 0u, 0u, tx.read32(pc + 4u), false, exact};
            }
        }
        catch (const Unsupported &) {}
        return std::nullopt;
    }

    bool IopImportRegistry::isRegisteredTarget(uint32_t table, uint16_t ordinal, uint32_t target) const
    {
        try
        {
            Transaction tx(m_memory, m_internalData, m_unboundHead);
            const auto providers = tx.chain(tx.head, 0u);
            if (std::find(providers.begin(), providers.end(), table) == providers.end()) return false;
            const auto functions = tx.targets(table);
            return ordinal < functions.size() && functions[ordinal] == target;
        }
        catch (const Unsupported &) { return false; }
    }

    bool IopImportRegistry::registerExportTable(uint32_t address)
    {
        return registerLibrary(address) == std::optional<int32_t>{0};
    }

    bool IopImportRegistry::releaseExportTable(uint32_t address)
    {
        return releaseLibrary(address) == std::optional<int32_t>{0};
    }

    uint32_t IopImportRegistry::findTable(std::string_view library, std::optional<uint16_t> version) const
    {
        if (library.size() > 8u) return 0u;
        std::array<uint8_t, 8> requested{};
        std::copy(library.begin(), library.end(), requested.begin());
        try
        {
            Transaction tx(m_memory, m_internalData, m_unboundHead);
            for (const uint32_t provider : tx.chain(tx.head, 0u))
                if (tx.name(provider) == requested && (!version || (tx.read16(provider + 8u) >> 8u) == (*version >> 8u)))
                    return provider;
        }
        catch (const Unsupported &) {}
        return 0u;
    }

    uint32_t IopImportRegistry::resolve(std::string_view library, uint16_t ordinal, std::optional<uint16_t> version) const
    {
        const uint32_t provider = findTable(library, version);
        if (provider == 0u) return 0u;
        try
        {
            Transaction tx(m_memory, m_internalData, m_unboundHead);
            const auto functions = tx.targets(provider);
            return ordinal < functions.size() ? functions[ordinal] : 0u;
        }
        catch (const Unsupported &) { return 0u; }
    }

    int32_t IopImportRegistry::setRebootTimeLibraryHandlingMode(uint32_t address, uint32_t mode)
    {
        if (address == 0u) return -214;
        try
        {
            Transaction tx(m_memory, m_internalData, m_unboundHead);
            const auto providers = tx.chain(tx.head, 0u);
            if (std::find(providers.begin(), providers.end(), address) == providers.end() &&
                tx.read32(address) != kExportMagic) return -213;
            tx.write16(address + 10u, static_cast<uint16_t>((tx.read16(address + 10u) & ~6u) | (mode & 6u)));
            tx.commit();
            return 0;
        }
        catch (const Unsupported &) { return -213; }
    }

    void IopImportRegistry::eraseRange(uint32_t base, uint32_t size)
    {
        // Legacy callers cannot observe failure. Referenced providers remain
        // registered until their guest client chains have actually been removed.
        (void)unlinkLibraries(base, size);
    }
}
