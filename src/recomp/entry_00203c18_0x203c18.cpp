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

// Function: entry_00203c18
// Address: 0x203c18 - 0x203c30
void entry_00203c18_0x203c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203c18_0x203c18");
#endif

    ctx->pc = 0x203c18u;

    // 0x203c18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203c1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203c1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203c24: 0x3e00008  jr          $ra
    ctx->pc = 0x203C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C24u;
        // 0x203c28: 0x27bd0630  addiu       $sp, $sp, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203C2Cu;
    // 0x203c2c: 0x0  nop
    ctx->pc = 0x203c2cu;
    // NOP
    ctx->pc = 0x203c30u;
}
