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

// Function: entry_001c1d6c
// Address: 0x1c1d6c - 0x1c1da0
void entry_001c1d6c_0x1c1d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1d6c_0x1c1d6c");
#endif

    switch (ctx->pc) {
        case 0x1c1d74u: goto label_1c1d74;
        case 0x1c1d7cu: goto label_1c1d7c;
        case 0x1c1d84u: goto label_1c1d84;
        default: break;
    }

    ctx->pc = 0x1c1d6cu;

    // 0x1c1d6c: 0xc071188  jal         func_1C4620
    ctx->pc = 0x1C1D6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D74u);
    ctx->pc = 0x1C4620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4620u, 0x1C1D6Cu, 0x1C1D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D74u;
label_1c1d74:
    // 0x1c1d74: 0xc073174  jal         func_1CC5D0
    ctx->pc = 0x1C1D74u;
    SET_GPR_U32(ctx, 31, 0x1C1D7Cu);
    ctx->pc = 0x1C1D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D74u;
    // 0x1c1d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5D0u, 0x1C1D74u, 0x1C1D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D7Cu;
label_1c1d7c:
    // 0x1c1d7c: 0xc091148  jal         func_244520
    ctx->pc = 0x1C1D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D84u);
    ctx->pc = 0x1C1D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D7Cu;
    // 0x1c1d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244520u, 0x1C1D7Cu, 0x1C1D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D84u;
label_1c1d84:
    // 0x1c1d84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D8Cu;
        // 0x1c1d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1D94u;
    // 0x1c1d94: 0x0  nop
    ctx->pc = 0x1c1d94u;
    // NOP
    // 0x1c1d98: 0x0  nop
    ctx->pc = 0x1c1d98u;
    // NOP
    // 0x1c1d9c: 0x0  nop
    ctx->pc = 0x1c1d9cu;
    // NOP
    ctx->pc = 0x1c1da0u;
}
