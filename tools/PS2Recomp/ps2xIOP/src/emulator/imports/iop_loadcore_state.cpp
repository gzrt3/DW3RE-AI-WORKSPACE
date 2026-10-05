#include "iop_loadcore_state.h"
#include "../core/iop_memory.h"

#include <set>
#include <vector>

namespace ps2x::iop::detail
{
    namespace
    {
        bool owned(const IopMemory &memory, uint32_t address, uint32_t size)
        {
            const uint32_t p = IopMemory::physicalAddress(address);
            return (address == p || address == (p | 0x80000000u) || address == (p | 0xA0000000u)) &&
                (address & 3u) == 0u && p < IopMemory::RamSize &&
                size <= IopMemory::RamSize - p && memory.ownsRamRange(address, size);
        }

        bool bootStorage(const IopMemory &memory, uint32_t begin, uint32_t limit)
        {
            return begin != 0u && limit >= begin && limit - begin <= 0x40u &&
                owned(memory, begin, limit - begin + 4u) && owned(memory, 0x3F0u, 8u) &&
                memory.read32(0x3F0u) == begin;
        }

        std::optional<std::vector<uint32_t>> moduleList(const IopMemory &memory, uint32_t data)
        {
            if (data == 0u || !owned(memory, data, 0x20u)) return std::nullopt;
            std::vector<uint32_t> nodes;
            std::set<uint32_t> seen;
            for (uint32_t node = memory.read32(data + 0x10u); node != 0u; node = memory.read32(node))
            {
                const uint32_t p = IopMemory::physicalAddress(node);
                if (!owned(memory, node, 0x30u) || nodes.size() >= 4096u || !seen.insert(p).second)
                    return std::nullopt;
                nodes.push_back(node);
            }
            return nodes;
        }
    }

    std::optional<uint32_t> queryLoadcore13BootMode(
        const IopMemory &memory, uint32_t mode, uint32_t storage, uint32_t terminatorLimit)
    {
        if (!bootStorage(memory, storage, terminatorLimit)) return std::nullopt;
        for (uint32_t current = storage; current <= terminatorLimit;)
        {
            const uint32_t header = memory.read32(current);
            if (header == 0u) return 0u;
            if (((header >> 16u) & 255u) == mode) return current;
            const uint32_t size = ((header >> 24u) + 1u) * 4u;
            if (size > terminatorLimit - current) return std::nullopt;
            current += size;
        }
        return std::nullopt;
    }

    std::optional<uint32_t> registerLoadcore13BootMode(
        IopMemory &memory, uint32_t record, uint32_t storage, uint32_t terminatorLimit)
    {
        if (!bootStorage(memory, storage, terminatorLimit) || record == 0u || !owned(memory, record, 4u))
            return std::nullopt;
        const uint32_t cursor = memory.read32(0x3F4u);
        if (cursor < storage || cursor > terminatorLimit || (cursor & 3u) != 0u)
            return std::nullopt;
        const uint32_t size = ((memory.read32(record) >> 24u) + 1u) * 4u;
        // The original returns1 on capacity rejection before reading the payload.
        if (size > terminatorLimit - cursor) return 1u;
        if (!owned(memory, record, size)) return std::nullopt;
        const uint32_t source = IopMemory::physicalAddress(record);
        const uint32_t destination = IopMemory::physicalAddress(cursor);
        if (source != destination && source < destination + size && destination < source + size)
            return std::nullopt; // Overlapping forward-copy inputs are outside this bounded HLE.
        for (uint32_t i = 0u; i < size; i += 4u)
            memory.write32(cursor + i, memory.read32(record + i));
        memory.write32(cursor + size, 0u);
        memory.write32(0x3F4u, cursor + size);
        return 0u;
    }

    std::optional<uint32_t> registerLoadcore13Module(IopMemory &memory, uint32_t data, uint32_t module)
    {
        const auto nodes = moduleList(memory, data);
        if (!nodes || module == 0u || !owned(memory, module, 0x30u)) return std::nullopt;
        const uint32_t physical = IopMemory::physicalAddress(module);
        if (physical < IopMemory::physicalAddress(data) + 0x20u &&
            IopMemory::physicalAddress(data) < physical + 0x30u) return std::nullopt;
        uint32_t previous = data + 0x10u;
        for (uint32_t node : *nodes)
        {
            const uint32_t other = IopMemory::physicalAddress(node);
            if (physical < other + 0x30u && other < physical + 0x30u) return std::nullopt;
        }
        for (uint32_t node : *nodes)
        {
            if (node >= module) break;
            previous = node;
        }
        const uint32_t id = memory.read32(data + 0x18u);
        const uint32_t count = memory.read32(data + 0x14u);
        const uint32_t next = memory.read32(previous);
        memory.write32(module, next);
        memory.write32(previous, module);
        memory.write32(module + 0x0Cu, id);
        memory.write32(data + 0x18u, id + 1u);
        memory.write32(data + 0x14u, count + 1u);
        return id + 1u;
    }

    std::optional<uint32_t> releaseLoadcore13Module(
        IopMemory &memory, uint32_t data, uint32_t module, uint32_t incomingV0)
    {
        if (module == 0u) return incomingV0;
        const auto nodes = moduleList(memory, data);
        if (!nodes) return std::nullopt;
        uint32_t previous = data + 0x10u;
        for (uint32_t node : *nodes)
        {
            if (node == module)
            {
                const uint32_t count = memory.read32(data + 0x14u) - 1u;
                memory.write32(previous, memory.read32(node));
                memory.write32(data + 0x14u, count);
                return count;
            }
            previous = node;
        }
        return 0u;
    }

    std::optional<uint32_t> searchLoadcore13Module(const IopMemory &memory, uint32_t data, uint32_t address)
    {
        const auto nodes = moduleList(memory, data);
        if (!nodes) return std::nullopt;
        for (uint32_t node : *nodes)
        {
            const uint32_t begin = memory.read32(node + 0x18u);
            // Selected instructions compare unsigned guest addresses after 32-bit additions.
            const uint32_t end = begin + memory.read32(node + 0x1Cu) +
                memory.read32(node + 0x20u) + memory.read32(node + 0x24u);
            if (address >= begin && address < end) return node;
        }
        return 0u;
    }
}
