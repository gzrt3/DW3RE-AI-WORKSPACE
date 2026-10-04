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

// Function: entry_00222470
// Address: 0x222470 - 0x222488
void entry_00222470_0x222470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222470_0x222470");
#endif

    ctx->pc = 0x222470u;

    // 0x222470: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x222470u;
    {
        const bool branch_taken_0x222470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222470) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x222478u;
    // 0x222478: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x222478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22247c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x22247cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222480: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x222480u;
    {
        const bool branch_taken_0x222480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222480u;
        // 0x222484: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222480) {
            ctx->pc = 0x222510u;
            return;
        }
    }
    ctx->pc = 0x222488u;
}
