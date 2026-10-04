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

// Function: entry_001d58ac
// Address: 0x1d58ac - 0x1d58e0
void entry_001d58ac_0x1d58ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d58ac_0x1d58ac");
#endif

    ctx->pc = 0x1d58acu;

    // 0x1d58ac: 0x0  nop
    ctx->pc = 0x1d58acu;
    // NOP
    // 0x1d58b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d58b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d58b4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1d58b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d58b8: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D58B8u;
    {
        const bool branch_taken_0x1d58b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58B8u;
        // 0x1d58bc: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58b8) {
            ctx->pc = 0x1D583Cu;
            return;
        }
    }
    ctx->pc = 0x1D58C0u;
    // 0x1d58c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d58c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d58c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d58c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d58c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d58c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d58cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D58CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58CCu;
        // 0x1d58d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D58CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D58D4u;
    // 0x1d58d4: 0x0  nop
    ctx->pc = 0x1d58d4u;
    // NOP
    // 0x1d58d8: 0x0  nop
    ctx->pc = 0x1d58d8u;
    // NOP
    // 0x1d58dc: 0x0  nop
    ctx->pc = 0x1d58dcu;
    // NOP
    ctx->pc = 0x1d58e0u;
}
