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

// Function: entry_0015207c
// Address: 0x15207c - 0x1520b0
void entry_0015207c_0x15207c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015207c_0x15207c");
#endif

    switch (ctx->pc) {
        case 0x152098u: goto label_152098;
        default: break;
    }

    ctx->pc = 0x15207cu;

    // 0x15207c: 0xa4a6027c  sh          $a2, 0x27C($a1)
    ctx->pc = 0x15207cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 636), (uint16_t)GPR_U32(ctx, 6));
    // 0x152080: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x152080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x152084: 0xa4a6027e  sh          $a2, 0x27E($a1)
    ctx->pc = 0x152084u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 638), (uint16_t)GPR_U32(ctx, 6));
    // 0x152088: 0x8ca20198  lw          $v0, 0x198($a1)
    ctx->pc = 0x152088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
    // 0x15208c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x15208cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x152090: 0xc0751a4  jal         func_1D4690
    ctx->pc = 0x152090u;
    SET_GPR_U32(ctx, 31, 0x152098u);
    ctx->pc = 0x152094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152090u;
    // 0x152094: 0xaca20198  sw          $v0, 0x198($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 408), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4690u, 0x152090u, 0x152098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152098u;
label_152098:
    // 0x152098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15209c: 0x3e00008  jr          $ra
    ctx->pc = 0x15209Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1520A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15209Cu;
        // 0x1520a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15209Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1520A4u;
    // 0x1520a4: 0x0  nop
    ctx->pc = 0x1520a4u;
    // NOP
    // 0x1520a8: 0x0  nop
    ctx->pc = 0x1520a8u;
    // NOP
    // 0x1520ac: 0x0  nop
    ctx->pc = 0x1520acu;
    // NOP
    ctx->pc = 0x1520b0u;
}
