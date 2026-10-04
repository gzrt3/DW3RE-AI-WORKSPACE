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

// Function: entry_00195648
// Address: 0x195648 - 0x195670
void entry_00195648_0x195648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195648_0x195648");
#endif

    ctx->pc = 0x195648u;

    // 0x195648: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x195648u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x19564c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x19564cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x195650: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x195650u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x195654: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x195654u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x195658: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x195658u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x19565c: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x19565cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x195660: 0x3e00008  jr          $ra
    ctx->pc = 0x195660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195660u;
        // 0x195664: 0xa0830008  sb          $v1, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195668u;
    // 0x195668: 0x0  nop
    ctx->pc = 0x195668u;
    // NOP
    // 0x19566c: 0x0  nop
    ctx->pc = 0x19566cu;
    // NOP
    ctx->pc = 0x195670u;
}
