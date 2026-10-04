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

// Function: entry_00219f90
// Address: 0x219f90 - 0x219fd0
void entry_00219f90_0x219f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219f90_0x219f90");
#endif

    switch (ctx->pc) {
        case 0x219f98u: goto label_219f98;
        case 0x219fa0u: goto label_219fa0;
        case 0x219fa8u: goto label_219fa8;
        default: break;
    }

    ctx->pc = 0x219f90u;

    // 0x219f90: 0xc060258  jal         func_180960
    ctx->pc = 0x219F90u;
    SET_GPR_U32(ctx, 31, 0x219F98u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x219F90u, 0x219F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F98u;
label_219f98:
    // 0x219f98: 0xc060258  jal         func_180960
    ctx->pc = 0x219F98u;
    SET_GPR_U32(ctx, 31, 0x219FA0u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x219F98u, 0x219FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219FA0u;
label_219fa0:
    // 0x219fa0: 0xc0867f4  jal         func_219FD0
    ctx->pc = 0x219FA0u;
    SET_GPR_U32(ctx, 31, 0x219FA8u);
    ctx->pc = 0x219FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219FD0u, 0x219FA0u, 0x219FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219FA8u;
label_219fa8:
    // 0x219fa8: 0x8f8492c0  lw          $a0, -0x6D40($gp)
    ctx->pc = 0x219fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939328)));
    // 0x219fac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219fb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x219fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219fb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x219fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x219fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219fc0: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x219fc0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x219fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x219FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FC4u;
        // 0x219fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219FCCu;
    // 0x219fcc: 0x0  nop
    ctx->pc = 0x219fccu;
    // NOP
    ctx->pc = 0x219fd0u;
}
