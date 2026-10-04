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

// Function: entry_00170df0
// Address: 0x170df0 - 0x170e08
void entry_00170df0_0x170df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170df0_0x170df0");
#endif

    ctx->pc = 0x170df0u;

    // 0x170df0: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x170df0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x170df4: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x170DF4u;
    {
        const bool branch_taken_0x170df4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DF4u;
        // 0x170df8: 0xc95021  addu        $t2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170df4) {
            ctx->pc = 0x170E60u;
            return;
        }
    }
    ctx->pc = 0x170DFCu;
    // 0x170dfc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x170dfcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e00: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x170E00u;
    {
        const bool branch_taken_0x170e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E00u;
        // 0x170e04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e00) {
            ctx->pc = 0x170E50u;
            return;
        }
    }
    ctx->pc = 0x170E08u;
}
