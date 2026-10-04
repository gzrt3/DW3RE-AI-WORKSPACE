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

// Function: entry_0022fe5c
// Address: 0x22fe5c - 0x22fe70
void entry_0022fe5c_0x22fe5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fe5c_0x22fe5c");
#endif

    ctx->pc = 0x22fe5cu;

    // 0x22fe5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22fe5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fe60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22fe60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fe64: 0x3e00008  jr          $ra
    ctx->pc = 0x22FE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE64u;
        // 0x22fe68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FE6Cu;
    // 0x22fe6c: 0x0  nop
    ctx->pc = 0x22fe6cu;
    // NOP
    ctx->pc = 0x22fe70u;
}
