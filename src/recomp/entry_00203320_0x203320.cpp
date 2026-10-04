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

// Function: entry_00203320
// Address: 0x203320 - 0x203340
void entry_00203320_0x203320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203320_0x203320");
#endif

    ctx->pc = 0x203320u;

    // 0x203320: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x203320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x203324: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20332c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20332cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203330: 0x3e00008  jr          $ra
    ctx->pc = 0x203330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203330u;
        // 0x203334: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203338u;
    // 0x203338: 0x0  nop
    ctx->pc = 0x203338u;
    // NOP
    // 0x20333c: 0x0  nop
    ctx->pc = 0x20333cu;
    // NOP
    ctx->pc = 0x203340u;
}
