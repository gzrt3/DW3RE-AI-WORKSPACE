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

// Function: entry_00136418
// Address: 0x136418 - 0x13642c
void entry_00136418_0x136418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136418_0x136418");
#endif

    ctx->pc = 0x136418u;

    // 0x136418: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x136418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x13641c: 0x8c224970  lw          $v0, 0x4970($at)
    ctx->pc = 0x13641cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x334970u));
    // 0x136420: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x136420u;
    {
        const bool branch_taken_0x136420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x136424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136420u;
        // 0x136424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136420) {
            ctx->pc = 0x13642Cu;
            return;
        }
    }
    ctx->pc = 0x136428u;
    // 0x136428: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13642cu;
}
