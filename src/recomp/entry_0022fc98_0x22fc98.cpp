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

// Function: entry_0022fc98
// Address: 0x22fc98 - 0x22fcc0
void entry_0022fc98_0x22fc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fc98_0x22fc98");
#endif

    switch (ctx->pc) {
        case 0x22fca4u: goto label_22fca4;
        default: break;
    }

    ctx->pc = 0x22fc98u;

    // 0x22fc98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22fc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc9c: 0xc1762c8  jal         func_5D8B20
    ctx->pc = 0x22FC9Cu;
    SET_GPR_U32(ctx, 31, 0x22FCA4u);
    ctx->pc = 0x22FCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC9Cu;
    // 0x22fca0: 0x24840470  addiu       $a0, $a0, 0x470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D8B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D8B20u, 0x22FC9Cu, 0x22FCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCA4u;
label_22fca4:
    // 0x22fca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22fca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22fca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fcac: 0x3e00008  jr          $ra
    ctx->pc = 0x22FCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCACu;
        // 0x22fcb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FCB4u;
    // 0x22fcb4: 0x0  nop
    ctx->pc = 0x22fcb4u;
    // NOP
    // 0x22fcb8: 0x0  nop
    ctx->pc = 0x22fcb8u;
    // NOP
    // 0x22fcbc: 0x0  nop
    ctx->pc = 0x22fcbcu;
    // NOP
    ctx->pc = 0x22fcc0u;
}
