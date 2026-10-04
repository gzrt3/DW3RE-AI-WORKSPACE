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

// Function: entry_001e0e60
// Address: 0x1e0e60 - 0x1e0ea0
void entry_001e0e60_0x1e0e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0e60_0x1e0e60");
#endif

    switch (ctx->pc) {
        case 0x1e0e68u: goto label_1e0e68;
        case 0x1e0e70u: goto label_1e0e70;
        case 0x1e0e78u: goto label_1e0e78;
        default: break;
    }

    ctx->pc = 0x1e0e60u;

    // 0x1e0e60: 0xc060258  jal         func_180960
    ctx->pc = 0x1E0E60u;
    SET_GPR_U32(ctx, 31, 0x1E0E68u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E0E60u, 0x1E0E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0E68u;
label_1e0e68:
    // 0x1e0e68: 0xc060258  jal         func_180960
    ctx->pc = 0x1E0E68u;
    SET_GPR_U32(ctx, 31, 0x1E0E70u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E0E68u, 0x1E0E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0E70u;
label_1e0e70:
    // 0x1e0e70: 0xc0783a8  jal         func_1E0EA0
    ctx->pc = 0x1E0E70u;
    SET_GPR_U32(ctx, 31, 0x1E0E78u);
    ctx->pc = 0x1E0EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0EA0u, 0x1E0E70u, 0x1E0E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0E78u;
label_1e0e78:
    // 0x1e0e78: 0x8f848db0  lw          $a0, -0x7250($gp)
    ctx->pc = 0x1e0e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1e0e7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0e84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0e88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0e8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0e90: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x1e0e90u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1e0e94: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E94u;
        // 0x1e0e98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0E9Cu;
    // 0x1e0e9c: 0x0  nop
    ctx->pc = 0x1e0e9cu;
    // NOP
    ctx->pc = 0x1e0ea0u;
}
