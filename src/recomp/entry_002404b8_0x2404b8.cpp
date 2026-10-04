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

// Function: entry_002404b8
// Address: 0x2404b8 - 0x2404e0
void entry_002404b8_0x2404b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002404b8_0x2404b8");
#endif

    ctx->pc = 0x2404b8u;

    // 0x2404b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2404b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2404bc: 0x29040003  slti        $a0, $t0, 0x3
    ctx->pc = 0x2404bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2404c0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2404c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2404c4: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2404C4u;
    {
        const bool branch_taken_0x2404c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2404C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404C4u;
        // 0x2404c8: 0x25ad0730  addiu       $t5, $t5, 0x730 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404c4) {
            ctx->pc = 0x2403F8u;
            return;
        }
    }
    ctx->pc = 0x2404CCu;
    // 0x2404cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2404ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2404d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2404d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2404d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2404D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2404D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404D4u;
        // 0x2404d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2404D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2404DCu;
    // 0x2404dc: 0x0  nop
    ctx->pc = 0x2404dcu;
    // NOP
    ctx->pc = 0x2404e0u;
}
