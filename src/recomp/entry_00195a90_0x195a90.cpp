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

// Function: entry_00195a90
// Address: 0x195a90 - 0x195ac0
void entry_00195a90_0x195a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a90_0x195a90");
#endif

    ctx->pc = 0x195a90u;

    // 0x195a90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x195a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x195a94: 0x2a230080  slti        $v1, $s1, 0x80
    ctx->pc = 0x195a94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x195a98: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x195A98u;
    {
        const bool branch_taken_0x195a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A98u;
        // 0x195a9c: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a98) {
            ctx->pc = 0x1959CCu;
            return;
        }
    }
    ctx->pc = 0x195AA0u;
    // 0x195aa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195aa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195aac: 0x3e00008  jr          $ra
    ctx->pc = 0x195AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195AACu;
        // 0x195ab0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195AB4u;
    // 0x195ab4: 0x0  nop
    ctx->pc = 0x195ab4u;
    // NOP
    // 0x195ab8: 0x0  nop
    ctx->pc = 0x195ab8u;
    // NOP
    // 0x195abc: 0x0  nop
    ctx->pc = 0x195abcu;
    // NOP
    ctx->pc = 0x195ac0u;
}
