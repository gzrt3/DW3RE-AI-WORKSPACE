#include "iop_loadcore_image.h"
#include "emulator/core/iop_memory.h"

#include <algorithm>
#include <limits>
#include <unordered_map>
#include <unordered_set>

namespace ps2x::iop::detail
{
    namespace
    {
        // Instruction source: LOADCORE.IRX SHA256
        // 51c9e79f4529d3590643a46ce63d73433b377a38ccc9fd0fad59a25b463d3bd3,
        // unrelocated PCs1310..1A5C; exports table1CB0, version0103.
        // See artifacts/native_pipeline_20261005/loadcore_original_009/contract.md.
        struct Unhandled {};
        constexpr uint32_t Rejected = 0xFFFFFFFFu;

        uint32_t addressAt(uint32_t base, uint32_t offset)
        {
            if (offset > std::numeric_limits<uint32_t>::max() - base) throw Unhandled{};
            return base + offset;
        }

        int32_t signedHalf(uint32_t value)
        {
            value &= 0xFFFFu;
            return value < 0x8000u ? static_cast<int32_t>(value) : static_cast<int32_t>(value) - 0x10000;
        }

        uint32_t roundedHigh(uint32_t value)
        {
            return (((value >> 15u) + 1u) >> 1u) & 0xFFFFu;
        }

        // Reads observe earlier staged writes, including source/destination
        // overlap and aliases. Commit touches only original stores; a malformed
        // later relocation cannot publish a partially loaded module/FileInfo.
        class Transaction
        {
        public:
            explicit Transaction(IopMemory &memory) : m_memory(memory) {}

            uint32_t read32(uint32_t address)
            {
                const uint32_t physical = checked(address, 4u, 4u);
                const auto found = m_words.find(physical);
                return found == m_words.end() ? m_memory.read32(physical) : found->second;
            }

            uint32_t read16(uint32_t address)
            {
                const uint32_t physical = checked(address, 2u, 2u);
                const auto found = m_words.find(physical & ~3u);
                return found == m_words.end() ? m_memory.read16(physical)
                    : (found->second >> ((physical & 3u) * 8u)) & 0xFFFFu;
            }

            uint32_t read8(uint32_t address)
            {
                const uint32_t physical = checked(address, 1u, 1u);
                const auto found = m_words.find(physical & ~3u);
                return found == m_words.end() ? m_memory.read8(physical)
                    : (found->second >> ((physical & 3u) * 8u)) & 0xFFu;
            }

            void write32(uint32_t address, uint32_t value)
            {
                m_words[checked(address, 4u, 4u)] = value;
            }

            void write16(uint32_t address, uint32_t value)
            {
                checked(address, 2u, 2u);
                const uint32_t shift = (address & 3u) * 8u;
                const uint32_t wordAddress = address & ~3u;
                write32(wordAddress, (read32(wordAddress) & ~(0xFFFFu << shift)) | ((value & 0xFFFFu) << shift));
            }

            void copyWords(uint32_t source, uint32_t destination, uint32_t bytes)
            {
                const uint32_t copied = bytes & ~3u;
                if (copied == 0u) return;
                // Reject wrapping spans rather than accepting the original's
                // unsigned source-end comparison as a successful empty copy.
                addressAt(source, copied);
                addressAt(destination, copied);
                requireModuleRange(destination, copied);
                for (uint32_t offset = 0u; offset < copied; offset += 4u)
                    write32(destination + offset, read32(source + offset));
            }

            void zeroWords(uint32_t destination, uint32_t bytes)
            {
                const uint32_t zeroed = bytes & ~3u;
                if (zeroed == 0u) return;
                addressAt(destination, zeroed);
                requireModuleRange(destination, zeroed);
                for (uint32_t offset = 0u; offset < zeroed; offset += 4u)
                    write32(destination + offset, 0u);
            }

            void reserveModule(uint32_t text, uint32_t fileSize, uint32_t memSize)
            {
                const uint32_t physicalText = checked(text, 0u, 4u);
                if (physicalText < 0x30u) throw Unhandled{};
                const uint32_t header = physicalText - 0x30u;
                const uint32_t payload = std::max(fileSize, memSize);
                if (payload > IopMemory::RamSize - physicalText) throw Unhandled{};
                m_moduleAllocation = m_memory.allocationContaining(header);
                if (!m_moduleAllocation) throw Unhandled{};
                requireModuleRange(header, payload + 0x30u);
            }

            void requireModuleRange(uint32_t address, uint32_t bytes)
            {
                const uint32_t physical = checked(address, bytes, 1u);
                if (!m_moduleAllocation || physical < m_moduleAllocation->address) throw Unhandled{};
                const uint32_t offset = physical - m_moduleAllocation->address;
                if (offset > m_moduleAllocation->size || bytes > m_moduleAllocation->size - offset)
                    throw Unhandled{};
            }

            void commit()
            {
                for (const auto &[physical, value] : m_words) m_memory.write32(physical, value);
            }

        private:
            uint32_t checked(uint32_t address, uint32_t bytes, uint32_t alignment)
            {
                // Explicit bound prevents adversarial repeated sections/chains
                // from making the HLE unbounded. It is not a guest error code.
                if (++m_operations > 16u * IopMemory::RamSize) throw Unhandled{};
                const uint32_t segment = address & 0xE0000000u;
                if ((segment != 0u && segment != 0x80000000u && segment != 0xA0000000u)
                    || (address & (alignment - 1u)) != 0u) throw Unhandled{};
                const uint32_t physical = IopMemory::physicalAddress(address);
                if (physical > IopMemory::RamSize || bytes > IopMemory::RamSize - physical
                    || !m_memory.ownsRamRange(physical, bytes)) throw Unhandled{};
                return physical;
            }

            IopMemory &m_memory;
            std::unordered_map<uint32_t, uint32_t> m_words;
            std::optional<IopMemory::Allocation> m_moduleAllocation;
            uint32_t m_operations = 0u;
        };

        uint32_t probe(Transaction &tx, uint32_t image, uint32_t info)
        {
            // The selected original first attempts COFF. This helper's scope
            // is ELF; do not turn unsupported COFF into a guest format error.
            if (tx.read16(image) == 0x0162u) throw Unhandled{};
            const uint32_t phOffset = tx.read32(addressAt(image, 0x1Cu));
            const auto reject = [&]() { tx.write32(info, Rejected); return Rejected; };
            if (tx.read16(addressAt(image, 4u)) != 0x0101u) return reject();
            if (tx.read16(addressAt(image, 0x12u)) != 8u) return reject();
            if (tx.read16(addressAt(image, 0x2Au)) != 0x20u) return reject();
            if (tx.read16(addressAt(image, 0x2Cu)) != 2u) return reject();
            const uint32_t ph = addressAt(image, phOffset);
            if (tx.read32(ph) != 0x70000080u) return reject();
            const uint32_t elfType = tx.read16(addressAt(image, 0x10u));
            const uint32_t kind = elfType == 2u ? 3u : (elfType == 0xFF80u || elfType == 0xFF81u) ? 4u : 0u;
            if (kind == 0u) return reject();
            tx.write32(info, kind);
            const uint32_t metaOffset = tx.read32(addressAt(ph, 4u));
            const uint32_t result = tx.read32(info);
            const uint32_t meta = addressAt(image, metaOffset);
            tx.write32(addressAt(info, 4u), tx.read32(addressAt(meta, 4u)));
            tx.write32(addressAt(info, 8u), tx.read32(addressAt(meta, 8u)));
            tx.write32(addressAt(info, 0xCu), tx.read32(addressAt(ph, 0x28u)));
            tx.write32(addressAt(info, 0x10u), tx.read32(addressAt(meta, 0xCu)));
            tx.write32(addressAt(info, 0x14u), tx.read32(addressAt(meta, 0x10u)));
            tx.write32(addressAt(info, 0x18u), tx.read32(addressAt(meta, 0x14u)));
            tx.write32(addressAt(info, 0x1Cu), tx.read32(addressAt(ph, 0x34u)));
            tx.write32(addressAt(info, 0x20u), tx.read32(meta));
            return result;
        }

        void relocate(Transaction &tx, uint32_t base, uint32_t records, uint32_t count)
        {
            // Original blez compares the quotient as a signed register.
            if (count == 0u || count >= 0x80000000u) return;
            for (uint32_t index = 0u; index < count; ++index)
            {
                if (index > std::numeric_limits<uint32_t>::max() / 8u) throw Unhandled{};
                const uint32_t record = addressAt(records, index * 8u);
                const uint32_t offset = tx.read32(record);
                const uint32_t type = tx.read8(addressAt(record, 4u));
                if (type == 0u || type == 3u) continue; // Proven original no-op cases.
                if (type != 1u && type != 2u && type != 4u && type != 5u && type != 6u && type != 250u)
                    throw Unhandled{};
                const uint32_t patch = addressAt(base, offset);
                tx.requireModuleRange(patch, 4u);
                if (type == 250u)
                {
                    if (index + 1u >= count) throw Unhandled{};
                    const uint32_t high = roundedHigh(tx.read32(addressAt(record, 8u)) + base);
                    std::unordered_set<uint32_t> visited;
                    uint32_t current = patch;
                    for (;;)
                    {
                        if (!visited.insert(IopMemory::physicalAddress(current)).second) throw Unhandled{};
                        tx.requireModuleRange(current, 4u);
                        const uint32_t word = tx.read32(current);
                        const int32_t displacement = signedHalf(word) * 4;
                        tx.write32(current, (word & 0xFFFF0000u) | high);
                        if (displacement == 0) break;
                        const int64_t next = static_cast<int64_t>(current) + displacement;
                        if (next < 0 || next > std::numeric_limits<uint32_t>::max()) throw Unhandled{};
                        current = static_cast<uint32_t>(next);
                    }
                    ++index; // The addend record is consumed only for type250.
                    continue;
                }
                const uint32_t word = tx.read32(patch);
                uint32_t value = word;
                switch (type)
                {
                case 2u: value = word + base; break;
                case 1u:
                case 6u:
                    value = (word & 0xFFFF0000u) | ((static_cast<uint32_t>(signedHalf(word)) + base) & 0xFFFFu);
                    break;
                case 4u:
                {
                    const uint32_t target = (((word & 0x03FFFFFFu) << 2u) | (patch & 0xF0000000u)) + base;
                    value = (word & 0xFC000000u) | ((target >> 2u) & 0x03FFFFFFu);
                    break;
                }
                case 5u:
                {
                    if (index + 1u >= count) throw Unhandled{};
                    const uint32_t lowPatch = addressAt(base, tx.read32(addressAt(record, 8u)));
                    tx.requireModuleRange(lowPatch, 2u);
                    const uint32_t sum = (word << 16u) + static_cast<uint32_t>(signedHalf(tx.read16(lowPatch))) + base;
                    value = (word & 0xFFFF0000u) | roundedHigh(sum);
                    break;
                }
                default: throw Unhandled{};
                }
                tx.write32(patch, value);
            }
        }

        void copyModuleInfo(Transaction &tx, uint32_t info)
        {
            const uint32_t text = tx.read32(addressAt(info, 0xCu));
            if (text < 0x30u) throw Unhandled{};
            const uint32_t header = text - 0x30u;
            tx.requireModuleRange(header, 40u);
            tx.write32(header, 0u);
            tx.write32(addressAt(header, 4u), 0u);
            tx.write32(addressAt(header, 8u), 0u); // Consecutive sh version/flags.
            tx.write32(addressAt(header, 0xCu), 0u); // Full32-bit module ID.
            uint32_t moduleId = tx.read32(addressAt(info, 0x20u));
            if (moduleId != Rejected)
            {
                tx.write32(addressAt(header, 4u), tx.read32(moduleId));
                moduleId = tx.read32(addressAt(info, 0x20u));
                tx.write16(addressAt(header, 8u), tx.read16(addressAt(moduleId, 4u)));
            }
            for (uint32_t offset = 4u; offset <= 0x18u; offset += 4u)
                tx.write32(addressAt(header, offset + 0xCu), tx.read32(addressAt(info, offset)));
            // The original leaves header+0x28..0x2F exactly as it was.
        }

        uint32_t load(Transaction &tx, uint32_t image, uint32_t info)
        {
            const uint32_t kind = tx.read32(info);
            if (kind == 1u) throw Unhandled{};
            if (kind != 3u && kind != 4u) return Rejected;
            const uint32_t base = tx.read32(addressAt(info, 0xCu));
            const uint32_t phOffset = tx.read32(addressAt(image, 0x1Cu));
            const uint32_t ph = addressAt(image, phOffset);
            // Byte ownership alone could join a header from one allocation to
            // an image in another. MODLOAD must already own one complete span.
            tx.reserveModule(base, tx.read32(addressAt(ph, 0x30u)), tx.read32(addressAt(ph, 0x34u)));
            uint32_t sections = 0u;
            if (kind == 4u)
            {
                const uint32_t shOffset = tx.read32(addressAt(image, 0x20u));
                const uint32_t entry = tx.read32(addressAt(info, 4u));
                const uint32_t gp = tx.read32(addressAt(info, 8u));
                tx.write32(addressAt(info, 8u), gp + base);
                const uint32_t moduleId = tx.read32(addressAt(info, 0x20u));
                tx.write32(addressAt(info, 4u), entry + base);
                sections = addressAt(image, shOffset);
                if (moduleId != Rejected) tx.write32(addressAt(info, 0x20u), moduleId + base);
            }
            const uint32_t destination = kind == 3u ? tx.read32(addressAt(ph, 0x28u)) : tx.read32(addressAt(info, 0xCu));
            // Selected MODLOAD passes a conforming FileInfo. Other fixed-image
            // destinations are outside this helper's contract, not guest success.
            if (kind == 3u && destination != base) throw Unhandled{};
            const uint32_t source = addressAt(image, tx.read32(addressAt(ph, 0x24u)));
            tx.copyWords(source, destination, tx.read32(addressAt(ph, 0x30u)));
            // Re-read after the forward copy, as the original does.
            const uint32_t memSize = tx.read32(addressAt(ph, 0x34u));
            const uint32_t fileSize = tx.read32(addressAt(ph, 0x30u));
            if (fileSize < memSize)
            {
                const uint32_t zeroBase = kind == 3u ? tx.read32(addressAt(ph, 0x28u)) : tx.read32(addressAt(info, 0xCu));
                tx.zeroWords(addressAt(zeroBase, fileSize), memSize - fileSize);
            }
            if (kind == 4u)
            {
                for (uint32_t index = 1u; index < tx.read16(addressAt(image, 0x30u)); ++index)
                {
                    // The original ignores e_shentsize and always advances40.
                    const uint32_t section = addressAt(sections, index * 40u);
                    if (tx.read32(addressAt(section, 4u)) != 9u) continue;
                    const uint32_t size = tx.read32(addressAt(section, 0x14u));
                    const uint32_t stride = tx.read32(addressAt(section, 0x24u));
                    if (stride == 0u) throw Unhandled{}; // Original break7.
                    const uint32_t targetIndex = tx.read32(addressAt(section, 0x1Cu));
                    const uint32_t offset = tx.read32(addressAt(section, 0x10u));
                    if (targetIndex > std::numeric_limits<uint32_t>::max() / 40u) throw Unhandled{};
                    const uint32_t target = addressAt(sections, targetIndex * 40u);
                    // Read original arguments even though its relocator ignores them.
                    tx.read32(addressAt(target, 0x14u));
                    tx.read32(addressAt(target, 0xCu));
                    relocate(tx, base, addressAt(image, offset), size / stride);
                }
            }
            copyModuleInfo(tx, info);
            return 0u;
        }
    }

    std::optional<uint32_t> probeLoadcore13Elf(IopMemory &memory, uint32_t imageAddress, uint32_t fileInfoAddress)
    {
        Transaction tx(memory);
        try
        {
            const uint32_t result = probe(tx, imageAddress, fileInfoAddress);
            tx.commit();
            return result;
        }
        catch (const Unhandled &) { return std::nullopt; }
    }

    std::optional<uint32_t> loadLoadcore13Elf(IopMemory &memory, uint32_t imageAddress, uint32_t fileInfoAddress)
    {
        Transaction tx(memory);
        try
        {
            const uint32_t result = load(tx, imageAddress, fileInfoAddress);
            tx.commit();
            return result;
        }
        catch (const Unhandled &) { return std::nullopt; }
    }
}
