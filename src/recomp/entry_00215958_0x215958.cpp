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

// Function: entry_00215958
// Address: 0x215958 - 0x21597c
void entry_00215958_0x215958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215958_0x215958");
#endif

    ctx->pc = 0x215958u;

    // 0x215958: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x215958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x21595c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x21595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x215960: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x215960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x215964: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215964u;
    {
        const bool branch_taken_0x215964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215964u;
        // 0x215968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215964) {
            ctx->pc = 0x21597Cu;
            return;
        }
    }
    ctx->pc = 0x21596Cu;
    // 0x21596c: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x21596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x215970: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215970u;
    {
        const bool branch_taken_0x215970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215970) {
            ctx->pc = 0x215984u;
            return;
        }
    }
    ctx->pc = 0x215978u;
    // 0x215978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21597cu;
}
