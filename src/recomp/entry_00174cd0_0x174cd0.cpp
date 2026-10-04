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

// Function: entry_00174cd0
// Address: 0x174cd0 - 0x174cf0
void entry_00174cd0_0x174cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174cd0_0x174cd0");
#endif

    ctx->pc = 0x174cd0u;

    // 0x174cd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174cd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174cd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x174CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CDCu;
        // 0x174ce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174CE4u;
    // 0x174ce4: 0x0  nop
    ctx->pc = 0x174ce4u;
    // NOP
    // 0x174ce8: 0x0  nop
    ctx->pc = 0x174ce8u;
    // NOP
    // 0x174cec: 0x0  nop
    ctx->pc = 0x174cecu;
    // NOP
    ctx->pc = 0x174cf0u;
}
