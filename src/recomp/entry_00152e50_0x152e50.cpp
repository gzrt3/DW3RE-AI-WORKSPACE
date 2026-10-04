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

// Function: entry_00152e50
// Address: 0x152e50 - 0x152e70
void entry_00152e50_0x152e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152e50_0x152e50");
#endif

    switch (ctx->pc) {
        case 0x152e5cu: goto label_152e5c;
        default: break;
    }

    ctx->pc = 0x152e50u;

    // 0x152e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e54: 0xc050fe8  jal         func_143FA0
    ctx->pc = 0x152E54u;
    SET_GPR_U32(ctx, 31, 0x152E5Cu);
    ctx->pc = 0x152E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E54u;
    // 0x152e58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143FA0u, 0x152E54u, 0x152E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E5Cu;
label_152e5c:
    // 0x152e5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x152e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152e68: 0x3e00008  jr          $ra
    ctx->pc = 0x152E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E68u;
        // 0x152e6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152E70u;
}
