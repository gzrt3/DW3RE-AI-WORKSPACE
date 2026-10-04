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

// Function: entry_00227e0c
// Address: 0x227e0c - 0x227e40
void entry_00227e0c_0x227e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227e0c_0x227e0c");
#endif

    switch (ctx->pc) {
        case 0x227e24u: goto label_227e24;
        default: break;
    }

    ctx->pc = 0x227e0cu;

    // 0x227e0c: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x227e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
    // 0x227e10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x227e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e18: 0x24070039  addiu       $a3, $zero, 0x39
    ctx->pc = 0x227e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x227e1c: 0xc070430  jal         func_1C10C0
    ctx->pc = 0x227E1Cu;
    SET_GPR_U32(ctx, 31, 0x227E24u);
    ctx->pc = 0x227E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E1Cu;
    // 0x227e20: 0x250899b0  addiu       $t0, $t0, -0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C10C0u, 0x227E1Cu, 0x227E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E24u;
label_227e24:
    // 0x227e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227e28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227e2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227e30: 0x3e00008  jr          $ra
    ctx->pc = 0x227E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E30u;
        // 0x227e34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227E38u;
    // 0x227e38: 0x0  nop
    ctx->pc = 0x227e38u;
    // NOP
    // 0x227e3c: 0x0  nop
    ctx->pc = 0x227e3cu;
    // NOP
    ctx->pc = 0x227e40u;
}
