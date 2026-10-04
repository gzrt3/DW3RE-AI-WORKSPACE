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

// Function: entry_0021ef74
// Address: 0x21ef74 - 0x21efa0
void entry_0021ef74_0x21ef74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ef74_0x21ef74");
#endif

    ctx->pc = 0x21ef74u;

    // 0x21ef74: 0x0  nop
    ctx->pc = 0x21ef74u;
    // NOP
    // 0x21ef78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21ef78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ef7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21ef7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ef80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21ef80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ef84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ef84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ef88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ef88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ef8c: 0x3e00008  jr          $ra
    ctx->pc = 0x21EF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF8Cu;
        // 0x21ef90: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EF94u;
    // 0x21ef94: 0x0  nop
    ctx->pc = 0x21ef94u;
    // NOP
    // 0x21ef98: 0x0  nop
    ctx->pc = 0x21ef98u;
    // NOP
    // 0x21ef9c: 0x0  nop
    ctx->pc = 0x21ef9cu;
    // NOP
    ctx->pc = 0x21efa0u;
}
