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

// Function: entry_001d1f1c
// Address: 0x1d1f1c - 0x1d1f50
void entry_001d1f1c_0x1d1f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1f1c_0x1d1f1c");
#endif

    switch (ctx->pc) {
        case 0x1d1f30u: goto label_1d1f30;
        default: break;
    }

    ctx->pc = 0x1d1f1cu;

    // 0x1d1f1c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1d1f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1d1f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f24: 0x24840de0  addiu       $a0, $a0, 0xDE0
    ctx->pc = 0x1d1f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3552));
    // 0x1d1f28: 0xc0747d4  jal         func_1D1F50
    ctx->pc = 0x1D1F28u;
    SET_GPR_U32(ctx, 31, 0x1D1F30u);
    ctx->pc = 0x1D1F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F28u;
    // 0x1d1f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F50u, 0x1D1F28u, 0x1D1F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F30u;
label_1d1f30:
    // 0x1d1f30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1f34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F3Cu;
        // 0x1d1f40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1F44u;
    // 0x1d1f44: 0x0  nop
    ctx->pc = 0x1d1f44u;
    // NOP
    // 0x1d1f48: 0x0  nop
    ctx->pc = 0x1d1f48u;
    // NOP
    // 0x1d1f4c: 0x0  nop
    ctx->pc = 0x1d1f4cu;
    // NOP
    ctx->pc = 0x1d1f50u;
}
