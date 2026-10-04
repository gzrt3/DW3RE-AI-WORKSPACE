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

// Function: entry_001cc70c
// Address: 0x1cc70c - 0x1cc740
void entry_001cc70c_0x1cc70c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc70c_0x1cc70c");
#endif

    switch (ctx->pc) {
        case 0x1cc720u: goto label_1cc720;
        default: break;
    }

    ctx->pc = 0x1cc70cu;

    // 0x1cc70c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1cc70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x1cc710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc714: 0x248451c0  addiu       $a0, $a0, 0x51C0
    ctx->pc = 0x1cc714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
    // 0x1cc718: 0xc0731d0  jal         func_1CC740
    ctx->pc = 0x1CC718u;
    SET_GPR_U32(ctx, 31, 0x1CC720u);
    ctx->pc = 0x1CC71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC718u;
    // 0x1cc71c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC740u, 0x1CC718u, 0x1CC720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC720u;
label_1cc720:
    // 0x1cc720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cc720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc72c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC72Cu;
        // 0x1cc730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC734u;
    // 0x1cc734: 0x0  nop
    ctx->pc = 0x1cc734u;
    // NOP
    // 0x1cc738: 0x0  nop
    ctx->pc = 0x1cc738u;
    // NOP
    // 0x1cc73c: 0x0  nop
    ctx->pc = 0x1cc73cu;
    // NOP
    ctx->pc = 0x1cc740u;
}
