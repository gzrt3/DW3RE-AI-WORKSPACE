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

// Function: entry_00154bb8
// Address: 0x154bb8 - 0x154bd0
void entry_00154bb8_0x154bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154bb8_0x154bb8");
#endif

    switch (ctx->pc) {
        case 0x154bc4u: goto label_154bc4;
        default: break;
    }

    ctx->pc = 0x154bb8u;

    // 0x154bb8: 0x8f828630  lw          $v0, -0x79D0($gp)
    ctx->pc = 0x154bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x154bbc: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154BBCu;
    SET_GPR_U32(ctx, 31, 0x154BC4u);
    ctx->pc = 0x154BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BBCu;
    // 0x154bc0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154BBCu, 0x154BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BC4u;
label_154bc4:
    // 0x154bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x154BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BC8u;
        // 0x154bcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154BD0u;
}
