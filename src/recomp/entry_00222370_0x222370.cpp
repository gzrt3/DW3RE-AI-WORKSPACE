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

// Function: entry_00222370
// Address: 0x222370 - 0x222390
void entry_00222370_0x222370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222370_0x222370");
#endif

    ctx->pc = 0x222370u;

    // 0x222370: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x222374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x222378: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222378u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x22237c: 0x14620064  bne         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x22237Cu;
    {
        const bool branch_taken_0x22237c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22237c) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x222384u;
    // 0x222384: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222388: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x222388u;
    {
        const bool branch_taken_0x222388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222388u;
        // 0x22238c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222388) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x222390u;
}
