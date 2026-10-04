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

// Function: entry_0023cb2c
// Address: 0x23cb2c - 0x23cb68
void entry_0023cb2c_0x23cb2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cb2c_0x23cb2c");
#endif

    switch (ctx->pc) {
        case 0x23cb50u: goto label_23cb50;
        default: break;
    }

    ctx->pc = 0x23cb2cu;

label_23cb2c:
    // 0x23cb2c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x23cb2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23cb30: 0x0  nop
    ctx->pc = 0x23cb30u;
    // NOP
    // 0x23cb34: 0x0  nop
    ctx->pc = 0x23cb34u;
    // NOP
    // 0x23cb38: 0x0  nop
    ctx->pc = 0x23cb38u;
    // NOP
    // 0x23cb3c: 0x0  nop
    ctx->pc = 0x23cb3cu;
    // NOP
    // 0x23cb40: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23CB40u;
    {
        const bool branch_taken_0x23cb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cb40) {
            ctx->pc = 0x23CB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CB40u;
            // 0x23cb44: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CB2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cb2c;
        }
    }
    ctx->pc = 0x23CB48u;
    // 0x23cb48: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x23CB48u;
    SET_GPR_U32(ctx, 31, 0x23CB50u);
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x23CB48u, 0x23CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB50u;
label_23cb50:
    // 0x23cb50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23cb50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb54: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x23cb54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cb58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23cb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x23CB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB5Cu;
        // 0x23cb60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CB64u;
    // 0x23cb64: 0x0  nop
    ctx->pc = 0x23cb64u;
    // NOP
    ctx->pc = 0x23cb68u;
}
