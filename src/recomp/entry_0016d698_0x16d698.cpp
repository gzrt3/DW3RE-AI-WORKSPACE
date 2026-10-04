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

// Function: entry_0016d698
// Address: 0x16d698 - 0x16d6b0
void entry_0016d698_0x16d698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d698_0x16d698");
#endif

    ctx->pc = 0x16d698u;

    // 0x16d698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d69c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x16D6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6A0u;
        // 0x16d6a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D6A8u;
    // 0x16d6a8: 0x0  nop
    ctx->pc = 0x16d6a8u;
    // NOP
    // 0x16d6ac: 0x0  nop
    ctx->pc = 0x16d6acu;
    // NOP
    ctx->pc = 0x16d6b0u;
}
