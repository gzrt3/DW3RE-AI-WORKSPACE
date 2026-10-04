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

// Function: entry_001535b0
// Address: 0x1535b0 - 0x1535d0
void entry_001535b0_0x1535b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001535b0_0x1535b0");
#endif

    ctx->pc = 0x1535b0u;

    // 0x1535b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1535b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1535b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1535b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1535b8: 0x10440013  beq         $v0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1535B8u;
    {
        const bool branch_taken_0x1535b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1535BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535B8u;
        // 0x1535bc: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535b8) {
            ctx->pc = 0x153608u;
            return;
        }
    }
    ctx->pc = 0x1535C0u;
    // 0x1535c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1535C0u;
    {
        const bool branch_taken_0x1535c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1535c0) {
            ctx->pc = 0x1535D0u;
            return;
        }
    }
    ctx->pc = 0x1535C8u;
    // 0x1535c8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1535C8u;
    {
        const bool branch_taken_0x1535c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1535c8) {
            ctx->pc = 0x153704u;
            return;
        }
    }
    ctx->pc = 0x1535D0u;
}
