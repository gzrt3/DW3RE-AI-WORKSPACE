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

// Function: entry_001c1dd4
// Address: 0x1c1dd4 - 0x1c1df0
void entry_001c1dd4_0x1c1dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1dd4_0x1c1dd4");
#endif

    switch (ctx->pc) {
        case 0x1c1ddcu: goto label_1c1ddc;
        case 0x1c1de4u: goto label_1c1de4;
        default: break;
    }

    ctx->pc = 0x1c1dd4u;

    // 0x1c1dd4: 0xc0711ec  jal         func_1C47B0
    ctx->pc = 0x1C1DD4u;
    SET_GPR_U32(ctx, 31, 0x1C1DDCu);
    ctx->pc = 0x1C47B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C47B0u, 0x1C1DD4u, 0x1C1DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DDCu;
label_1c1ddc:
    // 0x1c1ddc: 0xc0731ac  jal         func_1CC6B0
    ctx->pc = 0x1C1DDCu;
    SET_GPR_U32(ctx, 31, 0x1C1DE4u);
    ctx->pc = 0x1CC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC6B0u, 0x1C1DDCu, 0x1C1DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DE4u;
label_1c1de4:
    // 0x1c1de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DE8u;
        // 0x1c1dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1DF0u;
}
