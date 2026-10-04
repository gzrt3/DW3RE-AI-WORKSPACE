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

// Function: entry_00225a70
// Address: 0x225a70 - 0x225aa4
void entry_00225a70_0x225a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225a70_0x225a70");
#endif

    ctx->pc = 0x225a70u;

    // 0x225a70: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x225A70u;
    {
        const bool branch_taken_0x225a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a70) {
            ctx->pc = 0x225B04u;
            return;
        }
    }
    ctx->pc = 0x225A78u;
    // 0x225a78: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x225a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x225a7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x225a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225a80: 0x90e30012  lbu         $v1, 0x12($a3)
    ctx->pc = 0x225a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x225a84: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x225A84u;
    {
        const bool branch_taken_0x225a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a84) {
            ctx->pc = 0x225B04u;
            return;
        }
    }
    ctx->pc = 0x225A8Cu;
    // 0x225a8c: 0x90e30015  lbu         $v1, 0x15($a3)
    ctx->pc = 0x225a8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 21)));
    // 0x225a90: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225A90u;
    {
        const bool branch_taken_0x225a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x225a90) {
            ctx->pc = 0x225AA4u;
            return;
        }
    }
    ctx->pc = 0x225A98u;
    // 0x225a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225a9c: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x225A9Cu;
    {
        const bool branch_taken_0x225a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a9c) {
            ctx->pc = 0x225B04u;
            return;
        }
    }
    ctx->pc = 0x225AA4u;
}
