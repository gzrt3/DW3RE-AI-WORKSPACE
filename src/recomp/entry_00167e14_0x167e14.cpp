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

// Function: entry_00167e14
// Address: 0x167e14 - 0x167e50
void entry_00167e14_0x167e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167e14_0x167e14");
#endif

    switch (ctx->pc) {
        case 0x167e30u: goto label_167e30;
        default: break;
    }

    ctx->pc = 0x167e14u;

    // 0x167e14: 0x0  nop
    ctx->pc = 0x167e14u;
    // NOP
    // 0x167e18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x167e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x167e1c: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x167e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x167e20: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x167E20u;
    {
        const bool branch_taken_0x167e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E20u;
        // 0x167e24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e20) {
            ctx->pc = 0x167DA0u;
            return;
        }
    }
    ctx->pc = 0x167E28u;
    // 0x167e28: 0xc059398  jal         func_164E60
    ctx->pc = 0x167E28u;
    SET_GPR_U32(ctx, 31, 0x167E30u);
    ctx->pc = 0x164E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164E60u, 0x167E28u, 0x167E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E30u;
label_167e30:
    // 0x167e30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167e34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167e38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x167E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E3Cu;
        // 0x167e40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167E44u;
    // 0x167e44: 0x0  nop
    ctx->pc = 0x167e44u;
    // NOP
    // 0x167e48: 0x0  nop
    ctx->pc = 0x167e48u;
    // NOP
    // 0x167e4c: 0x0  nop
    ctx->pc = 0x167e4cu;
    // NOP
    ctx->pc = 0x167e50u;
}
