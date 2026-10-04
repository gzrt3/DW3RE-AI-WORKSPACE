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

// Function: entry_00136258
// Address: 0x136258 - 0x136270
void entry_00136258_0x136258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136258_0x136258");
#endif

    ctx->pc = 0x136258u;

    // 0x136258: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x136258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x13625c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x13625cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x136260: 0x8c224970  lw          $v0, 0x4970($at)
    ctx->pc = 0x136260u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x334970u));
    // 0x136264: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x136264u;
    {
        const bool branch_taken_0x136264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x136268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136264u;
        // 0x136268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136264) {
            ctx->pc = 0x136270u;
            return;
        }
    }
    ctx->pc = 0x13626Cu;
    // 0x13626c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13626cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x136270u;
}
