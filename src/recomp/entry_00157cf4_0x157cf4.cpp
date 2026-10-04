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

// Function: entry_00157cf4
// Address: 0x157cf4 - 0x157d20
void entry_00157cf4_0x157cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157cf4_0x157cf4");
#endif

    switch (ctx->pc) {
        case 0x157d00u: goto label_157d00;
        case 0x157d08u: goto label_157d08;
        case 0x157d10u: goto label_157d10;
        default: break;
    }

    ctx->pc = 0x157cf4u;

    // 0x157cf4: 0x0  nop
    ctx->pc = 0x157cf4u;
    // NOP
    // 0x157cf8: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x157CF8u;
    SET_GPR_U32(ctx, 31, 0x157D00u);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x157CF8u, 0x157D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D00u;
label_157d00:
    // 0x157d00: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x157D00u;
    SET_GPR_U32(ctx, 31, 0x157D08u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x157D00u, 0x157D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D08u;
label_157d08:
    // 0x157d08: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x157D08u;
    SET_GPR_U32(ctx, 31, 0x157D10u);
    ctx->pc = 0x157D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D08u;
    // 0x157d0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x157D08u, 0x157D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D10u;
label_157d10:
    // 0x157d10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x157d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157d18: 0x3e00008  jr          $ra
    ctx->pc = 0x157D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D18u;
        // 0x157d1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157D20u;
}
