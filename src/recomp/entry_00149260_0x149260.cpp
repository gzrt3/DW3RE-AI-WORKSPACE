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

// Function: entry_00149260
// Address: 0x149260 - 0x149274
void entry_00149260_0x149260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149260_0x149260");
#endif

    ctx->pc = 0x149260u;

    // 0x149260: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x149260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x149264: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x149264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x149268: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x149268u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x14926c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14926Cu;
    {
        const bool branch_taken_0x14926c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x149270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14926Cu;
        // 0x149270: 0x24031770  addiu       $v1, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14926c) {
            ctx->pc = 0x14927Cu;
            return;
        }
    }
    ctx->pc = 0x149274u;
}
