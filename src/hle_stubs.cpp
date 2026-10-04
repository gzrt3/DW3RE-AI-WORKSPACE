#include <unordered_map>
#include "ps2_runtime.h"
#include "runtime/ee_scheduler.h"
#include "ps2x/iop/iop_subsystem.h"
#include "../tools/PS2Recomp/ps2xRuntime/src/lib/ps2_iop_host.h"
#include "fate/dispatcher.hpp"
#include <iostream>
#include <cstdio>
#include <cstdint>
#include <emmintrin.h>


extern "C" {
    void hle_sceVu0ApplyMatrix(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceVu0InnerProduct(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceVu0MulMatrix(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceVu0ScaleVector(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceVu0TransposeMatrix(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    
    void hle_sceVifInit(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceVifFlush(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    
    void hle_sceGsSyncV(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceGsSyncPath(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceGsIsFinished(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 1); }
    
    void hle_sceIpuInit(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceIpuReset(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceIpuDecodeIPicture(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceIpuDecodeMPEG2(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceIpuSync(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    
    void hle_sceMcInit(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceMcOpen(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceMcClose(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceMcRead(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceMcWrite(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceMcGetInfo(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceMcGetDir(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceMcSync(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceMcFormat(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    
    void hle_sceOpen(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, -1); }
    void hle_sceClose(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceRead(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceWrite(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
    void hle_sceLSeek(uint8_t*, R5900Context* ctx, PS2Runtime*) { setReturnS32(ctx, 0); }
}



#include "ps2_runtime_macros.h"

void PS2Runtime::executeVU0Microprogram(uint8_t* rdram, R5900Context* ctx, uint32_t address) {}
void PS2Runtime::vu0StartMicroProgram(uint8_t* rdram, R5900Context* ctx, uint32_t address) {}

static std::unordered_map<uint32_t, uint32_t> g_custom_syscalls;
void PS2Runtime::handleSyscall(uint8_t* rdram, R5900Context* ctx) {}
void PS2Runtime::handleSyscall(uint8_t* rdram, R5900Context* ctx, uint32_t id) {
    uint32_t syscall_num = GPR_U32(ctx, 3); // $v1 holds the syscall number
    
    switch (syscall_num) {
        case 127: // GetMemorySize (MachineType)
            std::cout << "[SYSCALL] 127 (GetMemorySize) -> Returning 32MB\n";
            SET_GPR_U64(ctx, 2, 0x02000000); // Return 32 MB in $v0
            break;
            
        case 130: // Disable Ints?
            std::cout << "[SYSCALL] 130 (Disable Interrupts) -> Ignored\n";
            break;
            
        case 4: // ExitThread
            std::cout << "[SYSCALL] 4 (ExitThread) -> Ignored for now\n";
        case 60: // InitThread (0x3c)
            // Returns new SP in $v0, typically $a1.
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
            std::cout << "[SYSCALL] 60 (InitThread) -> SP=" << std::hex << GPR_U64(ctx, 5) << "\n";
            break;
            
        case 61: // EndOfHeap / SetHeapEnd? (0x3d)
            std::cout << "[SYSCALL] 61 (0x3d) -> Ignored\n";
            break;

        case 64: // CreateThread (0x40) or CreateSema?
            // Usually returns a positive ID. Let's return 1.
            SET_GPR_U64(ctx, 2, 1);
            std::cout << "[SYSCALL] 64 (Create*) -> returning 1\n";
            break;

        case 116: { // SetSyscall (0x74) -- registers a guest handler for a custom syscall number
            uint32_t sys_num = GPR_U32(ctx, 4);
            uint32_t handler = GPR_U32(ctx, 5);
            std::cout << "[SETSYSCALL] index=" << std::dec << sys_num << "\n";
            std::cout << "[SETSYSCALL] handler=0x" << std::hex << handler << "\n";
            g_custom_syscalls[sys_num] = handler;
            SET_GPR_U64(ctx, 2, 0); 
            break;
        }

        case 131: { // 0x83 = FindAddress / SIF buffer locator
            uint32_t ra = GPR_U32(ctx, 31);
            if (ra == 0x1AD634u || ra == 0x1AD674u) {
                // Updating $s3. We want $s1 ($s3 - 0x20C) to be 0x20000.
                SET_GPR_U64(ctx, 2, 0x0002020Cu);
            } else if (ra == 0x1AD648u || ra == 0x1AD690u) {
                // Updating $s2. We want $s0 ($s2 - 0x168) to be 0x20000.
                SET_GPR_U64(ctx, 2, 0x00020168u);
            } else {
                SET_GPR_U64(ctx, 2, 0);
            }
            break;
        }

        case 83: { // 0x53 = iWakeupThread / custom syscall registered via SetSyscall
            // This is separate from case 131 (0x83). Num:83 decimal = 0x53 hex.
            // The game registered a handler for this. Call it if we have one.
            if (g_custom_syscalls.find(83) != g_custom_syscalls.end()) {
                uint32_t handler_addr = g_custom_syscalls[83];
                std::cout << "[CUSTOM_SYSCALL] index=" << std::dec << 83 << "\n";
                std::cout << "[CUSTOM_SYSCALL] resolved=0x" << std::hex << handler_addr << "\n";
                auto handler_func = fate::dispatch::get_function(handler_addr);
                if (handler_func) {
                    std::cout << "[CUSTOM_SYSCALL] dispatch=0x" << std::hex << handler_addr << "\n";
                    uint32_t old_pc = ctx->pc;
                    ctx->pc = handler_addr;
                    handler_func(rdram, ctx, this);
                    ctx->pc = old_pc;
                    std::cout << "[CUSTOM_SYSCALL] return=0x" << std::hex << GPR_U32(ctx, 2) << "\n";
                } else {
                    std::cerr << "[SYSCALL] 83 custom handler 0x" << std::hex << handler_addr << " not in dispatcher, returning 0\n";
                    SET_GPR_U64(ctx, 2, 0);
                }
            } else {
                SET_GPR_U64(ctx, 2, 0);
                std::cout << "[SYSCALL] 83 (0x53) -> no handler registered, returning 0\n";
            }
            break;
        }

        default:
            // Check for dynamically registered custom syscall handlers
            if (g_custom_syscalls.find(syscall_num) != g_custom_syscalls.end()) {
                uint32_t handler_addr = g_custom_syscalls[syscall_num];
                std::cout << "[CUSTOM_SYSCALL] index=" << std::dec << syscall_num << "\n";
                std::cout << "[CUSTOM_SYSCALL] resolved=0x" << std::hex << handler_addr << "\n";
                auto handler_func = fate::dispatch::get_function(handler_addr);
                if (handler_func) {
                    std::cout << "[CUSTOM_SYSCALL] dispatch=0x" << std::hex << handler_addr << "\n";
                    uint32_t old_pc = ctx->pc;
                    ctx->pc = handler_addr;
                    handler_func(rdram, ctx, this);
                    ctx->pc = old_pc;
                    std::cout << "[CUSTOM_SYSCALL] return=0x" << std::hex << GPR_U32(ctx, 2) << "\n";
                } else {
                    std::cerr << "[SYSCALL] Custom handler 0x" << std::hex << handler_addr << " not in dispatcher, returning 0\n";
                    SET_GPR_U64(ctx, 2, 0);
                }
            } else {
                static std::unordered_map<uint32_t, int> s_unhandled_counts;
                if (s_unhandled_counts[syscall_num]++ < 3) {
                    std::cout << "[SYSCALL] Unhandled #" << std::dec << syscall_num
                              << " (0x" << std::hex << syscall_num << ") at PC=0x" << ctx->pc << "\n";
                }
                SET_GPR_U64(ctx, 2, 0);
            }
            break;
    }
}
void PS2Runtime::handleBreak(uint8_t* rdram, R5900Context* ctx) {}
void PS2Runtime::handleTrap(uint8_t* rdram, R5900Context* ctx) {}
void PS2Runtime::handleTLBR(uint8_t* rdram, R5900Context* ctx) {}
void PS2Runtime::handleTLBWI(uint8_t* rdram, R5900Context* ctx) {}
void PS2Runtime::handleTLBWR(uint8_t* rdram, R5900Context* ctx) {}
void PS2Runtime::handleTLBP(uint8_t* rdram, R5900Context* ctx) {}
void PS2Runtime::clearLLBit(R5900Context* ctx) {}
void PS2Runtime::HandleIntegerOverflow(R5900Context* ctx) {}
void PS2Runtime::SignalException(R5900Context* ctx, PS2Exception exception) {}

bool PS2Runtime::dispatchGuestBranch(uint8_t* rdram, R5900Context* ctx, uint32_t targetPc, uint32_t sourcePc, uint32_t fallthroughPc, PS2Runtime::GuestBranchKind kind, const char* name) {
    // Look up the function in our recompiled dispatcher table
    auto func = fate::dispatch::get_function(targetPc);
    if (func) {
        func(rdram, ctx, this);
        return true;
    }
    
    // Function not in dispatcher â€” set PC to target and let caller unwind gracefully
    // This happens for dynamically-dispatched calls to addresses not yet recompiled
    static uint32_t s_last_missing = 0;
    if (targetPc != s_last_missing) {
        std::cerr << "[DISPATCH] Missing function at 0x" << std::hex << targetPc
                  << " (called from 0x" << sourcePc << " via " << (name ? name : "?") << ")\n" << std::dec;
        s_last_missing = targetPc;
    }
    ctx->pc = fallthroughPc;
    return true; // Return true so caller continues at fallthroughPc
}

bool PS2Runtime::eeCheckpointDue(uint32_t cycles) noexcept { return false; }
void PS2Runtime::eeWaitVSyncTicks(uint32_t ticks, uint32_t resumePc) {}
void PS2Runtime::kickGifDmaChainFromMMIO(uint8_t* rdram, R5900Context* ctx, uint32_t dPcr, uint32_t dStat, uint32_t tadr, uint32_t chcr) {}


static int mmio_read_trace_count = 0;
static int mmio_write_trace_count = 0;

// Hardware state
static uint32_t intc_stat = 0;
static uint32_t intc_mask = 0;
static uint32_t ipu_cmd = 0;
static uint32_t ipu_ctrl = 0;

bool isInterruptPending() {
    return (intc_stat & intc_mask) != 0;
}

static inline bool isMMIO(uint32_t addr) {
    uint32_t phys = addr & 0x1FFFFFFF;
    return (phys >= 0x10000000 && phys < 0x13000000); // IO and GS regs
}

void PS2Runtime::Store128(uint8_t* rdram, R5900Context* ctx, uint32_t vaddr, __m128i value) {
    if (isMMIO(vaddr)) { return; }
    _mm_storeu_si128((__m128i*)&rdram[vaddr & 0x01FFFFFF], value);
}
void PS2Runtime::Store64(uint8_t* rdram, R5900Context* ctx, uint32_t vaddr, uint64_t value) {
    if (isMMIO(vaddr)) { return; }
    *(uint64_t*)&rdram[vaddr & 0x01FFFFFF] = value;
}
void PS2Runtime::Store32(uint8_t* rdram, R5900Context* ctx, uint32_t vaddr, uint32_t value) {
    if (isMMIO(vaddr)) {
        uint32_t phys = vaddr & 0x1FFFFFFF;
        if (phys == 0x1000F000) { // INTC_STAT
            intc_stat &= ~value; // Write 1 to clear
            std::cout << "[INTC-WRITE] STAT value=0x" << std::hex << value << " new_stat=0x" << intc_stat << std::dec << "\n";
            std::cout << "[IRQ] pending=" << isInterruptPending() << "\n";
        }
        else if (phys == 0x1000F010) { // INTC_MASK
            intc_mask ^= value; // Write 1 toggles bit
            std::cout << "[INTC-WRITE] MASK value=0x" << std::hex << value << " new_mask=0x" << intc_mask << std::dec << "\n";
            std::cout << "[IRQ] pending=" << isInterruptPending() << "\n";
        }
        else if (phys == 0x10002000) { // IPU_CMD
            ipu_cmd = value;
            if (mmio_write_trace_count++ < 40) std::cout << "[IPU-WRITE] CMD value=0x" << std::hex << value << std::dec << "\n";
        }
        else if (phys == 0x10002010) { // IPU_CTRL
            // IPU CTRL write. Bit 30 is reset.
            ipu_ctrl = value & ~(1u << 31);
            if (value & (1u << 30)) {
                // Emulate instantaneous reset
                ipu_cmd = 0;
                ipu_ctrl &= ~(1u << 30); // clear busy/reset bit immediately
            }
            if (mmio_write_trace_count++ < 40) std::cout << "[IPU-WRITE] CTRL value=0x" << std::hex << value << std::dec << "\n";
        }
        else {
            if (mmio_write_trace_count++ < 40) std::cout << "[MMIO-UNIMPLEMENTED] WRITE 32-bit address=0x" << std::hex << phys << std::dec << "\n";
        }
        return;
    }
    *(uint32_t*)&rdram[vaddr & 0x01FFFFFF] = value;
}
void PS2Runtime::Store16(uint8_t* rdram, R5900Context* ctx, uint32_t vaddr, uint16_t value) {
    if (isMMIO(vaddr)) { return; }
    *(uint16_t*)&rdram[vaddr & 0x01FFFFFF] = value;
}
void PS2Runtime::Store8(uint8_t* rdram, R5900Context* ctx, uint32_t vaddr, uint8_t value) {
    if (isMMIO(vaddr)) { return; }
    rdram[vaddr & 0x01FFFFFF] = value;
}

uint64_t PS2Runtime::Load64(uint8_t* rdram, R5900Context* ctx, uint32_t vaddr) {
    if (isMMIO(vaddr)) { return 0; }
    return *(uint64_t*)&rdram[vaddr & 0x01FFFFFF];
}
__m128i PS2Runtime::Load128(uint8_t* rdram, R5900Context* ctx, uint32_t vaddr) {
    if (isMMIO(vaddr)) { return _mm_setzero_si128(); }
    return _mm_loadu_si128((const __m128i*)&rdram[vaddr & 0x01FFFFFF]);
}
uint32_t PS2Runtime::Load32(uint8_t* rdram, R5900Context* ctx, uint32_t vaddr) {
    if (isMMIO(vaddr)) {
        uint32_t phys = vaddr & 0x1FFFFFFF;
        if (phys == 0x1000F000) {
            std::cout << "[INTC-READ] STAT\n";
            return intc_stat;
        }
        else if (phys == 0x1000F010) {
            std::cout << "[INTC-READ] MASK\n";
            return intc_mask;
        }
        else if (phys == 0x10002000) {
            if (mmio_read_trace_count++ < 40) std::cout << "[IPU-READ] CMD\n";
            return ipu_cmd;
        }
        else if (phys == 0x10002010) {
            if (mmio_read_trace_count++ < 40) std::cout << "[IPU-READ] CTRL returning 0x" << std::hex << ipu_ctrl << std::dec << "\n";
            return ipu_ctrl;
        }
        else {
            if (mmio_read_trace_count++ < 40) std::cout << "[MMIO-UNIMPLEMENTED] READ 32-bit address=0x" << std::hex << phys << std::dec << "\n";
            return 0;
        }
    }
    return *(uint32_t*)&rdram[vaddr & 0x01FFFFFF];
}
uint16_t PS2Runtime::Load16(uint8_t* rdram, R5900Context* ctx, uint32_t vaddr) {
    if (isMMIO(vaddr)) { return 0; }
    return *(uint16_t*)&rdram[vaddr & 0x01FFFFFF];
}
uint8_t PS2Runtime::Load8(uint8_t* rdram, R5900Context* ctx, uint32_t vaddr) {
    if (isMMIO(vaddr)) { return 0; }
    return rdram[vaddr & 0x01FFFFFF];
}
