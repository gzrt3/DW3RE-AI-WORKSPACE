#include "iop_emulator.h"
#include "imports/iop_cdvd.h"
#include "core/iop_cpu.h"
#include "imports/iop_heaplib.h"
#include "imports/iop_imports.h"
#include "imports/iop_intrman.h"
#include "imports/iop_ioman.h"
#include "core/iop_kernel.h"
#include "imports/iop_loadcore.h"
#include "imports/iop_loadcore_state.h"
#include "imports/iop_modload.h"
#include "core/iop_memory.h"
#include "services/iop_module_loader.h"
#include "services/iop_rpc.h"
#include "imports/iop_stdio.h"
#include "imports/iop_sysclib.h"
#include "imports/iop_sysmem.h"
#include "imports/iop_timrman.h"
#include "imports/iop_vblank.h"
#include "iop_emulator_const.h"

#include <algorithm>
#include <cctype>
#include <map>
#include <optional>
#include <span>
#include <sstream>
#include <utility>

namespace ps2x::iop::detail
{
    namespace
    {
        constexpr uint32_t kRamSize = IopMemory::RamSize;
        constexpr uint32_t kKernelHeapBase = IopMemory::HeapBase;
        constexpr uint32_t kKernelHeapLimit = IopMemory::HeapLimit;
        constexpr uint32_t kCallStackBase = kKernelHeapLimit;
        constexpr uint32_t kCallStackLimit = 0x001FFF00u;
        constexpr uint32_t kCallStackSize = 0x2000u;
        constexpr uint32_t kCallStackCapacity = (kCallStackLimit - kCallStackBase) / kCallStackSize;
        constexpr uint64_t kCdvdCompletionCycles = 128u;

        uint32_t physicalAddress(uint32_t address)
        {
            return IopMemory::physicalAddress(address);
        }

        int32_t sign16(uint32_t value)
        {
            return static_cast<int16_t>(value & 0xFFFFu);
        }

        bool iequals(std::string_view lhs, std::string_view rhs)
        {
            if (lhs.size() != rhs.size())
                return false;
            for (size_t i = 0; i < lhs.size(); ++i)
            {
                if (std::tolower(static_cast<unsigned char>(lhs[i])) !=
                    std::tolower(static_cast<unsigned char>(rhs[i])))
                    return false;
            }
            return true;
        }

    }

    class IopEmulator::Impl final : public IopGuestExecutor
    {
    public:
        using CpuState = IopCpuState;

        // Internal unwind only: a missing import or an incomplete synchronous
        // call has no guest return value. Do not publish callback/RPC outputs.
        struct GuestExecutionError {};
        struct MissingImportError : GuestExecutionError {};

        struct Module
        {
            int id = 0;
            std::string path;
            std::string name;
            uint32_t base = 0;
            uint32_t size = 0;
            uint32_t entry = 0;
            uint32_t gp = 0;
            bool resident = false;
            uint32_t descriptor = 0u;
        };

        struct GuestCallback
        {
            uint32_t function = 0;
            uint32_t gp = 0;
        };

        struct ModuleObservation
        {
            uint32_t descriptor = 0u;
            uint32_t returnPc = 0u;
            const CpuState *owner = nullptr;
            bool returned = false;
        };

        struct ScheduledGuestCallback
        {
            uint32_t function = 0u;
            uint32_t gp = 0u;
            uint32_t argument = 0u;
        };

        explicit Impl(IopHost &hostRef)
            : host(hostRef),
              memory(&hostRef),
              sysmem(host, memory),
              kernel(memory),
              cdvd(host, memory, kernel),
              vblank(kernel),
              rpc(host, memory, kernel),
              sysclib(memory),
              stdio(host, memory),
              heaplib(memory),
              intrman(memory),
              timrman(),
              ioman(memory, hostRef),
              cpuCore(memory),
              imports(memory),
              loadcore(memory, imports)
        {
            reset();
        }

        void reset()
        {
            // Release service-owned event/buffers before resetting their owners.
            rpc.reset(true); // Whole-emulator teardown also discards thread continuations.
            memory.reset();
            kernel.reset();
            modules.clear();
            hleThunks.clear();
            moduleObservations.clear();
            linkFailureObservations = 0u;
            loaderData = 0u;
            imports.reset();
            loadcore.reset();
            cdvd.reset();
            intrman.reset();
            timrman.reset();
            ioman.reset();
            pendingDmaInterrupts.clear();
            pendingGuestCallbacks.clear();
            nextModuleId = 1;
            moduleCursor = kModuleLoadBase;
            totalCycles = 0;
            totalInstructions = 0;
            missingImports = 0u;
            eeCycleCarry = 0;
            activeCpu = nullptr;
            lastError.clear();
            servicingDmaInterrupts = false;
            servicingGuestCallbacks = false;
            callDepth = 0u;
            commandInitPending = false;
            commandInitWaiting = false;
            secrMcCommandHandler = {};
            secrMcDevIdHandler = {};
            checkKelfPathCallback = {};
            secrCardBootCallback = {};
            secrDiskBootCallback = {};
            setLoadfileCallbacksCallback = {};
            pendingReboot.reset();
            bootCallbacksAddress = 0u;
            bootCallbacksCapacity = 0u;
            bootCallbacksCount = 0u;
            collectingBootCallbacks = false;
        }

        uint8_t read8(uint32_t address) const
        {
            return memory.read8(address);
        }

        uint16_t read16(uint32_t address) const
        {
            return memory.read16(address);
        }

        uint32_t read32(uint32_t address) const
        {
            return memory.read32(address);
        }

        void write8(uint32_t address, uint8_t value)
        {
            memory.write8(address, value);
            schedulePendingDma();
        }

        void write16(uint32_t address, uint16_t value)
        {
            memory.write16(address, value);
            schedulePendingDma();
        }

        void write32(uint32_t address, uint32_t value)
        {
            memory.write32(address, value);
            schedulePendingDma();
        }

        void schedulePendingDma()
        {
            if (const auto dma = memory.takeDmaStart())
                pendingDmaInterrupts[dma->irq] = totalCycles + dma->delayCycles;
        }

        bool readRam(uint32_t address, void *destination, size_t size) const
        {
            return memory.readRam(address, destination, size);
        }

        bool writeRam(uint32_t address, const void *source, size_t size)
        {
            return memory.writeRam(address, source, size);
        }

        bool zeroRam(uint32_t address, size_t size)
        {
            return memory.zeroRam(address, size);
        }

        bool isHardwareAddress(uint32_t phys) const
        {
            return memory.isHardwareAddress(phys);
        }

        uint32_t allocate(uint32_t size, uint32_t alignment = 16u, std::optional<uint32_t> fixed = std::nullopt)
        {
            return memory.allocate(size, alignment, fixed);
        }

        bool freeAllocation(uint32_t address)
        {
            return memory.freeAllocation(address);
        }

        void log(LogLevel level, std::string_view text)
        {
            host.log(level, text);
        }

        bool checkInterrupt(CpuState &cpu)
        {
            const uint32_t status = cpu.cop0[12];
            if ((status & 1u) == 0u)
                return false;
            if ((status & 0x2u) != 0u)
                return false;
            const bool pending = memory.interruptControl() != 0u && (memory.interruptStatus() & memory.interruptMask()) != 0u;
            if (!pending)
                return false;
            cpu.cop0[13] |= 0x400u;
            cpuCore.raiseException(cpu, 0u, cpu.pc, false);
            return true;
        }

        enum class ImportDisposition
        {
            Handled,
            JumpToGuest,
            Missing,
        };

        ImportDisposition dispatchImport(const IopImportCall &call, CpuState &cpu, bool directHle = false)
        {
            const uint32_t a0 = cpu.gpr[4];
            auto setV0 = [&](uint32_t value)
            {
                cpu.gpr[2] = value;
            };

            // Bound original providers own their data and lifecycle. ReBootStart
            // remains the explicit whole-IOP replacement boundary.
            if (!directHle && !(iequals(call.library, "modload") && call.ordinal == 4u))
            {
                const uint32_t target = imports.resolve(call.library, call.ordinal, call.version);
                if (target != 0u)
                {
                    cpu.pc = target;
                    cpu.branchPending = false;
                    return ImportDisposition::JumpToGuest;
                }
            }

            if (iequals(call.library, "sysmem") && sysmem.dispatchImport(call.ordinal, cpu))
                return ImportDisposition::Handled;

            if (iequals(call.library, "cdvdman") && cdvd.dispatchImport(call.ordinal, cpu))
            {
                if (const auto callback = cdvd.takeCompletionCallback())
                {
                    pendingGuestCallbacks.emplace(
                        totalCycles + kCdvdCompletionCycles,
                        ScheduledGuestCallback{
                            callback->address,
                            callback->gp,
                            callback->reason,
                        });
                }
                return ImportDisposition::Handled;
            }

            if (iequals(call.library, "loadcore") && call.ordinal == 20u)
            {
                // SCPH39001 LOADCORE export20@69C: outside its boot callback
                // collection, call func(&next,0), next.callback=1, store status.
                // Modules currently enter through LoadModule, not LOADCORE boot.
                const uint32_t function=cpu.gpr[4],statusAddress=cpu.gpr[6];
                if(function==0u || !memory.ownsRamRange(function,4u) ||
                   (statusAddress!=0u && !memory.ownsRamRange(statusAddress,4u))) {
                    setV0(UINT32_MAX);return ImportDisposition::Handled;
                }
                if (collectingBootCallbacks)
                {
                    if (bootCallbacksCount >= bootCallbacksCapacity)
                    { setV0(UINT32_MAX); return ImportDisposition::Handled; }
                    const uint32_t entry = bootCallbacksAddress + bootCallbacksCount++ * 8u;
                    memory.write32(entry, function + (cpu.gpr[5] & 3u));
                    memory.write32(entry + 4u, cpu.gpr[28]);
                    memory.write32(entry + 8u, 0u);
                    setV0(1);
                    return ImportDisposition::Handled;
                }
                const uint32_t next=memory.allocate(4u,4u);
                if(next==0u) {setV0(UINT32_MAX);return ImportDisposition::Handled;}
                struct CallbackArgumentOwner {
                    IopMemory& memory;uint32_t address;
                    ~CallbackArgumentOwner(){(void)memory.freeAllocation(address);}
                } owner{memory,next};
                memory.write32(next,1u);
                const uint32_t result=callFunction(function,next,0u,0u,0u,cpu.gpr[28]);
                if(statusAddress!=0u)memory.write32(statusAddress,result);
                setV0(0);return ImportDisposition::Handled;
            }
            if (iequals(call.library, "loadcore") && loadcore.dispatchImport(call.ordinal, cpu, call.version))
            {
                if (call.ordinal == 8u && static_cast<int32_t>(cpu.gpr[2]) < 0 && linkFailureObservations < 16u)
                {
                    ++linkFailureObservations;
                    const uint32_t size = cpu.gpr[5];
                    std::ostringstream message;
                    message << "[IOP:link-failed] result=" << static_cast<int32_t>(cpu.gpr[2])
                            << " pc=0x" << std::hex << cpu.pc << " ra=0x" << cpu.gpr[31]
                            << " base=0x" << a0 << " size=0x" << size;
                    log(LogLevel::Warning, message.str());
                    if ((a0 & 3u) == 0u && size <= IopMemory::RamSize && memory.ownsRamRange(a0, size))
                    {
                        uint32_t observed = 0u;
                        for (uint32_t offset = 0u; offset + 20u <= size && observed < 32u; offset += 4u)
                        {
                            const uint32_t table = a0 + offset;
                            if (read32(table) != 0x41E00000u) continue;
                            ++observed;
                            std::string library;
                            std::string nameHex;
                            constexpr char hex[] = "0123456789abcdef";
                            for (uint32_t n = 0u; n < 8u; ++n)
                            {
                                const auto byte = read8(table + 12u + n);
                                if (byte == 0u) break;
                                library.push_back(static_cast<char>(byte));
                                nameHex.push_back(hex[byte >> 4u]);
                                nameHex.push_back(hex[byte & 15u]);
                            }
                            const auto version = read16(table + 8u);
                            std::ostringstream entry;
                            entry << "[IOP:link-candidate] name_hex=" << nameHex
                                  << " version=0x" << std::hex << version << " table=0x" << table
                                  << " provider=0x" << imports.findTable(library, version);
                            log(LogLevel::Warning, entry.str());
                        }
                    }
                }
                if (call.ordinal == 16u && moduleObservations.size() < 128u)
                    moduleObservations.push_back({a0});
                return ImportDisposition::Handled;
            }

            if ((iequals(call.library, "thbase") || iequals(call.library, "threadman")) &&
                kernel.dispatchThreadImport(call.ordinal, cpu, totalCycles))
                return ImportDisposition::Handled;
            if (iequals(call.library, "thsemap") && kernel.dispatchSemaphoreImport(call.ordinal, cpu))
                return ImportDisposition::Handled;
            if (iequals(call.library, "thevent") && kernel.dispatchEventImport(call.ordinal, cpu))
                return ImportDisposition::Handled;
            if (iequals(call.library, "sifcmd") && rpc.dispatchSifCmdImport(call.ordinal, cpu, this))
                return ImportDisposition::Handled;
            if (iequals(call.library, "intrman") && intrman.dispatchImport(call.ordinal, cpu, *this))
                return ImportDisposition::Handled;
            if (iequals(call.library, "secrman"))
            {
                switch (call.ordinal)
                {
                case 4: // SecrSetMcCommandHandler
                    secrMcCommandHandler = {a0, cpu.gpr[28]};
                    setV0(0);
                    return ImportDisposition::Handled;
                case 5: // SecrSetMcDevIDHandler
                    secrMcDevIdHandler = {a0, cpu.gpr[28]};
                    setV0(0);
                    return ImportDisposition::Handled;
                default:
                    break;
                }
            }
            if (iequals(call.library, "modload") && call.ordinal == 4u)
            {
                // Original MODLOAD ReBootStart copies the command before IOP
                // replacement. Capture ownership here; reset only after the
                // active CPU/thread and callback stack have unwound.
                std::string command;
                bool terminated = a0 == 0u;
                for (uint32_t i = 0u; a0 != 0u && i < 80u; ++i)
                {
                    if (a0 > UINT32_MAX - i || !memory.ownsRamRange(a0 + i, 1u)) break;
                    const char value = static_cast<char>(memory.read8(a0 + i));
                    if (value == '\0') { terminated = true; break; }
                    command.push_back(value);
                }
                if (!terminated || pendingReboot)
                {
                    log(LogLevel::Error,"[IOP] rejected invalid or duplicate ReBootStart request");
                    cpu.stopped = true;
                    return ImportDisposition::Missing;
                }
                pendingReboot = IopRebootRequest{std::move(command), cpu.gpr[5]};
                log(LogLevel::Info,"[IOP] ReBootStart captured; deferred lifecycle required");
                cpu.stopped = true; // A successful reboot cannot return into old RAM.
                return ImportDisposition::Handled;
            }
            if (iequals(call.library, "modload") && call.ordinal == 12u)
            {
                // Selected IOPRP MODLOAD 2A54..2A68 stores a0/a1/a2,
                // including the a2 store in the JR delay slot. Void return.
                secrCardBootCallback = {a0, cpu.gpr[28]};
                secrDiskBootCallback = {cpu.gpr[5], cpu.gpr[28]};
                setLoadfileCallbacksCallback = {cpu.gpr[6], cpu.gpr[28]};
                return ImportDisposition::Handled;
            }
            if (iequals(call.library, "modload") && call.ordinal == 13u)
            {
                checkKelfPathCallback = {a0, cpu.gpr[28]};
                setV0(0);
                return ImportDisposition::Handled;
            }
            if (iequals(call.library, "modload") && call.ordinal == 15u && call.version == 0x0106u)
            {
                if (const auto result = modload16IllegalBootDevice(memory, a0))
                {
                    setV0(*result);
                    return ImportDisposition::Handled;
                }
                return ImportDisposition::Missing;
            }
            if (iequals(call.library, "ioman") && call.ordinal == 31u &&
                ioman.dispatchDevctl(call.version, cpu, cdvd))
                return ImportDisposition::Handled;
            if (iequals(call.library, "ioman") && ioman.dispatchImport(call.ordinal, cpu, *this))
                return ImportDisposition::Handled;
            if (iequals(call.library, "sifman") && rpc.dispatchSifManImport(call.ordinal, cpu))
                return ImportDisposition::Handled;
            if (iequals(call.library, "vblank") && vblank.dispatchImport(call.ordinal, cpu, totalCycles))
                return ImportDisposition::Handled;
            if (iequals(call.library, "timrman") && timrman.dispatchImport(call.ordinal, cpu, totalCycles))
                return ImportDisposition::Handled;
            if (iequals(call.library, "dmacman"))
            {
                setV0(0);
                return ImportDisposition::Handled;
            }
            if (iequals(call.library, "stdio") && stdio.dispatchImport(call.ordinal, cpu))
                return ImportDisposition::Handled;
            if (iequals(call.library, "sysclib") && sysclib.dispatchImport(call.ordinal, cpu))
                return ImportDisposition::Handled;
            if (iequals(call.library, "heaplib") && heaplib.dispatchImport(call.ordinal, cpu))
                return ImportDisposition::Handled;

            const uint32_t target = directHle ? 0u : imports.resolve(call.library, call.ordinal, call.version);
            if (target != 0u)
            {
                cpu.pc = target;
                cpu.branchPending = false;
                return ImportDisposition::JumpToGuest;
            }

            return ImportDisposition::Missing;
        }

        bool step(CpuState &cpu)
        {
            if (cpu.stopped)
                return false;
            for (auto watch = moduleObservations.begin(); watch != moduleObservations.end();)
            {
                const uint32_t descriptor = watch->descriptor;
                const uint32_t flags = read16(descriptor + 10u);
                if (!watch->owner && (flags & 15u) == 2u && cpu.pc == read32(descriptor + 16u))
                {
                    watch->owner = &cpu;
                    watch->returnPc = cpu.gpr[31];
                    std::ostringstream message;
                    message << "[IOP:module-entry] id=" << read32(descriptor + 12u)
                            << " thread=" << kernel.currentThreadId() << " argc=" << cpu.gpr[4]
                            << " descriptor=0x" << std::hex << descriptor << " pc=0x" << cpu.pc
                            << " gp=0x" << cpu.gpr[28] << " argv0_hex=";
                    const uint32_t filename = memory.ownsRamRange(cpu.gpr[5], 4u) ? read32(cpu.gpr[5]) : 0u;
                    constexpr char hex[] = "0123456789abcdef";
                    for (uint32_t n = 0u; filename != 0u && n < 256u && filename <= UINT32_MAX - n &&
                        memory.ownsRamRange(filename + n, 1u); ++n)
                    {
                        const auto value = read8(filename + n);
                        if (value == 0u) break;
                        message << hex[value >> 4u] << hex[value & 15u];
                    }
                    log(LogLevel::Info, message.str());
                }
                if (watch->owner == &cpu && !watch->returned && cpu.pc == watch->returnPc && !cpu.branchPending)
                {
                    watch->returned = true;
                    log(LogLevel::Info, "[IOP:module-return] id=" + std::to_string(read32(descriptor + 12u)) +
                        " thread=" + std::to_string(kernel.currentThreadId()) +
                        " result=" + std::to_string(static_cast<int32_t>(cpu.gpr[2])));
                }
                if (watch->returned && (flags & 15u) == 3u)
                {
                    log(LogLevel::Info, "[IOP:module-resident] id=" + std::to_string(read32(descriptor + 12u)) +
                        " flags=" + std::to_string(flags));
                    watch = moduleObservations.erase(watch);
                }
                else ++watch;
            }
            if (cpu.pc == kThreadReturnSentinel || cpu.pc == kCallReturnSentinel)
            {
                cpu.stopped = true;
                return false;
            }
            if (physicalAddress(cpu.pc) >= kRamSize)
            {
                std::ostringstream out;
                out << "[IOP] execution outside RAM pc=0x" << std::hex << cpu.pc;
                log(LogLevel::Error, out.str());
                cpu.stopped = true;
                return false;
            }
            if (checkInterrupt(cpu))
                return true;

            if (cpu.importEntered && cpu.importPc != cpu.pc)
                throw GuestExecutionError{};
            auto import = imports.decode(cpu.pc);
            const auto thunk = hleThunks.find(physicalAddress(cpu.pc));
            const bool directHle = thunk != hleThunks.end();
            if (directHle)
            {
                if (memory.read32(cpu.pc) != 0x0000000Du ||
                    !imports.isRegisteredTarget(thunk->second.providerAddress, thunk->second.ordinal, physicalAddress(cpu.pc)))
                    throw GuestExecutionError{};
                import = thunk->second;
            }
            if (
                import && (!import->linked || import->targetAddress == 0u))
            {
                const auto before = cpu;
                if (!import->linked && !cpu.importEntered)
                {
                    const uint32_t importPc = cpu.pc;
                    if (cpu.branchPending || (!directHle && (!cpuCore.executeInstruction(cpu) || cpu.exception ||
                        !cpuCore.executeInstruction(cpu) || cpu.exception)))
                    {
                        log(LogLevel::Error, "[IOP] invalid import instruction/delay boundary");
                        throw GuestExecutionError{};
                    }
                    cpu.importReturnPc = directHle ? cpu.gpr[31] : cpu.pc;
                    cpu.importPc = importPc;
                    cpu.importEntered = true;
                    cpu.pc = importPc;
                    totalInstructions += 2u;
                    totalCycles += 2u;
                }
                else
                {
                    ++totalInstructions;
                    ++totalCycles;
                }
                const ImportDisposition disposition = import->linked ? ImportDisposition::Missing : dispatchImport(*import, cpu, directHle);
                if (disposition == ImportDisposition::Missing)
                {
                    cpu = before;
                    std::ostringstream out;
                    out << "[IOP] unhandled import " << import->library << ':' << import->ordinal
                        << " version=0x" << std::hex << import->version << " pc=0x" << cpu.pc;
                    out << " a0=0x" << cpu.gpr[4] << " a1=0x" << cpu.gpr[5]
                        << " a2=0x" << cpu.gpr[6] << " a3=0x" << cpu.gpr[7]
                        << " ra=0x" << cpu.gpr[31] << " sp=0x" << cpu.gpr[29];
                    if (iequals(import->library, "modload") && import->ordinal == 7u &&
                        import->version == 0x0106u)
                    {
                        // Observe the original request without accepting it. Bounded,
                        // escaped bytes cannot inject log lines or read outside RAM.
                        out << " filename_hex=";
                        bool terminated = false;
                        for (uint32_t i = 0; i < 256u; ++i)
                        {
                            const uint32_t address = cpu.gpr[4];
                            if (address > UINT32_MAX - i || !memory.ownsRamRange(address + i, 1u)) break;
                            const uint8_t value = memory.read8(address + i);
                            if (value == 0u) { terminated = true; break; }
                            constexpr char hex[] = "0123456789abcdef";
                            out << hex[value >> 4u] << hex[value & 15u];
                        }
                        out << " filename_terminated=" << (terminated ? 1 : 0);
                    }
                    log(LogLevel::Error, out.str());
                    ++missingImports;
                    cpu.stopped = true;
                    // Preserve the fault PC and registers, including v0.
                    throw MissingImportError{};
                }
                if (disposition == ImportDisposition::JumpToGuest)
                {
                    cpu.importEntered = false;
                    return true;
                }
                // RpcLoop is a nonreturning SDK loop. Keep its import PC on
                // sleep/yield so wakeups service the same original queue.
                if (!(disposition==ImportDisposition::Handled &&
                      iequals(import->library,"sifcmd") &&
                      (import->ordinal==22u || (import->ordinal==21u && cpu.yielded))))
                {
                    cpu.pc = cpu.importReturnPc;
                    cpu.importEntered = false;
                }
                cpu.branchPending = false;
                return !cpu.stopped;
            }

            const bool running = cpuCore.executeInstruction(cpu);
            schedulePendingDma();
            ++totalInstructions;
            ++totalCycles;
            return running;
        }

        uint32_t runCpu(CpuState &cpu, uint32_t instructionBudget)
        {
            struct ActiveCpuGuard
            {
                CpuState *&active;
                CpuState *previous;
                ~ActiveCpuGuard() { active = previous; }
            } guard{activeCpu, activeCpu};
            activeCpu = &cpu;
            const uint64_t start = totalInstructions;
            try
            {
                while (!cpu.stopped && !cpu.yielded && !pendingReboot && totalInstructions - start < instructionBudget)
                {
                    if (!step(cpu))
                        break;
                    if (!servicingDmaInterrupts && !pendingDmaInterrupts.empty())
                        servicePendingDmaInterrupts();
                    if (!servicingGuestCallbacks && !pendingGuestCallbacks.empty())
                        servicePendingGuestCallbacks();
                }
            }
            catch (const GuestExecutionError &)
            {
                cpu.stopped = true; // Also stop suspended callers of a failed callback.
                throw;
            }
            return static_cast<uint32_t>(totalInstructions - start);
        }

        uint32_t callFunction(uint32_t address,
                              uint32_t a0,
                              uint32_t a1,
                              uint32_t a2,
                              uint32_t a3,
                              uint32_t gp,
                              uint32_t budget = kMaxCallInstructions)
        {
            struct CallDepthGuard
            {
                uint32_t &depth;
                ~CallDepthGuard() { --depth; }
            };

            const uint32_t depth = callDepth++;
            const CallDepthGuard depthGuard{callDepth};
            CpuState cpu{};
            cpu.pc = address;
            cpu.gpr[4] = a0;
            cpu.gpr[5] = a1;
            cpu.gpr[6] = a2;
            cpu.gpr[7] = a3;
            cpu.gpr[28] = gp;
            if (depth < kCallStackCapacity)
            {
                const uint32_t stackTop = kCallStackLimit - depth * kCallStackSize;
                cpu.gpr[29] = stackTop - 32u;
            }
            else if (activeCpu && activeCpu->gpr[29] > kCallStackBase + kStackGuardBytes)
            {
                // Extremely deep re-entrancy borrows unused space below the
                // suspended caller's live frame. Stack growth remains away
                // from the caller, so its saved registers stay intact.
                cpu.gpr[29] = (activeCpu->gpr[29] - kStackGuardBytes) & ~15u;
            }
            else
            {
                cpu.gpr[29] = kCallStackBase - 32u;
            }
            cpu.gpr[31] = kCallReturnSentinel;
            runCpu(cpu, budget);
            // This CPU and its stack are local to the synchronous call. A
            // scheduler yield or budget boundary cannot be resumed after this
            // scope ends, and v0 at that point is not a function result. Accept
            // the return only after its delay slot has reached our sentinel.
            if (pendingReboot || cpu.yielded || cpu.branchPending || cpu.pc != kCallReturnSentinel)
            {
                const char *reason = pendingReboot ? "reboot" : cpu.yielded ? "yielded" :
                    cpu.stopped ? "stopped" : "budget-exhausted";
                std::ostringstream out;
                out << "[IOP] incomplete guest call entry=0x" << std::hex << address
                    << " pc=0x" << cpu.pc << " reason=" << reason;
                log(LogLevel::Error, out.str());
                throw GuestExecutionError{};
            }
            return cpu.gpr[2];
        }

        uint32_t executeGuestFunction(uint32_t address,
                                      uint32_t a0,
                                      uint32_t a1,
                                      uint32_t a2,
                                      uint32_t a3,
                                      uint32_t gp) override
        {
            return callFunction(address, a0, a1, a2, a3, gp);
        }

        uint32_t executeGuestFunctionWithBudget(uint32_t address,
                                                uint32_t a0,
                                                uint32_t a1,
                                                uint32_t a2,
                                                uint32_t a3,
                                                uint32_t gp,
                                                uint32_t instructionBudget) override
        {
            return callFunction(address, a0, a1, a2, a3, gp, instructionBudget);
        }

        std::optional<uint32_t> resumeGuestFunction(uint64_t &token, uint32_t address,
            uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t gp, uint32_t budget) override
        {
            if (token == 0u)
            {
                if (!activeCpu || !kernel.ownsCurrentCpu(*activeCpu))
                    return callFunction(address, a0, a1, a2, a3, gp, budget);
                token = kernel.beginGuestCall(*activeCpu, address, a0, a1, a2, a3, gp);
                if (token != 0u) return std::nullopt;
            }
            else
            {
                uint32_t result = 0u;
                if (activeCpu && kernel.takeGuestCallReturn(token, *activeCpu, result))
                {
                    token = 0u;
                    return result;
                }
            }
            log(LogLevel::Error, "[IOP] invalid guest continuation owner, token or stack");
            throw GuestExecutionError{};
        }

        // Not that good to use exception handling for control flow but will do for now
        void servicePendingDmaInterrupts()
        {
            if (servicingDmaInterrupts || pendingDmaInterrupts.empty())
                return;

            servicingDmaInterrupts = true;

            std::vector<int> completed;
            for (auto it = pendingDmaInterrupts.begin(); it != pendingDmaInterrupts.end();)
            {
                if (it->second > totalCycles)
                {
                    ++it;
                    continue;
                }
                completed.push_back(it->first);
                it = pendingDmaInterrupts.erase(it);
            }
            try
            {
                for (const int irq : completed)
                    (void)intrman.dispatchInterrupt(irq, *this);
            }
            catch (...)
            {
                servicingDmaInterrupts = false;
                throw;
            }
            servicingDmaInterrupts = false;
        }

        void servicePendingGuestCallbacks()
        {
            if (servicingGuestCallbacks || pendingGuestCallbacks.empty())
                return;

            std::vector<ScheduledGuestCallback> callbacks;
            for (auto it = pendingGuestCallbacks.begin(); it != pendingGuestCallbacks.end();)
            {
                if (it->first > totalCycles)
                    break;
                callbacks.push_back(it->second);
                it = pendingGuestCallbacks.erase(it);
            }
            if (callbacks.empty())
                return;

            servicingGuestCallbacks = true;
            try
            {
                for (const ScheduledGuestCallback &callback : callbacks)
                {
                    if (callback.function != 0u)
                    {
                        (void)callFunction(callback.function,
                                           callback.argument,
                                           0u,
                                           0u,
                                           0u,
                                           callback.gp,
                                           100000u);
                    }
                }
            }
            catch (...)
            {
                servicingGuestCallbacks = false;
                throw;
            }
            servicingGuestCallbacks = false;
        }

        void runCycles(uint64_t cycles) noexcept
        {
            try
            {
                const uint64_t target = totalCycles + cycles;
                while (totalCycles < target && !pendingReboot)
                {
                    servicePendingDmaInterrupts();
                    servicePendingGuestCallbacks();
                    timrman.serviceDue(totalCycles, *this);
                    IopThread *next = kernel.beginNextReady(totalCycles);
                    if (!next)
                    {
                        uint64_t nextWake = kernel.nextWakeCycle(target);
                        for (const auto &[irq, completionCycle] : pendingDmaInterrupts)
                            nextWake = std::min(nextWake, completionCycle);
                        if (!pendingGuestCallbacks.empty())
                            nextWake = std::min(nextWake, pendingGuestCallbacks.begin()->first);
                        nextWake = timrman.nextEventCycle(nextWake);
                        totalCycles = std::max(totalCycles + 1u, std::min(target, nextWake));
                        continue;
                    }
                    const uint64_t before = totalCycles;
                    try
                    {
                        runCpu(next->executionCpu(), static_cast<uint32_t>(std::min<uint64_t>(kDefaultSlice, target - totalCycles)));
                    }
                    catch (const GuestExecutionError &)
                    {
                        kernel.endTimeslice(*next, kThreadReturnSentinel);
                        throw;
                    }
                    kernel.endTimeslice(*next, kThreadReturnSentinel);
                    if (totalCycles == before)
                        ++totalCycles;
                }
            }
            catch (...)
            {
                // Runtime scheduling must never throw through EeScheduler::accountCycles().
            }
        }

        bool initializeLoaderState(std::span<const uint32_t> bootModes)
        {
            if (loaderData != 0u || !modules.empty() || activeCpu || bootModes.size() > 16u)
                return false;
            size_t offset = 0u;
            while (offset < bootModes.size())
            {
                const size_t words = (bootModes[offset] >> 24u) + 1u;
                if (bootModes[offset] == 0u || words > bootModes.size() - offset) return false;
                offset += words;
            }
            const uint32_t data = allocate(0x64u, 16u);
            if (data == 0u || !zeroRam(data, 0x64u)) return false;
            write32(data + 0x18u, 1u);
            write32(0x3F0u, data + 0x20u);
            write32(0x3F4u, data + 0x20u + static_cast<uint32_t>(bootModes.size()) * 4u);
            if (!bootModes.empty() && !writeRam(data + 0x20u, bootModes.data(), bootModes.size_bytes())) return false;
            if (!loadcore.bindState(data, data + 0x20u, data + 0x60u)) return false;
            loaderData = data;
            return true;
        }

        uint32_t registerPreparedModule(const IopImageLoadResult &loaded)
        {
            const uint32_t descriptor = allocate(0x30u, 16u);
            if (descriptor == 0u || !zeroRam(descriptor, 0x30u)) return 0u;
            if (loaded.moduleInfo != 0u)
            {
                if (!memory.ownsRamRange(loaded.moduleInfo, 6u)) return 0u;
                write32(descriptor + 4u, read32(loaded.moduleInfo));
                write16(descriptor + 8u, read16(loaded.moduleInfo + 4u));
            }
            write16(descriptor + 10u, 1u);
            write32(descriptor + 0x10u, loaded.entry);
            write32(descriptor + 0x14u, loaded.gp);
            write32(descriptor + 0x18u, loaded.base);
            write32(descriptor + 0x1Cu, loaded.textSize);
            write32(descriptor + 0x20u, loaded.dataSize);
            write32(descriptor + 0x24u, loaded.bssSize);
            if (!registerLoadcore13Module(memory, loaderData, descriptor)) return 0u;
            return descriptor;
        }

        ModuleLoadResult loadImage(std::string path, std::span<const uint8_t> image, const void *arguments, uint32_t argumentSize, bool hleImage = false)
        {
            ModuleLoadResult result{true, -1, -1};
            const IopImageLoadResult loaded = IopModuleLoader::load(image, memory, moduleCursor);
            moduleCursor = loaded.nextModuleCursor;
            if (!loaded)
            {
                if (loaded.error == IopImageLoadError::InvalidElf)
                    log(LogLevel::Error, "[IOP] rejected invalid/non-MIPS IRX ELF");
                else if (loaded.error == IopImageLoadError::ArenaExhausted)
                    log(LogLevel::Error, "[IOP] module arena exhausted");
                return result;
            }
            if (!loaded.relocationsComplete)
                log(LogLevel::Warning, "[IOP] one or more IRX relocations were unsupported");

            Module module;
            module.id = nextModuleId++;
            module.path = std::move(path);
            const size_t slash = module.path.find_last_of("/\\:");
            module.name = slash == std::string::npos ? module.path : module.path.substr(slash + 1u);
            module.base = loaded.base;
            module.size = loaded.size;
            module.entry = loaded.entry;
            module.gp = loaded.gp;
            if (loaderData != 0u)
            {
                module.descriptor = registerPreparedModule(loaded);
                if (module.descriptor == 0u) return result;
                module.id = static_cast<int32_t>(read32(module.descriptor + 0xCu));
            }

            if (hleImage)
            {
                if (loaderData == 0u) return result;
                uint32_t tables = 0u;
                for (uint32_t offset = 0u; offset + 24u <= loaded.size; offset += 4u)
                {
                    const uint32_t table = loaded.base + offset;
                    if (read32(table) != 0x41C00000u) continue;
                    IopImportCall call;
                    call.version = read16(table + 8u);
                    call.providerAddress = table;
                    for (uint32_t i = 0u; i < 8u; ++i) call.exactName[i] = read8(table + 12u + i);
                    const auto end = std::find(call.exactName.begin(), call.exactName.end(), uint8_t{0});
                    call.library.assign(call.exactName.begin(), end);
                    {
                        std::ostringstream message;
                        message << "[IOP] HLE binding " << call.library << " table=0x" << std::hex << table
                                << " version=0x" << call.version << " prior=0x" << imports.findTable(call.library, call.version);
                        log(LogLevel::Info, message.str());
                    }
                    uint32_t count = 0u;
                    while (count < 256u && memory.ownsRamRange(table + 20u + count * 4u, 4u) &&
                           read32(table + 20u + count * 4u) != 0u) ++count;
                    if (count == 0u || count == 256u)
                    {
                        log(LogLevel::Error, "[IOP] HLE provider has invalid function count: " + call.library);
                        return result;
                    }
                    const uint32_t thunks = allocate(count * 8u, 16u);
                    if (thunks == 0u) return result;
                    for (uint32_t ordinal = 0u; ordinal < count; ++ordinal)
                    {
                        const uint32_t address = thunks + ordinal * 8u;
                        write32(address, 0x0000000Du);
                        write32(address + 4u, 0u);
                        write32(table + 20u + ordinal * 4u, address);
                        call.ordinal = static_cast<uint16_t>(ordinal);
                        hleThunks.emplace(address, call);
                    }
                    const auto registered = imports.registerLibrary(table);
                    if (registered != 0)
                    {
                        log(LogLevel::Error, "[IOP] HLE provider registration rejected: " + call.library +
                            " result=" + (registered ? std::to_string(*registered) : "unsupported"));
                        return result;
                    }
                    ++tables;
                }
                if (tables == 0u)
                {
                    log(LogLevel::Error, "[IOP] no export table in HLE image: " + module.path);
                    return result;
                }
                write16(module.descriptor + 10u, 3u);
                module.resident = true;
                result = {true, module.id, 0};
                modules[module.id] = std::move(module);
                return result;
            }

            uint32_t args = 0u;
            uint32_t argc = 1u;
            std::vector<uint32_t> argumentOffsets;
            if (argumentSize != 0u)
            {
                if (!arguments || argumentSize > 0x10000u) return result;
                const auto *bytes = static_cast<const uint8_t *>(arguments);
                uint32_t offset = 0u;
                while (offset < argumentSize)
                {
                    argumentOffsets.push_back(offset);
                    while (offset < argumentSize && bytes[offset] != 0u) ++offset;
                    if (offset == argumentSize) return result;
                    ++offset;
                }
                argc += static_cast<uint32_t>(argumentOffsets.size());
            }
            if (module.path.size() > 1024u) return result;
            const uint32_t pointers = (argc + 1u) * 4u;
            const uint32_t filenameBytes = static_cast<uint32_t>(module.path.size()) + 1u;
            args = allocate(pointers + filenameBytes + argumentSize, 16u);
            if (args == 0u) return result;
            write32(args, args + pointers);
            (void)writeRam(args + pointers, module.path.c_str(), filenameBytes);
            const uint32_t payload = args + pointers + filenameBytes;
            if (argumentSize) (void)writeRam(payload, arguments, argumentSize);
            for (uint32_t i = 0u; i < argumentOffsets.size(); ++i)
                write32(args + (i + 1u) * 4u, payload + argumentOffsets[i]);
            write32(args + argc * 4u, 0u);
            const uint64_t missingBefore = missingImports;
            uint32_t startResult = UINT32_MAX;
            try
            {
                if (module.descriptor) write16(module.descriptor + 10u, 2u);
                startResult = callFunction(module.entry, argc, args, 0u, module.descriptor, module.gp);
            }
            catch (const GuestExecutionError &)
            {
                // Keep the loaded image for diagnostics; startup did not complete.
            }
            if (args)
                freeAllocation(args);
            module.resident = startResult == 0u || startResult == 2u;
            if (module.descriptor && module.resident)
                write16(module.descriptor + 10u, startResult == 0u ? 3u : 0x13u);
            result.moduleId = module.id;
            result.startResult = static_cast<int32_t>(startResult);
            if (missingImports != missingBefore)
            {
                result.startResult = -1;
                module.resident = false;
                log(LogLevel::Error,"[IOP] module entry used missing imports; startup is not verified");
            }
            modules[module.id] = std::move(module);

            std::ostringstream out;
            out << "[IOP] loaded IRX id=" << result.moduleId
                << " entry=0x" << std::hex << modules[result.moduleId].entry
                << " base=0x" << modules[result.moduleId].base
                << " start=" << std::dec << result.startResult;
            log(LogLevel::Info, out.str());
            return result;
        }

        ModuleLoadResult loadModule(std::string_view path, const void *arguments, uint32_t argumentSize)
        {
            std::vector<uint8_t> image;
            if (!IopModuleLoader::readWholeHostFile(host, path, image))
            {
                log(LogLevel::Warning, std::string("[IOP] failed to open IRX '") + std::string(path) + "'");
                return {true, -1, -1};
            }
            return loadImage(std::string(path), image, arguments, argumentSize);
        }

        ModuleLoadResult loadModuleBuffer(uint32_t guestAddress, const void *arguments, uint32_t argumentSize)
        {
            std::vector<uint8_t> image;
            if (!IopModuleLoader::readElfFromGuest(host, guestAddress, image))
                return {true, -1, -1};
            std::ostringstream tag;
            tag << "buffer@0x" << std::hex << guestAddress;
            return loadImage(tag.str(), image, arguments, argumentSize);
        }

        bool stopModule(int32_t moduleId, int32_t *result)
        {
            auto it = modules.find(moduleId);
            if (it == modules.end())
                return false;
            if (loaderData != 0u && it->second.resident) return false;
            // A removable IRX normally exposes a stop entry through module metadata. We do not guess it; terminate owned execution and release the image cleanly.
            // Cancellation/unload of suspended guest frames is not implemented.
            // Reject before mutating any live module, queue or thread ownership.
            if (kernel.hasGuestCalls() || !rpc.removeServersInRange(it->second.base, it->second.size))
                return false;
            if (loaderData != 0u)
            {
                if (imports.unlinkLibraries(it->second.base, it->second.size) != 0 ||
                    !releaseLoadcore13Module(memory, loaderData, it->second.descriptor, 0u)) return false;
                (void)freeAllocation(it->second.descriptor);
            }
            kernel.terminateThreadsInRange(it->second.base, it->second.size);
            imports.eraseRange(it->second.base, it->second.size);
            modules.erase(it);
            kernel.cleanupDeadThreads();
            if (result)
                *result = 0;
            return true;
        }

        IopHost &host;
        IopMemory memory;
        IopSysmem sysmem;
        IopKernel kernel;
        IopCdvd cdvd;
        IopVblank vblank;
        IopRpcBridge rpc;
        IopSysclib sysclib;
        IopStdio stdio;
        IopHeaplib heaplib;
        IopIntrman intrman;
        IopTimrman timrman;
        IopIoman ioman;
        IopCpuCore cpuCore;
        IopImportRegistry imports;
        IopLoadcore loadcore;
        std::map<int, Module> modules;
        std::map<uint32_t, IopImportCall> hleThunks;
        std::vector<ModuleObservation> moduleObservations;
        uint32_t linkFailureObservations = 0u;
        uint32_t loaderData = 0u;
        std::map<int, uint64_t> pendingDmaInterrupts;
        std::multimap<uint64_t, ScheduledGuestCallback> pendingGuestCallbacks;
        uint32_t nextModuleId = 1;
        uint32_t moduleCursor = kModuleLoadBase;
        uint64_t totalCycles = 0;
        uint64_t totalInstructions = 0;
        uint64_t missingImports = 0u;
        uint64_t eeCycleCarry = 0;
        CpuState *activeCpu = nullptr;
        std::string lastError;
        bool servicingDmaInterrupts = false;
        bool servicingGuestCallbacks = false;
        uint32_t callDepth = 0u;
        bool commandInitPending = false;
        bool commandInitWaiting = false;
        GuestCallback secrMcCommandHandler;
        GuestCallback secrMcDevIdHandler;
        GuestCallback checkKelfPathCallback;
        GuestCallback secrCardBootCallback;
        GuestCallback secrDiskBootCallback;
        GuestCallback setLoadfileCallbacksCallback;
        std::optional<IopRebootRequest> pendingReboot;
        uint32_t bootCallbacksAddress = 0u;
        uint32_t bootCallbacksCapacity = 0u;
        uint32_t bootCallbacksCount = 0u;
        bool collectingBootCallbacks = false;
    };

    IopEmulator::IopEmulator(IopHost &host)
        : m_impl(std::make_unique<Impl>(host))
    {
    }

    IopEmulator::~IopEmulator() = default;

    void IopEmulator::reset()
    {
        m_impl->reset();
    }

    std::optional<IopRebootRequest> IopEmulator::takeRebootRequest()
    {
        if (m_impl->activeCpu || m_impl->callDepth != 0u ||
            m_impl->servicingDmaInterrupts || m_impl->servicingGuestCallbacks)
            return std::nullopt;
        return std::exchange(m_impl->pendingReboot, std::nullopt);
    }

    ModuleLoadResult IopEmulator::loadOwnedModule(std::string_view path, const std::vector<uint8_t> &image)
    {
        return m_impl->loadImage(std::string(path), image, nullptr, 0u);
    }

    bool IopEmulator::initializeLoaderState(std::span<const uint32_t> bootModes)
    {
        return m_impl->initializeLoaderState(bootModes);
    }

    ModuleLoadResult IopEmulator::installHleLibraryImage(std::string_view path, const std::vector<uint8_t> &image)
    {
        return m_impl->loadImage(std::string(path), image, nullptr, 0u, true);
    }

    void IopEmulator::installConsoleService() { m_impl->ioman.installStandardStreams(); }

    bool IopEmulator::beginBootCallbacks(uint32_t capacity)
    {
        if (capacity == 0u || capacity > 128u || m_impl->bootCallbacksAddress != 0u ||
            m_impl->activeCpu || m_impl->callDepth != 0u || m_impl->pendingReboot)
            return false;
        const uint32_t address = m_impl->memory.allocate((capacity + 1u) * 8u, 16u);
        if (address == 0u) return false;
        m_impl->memory.write32(address, 0u);
        m_impl->bootCallbacksAddress = address;
        m_impl->bootCallbacksCapacity = capacity;
        m_impl->bootCallbacksCount = 0u;
        m_impl->collectingBootCallbacks = true;
        return true;
    }

    bool IopEmulator::finishBootCallbacks()
    {
        if (m_impl->bootCallbacksAddress == 0u || m_impl->activeCpu ||
            m_impl->callDepth != 0u || m_impl->pendingReboot)
            return false;
        const uint32_t address = m_impl->bootCallbacksAddress;
        // Original LOADCORE@4F0..5C4: priorities0..3, GP from each entry;
        // a0 is collection start, except priority3 receives next entry.
        try
        {
            for (uint32_t priority = 0u; priority < 4u; ++priority)
            {
                if (priority == 3u) m_impl->collectingBootCallbacks = false;
                for (uint32_t index = 0u; index < m_impl->bootCallbacksCount; ++index)
                {
                    const uint32_t entry = address + index * 8u;
                    const uint32_t encoded = m_impl->memory.read32(entry);
                    if (encoded == 0u) break;
                    if ((encoded & 3u) != priority) continue;
                    const uint64_t missingBefore = m_impl->missingImports;
                    (void)m_impl->callFunction(encoded & ~3u,
                        priority == 3u ? entry + 8u : address, 1u, 0u, 0u,
                        m_impl->memory.read32(entry + 4u));
                    if (m_impl->pendingReboot || m_impl->missingImports != missingBefore) return false;
                }
                if (priority == 2u)
                {
                    for (uint32_t count = m_impl->bootCallbacksCount; count != 0u; --count)
                    {
                        const uint32_t entry = address + (count - 1u) * 8u;
                        if ((m_impl->memory.read32(entry) & 3u) == 3u) break;
                        m_impl->memory.write32(entry, 0u);
                    }
                }
            }
        }
        catch (...)
        {
            m_impl->log(LogLevel::Error,"[IOP] boot callback execution failed");
            return false;
        }
        m_impl->collectingBootCallbacks = false;
        m_impl->bootCallbacksAddress = 0u;
        m_impl->bootCallbacksCapacity = 0u;
        m_impl->bootCallbacksCount = 0u;
        return m_impl->memory.freeAllocation(address);
    }

    bool IopEmulator::installCommandService()
    {
        const bool firstInstall = m_impl->rpc.commandReceiverAddress() == 0u;
        const bool installed = m_impl->rpc.installCommandService();
        if (installed && firstInstall)
            m_impl->commandInitPending = true;
        return installed;
    }

    ModuleLoadResult IopEmulator::loadModule(std::string_view path, const void *arguments, uint32_t argumentSize)
    {
        return m_impl->loadModule(path, arguments, argumentSize);
    }

    ModuleLoadResult IopEmulator::loadModuleBuffer(uint32_t guestAddress, const void *arguments, uint32_t argumentSize)
    {
        return m_impl->loadModuleBuffer(guestAddress, arguments, argumentSize);
    }

    bool IopEmulator::stopModule(int32_t moduleId, int32_t *result)
    {
        return m_impl->stopModule(moduleId, result);
    }

    bool IopEmulator::rpcInitializationComplete() const noexcept
    {
        return m_impl->rpc.rpcInitializationComplete();
    }

    void IopEmulator::runEeCycles(uint64_t eeCycles) noexcept
    {
        if (m_impl->pendingReboot) return;
        // The no-BIOS host owns the ROM startup continuation. Start only at
        // an IOP scheduling point, after the service owns a posted receiver.
        // InitCmd's unsatisfied out-of-thread wait is retained as a pending
        // HLE continuation; only the actual INIT_CMD event can complete it.
        if (eeCycles != 0u && m_impl->commandInitPending)
        {
            IopCpuState startup{};
            if (m_impl->rpc.dispatchSifCmdImport(4u, startup))
            {
                m_impl->commandInitPending = false;
                m_impl->commandInitWaiting = static_cast<int32_t>(startup.gpr[2]) == -418;
            }
        }
        if (m_impl->commandInitWaiting)
        {
            IopCpuState wait{};
            wait.gpr[4] = static_cast<uint32_t>(m_impl->rpc.commandEventFlag());
            wait.gpr[5] = 0x100u;
            if (m_impl->kernel.dispatchEventImport(11u, wait) && wait.gpr[2] == 0u)
                m_impl->commandInitWaiting = false;
        }
        // The standalone ROM SIFCMD startup also owns InitRpc. Its readiness
        // packet comes from owned RPC tables and the completed command event;
        // the EE must still acknowledge INIT_CMD opt1 before it completes.
        if(eeCycles!=0u && !m_impl->commandInitPending && !m_impl->commandInitWaiting &&
           m_impl->rpc.commandReceiverAddress()!=0u && !m_impl->rpc.rpcInitializationComplete())
            (void)m_impl->rpc.advanceRpcInitialization();
        const uint64_t total = m_impl->eeCycleCarry + eeCycles;
        const uint64_t iopCycles = total / 8u;
        m_impl->eeCycleCarry = total % 8u;
        if (iopCycles)
            m_impl->runCycles(iopCycles);
    }

    RpcResult IopEmulator::handleRpc(const RpcRequest &request)
    {
        try
        {
            return m_impl->rpc.handleRpc(request, *m_impl);
        }
        catch (const Impl::GuestExecutionError &)
        {
            RpcResult failed{};
            failed.handled = true;
            failed.callbackPolicy = CallbackPolicy::Suppress;
            failed.serverDispatchPolicy = ServerDispatchPolicy::Suppress;
            return failed;
        }
    }

    bool IopEmulator::hasRpcServer(uint32_t sid) const noexcept
    {
        return m_impl->rpc.hasServer(sid);
    }

    void IopEmulator::onSifTransfer(const SifTransfer &transfer)
    {
        try
        {
            m_impl->rpc.onSifTransfer(transfer, *m_impl);
        }
        catch (const Impl::GuestExecutionError &)
        {
            // The original fault is logged; do not finish the failed callback.
        }
    }

    uint32_t IopEmulator::allocateMemory(uint32_t size, uint32_t alignment)
    {
        return m_impl->memory.allocate(size, alignment);
    }

    bool IopEmulator::freeMemory(uint32_t address)
    {
        return m_impl->memory.freeAllocation(address);
    }

    bool IopEmulator::readMemory(uint32_t address, void *destination, size_t size) const
    {
        return isMemoryRange(address, size) &&
               m_impl->memory.readRam(address, destination, size);
    }

    bool IopEmulator::writeMemory(uint32_t address, const void *source, size_t size)
    {
        return isMemoryRange(address, size) &&
               m_impl->memory.writeRam(address, source, size);
    }

    bool IopEmulator::zeroMemory(uint32_t address, size_t size)
    {
        return isMemoryRange(address, size) &&
               m_impl->memory.zeroRam(address, size);
    }

    bool IopEmulator::isMemoryRange(uint32_t address, size_t size) const
    {
        const bool physicalSegment = address < IopMemory::RamSize;
        const bool cachedSegment = address >= 0x80000000u && address < 0x80200000u;
        const bool uncachedSegment = address >= 0xA0000000u && address < 0xA0200000u;
        if (!physicalSegment && !cachedSegment && !uncachedSegment)
            return false;
        const uint32_t physical = IopMemory::physicalAddress(address);
        return physical <= IopMemory::RamSize && size <= IopMemory::RamSize - physical;
    }

    uint64_t IopEmulator::cycles() const noexcept
    {
        return m_impl->totalCycles;
    }

    uint64_t IopEmulator::instructions() const noexcept
    {
        return m_impl->totalInstructions;
    }

    uint32_t IopEmulator::loadedModuleCount() const noexcept
    {
        if (m_impl->loaderData != 0u) return m_impl->read32(m_impl->loaderData + 0x14u);
        return static_cast<uint32_t>(m_impl->modules.size());
    }

    uint32_t IopEmulator::threadCount() const noexcept
    {
        return static_cast<uint32_t>(m_impl->kernel.threadCount());
    }

    uint32_t IopEmulator::rpcServerCount() const noexcept
    {
        return static_cast<uint32_t>(m_impl->rpc.serverCount());
    }

}
