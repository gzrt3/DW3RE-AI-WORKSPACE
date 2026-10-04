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

// Function: entry_001d5c1c
// Address: 0x1d5c1c - 0x1d5c50
void entry_001d5c1c_0x1d5c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5c1c_0x1d5c1c");
#endif

    ctx->pc = 0x1d5c1cu;

    // 0x1d5c1c: 0x0  nop
    ctx->pc = 0x1d5c1cu;
    // NOP
    // 0x1d5c20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d5c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d5c24: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1d5c24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5c28: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D5C28u;
    {
        const bool branch_taken_0x1d5c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C28u;
        // 0x1d5c2c: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c28) {
            ctx->pc = 0x1D5BF8u;
            return;
        }
    }
    ctx->pc = 0x1D5C30u;
    // 0x1d5c30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5c34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5c38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C3Cu;
        // 0x1d5c40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5C44u;
    // 0x1d5c44: 0x0  nop
    ctx->pc = 0x1d5c44u;
    // NOP
    // 0x1d5c48: 0x0  nop
    ctx->pc = 0x1d5c48u;
    // NOP
    // 0x1d5c4c: 0x0  nop
    ctx->pc = 0x1d5c4cu;
    // NOP
    ctx->pc = 0x1d5c50u;
}
