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

// Function: entry_0022244c
// Address: 0x22244c - 0x222470
void entry_0022244c_0x22244c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022244c_0x22244c");
#endif

    ctx->pc = 0x22244cu;

    // 0x22244c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22244cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222450: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x222450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x222454: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222454u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x222458: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222458u;
    {
        const bool branch_taken_0x222458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222458u;
        // 0x22245c: 0x240200c2  addiu       $v0, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222458) {
            ctx->pc = 0x222470u;
            return;
        }
    }
    ctx->pc = 0x222460u;
    // 0x222460: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x222460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x222464: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222468: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x222468u;
    {
        const bool branch_taken_0x222468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222468u;
        // 0x22246c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222468) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x222470u;
}
