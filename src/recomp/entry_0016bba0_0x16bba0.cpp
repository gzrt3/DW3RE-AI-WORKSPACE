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

// Function: entry_0016bba0
// Address: 0x16bba0 - 0x16bbc0
void entry_0016bba0_0x16bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bba0_0x16bba0");
#endif

    ctx->pc = 0x16bba0u;

    // 0x16bba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16bba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16bba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bbac: 0x3e00008  jr          $ra
    ctx->pc = 0x16BBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBACu;
        // 0x16bbb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BBB4u;
    // 0x16bbb4: 0x0  nop
    ctx->pc = 0x16bbb4u;
    // NOP
    // 0x16bbb8: 0x0  nop
    ctx->pc = 0x16bbb8u;
    // NOP
    // 0x16bbbc: 0x0  nop
    ctx->pc = 0x16bbbcu;
    // NOP
    ctx->pc = 0x16bbc0u;
}
