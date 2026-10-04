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

// Function: entry_00204298
// Address: 0x204298 - 0x2042b0
void entry_00204298_0x204298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204298_0x204298");
#endif

    ctx->pc = 0x204298u;

    // 0x204298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x204298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20429c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20429cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2042a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2042a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2042a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2042A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2042A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042A4u;
        // 0x2042a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2042A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2042ACu;
    // 0x2042ac: 0x0  nop
    ctx->pc = 0x2042acu;
    // NOP
    ctx->pc = 0x2042b0u;
}
