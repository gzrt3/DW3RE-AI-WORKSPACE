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

// Function: entry_001b59d0
// Address: 0x1b59d0 - 0x1b59f0
void entry_001b59d0_0x1b59d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b59d0_0x1b59d0");
#endif

    ctx->pc = 0x1b59d0u;

    // 0x1b59d0: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1b59d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b59d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B59D4u;
    {
        const bool branch_taken_0x1b59d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B59D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59D4u;
        // 0x1b59d8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59d4) {
            ctx->pc = 0x1B59F0u;
            return;
        }
    }
    ctx->pc = 0x1B59DCu;
    // 0x1b59dc: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x1b59dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b59e0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b59e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B59E4u;
    {
        const bool branch_taken_0x1b59e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59E4u;
        // 0x1b59e8: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59e4) {
            ctx->pc = 0x1B5A04u;
            return;
        }
    }
    ctx->pc = 0x1B59ECu;
    // 0x1b59ec: 0x0  nop
    ctx->pc = 0x1b59ecu;
    // NOP
    ctx->pc = 0x1b59f0u;
}
