#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00286f74
// Address: 0x286f74 - 0x286fc8
void entry_00286f74_0x286f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286f74_0x286f74");
#endif

    ctx->pc = 0x286f74u;

    // 0x286f74: 0x8ec26700  lw          $v0, 0x6700($s6)
    ctx->pc = 0x286f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 26368)));
    // 0x286f78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286f78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f7c: 0x26466740  addiu       $a2, $s2, 0x6740
    ctx->pc = 0x286f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 26432));
    // 0x286f80: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x286f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x286f84: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x286f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x286f88: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x286f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x286f8c: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x286f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x286f90: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x286f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x286f94: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x286f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286f98: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x286f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286f9c: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x286f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286fa0: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x286fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286fa4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x286fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x286fa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x286fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x286fac: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x286FACu;
    {
        const bool branch_taken_0x286fac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FACu;
        // 0x286fb0: 0xaec26700  sw          $v0, 0x6700($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 26368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fac) {
            ctx->pc = 0x287018u;
            return;
        }
    }
    ctx->pc = 0x286FB4u;
    // 0x286fb4: 0x8e296700  lw          $t1, 0x6700($s1)
    ctx->pc = 0x286fb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x286fb8: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x286fb8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286fbc: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x286fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x286fc0: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x286fc0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286fc4: 0x0  nop
    ctx->pc = 0x286fc4u;
    // NOP
    ctx->pc = 0x286fc8u;
}
