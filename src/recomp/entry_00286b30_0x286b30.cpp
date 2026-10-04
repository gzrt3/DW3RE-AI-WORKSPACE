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

// Function: entry_00286b30
// Address: 0x286b30 - 0x286b78
void entry_00286b30_0x286b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286b30_0x286b30");
#endif

    ctx->pc = 0x286b30u;

label_286b30:
    // 0x286b30: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x286b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x286b34: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x286b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x286b38: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x286b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x286b3c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x286b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x286b40: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x286b40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x286b44: 0xb065001b  sdl         $a1, 0x1B($v1)
    ctx->pc = 0x286b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286b48: 0xb4650014  sdr         $a1, 0x14($v1)
    ctx->pc = 0x286b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286b4c: 0xb0660023  sdl         $a2, 0x23($v1)
    ctx->pc = 0x286b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286b50: 0xb466001c  sdr         $a2, 0x1C($v1)
    ctx->pc = 0x286b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x286b54: 0xac670024  sw          $a3, 0x24($v1)
    ctx->pc = 0x286b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 7));
    // 0x286b58: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x286b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x286b5c: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x286b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x286b60: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x286b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x286b64: 0x0  nop
    ctx->pc = 0x286b64u;
    // NOP
    // 0x286b68: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x286B68u;
    {
        const bool branch_taken_0x286b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286b68) {
            ctx->pc = 0x286B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286b30;
        }
    }
    ctx->pc = 0x286B70u;
    // 0x286b70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x286B70u;
    {
        const bool branch_taken_0x286b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B70u;
        // 0x286b74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b70) {
            ctx->pc = 0x286B8Cu;
            return;
        }
    }
    ctx->pc = 0x286B78u;
}
