#include "iop_compat_test_support.h"
#include "emulator/core/iop_cpu.h"
#include "emulator/core/iop_memory.h"
#include "emulator/imports/iop_ioman.h"
#include "emulator/services/iop_rpc.h"

#include <limits>

namespace
{
    using namespace iop_test;
    using namespace ps2x::iop::detail;

    class FileHost final : public Host
    {
    public:
        uint64_t openHostFile(std::string_view) override
        {
            handles.push_back(++nextFile);
            return nextFile;
        }

        bool hostFileSize(uint64_t handle, uint64_t &size) const override
        {
            size = file.size();
            return std::find(handles.begin(), handles.end(), handle) != handles.end();
        }

        bool readHostFile(uint64_t handle, uint64_t offset, void *destination,
                          size_t size, size_t &bytesRead) override
        {
            offsets.push_back(offset);
            requested.push_back(size);
            bytesRead = 0u;
            if (std::find(handles.begin(), handles.end(), handle) == handles.end()) return false;
            if (oversizedCount)
            {
                bytesRead = size + 1u;
                return true;
            }
            if (offset <= file.size())
            {
                bytesRead = std::min({size, file.size() - static_cast<size_t>(offset), shortLimit});
                if (bytesRead != 0u)
                    std::memcpy(destination, file.data() + static_cast<size_t>(offset), bytesRead);
            }
            return !failRead;
        }

        void closeHostFile(uint64_t handle) override
        {
            closed.push_back(handle);
            const auto found = std::find(handles.begin(), handles.end(), handle);
            require(found != handles.end(), "host file closed twice or invalid handle");
            handles.erase(found);
        }

        uint64_t nextFile = 0u;
        std::vector<uint64_t> handles, offsets, closed;
        std::vector<size_t> requested;
        size_t shortLimit = std::numeric_limits<size_t>::max();
        bool failRead = false;
        bool oversizedCount = false;
    };

    class Executor final : public IopGuestExecutor
    {
    public:
        uint32_t executeGuestFunction(uint32_t, uint32_t, uint32_t, uint32_t,
                                      uint32_t, uint32_t) override
        {
            throw std::runtime_error("Native IOMAN read unexpectedly executed a guest callback");
        }
    };

    struct Fixture
    {
        static constexpr uint32_t PathAddress = 0x4000u;
        static constexpr uint32_t Buffer = 0x8000u;
        FileHost host;
        IopMemory memory;
        Executor executor;
        IopIoman ioman{memory, host};

        Fixture()
        {
            host.file = {0x00u, 0x31u, 0x7Fu, 0x80u, 0xFFu, 0x55u, 0xAAu};
            constexpr char path[] = "cdrom0:\\MODULES\\FIXTURE.IRX;1";
            require(memory.writeRam(PathAddress, path, sizeof(path)), "path setup failed");
            fill(Buffer, 32u);
        }

        void fill(uint32_t address, size_t size)
        {
            const std::vector<uint8_t> bytes(size, 0xCCu);
            require(memory.writeRam(address, bytes.data(), bytes.size()), "buffer setup failed");
        }

        int32_t call(uint16_t ordinal, uint32_t a0, uint32_t a1 = 0u, uint32_t a2 = 0u)
        {
            IopCpuState cpu{};
            cpu.gpr.fill(0x12345678u);
            cpu.gpr[4] = a0; cpu.gpr[5] = a1; cpu.gpr[6] = a2;
            cpu.pc = 0x9000u; cpu.hi = 0xABCDEF01u; cpu.lo = 0xABCDE102u;
            const IopCpuState before = cpu;
            require(ioman.dispatchImport(ordinal, cpu, executor), "IOMAN import was not handled");
            for (size_t reg = 0u; reg < cpu.gpr.size(); ++reg)
                if (reg != 2u) require(cpu.gpr[reg] == before.gpr[reg], "IOMAN changed an argument/preserved register");
            require(cpu.pc == before.pc && cpu.hi == before.hi && cpu.lo == before.lo,
                    "IOMAN changed CPU execution state");
            require(host.guestWrites == 0u, "IOMAN wrote EE memory instead of IOP RAM");
            return static_cast<int32_t>(cpu.gpr[2]);
        }

        uint32_t open()
        {
            const int32_t fd = call(4u, PathAddress, 1u);
            require(fd >= 0, "fixture file failed to open");
            return static_cast<uint32_t>(fd);
        }

        int32_t position(uint32_t fd) { return call(8u, fd, 0u, 1u); }
    };

    void sequentialReads()
    {
        Fixture f;
        const uint32_t fd = f.open();
        require(fd == 0u, "ordinary descriptor0 was treated as console");
        require(f.call(6u, fd, Fixture::Buffer, 3u) == 3, "first read count wrong");
        require(f.position(fd) == 3, "first read did not advance offset");
        require(f.memory.read8(Fixture::Buffer) == 0u && f.memory.read8(Fixture::Buffer + 2u) == 0x7Fu,
                "first read data mismatch");
        require(f.memory.read8(Fixture::Buffer + 3u) == 0xCCu, "read overwrote bytes past its result");
        require(f.call(6u, fd, Fixture::Buffer + 3u, 8u) == 4, "EOF short read count wrong");
        require(f.position(fd) == 7, "short read advanced by request instead of result");
        for (size_t index = 0u; index < f.host.file.size(); ++index)
            require(f.memory.read8(Fixture::Buffer + static_cast<uint32_t>(index)) == f.host.file[index],
                    "sequential file bytes differ");
        require(f.memory.read8(Fixture::Buffer + 7u) == 0xCCu, "short read padded or overwrote tail");
        require(f.host.offsets == std::vector<uint64_t>{0u, 3u}, "host read used wrong absolute offsets");
    }

    void successfulShortReads()
    {
        Fixture f;
        const uint32_t fd = f.open();
        f.host.shortLimit = 2u;
        require(f.call(6u, fd, Fixture::Buffer, 7u) == 2, "short host read was expanded or rejected");
        require(f.call(6u, fd, Fixture::Buffer + 2u, 7u) == 2, "second short host read failed");
        require(f.position(fd) == 4 && f.host.offsets == std::vector<uint64_t>{0u, 2u},
                "short reads lost descriptor position");
        require(f.memory.read8(Fixture::Buffer + 4u) == 0xCCu, "short read fabricated trailing data");
    }

    void eofAndSeekBeyond()
    {
        Fixture f;
        const uint32_t fd = f.open();
        require(f.call(8u, fd, 0u, 2u) == 7, "SEEK_END failed");
        require(f.call(6u, fd, Fixture::Buffer, 8u) == 0 && f.position(fd) == 7,
                "EOF changed offset or returned error");
        require(f.call(8u, fd, 10u, 0u) == 10, "seek beyond EOF failed");
        require(f.call(6u, fd, Fixture::Buffer, 8u) == 0 && f.position(fd) == 10,
                "beyond EOF read changed offset");
        require(f.memory.read8(Fixture::Buffer) == 0xCCu, "EOF wrote guest data");
    }

    void emptyFileAndZeroLength()
    {
        Fixture f;
        f.host.file.clear();
        const uint32_t fd = f.open();
        require(f.call(6u, fd, Fixture::Buffer, 4u) == 0, "empty file was not EOF");
        const size_t calls = f.host.offsets.size();
        require(f.call(6u, fd, 0xFFFFFFFFu, 0u) == 0, "zero read touched invalid destination");
        require(f.host.offsets.size() == calls && f.position(fd) == 0, "zero read invoked host or advanced");
        require(f.call(6u, 16u, 0u, 0u) == -9, "zero read bypassed descriptor validation");
    }

    void invalidDescriptorsAndConsole()
    {
        Fixture f;
        for (const uint32_t fd : {0u, 15u, 16u, 0xFFFFFFFFu})
            require(f.call(6u, fd, Fixture::Buffer, 1u) == -9, "invalid descriptor did not return EBADF");
        f.ioman.installStandardStreams();
        require(f.call(6u, 0u, Fixture::Buffer, 4u) == 0, "native stdin EOF changed");
        require(f.call(6u, 1u, Fixture::Buffer, 4u) == -9, "write-only stdout permitted reading");
        require(f.open() == 2u, "standard streams did not preserve first regular slot");
        require(f.host.offsets.empty(), "invalid or console reads entered native file adapter");
    }

    void invalidRamBounds()
    {
        Fixture f;
        const uint32_t fd = f.open();
        f.fill(IopMemory::RamSize - 2u, 2u);
        for (const uint32_t address : {0u, 0x2000u, IopMemory::RamSize - 2u,
                                      0x1F801000u, 0x20008000u, 0xC0008000u, 0xFFFFFFFEu})
            require(f.call(6u, fd, address, 4u) == -22, "unsupported or unowned buffer accepted");
        for (const uint32_t size : {0x80000000u, 0xFFFFFFFFu, IopMemory::RamSize + 1u})
            require(f.call(6u, fd, Fixture::Buffer, size) == -22, "invalid size accepted");
        require(f.host.offsets.empty() && f.position(fd) == 0, "invalid range performed I/O or changed position");
        require(f.memory.read8(Fixture::Buffer) == 0xCCu, "invalid read wrote memory");
    }

    void validAliasesAndUnalignedBytes()
    {
        for (const uint32_t alias : {0u, 0x80000000u, 0xA0000000u})
        {
            Fixture f;
            const uint32_t fd = f.open();
            require(f.call(6u, fd, alias | (Fixture::Buffer + 1u), 3u) == 3, "valid direct RAM alias rejected");
            require(f.memory.read8(Fixture::Buffer) == 0xCCu &&
                    f.memory.read8(Fixture::Buffer + 1u) == 0u &&
                    f.memory.read8(Fixture::Buffer + 3u) == 0x7Fu,
                    "unaligned byte read wrote incorrect physical memory");
        }
    }

    void hostErrorIsNotPartialSuccess()
    {
        Fixture f;
        const uint32_t fd = f.open();
        f.host.failRead = true;
        f.host.shortLimit = 2u;
        require(f.call(6u, fd, Fixture::Buffer, 7u) == -5, "host failure fabricated partial success");
        require(f.position(fd) == 0, "failed host read consumed descriptor offset");
        for (uint32_t i = 0u; i < 7u; ++i)
            require(f.memory.read8(Fixture::Buffer + i) == 0xCCu, "failed read leaked staged bytes");
        f.host.failRead = false;
        require(f.call(6u, fd, Fixture::Buffer, 7u) == 2, "recovered host read failed");
        require(f.host.offsets == std::vector<uint64_t>{0u, 0u}, "failed read was retried at a changed offset");
    }

    void finalByteAcrossAliases()
    {
        // Bounded uncertainty raised by the real GitHub Copilot review.
        // Distinguish the valid final byte from a crossing span for every alias.
        for (const uint32_t alias : {0u, 0x80000000u, 0xA0000000u})
        {
            Fixture f;
            f.host.file = {0x5Au};
            const uint32_t last = IopMemory::RamSize - 1u;
            f.fill(last, 1u);
            const uint32_t fd = f.open();
            require(f.call(6u, fd, alias | last, 1u) == 1 && f.position(fd) == 1,
                    "valid final byte failed for a direct RAM alias");
            require(f.memory.read8(last) == 0x5Au, "final byte was not written to physical RAM");
            require(f.call(6u, fd, alias | last, 2u) == -22, "crossing alias read accepted");
            require(f.host.offsets.size() == 1u && f.position(fd) == 1 && f.memory.read8(last) == 0x5Au,
                    "crossing alias read performed I/O or changed data/offset");
        }
    }

    void invalidHostCount()
    {
        Fixture f;
        const uint32_t fd = f.open();
        f.host.oversizedCount = true;
        require(f.call(6u, fd, Fixture::Buffer, 4u) == -5, "oversized host result accepted");
        require(f.position(fd) == 0 && f.memory.read8(Fixture::Buffer) == 0xCCu,
                "invalid host result committed data or offset");
    }

    void independentDescriptorsAndReset()
    {
        Fixture f;
        const uint32_t first = f.open(), second = f.open();
        require(first != second, "two opens reused a live descriptor");
        require(f.call(6u, first, Fixture::Buffer, 3u) == 3, "first descriptor read failed");
        require(f.call(6u, second, Fixture::Buffer + 8u, 2u) == 2, "second descriptor read failed");
        require(f.position(first) == 3 && f.position(second) == 2, "descriptor offsets were shared");
        require(f.host.offsets == std::vector<uint64_t>{0u, 0u}, "independent opens shared host offset");
        require(f.call(5u, first) == 0 && f.call(6u, first, Fixture::Buffer, 1u) == -9,
                "closed descriptor remained readable");
        const uint32_t reopened = f.open();
        require(reopened == first && f.position(reopened) == 0, "reopened slot retained old position");
        f.ioman.reset();
        require(f.host.handles.empty() && f.host.closed.size() == 3u, "reset leaked or double-closed handles");
        require(f.call(6u, second, Fixture::Buffer, 1u) == -9, "reset descriptor remained readable");
    }
}

int main()
{
    const Test tests[] = {
        {"Native file reads preserve bytes, ABI and sequential offset", sequentialReads},
        {"Successful short reads advance only actual bytes", successfulShortReads},
        {"EOF and seek beyond EOF preserve descriptor position", eofAndSeekBeyond},
        {"Empty files and zero-length reads preserve boundaries", emptyFileAndZeroLength},
        {"Invalid and unreadable descriptors return EBADF", invalidDescriptorsAndConsole},
        {"Invalid RAM ranges, aliases and sizes perform no host I/O", invalidRamBounds},
        {"Direct RAM aliases support unaligned byte reads", validAliasesAndUnalignedBytes},
        {"Every direct alias accepts its last byte and rejects a crossing span", finalByteAcrossAliases},
        {"Host errors do not publish partial data or successful counts", hostErrorIsNotPartialSuccess},
        {"Oversized host byte counts fail without state mutation", invalidHostCount},
        {"Descriptors own offsets and release handles on close/reset", independentDescriptorsAndReset},
    };
    return run(tests);
}
