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

// Function: entry_001b68c8
// Address: 0x1b68c8 - 0x1b68e0
void entry_001b68c8_0x1b68c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b68c8_0x1b68c8");
#endif

    ctx->pc = 0x1b68c8u;

    // 0x1b68c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B68C8u;
    {
        const bool branch_taken_0x1b68c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B68CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68C8u;
        // 0x1b68cc: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b68c8) {
            ctx->pc = 0x1B68E0u;
            return;
        }
    }
    ctx->pc = 0x1B68D0u;
    // 0x1b68d0: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x1b68d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b68d4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b68d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b68d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B68D8u;
    {
        const bool branch_taken_0x1b68d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B68D8u;
        // 0x1b68dc: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b68d8) {
            ctx->pc = 0x1B68F4u;
            return;
        }
    }
    ctx->pc = 0x1B68E0u;
}
