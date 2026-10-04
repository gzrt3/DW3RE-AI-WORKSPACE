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

// Function: entry_001c30a0
// Address: 0x1c30a0 - 0x1c30b4
void entry_001c30a0_0x1c30a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c30a0_0x1c30a0");
#endif

    ctx->pc = 0x1c30a0u;

    // 0x1c30a0: 0x28820082  slti        $v0, $a0, 0x82
    ctx->pc = 0x1c30a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x1c30a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C30A4u;
    {
        const bool branch_taken_0x1c30a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30A4u;
        // 0x1c30a8: 0x28820059  slti        $v0, $a0, 0x59 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)89) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30a4) {
            ctx->pc = 0x1C30B4u;
            return;
        }
    }
    ctx->pc = 0x1C30ACu;
    // 0x1c30ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C30ACu;
    {
        const bool branch_taken_0x1c30ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30ACu;
        // 0x1c30b0: 0x2484ffd7  addiu       $a0, $a0, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30ac) {
            ctx->pc = 0x1C30C0u;
            return;
        }
    }
    ctx->pc = 0x1C30B4u;
}
