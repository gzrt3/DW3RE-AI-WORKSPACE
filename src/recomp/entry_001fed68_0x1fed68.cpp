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

// Function: entry_001fed68
// Address: 0x1fed68 - 0x1fed90
void entry_001fed68_0x1fed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fed68_0x1fed68");
#endif

    ctx->pc = 0x1fed68u;

    // 0x1fed68: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fed68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fed6c: 0x29230005  slti        $v1, $t1, 0x5
    ctx->pc = 0x1fed6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1fed70: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x1fed70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x1fed74: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1FED74u;
    {
        const bool branch_taken_0x1fed74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED74u;
        // 0x1fed78: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed74) {
            ctx->pc = 0x1FECF4u;
            return;
        }
    }
    ctx->pc = 0x1FED7Cu;
    // 0x1fed7c: 0xaf909088  sw          $s0, -0x6F78($gp)
    ctx->pc = 0x1fed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938760), GPR_U32(ctx, 16));
    // 0x1fed80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fed80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fed84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fed84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fed88: 0x3e00008  jr          $ra
    ctx->pc = 0x1FED88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED88u;
        // 0x1fed8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FED88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FED90u;
}
