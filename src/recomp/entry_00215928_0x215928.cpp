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

// Function: entry_00215928
// Address: 0x215928 - 0x215948
void entry_00215928_0x215928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215928_0x215928");
#endif

    ctx->pc = 0x215928u;

    // 0x215928: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x215928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x21592c: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x21592cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    // 0x215930: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215930u;
    {
        const bool branch_taken_0x215930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215930u;
        // 0x215934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215930) {
            ctx->pc = 0x215948u;
            return;
        }
    }
    ctx->pc = 0x215938u;
    // 0x215938: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x215938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x21593c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21593Cu;
    {
        const bool branch_taken_0x21593c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21593c) {
            ctx->pc = 0x215950u;
            return;
        }
    }
    ctx->pc = 0x215944u;
    // 0x215944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x215948u;
}
