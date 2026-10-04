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

// Function: entry_0016e154
// Address: 0x16e154 - 0x16e170
void entry_0016e154_0x16e154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e154_0x16e154");
#endif

    ctx->pc = 0x16e154u;

    // 0x16e154: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16e154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x16e158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e15c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E15Cu;
    {
        const bool branch_taken_0x16e15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E15Cu;
        // 0x16e160: 0xaf848184  sw          $a0, -0x7E7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934916), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e15c) {
            ctx->pc = 0x16E170u;
            return;
        }
    }
    ctx->pc = 0x16E164u;
    // 0x16e164: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e168: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16E168u;
    {
        const bool branch_taken_0x16e168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e168) {
            ctx->pc = 0x16E184u;
            return;
        }
    }
    ctx->pc = 0x16E170u;
}
