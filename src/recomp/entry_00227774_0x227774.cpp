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

// Function: entry_00227774
// Address: 0x227774 - 0x2277a0
void entry_00227774_0x227774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227774_0x227774");
#endif

    switch (ctx->pc) {
        case 0x227780u: goto label_227780;
        default: break;
    }

    ctx->pc = 0x227774u;

    // 0x227774: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x227774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227778: 0xc05d760  jal         func_175D80
    ctx->pc = 0x227778u;
    SET_GPR_U32(ctx, 31, 0x227780u);
    ctx->pc = 0x22777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227778u;
    // 0x22777c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175D80u, 0x227778u, 0x227780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227780u;
label_227780:
    // 0x227780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22778c: 0x3e00008  jr          $ra
    ctx->pc = 0x22778Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22778Cu;
        // 0x227790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22778Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227794u;
    // 0x227794: 0x0  nop
    ctx->pc = 0x227794u;
    // NOP
    // 0x227798: 0x0  nop
    ctx->pc = 0x227798u;
    // NOP
    // 0x22779c: 0x0  nop
    ctx->pc = 0x22779cu;
    // NOP
    ctx->pc = 0x2277a0u;
}
